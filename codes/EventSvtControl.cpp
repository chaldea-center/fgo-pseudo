void EventSvtControl___cctor(const MethodInfo *method)
{
  if ( (byte_4D26B98 & 1) == 0 )
  {
    sub_1C94098(&EventSvtControl_TypeInfo);
    byte_4D26B98 = 1;
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
  __int64 v14; // x1
  UnityEngine_GameObject_o *transform; // x0
  float x; // s10
  float y; // s8
  float z; // s9
  Il2CppObject *ComponentInChildren_object; // x21
  struct System_Action_o *v20; // x8
  UnityEngine_GameObject_o *v21; // x20
  EventSvtControl_c *v22; // x0
  float v23; // s10
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  EventSvtControl_o *v27; // x0
  const MethodInfo *v28; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D26B96 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EventSvtControl_ReleasePerformance__);
    sub_1C94098(&EventSvtControl_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_3959/*"CallPerformanceEndAction"*/);
    byte_4D26B96 = 1;
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
  v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0);
  v11 = (struct System_Action_o *)System_Delegate__Combine((System_Delegate_o *)endAction, (System_Delegate_o *)v10, 0);
  if ( v11 )
  {
    v12 = System_Action_TypeInfo;
    if ( v11->klass != System_Action_TypeInfo || (this->fields.performanceEndAction = v11, v11->klass != v12) )
    {
      v27 = (EventSvtControl_o *)sub_1C9468C(v11);
      EventSvtControl__CallPerformanceEndAction(v27, v28);
      return;
    }
    p_performanceEndAction = &this->fields.performanceEndAction;
  }
  else
  {
    p_performanceEndAction = &this->fields.performanceEndAction;
    this->fields.performanceEndAction = 0;
  }
  sub_1C9403C(p_performanceEndAction, v11);
  transform = this->fields.objectRef;
  if ( !transform
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0),
        (transform = this->fields.objectRef) == 0) )
  {
LABEL_28:
    sub_1C942F0(transform, v14);
  }
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 transform,
                                 (const MethodInfo_31F49F4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
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
      v21 = this->fields.objectRef;
      v22 = EventSvtControl_TypeInfo;
      v23 = x - (float)SLODWORD(ComponentInChildren_object[10].monitor);
      if ( !EventSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo);
        v22 = EventSvtControl_TypeInfo;
      }
      v30.fields.x = v23;
      v30.fields.y = y;
      v30.fields.z = z;
      transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v21, v22->static_fields->BASE_MOVE_TIME, v30, 0);
      if ( transform )
      {
        v24 = transform;
        LODWORD(transform[1].monitor) = 3;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v24[3].monitor = gameObject;
        sub_1C9403C(&v24[3].monitor, gameObject);
        v26 = StringLiteral_3959/*"CallPerformanceEndAction"*/;
        v24[3].fields.m_CachedPtr = StringLiteral_3959/*"CallPerformanceEndAction"*/;
        sub_1C9403C(&v24[3].fields, v26);
        return;
      }
    }
    goto LABEL_28;
  }
  v20 = *p_performanceEndAction;
  if ( *p_performanceEndAction )
  {
    invoke_impl = (void (__fastcall *)(intptr_t, intptr_t))v20->fields.invoke_impl;
    method_code = v20->fields.method_code;
    v9 = v20->fields.method;
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
  if ( (byte_4D26B86 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_1C94098(&Method_EventSvtControl_EndPlayProc__);
    byte_4D26B86 = 1;
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
        sub_1C942F8(this);
      v5 = randomVoiceList->m_Items[v4];
      if ( !v5 )
LABEL_10:
        sub_1C942F0(this, method);
      additionalPerformances = v5->fields.additionalPerformances;
      v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
  if ( (byte_4D26B87 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24108/*"svtVoicePlay"*/);
    this = (EventSvtControl_o *)sub_1C94098(&StringLiteral_5458/*"END_PLAY"*/);
    byte_4D26B87 = 1;
  }
  playCnt = v2->fields.playCnt;
  if ( (int)playCnt < v2->fields.maxPlayCnt )
  {
    randomVoiceList = v2->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= LODWORD(randomVoiceList->max_length) )
        sub_1C942F8(this);
      v5 = randomVoiceList->m_Items[playCnt];
      if ( v5 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v2,
          (System_String_o *)StringLiteral_24108/*"svtVoicePlay"*/,
          v5->fields.delay,
          0);
        return;
      }
    }
LABEL_16:
    sub_1C942F0(this, method);
  }
  p_player = &v2->fields.player;
  if ( v2->fields.player )
  {
    *p_player = 0;
    sub_1C9403C(p_player, 0);
  }
  p_callbakEndPlay = &v2->fields.callbakEndPlay;
  callbakEndPlay = v2->fields.callbakEndPlay;
  v2->fields.playCnt = 0;
  *(_WORD *)&v2->fields.isUnSkippable = 0;
  v2->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    *p_callbakEndPlay = 0;
    sub_1C9403C(p_callbakEndPlay, 0);
    ActionExtensions__Call(callbakEndPlay, 0);
  }
  else
  {
    p_callbackStopVoice = &v2->fields.callbackStopVoice;
    callbackStopVoice = v2->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      *p_callbackStopVoice = 0;
      sub_1C9403C(p_callbackStopVoice, 0);
      ((void (__fastcall *)(intptr_t, intptr_t))callbackStopVoice->fields.invoke_impl)(
        callbackStopVoice->fields.method_code,
        callbackStopVoice->fields.method);
    }
    else
    {
      this = (EventSvtControl_o *)v2->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5458/*"END_PLAY"*/, 0);
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
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v10; // w23
  __int64 v11; // x24
  int v12; // w21
  bool v13; // w19
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D26B92 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_4D26B92 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_1C942F0(0, voiceId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v16 = v15;
  do
  {
LABEL_5:
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v6 )
    {
      v13 = 0;
      v12 = 8;
      goto LABEL_15;
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C942F0(v6, v7);
    monitor = (int)v16.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= monitor )
      sub_1C942F8(v6);
    v11 = *((_QWORD *)&current[2].klass + (int)v10);
    if ( !v11 )
      sub_1C942F0(v6, v7);
    v6 = System_String__op_Equality(*(System_String_o **)(v11 + 16), voiceId, 0);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v13 && v12 == 7;
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
  System_String_o *v13; // x1
  unsigned __int64 v14; // x29
  __int64 v15; // x28
  System_String_o **m_Items; // x20
  EventSvtControl___c__DisplayClass62_0_o *v17; // x26
  struct System_String_o *v18; // x1
  System_String_o **p_id; // x25
  System_String_o **v20; // x23
  System_String_array *v21; // x20
  int32_t v22; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListCraft; // x22
  __int64 v24; // x19
  System_Func_object__bool__o *v25; // x28
  System_Collections_Generic_List_T__o *v26; // x0
  System_Func_T__bool__o *v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v38; // w23
  __int64 v39; // x8
  __int64 v40; // x0
  const MethodInfo *v41; // x1
  System_Action_o *v42; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v43; // [xsp+8h] [xbp-A8h]
  VoicePlayCondMaster_o *v44; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+30h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4D26B90 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_ServantVoiceData_____);
    sub_1C94098(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&System_Func_ServantVoiceData____bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__0__);
    sub_1C94098(&EventSvtControl___c__DisplayClass62_0_TypeInfo);
    byte_4D26B90 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1C942F8(Master_object);
  }
  v42 = callback;
  v12 = (VoicePlayCondMaster_o *)Master_object;
  v43 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)targetVoiceIds->max_length >= 1 )
  {
    v14 = 0;
    v15 = (unsigned int)targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v44 = v12;
    do
    {
      v17 = (EventSvtControl___c__DisplayClass62_0_o *)sub_1C942E4(EventSvtControl___c__DisplayClass62_0_TypeInfo);
      EventSvtControl___c__DisplayClass62_0___ctor(v17, 0);
      if ( v14 >= LODWORD(targetVoiceIds->max_length) )
        goto LABEL_45;
      if ( !v17 )
        goto LABEL_44;
      v18 = m_Items[v14];
      v17->fields.id = v18;
      p_id = &v17->fields.id;
      Master_object = sub_1C9403C(&v17->fields, v18);
      if ( !v12 )
        goto LABEL_44;
      Master_object = VoicePlayCondMaster__isVoicePlay(v12, v7, *p_id, 0, -1, -1, 0, 0);
      if ( (Master_object & 1) != 0 )
      {
        v20 = m_Items;
        v21 = targetVoiceIds;
        v22 = v7;
        voiceListCraft = this->fields.voiceListCraft;
        v24 = v15;
        v25 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v25,
          (Il2CppObject *)v17,
          Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__0__,
          0);
        v26 = (System_Collections_Generic_List_T__o *)voiceListCraft;
        v7 = v22;
        targetVoiceIds = v21;
        m_Items = v20;
        v12 = v44;
        v27 = (System_Func_T__bool__o *)v25;
        v15 = v24;
        Master_object = BasicHelper__Any_object_(
                          v26,
                          v27,
                          (const MethodInfo_3185468 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( (Master_object & 1) != 0 )
        {
          if ( !v43 )
            goto LABEL_44;
          v13 = *p_id;
          items = v43->fields._items;
          v29 = Method_System_Collections_Generic_List_string__Add__;
          ++v43->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v43->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v43,
              (Il2CppObject *)v13,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v43->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v13;
            Master_object = sub_1C9403C(v31 + 4, v13);
          }
        }
      }
    }
    while ( v15 != ++v14 );
  }
  if ( !v43 )
    goto LABEL_44;
  v32 = UnityEngine_Random__Range_72070684(0, v43->fields._size, 0);
  callback = v42;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v43,
                              v32,
                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1C9403C(&this->fields.callbakEndPlay, callback);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C9403C(&this->fields.randomVoiceList, 0);
  Master_object = (__int64)this->fields.voiceListCraft;
  if ( !Master_object )
LABEL_44:
    sub_1C942F0(Master_object, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v46 = v45;
LABEL_29:
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v34 )
      break;
    current = v46.fields._current;
    if ( !v46.fields._current )
      sub_1C942F0(v34, v35);
    monitor = (int)v46.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v38 = 0;
      while ( 1 )
      {
        if ( v38 >= monitor )
          sub_1C942F8(v34);
        v39 = *((_QWORD *)&current[2].klass + (int)v38);
        if ( !v39 )
          sub_1C942F0(v34, v35);
        v34 = System_String__op_Equality(*(System_String_o **)(v39 + 16), Item, 0);
        if ( v34 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v38 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v40 = sub_1C9403C(&this->fields.randomVoiceList, current);
      if ( !*p_randomVoiceList )
        sub_1C942F0(v40, v41);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v41);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v10; // x1
  int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v13; // x24
  System_Collections_Generic_List_object__o *v14; // x23
  __int64 v15; // x26
  __int64 v16; // x27
  System_String_o *v17; // x25
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  int32_t v22; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x0
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D26B8E & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26B8E = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1C942F0(Instance, v10);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1C942F8(Instance);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v13 = (VoicePlayCondMaster_o *)Instance;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)targetVoiceIds->max_length >= 1 )
  {
    v15 = 0;
    v16 = (unsigned int)targetVoiceIds->max_length - 1LL;
    while ( v13 )
    {
      v17 = targetVoiceIds->m_Items[v15];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v13, svtId, v17, 0, -1, -1, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_42;
        items = v14->fields._items;
        v19 = Method_System_Collections_Generic_List_string__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v17,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v17;
          Instance = (DataManager_o *)sub_1C9403C(v21 + 4, v17);
        }
      }
      if ( v16 == v15 )
        goto LABEL_23;
      if ( ++v15 >= (unsigned __int64)LODWORD(targetVoiceIds->max_length) )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v14 )
    goto LABEL_42;
  v22 = UnityEngine_Random__Range_72070684(0, v14->fields._size, 0);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v14,
                              v22,
                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1C9403C(&this->fields.callbakEndPlay, callback);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C9403C(&this->fields.randomVoiceList, 0);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v33 = v32;
LABEL_27:
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v24 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1C942F0(v24, v25);
    monitor = (int)v33.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v28 >= monitor )
          sub_1C942F8(v24);
        v29 = *((_QWORD *)&current[2].klass + (int)v28);
        if ( !v29 )
          sub_1C942F0(v24, v25);
        v24 = System_String__op_Equality(*(System_String_o **)(v29 + 16), Item, 0);
        if ( v24 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v28 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v30 = sub_1C9403C(&this->fields.randomVoiceList, current);
      if ( !*p_randomVoiceList )
        sub_1C942F0(v30, v31);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v31);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  System_String_o *v13; // x1
  unsigned __int64 v14; // x29
  __int64 v15; // x28
  System_String_o **m_Items; // x20
  EventSvtControl___c__DisplayClass61_0_o *v17; // x26
  struct System_String_o *v18; // x1
  System_String_o **p_id; // x25
  System_String_o **v20; // x23
  System_String_array *v21; // x20
  int32_t v22; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListTrade; // x22
  __int64 v24; // x19
  System_Func_object__bool__o *v25; // x28
  System_Collections_Generic_List_T__o *v26; // x0
  System_Func_T__bool__o *v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v38; // w23
  __int64 v39; // x8
  __int64 v40; // x0
  const MethodInfo *v41; // x1
  System_Action_o *v42; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v43; // [xsp+8h] [xbp-A8h]
  VoicePlayCondMaster_o *v44; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+30h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4D26B8F & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_ServantVoiceData_____);
    sub_1C94098(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&System_Func_ServantVoiceData____bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__0__);
    sub_1C94098(&EventSvtControl___c__DisplayClass61_0_TypeInfo);
    byte_4D26B8F = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1C942F8(Master_object);
  }
  v42 = callback;
  v12 = (VoicePlayCondMaster_o *)Master_object;
  v43 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)targetVoiceIds->max_length >= 1 )
  {
    v14 = 0;
    v15 = (unsigned int)targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v44 = v12;
    do
    {
      v17 = (EventSvtControl___c__DisplayClass61_0_o *)sub_1C942E4(EventSvtControl___c__DisplayClass61_0_TypeInfo);
      EventSvtControl___c__DisplayClass61_0___ctor(v17, 0);
      if ( v14 >= LODWORD(targetVoiceIds->max_length) )
        goto LABEL_45;
      if ( !v17 )
        goto LABEL_44;
      v18 = m_Items[v14];
      v17->fields.id = v18;
      p_id = &v17->fields.id;
      Master_object = sub_1C9403C(&v17->fields, v18);
      if ( !v12 )
        goto LABEL_44;
      Master_object = VoicePlayCondMaster__isVoicePlay(v12, v7, *p_id, 0, -1, -1, 0, 0);
      if ( (Master_object & 1) != 0 )
      {
        v20 = m_Items;
        v21 = targetVoiceIds;
        v22 = v7;
        voiceListTrade = this->fields.voiceListTrade;
        v24 = v15;
        v25 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v25,
          (Il2CppObject *)v17,
          Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__0__,
          0);
        v26 = (System_Collections_Generic_List_T__o *)voiceListTrade;
        v7 = v22;
        targetVoiceIds = v21;
        m_Items = v20;
        v12 = v44;
        v27 = (System_Func_T__bool__o *)v25;
        v15 = v24;
        Master_object = BasicHelper__Any_object_(
                          v26,
                          v27,
                          (const MethodInfo_3185468 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( (Master_object & 1) != 0 )
        {
          if ( !v43 )
            goto LABEL_44;
          v13 = *p_id;
          items = v43->fields._items;
          v29 = Method_System_Collections_Generic_List_string__Add__;
          ++v43->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v43->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v43,
              (Il2CppObject *)v13,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v43->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v13;
            Master_object = sub_1C9403C(v31 + 4, v13);
          }
        }
      }
    }
    while ( v15 != ++v14 );
  }
  if ( !v43 )
    goto LABEL_44;
  v32 = UnityEngine_Random__Range_72070684(0, v43->fields._size, 0);
  callback = v42;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v43,
                              v32,
                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1C9403C(&this->fields.callbakEndPlay, callback);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C9403C(&this->fields.randomVoiceList, 0);
  Master_object = (__int64)this->fields.voiceListTrade;
  if ( !Master_object )
LABEL_44:
    sub_1C942F0(Master_object, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v46 = v45;
LABEL_29:
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v34 )
      break;
    current = v46.fields._current;
    if ( !v46.fields._current )
      sub_1C942F0(v34, v35);
    monitor = (int)v46.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v38 = 0;
      while ( 1 )
      {
        if ( v38 >= monitor )
          sub_1C942F8(v34);
        v39 = *((_QWORD *)&current[2].klass + (int)v38);
        if ( !v39 )
          sub_1C942F0(v34, v35);
        v34 = System_String__op_Equality(*(System_String_o **)(v39 + 16), Item, 0);
        if ( v34 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v38 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v40 = sub_1C9403C(&this->fields.randomVoiceList, current);
      if ( !*p_randomVoiceList )
        sub_1C942F0(v40, v41);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v41);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v13; // x1
  UnityEngine_GameObject_o *performanceRoot; // x0
  System_String_o *assetName; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Effect; // x0
  UnityEngine_Object_o *v18; // x25
  UnityEngine_Object_o *animationRef; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  UnityEngine_Object_o *v21; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v23; // x22
  const MethodInfo *v24; // x4
  System_Collections_IEnumerator_o *v25; // x1

  if ( (byte_4D26B94 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26B94 = 1;
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
    sub_1C9403C(&this->fields.objectRef, Effect);
    v18 = (UnityEngine_Object_o *)*p_objectRef;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Implicit(v18, 0) )
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
    sub_1C942F0(performanceRoot, v13);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 performanceRoot,
                                 (const MethodInfo_31F49F4 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  this->fields.animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_object;
  sub_1C9403C(&this->fields.animationRef, ComponentInChildren_object);
  v21 = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v21, 0) )
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
  v23 = *p_afterPerformance;
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v23->fields.name, 0) )
  {
    v25 = EventSvtControl__PlayPerformanceProc(
            this,
            v23->fields.name,
            v23->fields.delay,
            isWaitPerformance,
            playEndAction,
            v24);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v25, 0);
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
  __int64 v13; // x1

  if ( (byte_4D26B95 & 1) == 0 )
  {
    sub_1C94098(&EventSvtControl__PlayPerformanceProc_d__72_TypeInfo);
    byte_4D26B95 = 1;
  }
  v11 = (EventSvtControl__PlayPerformanceProc_d__72_o *)sub_1C942E4(EventSvtControl__PlayPerformanceProc_d__72_TypeInfo);
  EventSvtControl__PlayPerformanceProc_d__72___ctor(v11, 0, 0);
  if ( !v11 )
    sub_1C942F0(v12, v13);
  v11->fields.__4__this = this;
  sub_1C9403C(&v11->fields.__4__this, this);
  v11->fields.animName = animName;
  sub_1C9403C(&v11->fields.animName, animName);
  v11->fields.delay = delay;
  v11->fields.isWaitPerformance = isWaitPerformance;
  v11->fields.playEndAction = playEndAction;
  sub_1C9403C(&v11->fields.playEndAction, playEndAction);
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
  __int64 v10; // x1
  int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v13; // x24
  System_Collections_Generic_List_object__o *v14; // x23
  __int64 v15; // x26
  __int64 v16; // x27
  System_String_o *v17; // x25
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  int32_t v22; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x0
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D26B8D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26B8D = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1C942F0(Instance, v10);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1C942F8(Instance);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v13 = (VoicePlayCondMaster_o *)Instance;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)targetVoiceIds->max_length >= 1 )
  {
    v15 = 0;
    v16 = (unsigned int)targetVoiceIds->max_length - 1LL;
    while ( v13 )
    {
      v17 = targetVoiceIds->m_Items[v15];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v13, svtId, v17, 0, -1, -1, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_42;
        items = v14->fields._items;
        v19 = Method_System_Collections_Generic_List_string__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v17,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v17;
          Instance = (DataManager_o *)sub_1C9403C(v21 + 4, v17);
        }
      }
      if ( v16 == v15 )
        goto LABEL_23;
      if ( ++v15 >= (unsigned __int64)LODWORD(targetVoiceIds->max_length) )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v14 )
    goto LABEL_42;
  v22 = UnityEngine_Random__Range_72070684(0, v14->fields._size, 0);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v14,
                              v22,
                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1C9403C(&this->fields.callbakEndPlay, callback);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C9403C(&this->fields.randomVoiceList, 0);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v33 = v32;
LABEL_27:
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v24 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1C942F0(v24, v25);
    monitor = (int)v33.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v28 >= monitor )
          sub_1C942F8(v24);
        v29 = *((_QWORD *)&current[2].klass + (int)v28);
        if ( !v29 )
          sub_1C942F0(v24, v25);
        v24 = System_String__op_Equality(*(System_String_o **)(v29 + 16), Item, 0);
        if ( v24 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v28 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v30 = sub_1C9403C(&this->fields.randomVoiceList, current);
      if ( !*p_randomVoiceList )
        sub_1C942F0(v30, v31);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v31);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void EventSvtControl__ReleasePerformance(EventSvtControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *objectRef; // x19

  if ( (byte_4D26B97 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26B97 = 1;
  }
  this->fields.animationRef = 0;
  sub_1C9403C(&this->fields.animationRef, 0);
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972(objectRef, 0);
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
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_int__o *v13; // x21
  struct System_String_array *befVoiceIds; // x9
  unsigned __int64 v15; // x24
  System_String_o *v16; // x25
  _BOOL8 isVoicePlay; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x20
  int monitor; // w8
  int i; // w27
  __int64 v22; // x28
  const MethodInfo *v23; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  unsigned __int64 v27; // x25
  int32_t v28; // w22
  System_String_o *v29; // x23
  __int64 Item; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x20
  void *v33; // x8
  int v34; // w27
  __int64 v35; // x24
  const MethodInfo *v36; // x3
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  il2cpp_array_size_t max_length; // [xsp+0h] [xbp-C0h]
  struct System_String_array *aftVoiceIds; // [xsp+8h] [xbp-B8h]
  struct System_String_array *v41; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D26B8C & 1) == 0 )
  {
    sub_1C94098(&BoxGachaTalkInfo_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26B8C = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v8 = (BoxGachaTalkInfo_o *)sub_1C942E4(BoxGachaTalkInfo_TypeInfo);
  BoxGachaTalkInfo___ctor(v8, v9);
  *info = v8;
  sub_1C9403C(info, v8);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v13 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
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
      v15 = 0;
      v41 = befVoiceIds;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          break;
        v16 = befVoiceIds->m_Items[v15];
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v43,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v44 = v43;
        while ( 1 )
        {
          isVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v44,
                          (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !isVoicePlay )
            break;
          current = v44.fields._current;
          if ( !v44.fields._current )
            sub_1C942F0(isVoicePlay, v18);
          monitor = (int)v44.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            for ( i = 0; i < monitor; ++i )
            {
              if ( i >= (unsigned int)monitor )
                sub_1C942F8(isVoicePlay);
              v22 = *((_QWORD *)&current[2].klass + i);
              if ( !v22 )
                sub_1C942F0(isVoicePlay, v18);
              isVoicePlay = System_String__op_Equality(*(System_String_o **)(v22 + 16), v16, 0);
              if ( isVoicePlay )
              {
                if ( !MasterData_object )
                  sub_1C942F0(isVoicePlay, v18);
                isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                                (VoicePlayCondMaster_o *)MasterData_object,
                                svtId,
                                v16,
                                0,
                                -1,
                                -1,
                                0,
                                0);
                if ( isVoicePlay )
                {
                  if ( !*info )
                    sub_1C942F0(0, v18);
                  BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v22 + 16),
                    *(System_String_o **)(v22 + 48),
                    v23);
                  if ( !v13 )
                    sub_1C942F0(isVoicePlay, v18);
                  items = v13->fields._items;
                  v25 = Method_System_Collections_Generic_List_int__Add__;
                  ++v13->fields._version;
                  if ( !items )
                    sub_1C942F0(isVoicePlay, v18);
                  size = v13->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v13,
                      v15,
                      *(const MethodInfo_384DE10 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v13->fields._size = size + 1;
                    items->m_Items[size] = v15;
                  }
                }
              }
              monitor = (int)current[1].monitor;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v44,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        befVoiceIds = v41;
        if ( ++v15 == (unsigned int)max_length )
          goto LABEL_39;
        if ( v15 >= LODWORD(v41->max_length) )
          goto LABEL_71;
      }
LABEL_70:
      sub_1C942F0(Instance, v11);
    }
LABEL_71:
    sub_1C942F8(Instance);
  }
LABEL_39:
  if ( !v13 || !v13->fields._size )
    return 0;
  if ( (int)max_length >= 1 )
  {
    if ( !aftVoiceIds )
      goto LABEL_70;
    v27 = 0;
    v28 = 0;
    while ( v27 < LODWORD(aftVoiceIds->max_length) )
    {
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_70;
      v29 = aftVoiceIds->m_Items[v27];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v44 = v43;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v44,
                 (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( (Item & 1) == 0 )
          break;
        v32 = v44.fields._current;
        if ( !v44.fields._current )
          sub_1C942F0(Item, v31);
        v33 = v44.fields._current[1].monitor;
        if ( (int)v33 >= 1 )
        {
          v34 = 0;
          do
          {
            if ( v34 >= (unsigned int)v33 )
              sub_1C942F8(Item);
            v35 = *((_QWORD *)&v32[2].klass + v34);
            if ( !v35 )
              sub_1C942F0(Item, v31);
            Item = System_String__op_Equality(*(System_String_o **)(v35 + 16), v29, 0);
            if ( (Item & 1) != 0 )
            {
              Item = System_Collections_Generic_List_int___get_Item(
                       v13,
                       v28,
                       (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( v27 == (unsigned int)Item )
              {
                if ( !*info )
                  sub_1C942F0(0, v31);
                BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v35 + 16),
                  *(System_String_o **)(v35 + 48),
                  v36);
                ++v28;
              }
            }
            LODWORD(v33) = v32[1].monitor;
            ++v34;
          }
          while ( v34 < (int)v33 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v44,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      if ( ++v27 == (unsigned int)max_length )
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
  sub_1C9403C(&this->fields.asstName, assetName);
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
  sub_1C9403C(v7, v8);
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
  sub_1C9403C(&this->fields.asstName, assetName);
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
  sub_1C9403C(v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SetOverwriteSpecialSvtVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  this->fields.specialSvtVoice = voiceId;
  sub_1C9403C(&this->fields.specialSvtVoice, voiceId);
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
  sub_1C9403C(&this->fields.asstName, assetName);
  v5->fields.voiceListOverwrite = listOverwrite;
  v5 = (EventSvtControl_o *)((char *)v5 + 200);
  sub_1C9403C(v5, listOverwrite);
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
  sub_1C9403C(&this->fields.asstName, assetName);
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
  sub_1C9403C(v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SetSvtFigureCollect(
        EventSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  this->fields.standFigureCollectList = collects;
  sub_1C9403C(&this->fields.standFigureCollectList, collects);
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
  sub_1C9403C(&this->fields.asstName, assetName);
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
  sub_1C9403C(v7, v8);
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
  sub_1C9403C(&this->fields.asstName, assetName);
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
  sub_1C9403C(v7, v8);
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
  if ( (byte_4D26B85 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C94098(&Method_EventSvtControl_EndPlay__);
    sub_1C94098(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    this = (EventSvtControl_o *)sub_1C94098(&SoundManager_TypeInfo);
    byte_4D26B85 = 1;
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
  this = (EventSvtControl_o *)sub_1C9403C(&v2->fields.vcName, id);
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
                                      (const MethodInfo_31BC830 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
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
                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
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
      UIStandFigureR__SetFace_44857156((UIStandFigureR_o *)this, face, v19->fields.form, 0, v11, 0);
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
                                  (const MethodInfo_31BC830 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
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
                                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !this )
            goto LABEL_43;
          this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
          if ( !this )
            goto LABEL_43;
          UIStandFigureR__SetFace_44857156((UIStandFigureR_o *)this, v34, asstName, 0, v11, 0);
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
      v23 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)v2, Method_EventSvtControl_EndPlay__, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v24 = SoundManager__playVoice_42281128(v20, vcName, volume, v23, 0, 0);
      v2->fields.player = v24;
      this = (EventSvtControl_o *)sub_1C9403C(&v2->fields.player, v24);
      if ( v2->fields.isSkipPerformance )
        goto LABEL_28;
      v26 = v2->fields.randomVoiceList;
      if ( !v26 )
LABEL_43:
        sub_1C942F0(this, method);
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
      sub_1C942F8(this);
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
  System_Collections_Generic_List_int__o *v10; // x1
  System_Collections_Generic_HashSet_T__o *v11; // x24
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x25
  Il2CppClass *klass; // x8
  EventSvtControl___c_c *v16; // x0
  System_String_o *v17; // x26
  System_Func_object__object__o *_9__65_0; // x27
  Il2CppObject *v19; // x28
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_string__o *v21; // x1
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x26
  Il2CppObject *Weight; // x2
  const MethodInfo_37C7D08 *v26; // x4
  __int64 v27; // x1
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x26
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  __int64 Item; // x0
  __int64 v35; // x1
  int32_t v36; // w25
  int32_t monitor; // w26
  _BOOL8 IsVoicePlayFlag; // x0
  System_Collections_Generic_List_T__o *v39; // x0
  System_Collections_Generic_KeyValuePair_object__int__o v40; // x1 OVERLAPPED
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppObject *v44; // x8
  System_Collections_Generic_KeyValuePair_object__int__o v45; // x1 OVERLAPPED
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppObject *v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  struct System_Collections_Generic_List_int__o *voicePlayedValueList; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  System_Collections_Generic_List_T__o *v58; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_List_int__o *OriginalSvtId; // [xsp+18h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+28h] [xbp-B8h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v63; // [xsp+48h] [xbp-98h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+60h] [xbp-80h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v66; // 0:x0.16

  if ( (byte_4D26B93 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&System_Func_ServantVoiceData__string__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C94098(&Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__65_0__);
    sub_1C94098(&EventSvtControl___c_TypeInfo);
    sub_1C94098(&StringLiteral_808/*","*/);
    sub_1C94098(&StringLiteral_19720/*"forcePlayFirst"*/);
    byte_4D26B93 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  condEntity = 0;
  v63.fields.key = 0;
  *(_QWORD *)&v63.fields.value = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v7 = (System_Collections_Generic_List_T__o *)sub_1C942E4(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v7,
    (const MethodInfo_37E5800 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  v8 = (System_Collections_Generic_List_T__o *)sub_1C942E4(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v8,
    (const MethodInfo_37E5800 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v8;
  sub_1C9403C(voiceInfoList, v8);
  v9 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
  if ( !v9 )
    goto LABEL_65;
  v58 = v7;
  OriginalSvtId = ServantVoiceRelationMaster__GetOriginalSvtId(
                    (ServantVoiceRelationMaster_o *)v9,
                    this->fields.svtId,
                    0);
  v11 = (System_Collections_Generic_HashSet_T__o *)sub_1C942E4(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v11,
    (const MethodInfo_371E7A8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  if ( !servantVoiceGroupData )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    (System_Collections_Generic_List_object__o *)servantVoiceGroupData,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v65 = v61;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v12 )
      break;
    current = v65.fields._current;
    if ( !v65.fields._current )
      sub_1C942F0(v12, v13);
    if ( !LODWORD(v65.fields._current[1].monitor) )
      sub_1C942F8(v12);
    klass = v65.fields._current[2].klass;
    if ( !klass )
      sub_1C942F0(v12, v13);
    if ( !Master_object )
      sub_1C942F0(v12, v13);
    if ( VoicePlayCondMaster__isVoicePlay_44072652(
           (VoicePlayCondMaster_o *)Master_object,
           this->fields.svtId,
           (System_String_o *)klass->_1.name,
           &condEntity,
           0,
           -1,
           -1,
           0,
           0) )
    {
      v16 = EventSvtControl___c_TypeInfo;
      if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
        v16 = EventSvtControl___c_TypeInfo;
      }
      v17 = (System_String_o *)StringLiteral_808/*","*/;
      _9__65_0 = (System_Func_object__object__o *)v16->static_fields->__9__65_0;
      if ( !_9__65_0 )
      {
        if ( !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = EventSvtControl___c_TypeInfo;
        }
        v19 = (Il2CppObject *)v16->static_fields->__9;
        _9__65_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_ServantVoiceData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__65_0,
          v19,
          Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__65_0__,
          0);
        static_fields = EventSvtControl___c_TypeInfo->static_fields;
        static_fields->__9__65_0 = (struct System_Func_ServantVoiceData__string__o *)_9__65_0;
        sub_1C9403C(&static_fields->__9__65_0, _9__65_0);
      }
      v21 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                                  (System_Func_TSource__TResult__o *)_9__65_0,
                                                                  (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
      v22 = (Il2CppObject *)System_String__Join_64460336(v17, v21, 0);
      if ( !v11 )
        sub_1C942F0(v22, v23);
      v24 = v22;
      if ( !System_Collections_Generic_HashSet_object___Contains(
              v11,
              v22,
              (const MethodInfo_371EE9C *)Method_System_Collections_Generic_HashSet_string__Contains__) )
      {
        System_Collections_Generic_HashSet_object___Add(
          v11,
          v24,
          (const MethodInfo_371F98C *)Method_System_Collections_Generic_HashSet_string__Add__);
        Weight = (Il2CppObject *)(unsigned int)VoicePlayCondMaster__GetWeight(
                                                 (VoicePlayCondMaster_o *)Master_object,
                                                 condEntity,
                                                 10,
                                                 0);
        v66.fields.key = (Il2CppObject *)&v63;
        *(_QWORD *)&v66.fields.value = current;
        System_Collections_Generic_KeyValuePair_object__int____ctor(
          v66,
          Weight,
          Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
          v26);
        if ( !condEntity
          || VoicePlayCondEntity__GetScriptIntParam(condEntity, (System_String_o *)StringLiteral_19720/*"forcePlayFirst"*/, -1, 0) != 1 )
        {
          goto LABEL_36;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v28 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_VoiceMaster___);
        if ( !condEntity )
          sub_1C942F0(v28, v29);
        v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)v28;
        voiceId = condEntity->fields.voiceId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v32 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(voiceId, 0);
        if ( !v30 )
          sub_1C942F0(v32, v33);
        if ( !DataMasterBase_object__object__object___TryGetEntity(
                v30,
                &entity,
                v32,
                (const MethodInfo_345FFC4 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__) )
          goto LABEL_36;
        if ( !OriginalSvtId )
          sub_1C942F0(0, v27);
        Item = System_Collections_Generic_List_int___get_Item(
                 OriginalSvtId,
                 0,
                 (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !entity )
          sub_1C942F0(Item, v35);
        v36 = Item;
        monitor = (int32_t)entity[3].monitor;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsVoicePlayFlag = CondType__IsVoicePlayFlag(v36, monitor, 0);
        if ( !IsVoicePlayFlag )
        {
          if ( !v58 )
            sub_1C942F0(IsVoicePlayFlag, v27);
          v45 = v63;
          items = v58->fields._items;
          v47 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v58->fields._version;
          if ( !items )
            sub_1C942F0(IsVoicePlayFlag, v45.fields.key);
          size = v58->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v58,
              v45,
              *(const MethodInfo_37E6080 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &items->obj + size;
            v58->fields._size = size + 1;
            v49[2].klass = (Il2CppClass *)v45.fields.key;
            v49 += 2;
            v49->monitor = *(void **)&v45.fields.value;
            v50 = sub_1C9403C(v49, 0);
          }
          if ( !entity )
            sub_1C942F0(v50, v51);
          voicePlayedValueList = this->fields.voicePlayedValueList;
          if ( !voicePlayedValueList )
            sub_1C942F0(0, v51);
          monitor_low = LODWORD(entity[3].monitor);
          v54 = voicePlayedValueList->fields._items;
          v55 = Method_System_Collections_Generic_List_int__Add__;
          ++voicePlayedValueList->fields._version;
          if ( !v54 )
            sub_1C942F0(voicePlayedValueList, monitor_low);
          v56 = voicePlayedValueList->fields._size;
          if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              voicePlayedValueList,
              monitor_low,
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            voicePlayedValueList->fields._size = v56 + 1;
            v54->m_Items[v56] = monitor_low;
          }
        }
        else
        {
LABEL_36:
          v39 = (System_Collections_Generic_List_T__o *)*voiceInfoList;
          if ( !*voiceInfoList )
            sub_1C942F0(0, v27);
          v40 = v63;
          v41 = v39->fields._items;
          v42 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v39->fields._version;
          if ( !v41 )
            sub_1C942F0(v39, v40.fields.key);
          v43 = v39->fields._size;
          if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v39,
              v40,
              *(const MethodInfo_37E6080 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &v41->obj + v43;
            v39->fields._size = v43 + 1;
            v44[2].klass = (Il2CppClass *)v40.fields.key;
            v44 += 2;
            v44->monitor = *(void **)&v40.fields.value;
            sub_1C9403C(v44, 0);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v65,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( !v58 )
    goto LABEL_65;
  v10 = OriginalSvtId;
  if ( v58->fields._size >= 1 )
  {
    this->fields.forcePlayVoiceSvtIdList = OriginalSvtId;
    sub_1C9403C(&this->fields.forcePlayVoiceSvtIdList, OriginalSvtId);
    *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v58;
    sub_1C9403C(voiceInfoList, v58);
    return 1;
  }
  if ( !*voiceInfoList )
LABEL_65:
    sub_1C942F0(v9, v10);
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
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyList_string__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x21
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x24
  _BOOL8 isVoicePlay; // x0
  __int64 v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  int32_t v39; // w8
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  int32_t v41; // w0
  Il2CppObject *v42; // x22
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x23
  int monitor; // w8
  unsigned int v47; // w24
  __int64 v48; // x8
  __int64 v49; // x0
  const MethodInfo *v50; // x1
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D26B8A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D26B8A = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v9 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !voiceIdCandidates )
    goto LABEL_63;
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
    v15 = sub_1C6A420(voiceIdCandidates, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_string__o *, _QWORD))v15)(
          voiceIdCandidates,
          *(_QWORD *)(v15 + 8));
  if ( !v17 )
    sub_1C942F0(0, v16);
  while ( 1 )
  {
    v18 = *(_QWORD *)v17;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_15;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_15:
      v21 = sub_1C6A420(v17, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v17;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v24 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_22;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_22:
      v25 = sub_1C6A420(v17, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v26 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
    if ( !voicePlayCondMaster )
      sub_1C942F0(v26, v27);
    v28 = (Il2CppObject *)v26;
    isVoicePlay = VoicePlayCondMaster__isVoicePlay(voicePlayCondMaster, svtId, v26, 0, -1, -1, 0, 0);
    if ( isVoicePlay )
    {
      if ( !v9 )
        sub_1C942F0(isVoicePlay, v30);
      items = v9->fields._items;
      v32 = Method_System_Collections_Generic_List_string__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C942F0(isVoicePlay, v30);
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v28,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v28;
        sub_1C9403C(v34 + 4, v28);
      }
    }
  }
  v35 = *(_QWORD *)v17;
  v36 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
  {
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_35;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_35:
    v38 = sub_1C6A420(v17, System_IDisposable_TypeInfo, 0);
  }
  Item = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v17, *(_QWORD *)(v38 + 8));
  if ( !v9 )
LABEL_63:
    sub_1C942F0(Item, v11);
  v39 = v9->fields._size;
  if ( v39 < 1 )
    return 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
LABEL_40:
  v41 = UnityEngine_Random__Range_72070684(0, v39, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v9,
           v41,
           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !this->fields.voiceIndividualShopList )
    goto LABEL_63;
  v42 = Item;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    (System_Collections_Generic_List_object__o *)this->fields.voiceIndividualShopList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v53 = v52;
  do
  {
LABEL_42:
    v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v43 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v53,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      System_Collections_Generic_List_object___Remove(
        v9,
        v42,
        (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
      v39 = v9->fields._size;
      result = 0;
      if ( v39 <= 0 )
        return result;
      goto LABEL_40;
    }
    current = v53.fields._current;
    if ( !v53.fields._current )
      sub_1C942F0(v43, v44);
    monitor = (int)v53.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v47 = 0;
  while ( 1 )
  {
    if ( v47 >= monitor )
      sub_1C942F8(v43);
    v48 = *((_QWORD *)&current[2].klass + (int)v47);
    if ( !v48 )
      sub_1C942F0(v43, v44);
    v43 = System_String__op_Equality(*(System_String_o **)(v48 + 16), (System_String_o *)v42, 0);
    if ( v43 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v47 >= monitor )
      goto LABEL_42;
  }
  *p_randomVoiceList = (struct ServantVoiceData_array *)current;
  v49 = sub_1C9403C(&this->fields.randomVoiceList, current);
  if ( !*p_randomVoiceList )
    sub_1C942F0(v49, v50);
  this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
  EventSvtControl__svtVoicePlay(this, v50);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int128 v8; // q1
  const MethodInfo *v9; // x1
  struct System_Action_o *v10; // x1
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  EventSvtControl___c__DisplayClass57_1_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  struct EventSvtControl___c__DisplayClass57_0_o **p_CS___8__locals1; // x23
  Il2CppObject *current; // x1
  EventSvtControl___c__DisplayClass57_1_Fields *p_fields; // x24
  __int64 v18; // x0
  __int64 v19; // x1
  struct ServantVoiceData_array *vdArray; // x28
  int max_length; // w8
  unsigned int v22; // w25
  ServantVoiceData_o *v23; // x29
  struct ServantVoiceData_array *v24; // x1
  __int64 v25; // x0
  const MethodInfo *v26; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  struct System_Action_o *callBackStartPlay; // x8
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  System_String_o *dialogText; // x20
  System_Action_o *_9__0; // x23
  CommonUI_o *v34; // x19
  System_String_o *v35; // x21
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4D26B8B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&EventSvtControl___c__DisplayClass57_0_TypeInfo);
    sub_1C94098(&Method_EventSvtControl___c__DisplayClass57_1__boxGachaPlayVoice_b__0__);
    sub_1C94098(&EventSvtControl___c__DisplayClass57_1_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D26B8B = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v5 = sub_1C942E4(EventSvtControl___c__DisplayClass57_0_TypeInfo);
  EventSvtControl___c__DisplayClass57_0___ctor((EventSvtControl___c__DisplayClass57_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C(v5 + 16, this);
  v8 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v5 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v5 + 24) = v8;
  sub_1C9403C(v5 + 24, 0);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v9);
  System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 24), 0);
  v10 = *(struct System_Action_o **)(v5 + 48);
  this->fields.callbakEndPlay = v10;
  sub_1C9403C(&this->fields.callbakEndPlay, v10);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C9403C(&this->fields.randomVoiceList, 0);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_1C942F0(voiceListBoxGacha, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v37 = v36;
LABEL_8:
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v12 = (EventSvtControl___c__DisplayClass57_1_o *)sub_1C942E4(EventSvtControl___c__DisplayClass57_1_TypeInfo);
    EventSvtControl___c__DisplayClass57_1___ctor(v12, 0);
    if ( !v12 )
      sub_1C942F0(v13, v14);
    v12->fields.CS___8__locals1 = (struct EventSvtControl___c__DisplayClass57_0_o *)v5;
    p_CS___8__locals1 = &v12->fields.CS___8__locals1;
    sub_1C9403C(&v12->fields.CS___8__locals1, v5);
    current = v37.fields._current;
    v12->fields.vdArray = (struct ServantVoiceData_array *)v37.fields._current;
    p_fields = &v12->fields;
    v18 = sub_1C9403C(&v12->fields, current);
    vdArray = v12->fields.vdArray;
    if ( !vdArray )
      sub_1C942F0(v18, v19);
    max_length = vdArray->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= max_length )
          sub_1C942F8(v18);
        v23 = vdArray->m_Items[v22];
        if ( !v23 )
          sub_1C942F0(v18, v19);
        if ( !*p_CS___8__locals1 )
          sub_1C942F0(v18, v19);
        v18 = System_String__op_Equality(v23->fields.id, (*p_CS___8__locals1)->fields.arg.fields.targetVoiceId, 0);
        if ( (v18 & 1) != 0 )
          break;
        max_length = vdArray->max_length;
        if ( (int)++v22 >= max_length )
          goto LABEL_8;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(v23->fields.dialogText, 0) )
      {
        v24 = p_fields->vdArray;
        *p_randomVoiceList = p_fields->vdArray;
        v25 = sub_1C9403C(&this->fields.randomVoiceList, v24);
        if ( !*p_randomVoiceList )
          sub_1C942F0(v25, v26);
        this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
        if ( !*p_CS___8__locals1 )
          sub_1C942F0(v25, v26);
        this->fields.isSkipPerformance = (*p_CS___8__locals1)->fields.arg.fields.skipPerformance;
        EventSvtControl__svtVoicePlay(this, v26);
        if ( !*p_CS___8__locals1 )
          sub_1C942F0(v27, v28);
        callBackStartPlay = (*p_CS___8__locals1)->fields.arg.fields.callBackStartPlay;
        if ( callBackStartPlay )
          ((void (__fastcall *)(intptr_t, intptr_t))callBackStartPlay->fields.invoke_impl)(
            callBackStartPlay->fields.method_code,
            callBackStartPlay->fields.method);
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        dialogText = v23->fields.dialogText;
        _9__0 = v12->fields.__9__0;
        v34 = (CommonUI_o *)Instance;
        v35 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__0 )
        {
          _9__0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(
            _9__0,
            (Il2CppObject *)v12,
            Method_EventSvtControl___c__DisplayClass57_1__boxGachaPlayVoice_b__0__,
            0);
          v12->fields.__9__0 = _9__0;
          Instance = (Il2CppObject *)sub_1C9403C(&v12->fields.__9__0, _9__0);
        }
        if ( !v34 )
          sub_1C942F0(Instance, v31);
        CommonUI__OpenNotificationDialog(v34, v35, dialogText, _9__0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  const MethodInfo *v10; // x1
  System_String_o **p_specialSvtVoice; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x24
  int v15; // w8
  unsigned int v16; // w27
  __int64 v17; // x28
  System_String_o *v18; // x0
  System_String_array *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x1
  __int64 v22; // x1
  VoicePlayCondMaster_o *v23; // x26
  System_Collections_Generic_List_object__o *v24; // x23
  System_Collections_Generic_List_object__o *v25; // x24
  __int64 size; // x20
  unsigned __int64 v27; // x28
  System_String_o *v28; // x27
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  int v33; // w29
  System_Random_o *v34; // x25
  unsigned int v35; // w25
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v40; // w19
  __int64 v41; // x8
  System_String_o *v42; // x27
  Il2CppObject *Item; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  EventSvtControl_o *v46; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4D26B83 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor___79006976);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&System_Random_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D26B83 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C9403C(&this->fields.randomVoiceList, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_79;
  v46 = this;
  if ( SLODWORD(voiceIds->max_length) >= 2 )
  {
    v23 = (VoicePlayCondMaster_o *)Instance;
    v24 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    v25 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_59156080(
      v25,
      voiceIds->max_length,
      (const MethodInfo_386A670 *)Method_System_Collections_Generic_List_string___ctor___79006976);
    if ( !v25 )
      goto LABEL_79;
    System_Collections_Generic_List_object___AddRange(
      v25,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_string__AddRange__);
    size = (unsigned int)v25->fields._size;
    if ( (int)size >= 1 )
    {
      v27 = 0;
      do
      {
        if ( v27 >= LODWORD(voiceIds->max_length) )
LABEL_71:
          sub_1C942F8(Instance);
        if ( !v23 )
          goto LABEL_79;
        v28 = voiceIds->m_Items[v27];
        Instance = VoicePlayCondMaster__isVoicePlay(v23, svtId, v28, 0, -1, -1, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( !v24 )
            goto LABEL_79;
          items = v24->fields._items;
          v30 = Method_System_Collections_Generic_List_string__Add__;
          ++v24->fields._version;
          if ( !items )
            goto LABEL_79;
          v31 = v24->fields._size;
          if ( (unsigned int)v31 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)v28,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + v31;
            v24->fields._size = v31 + 1;
            v32[4] = (Il2CppClass *)v28;
            Instance = sub_1C9403C(v32 + 4, v28);
          }
        }
      }
      while ( size != ++v27 );
    }
    if ( !v24 )
      goto LABEL_79;
    v33 = v24->fields._size - 1;
    if ( v33 >= 0 )
    {
      do
      {
        v34 = (System_Random_o *)sub_1C942E4(System_Random_TypeInfo);
        System_Random___ctor(v34, 0);
        if ( !v34 )
          goto LABEL_79;
        Instance = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v34->klass->vtable._7_Next.methodPtr)(
                     v34,
                     (unsigned int)v24->fields._size,
                     v34->klass->vtable._7_Next.method);
        if ( !v46->fields.voiceListMission )
          goto LABEL_79;
        v35 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v47,
          (System_Collections_Generic_List_object__o *)v46->fields.voiceListMission,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v48 = v47;
        do
        {
          v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v48,
                  (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v36 )
            break;
          current = v48.fields._current;
          if ( !v48.fields._current )
            sub_1C942F0(v36, v37);
          monitor = (int)v48.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            v40 = 0;
            while ( 1 )
            {
              if ( v40 >= monitor )
                sub_1C942F8(v36);
              v41 = *((_QWORD *)&current[2].klass + (int)v40);
              if ( !v41 )
                sub_1C942F0(v36, v37);
              v42 = *(System_String_o **)(v41 + 16);
              Item = System_Collections_Generic_List_object___get_Item(
                       v24,
                       v35,
                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
              v36 = System_String__op_Equality(v42, (System_String_o *)Item, 0);
              if ( v36 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v40 >= monitor )
                goto LABEL_57;
            }
            *p_randomVoiceList = (struct ServantVoiceData_array *)current;
            sub_1C9403C(p_randomVoiceList, current);
          }
LABEL_57:
          ;
        }
        while ( !*p_randomVoiceList );
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v48,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( *p_randomVoiceList )
          goto LABEL_74;
        if ( v35 >= LODWORD(voiceIds->max_length) )
          goto LABEL_71;
        System_Collections_Generic_List_object___Remove(
          v25,
          (Il2CppObject *)voiceIds->m_Items[v35],
          (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v33 >= 0 );
    }
  }
  else
  {
    Instance = (__int64)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_79;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v47,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v48 = v47;
    p_specialSvtVoice = &this->fields.specialSvtVoice;
    do
    {
      IsNullOrEmpty = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v48,
                        (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !IsNullOrEmpty )
        break;
      v14 = v48.fields._current;
      if ( !v48.fields._current )
        sub_1C942F0(IsNullOrEmpty, v13);
      v15 = (int)v48.fields._current[1].monitor;
      if ( v15 >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= v15 )
            sub_1C942F8(IsNullOrEmpty);
          v17 = *((_QWORD *)&v14[2].klass + (int)v16);
          if ( !v17 )
            sub_1C942F0(IsNullOrEmpty, v13);
          if ( !LODWORD(voiceIds->max_length) )
            sub_1C942F8(IsNullOrEmpty);
          if ( System_String__op_Equality(*(System_String_o **)(v17 + 16), voiceIds->m_Items[0], 0)
            && System_String__IsNullOrEmpty(*p_specialSvtVoice, 0) )
          {
            *p_randomVoiceList = (struct ServantVoiceData_array *)v14;
            sub_1C9403C(p_randomVoiceList, v14);
            goto LABEL_28;
          }
          IsNullOrEmpty = System_String__IsNullOrEmpty(*p_specialSvtVoice, 0);
          if ( !IsNullOrEmpty )
          {
            v18 = *(System_String_o **)(v17 + 16);
            if ( !v18 )
              sub_1C942F0(0, v13);
            v19 = System_String__Split(v18, 0x5Fu, 0, 0);
            if ( !v19 )
              sub_1C942F0(0, v20);
            if ( !LODWORD(v19->max_length) )
              sub_1C942F8(v19);
            v21 = System_String__Concat_64456008(
                    v19->m_Items[0],
                    (System_String_o *)StringLiteral_16163/*"_"*/,
                    *p_specialSvtVoice,
                    0);
            IsNullOrEmpty = System_String__op_Equality(*(System_String_o **)(v17 + 16), v21, 0);
            if ( IsNullOrEmpty )
              break;
          }
          v15 = (int)v14[1].monitor;
          if ( (int)++v16 >= v15 )
            goto LABEL_28;
        }
        *p_randomVoiceList = (struct ServantVoiceData_array *)v14;
        sub_1C9403C(p_randomVoiceList, v14);
        v22 = StringLiteral_1/*""*/;
        *p_specialSvtVoice = (System_String_o *)StringLiteral_1/*""*/;
        sub_1C9403C(p_specialSvtVoice, v22);
      }
LABEL_28:
      ;
    }
    while ( !*p_randomVoiceList );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v48,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  if ( *p_randomVoiceList )
  {
LABEL_74:
    v46->fields.callbakEndPlay = callbackEnds;
    Instance = sub_1C9403C(&v46->fields.callbakEndPlay, callbackEnds);
    randomVoiceList = v46->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      v46->fields.maxPlayCnt = randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(v46, v10);
      return;
    }
LABEL_79:
    sub_1C942F0(Instance, v10);
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
  const MethodInfo *v10; // x1
  VoicePlayCondMaster_o *v11; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v17; // x1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Random_o *v24; // x21
  int32_t v25; // w21
  struct ServantVoiceData_array *Item; // x0
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v28; // x0
  System_Exception_o *v29; // x19
  System_String_o *v30; // x0
  __int64 v31; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D26B82 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C94098(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C94098(&System_Random_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26B82 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v28 = sub_1C940AC(&System_Exception_TypeInfo);
      v29 = (System_Exception_o *)sub_1C942E4(v28);
      v30 = (System_String_o *)sub_1C940AC(&StringLiteral_25653/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_66163836(v29, v30, 0);
      v31 = sub_1C940AC(&Method_EventSvtControl_playPurchaseVoice__);
      sub_1C941C0(v29, v31);
    }
    this->fields.callbackStopVoice = callback;
    sub_1C9403C(&this->fields.callbackStopVoice, callback);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_35;
    v11 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)this->fields.voiceListShop,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v12 )
        break;
      current = v33.fields._current;
      if ( !v33.fields._current )
        sub_1C942F0(v12, v13);
      if ( !LODWORD(v33.fields._current[1].monitor) )
        sub_1C942F8(v12);
      klass = v33.fields._current[2].klass;
      if ( !klass )
        sub_1C942F0(v12, v13);
      if ( !v11 )
        sub_1C942F0(v12, v13);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(v11, svtId, (System_String_o *)klass->_1.name, 0, -1, -1, 0, 0);
      if ( isVoicePlay )
      {
        if ( !v8 )
          sub_1C942F0(isVoicePlay, v17);
        v18 = System_Collections_Generic_List_object___Contains(
                v8,
                current,
                (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
        if ( !v18 )
        {
          items = v8->fields._items;
          v21 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++v8->fields._version;
          if ( !items )
            sub_1C942F0(v18, v19);
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              current,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v23[4] = (Il2CppClass *)current;
            sub_1C9403C(v23 + 4, current);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v24 = (System_Random_o *)sub_1C942E4(System_Random_TypeInfo);
    System_Random___ctor(v24, 0);
    if ( !v8 || !v24 )
      goto LABEL_35;
    v25 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v24->klass->vtable._7_Next.methodPtr)(
            v24,
            (unsigned int)v8->fields._size,
            v24->klass->vtable._7_Next.method);
    if ( this->fields.beforeVoiceIdx == v25 )
      v25 = (v25 + 1) % v8->fields._size;
    Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                              v8,
                                              v25,
                                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = Item;
    Instance = (Il2CppObject *)sub_1C9403C(&this->fields.randomVoiceList, Item);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v25;
    if ( !randomVoiceList )
LABEL_35:
      sub_1C942F0(Instance, v10);
    this->fields.maxPlayCnt = randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v10);
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
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_T__o *v13; // x23
  int32_t v14; // w22
  int32_t beforeVoiceIdx; // w9
  int v16; // w1
  const MethodInfo_37C7D08 *v17; // x4
  EventSvtControl___c_c *v18; // x0
  System_Func_T__TResult__o *_9__45_0; // x22
  Il2CppObject *v20; // x24
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *v23; // x0
  struct ServantVoiceData_array *key; // x0
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

  if ( (byte_4D26B81 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
    sub_1C94098(&int_____TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_EventSvtControl___c__playVoice_b__45_0__);
    sub_1C94098(&EventSvtControl___c_TypeInfo);
    byte_4D26B81 = 1;
  }
  *(_QWORD *)&v32.fields.value = 0;
  voiceInfoList = 0;
  v32.fields.key = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.forcePlayVoiceSvtIdList = v5;
  p_forcePlayVoiceSvtIdList = &this->fields.forcePlayVoiceSvtIdList;
  sub_1C9403C(&this->fields.forcePlayVoiceSvtIdList, v5);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.voicePlayedValueList = v7;
  p_voicePlayedValueList = &this->fields.voicePlayedValueList;
  sub_1C9403C(&this->fields.voicePlayedValueList, v7);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v9);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_1C9403C(&this->fields.callbackStopVoice, callback);
    PlayableVoiceInfoList = EventSvtControl__TryGetPlayableVoiceInfoList(
                              this,
                              &voiceInfoList,
                              this->fields.voiceListRand,
                              v10);
    if ( (PlayableVoiceInfoList & 1) != 0 )
    {
      v13 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_43;
      if ( voiceInfoList->fields._size == 1 )
      {
        v14 = 0;
      }
      else
      {
        beforeVoiceIdx = this->fields.beforeVoiceIdx;
        if ( (beforeVoiceIdx & 0x80000000) == 0 )
        {
          if ( beforeVoiceIdx <= voiceInfoList->fields._size - 1 )
            v16 = this->fields.beforeVoiceIdx;
          else
            v16 = voiceInfoList->fields._size - 1;
          this->fields.beforeVoiceIdx = v16;
          *(_QWORD *)&v34.fields.value = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
                                           v13,
                                           v16,
                                           (const MethodInfo_37E5D64 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__).fields.key;
          v34.fields.key = (Il2CppObject *)&v32;
          System_Collections_Generic_KeyValuePair_object__int____ctor(
            v34,
            0,
            Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
            v17);
          PlayableVoiceInfoList = (__int64)voiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_43;
          System_Collections_Generic_List_KeyValuePair_object__int____set_Item(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            this->fields.beforeVoiceIdx,
            v32,
            (const MethodInfo_37E5DBC *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
          v13 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        }
        v18 = EventSvtControl___c_TypeInfo;
        if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
          v18 = EventSvtControl___c_TypeInfo;
        }
        _9__45_0 = (System_Func_T__TResult__o *)v18->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            v18 = EventSvtControl___c_TypeInfo;
          }
          v20 = (Il2CppObject *)v18->static_fields->__9;
          _9__45_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
          System_Func_KeyValuePair_object__int___int____ctor(
            _9__45_0,
            v20,
            Method_EventSvtControl___c__playVoice_b__45_0__,
            0);
          static_fields = EventSvtControl___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_KeyValuePair_ServantVoiceData____int___int__o *)_9__45_0;
          sub_1C9403C(&static_fields->__9__45_0, _9__45_0);
        }
        v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                                     (System_Func_TSource__TResult__o *)_9__45_0,
                                                                     (const MethodInfo_31CE2D4 *)Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
        v23 = System_Linq_Enumerable__ToArray_int_(
                v22,
                (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
        PlayableVoiceInfoList = RandomUtility__GetRandomRangeIndex(v23, 0, 0);
        v13 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        if ( !voiceInfoList )
LABEL_43:
          sub_1C942F0(PlayableVoiceInfoList, v12);
        v14 = PlayableVoiceInfoList;
      }
      Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
               v13,
               0,
               (const MethodInfo_37E5D64 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
      key = (struct ServantVoiceData_array *)BasicHelper__IndexValue_KeyValuePair_object__int__(
                                               v13,
                                               v14,
                                               Item,
                                               (const MethodInfo_318A410 *)Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____).fields.key;
      this->fields.randomVoiceList = key;
      PlayableVoiceInfoList = sub_1C9403C(&this->fields.randomVoiceList, key);
      randomVoiceList = this->fields.randomVoiceList;
      this->fields.beforeVoiceIdx = v14;
      if ( randomVoiceList )
      {
        this->fields.maxPlayCnt = randomVoiceList->max_length;
        EventSvtControl__setVoiceForm(this, v12);
        forcePlayVoiceSvtIdList = this->fields.forcePlayVoiceSvtIdList;
        if ( forcePlayVoiceSvtIdList )
        {
          size = (unsigned int)forcePlayVoiceSvtIdList->fields._size;
          if ( (int)size < 1 )
            return;
          if ( *p_voicePlayedValueList )
          {
            if ( (*p_voicePlayedValueList)->fields._size <= v14 )
              return;
            v28 = sub_1C94140(int_____TypeInfo, (unsigned int)size);
            v29 = 0;
            v30 = (_QWORD *)(v28 + 32);
            do
            {
              PlayableVoiceInfoList = sub_1C94140(int___TypeInfo, 2);
              if ( !*p_forcePlayVoiceSvtIdList )
                goto LABEL_43;
              v31 = (_DWORD *)PlayableVoiceInfoList;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        *p_forcePlayVoiceSvtIdList,
                                        v29,
                                        (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
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
                                        v14,
                                        (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( v31[6] <= 1u )
                goto LABEL_44;
              v31[9] = PlayableVoiceInfoList;
              if ( !v28 )
                goto LABEL_43;
              if ( v29 >= *(unsigned int *)(v28 + 24) )
LABEL_44:
                sub_1C942F8(PlayableVoiceInfoList);
              *v30 = v31;
              sub_1C9403C(v30, v31);
              ++v29;
              ++v30;
            }
            while ( size != v29 );
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            PlayableVoiceInfoList = (__int64)NetworkManager__getRequest_object_(
                                               0,
                                               (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
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
  sub_1C9403C(&this->fields.asstName, assetName);
  this->fields.performanceRoot = performanceRoot;
  sub_1C9403C(&this->fields.performanceRoot, performanceRoot);
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
  sub_1C9403C(p_voiceListBoxGacha, v9);
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
  sub_1C9403C(&this->fields.asstName, assetName);
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
  sub_1C9403C(v7, v8);
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

  if ( (byte_4D26B7F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_4D26B7F = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_1C9403C(&this->fields.asstName, assetName);
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
  sub_1C9403C(p_voiceListRand, v14);
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
  sub_1C9403C(p_voiceListMission, v16);
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
  sub_1C9403C(p_voiceListShop, v18);
  this->fields.voiceListOverwrite = 0;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_1C9403C(p_voiceListOverwrite, 0);
  *((_DWORD *)p_voiceListOverwrite - 26) = -1;
}


void EventSvtControl__setVoiceForm(EventSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Collections_Generic_List_object__o *monitor; // x0
  __int64 form; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v7; // x25
  EventSvtControl___c__DisplayClass44_0_o *v8; // x22
  struct ServantVoiceData_o *v9; // x1
  EventSvtControl___c__DisplayClass44_0_Fields *p_fields; // x21
  System_Predicate_int__o *v11; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  UIStandFigureR_o *v15; // x21
  System_Action_o *v16; // x22
  Il2CppObject *v17; // [xsp+8h] [xbp-68h]

  if ( (byte_4D26B80 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EventSvtControl_svtVoicePlay__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Exists__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Predicate_int__TypeInfo);
    sub_1C94098(&Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__);
    sub_1C94098(&EventSvtControl___c__DisplayClass44_0_TypeInfo);
    byte_4D26B80 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v17 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_20;
  if ( SLODWORD(randomVoiceList->max_length) >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = (EventSvtControl___c__DisplayClass44_0_o *)sub_1C942E4(EventSvtControl___c__DisplayClass44_0_TypeInfo);
      EventSvtControl___c__DisplayClass44_0___ctor(v8, 0);
      if ( v7 >= LODWORD(randomVoiceList->max_length) )
        sub_1C942F8(monitor);
      if ( !v8 )
        break;
      v9 = randomVoiceList->m_Items[v7];
      v8->fields.voice = v9;
      p_fields = &v8->fields;
      sub_1C9403C(&v8->fields, v9);
      v11 = (System_Predicate_int__o *)sub_1C942E4(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v11,
        (Il2CppObject *)v8,
        Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__,
        0);
      if ( !v3 )
        break;
      monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                               v3,
                                                               (System_Predicate_T__o *)v11,
                                                               (const MethodInfo_384E41C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        if ( !p_fields->voice )
          break;
        form = (unsigned int)p_fields->voice->fields.form;
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
            *(const MethodInfo_384DE10 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = form;
        }
      }
      if ( (__int64)++v7 >= SLODWORD(randomVoiceList->max_length) )
        goto LABEL_16;
    }
LABEL_20:
    sub_1C942F0(monitor, form);
  }
LABEL_16:
  monitor = (System_Collections_Generic_List_object__o *)v17[5].monitor;
  if ( !monitor )
    goto LABEL_20;
  monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           monitor,
                                                           0,
                                                           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
  if ( !monitor )
    goto LABEL_20;
  v15 = *(UIStandFigureR_o **)&monitor->fields._size;
  v16 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v12; // x4

  if ( (byte_4D26B89 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26B89 = 1;
  }
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( targetVoiceIds )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C942F0(0, v10);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    this->fields.callbakEndPlay = callback;
    sub_1C9403C(&this->fields.callbakEndPlay, callback);
    this->fields.randomVoiceList = 0;
    sub_1C9403C(&this->fields.randomVoiceList, 0);
    EventSvtControl__TryPlayVoiceInternal(
      this,
      svtId,
      (System_Collections_Generic_IReadOnlyList_string__o *)targetVoiceIds,
      (VoicePlayCondMaster_o *)MasterData_object,
      v12);
  }
}


void EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  __int64 v6; // x1

  if ( (byte_4D26B88 & 1) == 0 )
  {
    sub_1C94098(&SoundManager_TypeInfo);
    sub_1C94098(&StringLiteral_24108/*"svtVoicePlay"*/);
    byte_4D26B88 = 1;
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
      sub_1C942F0(0, v6);
    SePlayer__Destroy(*p_player, 0);
    this->fields.player = 0;
    sub_1C9403C(&this->fields.player, 0);
    this->fields.callbakEndPlay = 0;
    sub_1C9403C(&this->fields.callbakEndPlay, 0);
    *(_QWORD *)&this->fields.maxPlayCnt = 0;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_72095472(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_24108/*"svtVoicePlay"*/,
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
  if ( (byte_4D26B84 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_1C94098(&Method_EventSvtControl_SvtVoicePlayProc__);
    byte_4D26B84 = 1;
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
        sub_1C942F8(this);
      v6 = randomVoiceList->m_Items[playCnt];
      if ( v6 )
      {
        additionalPerformances = v6->fields.additionalPerformances;
        v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)v2, Method_EventSvtControl_SvtVoicePlayProc__, 0);
        EventSvtControl__PlayPerformance(v2, additionalPerformances, 0, 1, v8, v9);
        return;
      }
LABEL_13:
      sub_1C942F0(this, method);
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
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Random_o *v25; // x20
  int32_t v26; // w0
  struct ServantVoiceData_array *Item; // x0
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D26B91 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C94098(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C94098(&System_Random_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26B91 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               eventId,
               (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v13 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_34;
        v14 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v29,
          (System_Collections_Generic_List_object__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v30 = v29;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v30,
                  (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v15 )
            break;
          current = v30.fields._current;
          if ( !v30.fields._current )
            sub_1C942F0(v15, v16);
          if ( !LODWORD(v30.fields._current[1].monitor) )
            sub_1C942F8(v15);
          klass = v30.fields._current[2].klass;
          if ( !klass )
            sub_1C942F0(v15, v16);
          if ( !v14 )
            sub_1C942F0(v15, v16);
          isVoicePlay = VoicePlayCondMaster__isVoicePlay(v14, svtId, (System_String_o *)klass->_1.name, 0, -1, -1, 0, 0);
          if ( isVoicePlay )
          {
            if ( !v13 )
              sub_1C942F0(isVoicePlay, v20);
            items = v13->fields._items;
            v22 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v13->fields._version;
            if ( !items )
              sub_1C942F0(isVoicePlay, v20);
            size = v13->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                current,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v24[4] = (Il2CppClass *)current;
              sub_1C9403C(v24 + 4, current);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v30,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v13 )
        {
          if ( v13->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_1C9403C(&this->fields.callbackStopVoice, callback);
            v25 = (System_Random_o *)sub_1C942E4(System_Random_TypeInfo);
            System_Random___ctor(v25, 0);
            if ( v25 )
            {
              v26 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v25->klass->vtable._7_Next.methodPtr)(
                      v25,
                      (unsigned int)v13->fields._size,
                      v25->klass->vtable._7_Next.method);
              Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                        v13,
                                                        v26,
                                                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
              this->fields.randomVoiceList = Item;
              Instance = (Il2CppObject *)sub_1C9403C(&this->fields.randomVoiceList, Item);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v10);
                return;
              }
            }
LABEL_34:
            sub_1C942F0(Instance, v10);
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, v11);
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
  if ( (byte_4D26BBC & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_EventSvtControl___c__DisplayClass72_0__PlayPerformanceProc_b__0__);
    sub_1C94098(&EventSvtControl___c__DisplayClass72_0_TypeInfo);
    sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (EventSvtControl__PlayPerformanceProc_d__72_o *)sub_1C94098(&UnityEngine_WaitUntil_TypeInfo);
    byte_4D26BBC = 1;
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
    v5 = (Il2CppObject *)sub_1C942E4(EventSvtControl___c__DisplayClass72_0_TypeInfo);
    System_Object___ctor(v5, 0);
    v2->fields.__8__1 = (struct EventSvtControl___c__DisplayClass72_0_o *)v5;
    sub_1C9403C(&v2->fields.__8__1, v5);
    this = (EventSvtControl__PlayPerformanceProc_d__72_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    v6 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v6;
    sub_1C9403C(&this->fields, v6);
    this = (EventSvtControl__PlayPerformanceProc_d__72_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    animName = (Il2CppObject *)v2->fields.animName;
    this->fields.__2__current = animName;
    this = (EventSvtControl__PlayPerformanceProc_d__72_o *)sub_1C9403C(&this->fields.__2__current, animName);
    delay = v2->fields.delay;
    if ( delay > 0.0 )
    {
      v9 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v9, delay, 0);
      v2->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = &v2->fields.__2__current;
      sub_1C9403C(p__2__current, v9);
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
            UnityEngine_Animation__Play_71854448((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0);
            if ( v2->fields.isWaitPerformance )
            {
              v13 = (Il2CppObject *)v2->fields.__8__1;
              v14 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v14,
                v13,
                Method_EventSvtControl___c__DisplayClass72_0__PlayPerformanceProc_b__0__,
                0);
              v15 = (UnityEngine_WaitUntil_o *)sub_1C942E4(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v15, v14, 0);
              v2->fields.__2__current = (Il2CppObject *)v15;
              v16 = &v2->fields.__2__current;
              sub_1C9403C(v16, v15);
              *((_DWORD *)v16 - 2) = 2;
              return 1;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_21:
    sub_1C942F0(this, method);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_EventSvtControl__PlayPerformanceProc_d__72_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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

  if ( (byte_4D26BB8 & 1) == 0 )
  {
    sub_1C94098(&EventSvtControl___c_TypeInfo);
    byte_4D26BB8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventSvtControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventSvtControl___c_TypeInfo->static_fields->__9 = (struct EventSvtControl___c_o *)v1;
  sub_1C9403C(EventSvtControl___c_TypeInfo->static_fields, v1);
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
    sub_1C942F0(this, 0);
  return x->fields.id;
}


int32_t EventSvtControl___c___playVoice_b__45_0(
        EventSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_ServantVoiceData____int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4D26BB9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Value__);
    byte_4D26BB9 = 1;
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
    sub_1C942F0(this, a);
  return System_Int32__Equals_65926068((int32_t)&v5, voice->fields.form, 0);
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
  this = (EventSvtControl___c__DisplayClass57_1_o *)sub_1C9403C(&this[1].fields.__9__0, vdArray);
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
    sub_1C942F0(this, method);
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

  if ( (byte_4D26BBA & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_ServantVoiceData___);
    sub_1C94098(&System_Func_ServantVoiceData__bool__TypeInfo);
    sub_1C94098(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__1__);
    byte_4D26BBA = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1C942E4(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C9403C(&this->fields.__9__1, _9__1);
  }
  return BasicHelper__Any_object__51926292(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_3185514 *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool EventSvtControl___c__DisplayClass61_0___PlayEventTradeVoice_b__1(
        EventSvtControl___c__DisplayClass61_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C942F0(this, 0);
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

  if ( (byte_4D26BBB & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_ServantVoiceData___);
    sub_1C94098(&System_Func_ServantVoiceData__bool__TypeInfo);
    sub_1C94098(&Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__1__);
    byte_4D26BBB = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1C942E4(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C9403C(&this->fields.__9__1, _9__1);
  }
  return BasicHelper__Any_object__51926292(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_3185514 *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool EventSvtControl___c__DisplayClass62_0___PlayEventCraftVoice_b__1(
        EventSvtControl___c__DisplayClass62_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0);
}