void __fastcall EventSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3F0C2 & 1) == 0 )
  {
    sub_1BDB878(&EventSvtControl_TypeInfo, v1);
    byte_4B3F0C2 = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *objectRef; // x21
  Il2CppObject *m_target; // x2
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v14; // x1
  System_Action_o *v15; // x21
  struct System_Action_o *v16; // x0
  System_Action_c *v17; // x1
  struct System_Action_o **p_performanceEndAction; // x20
  __int64 v19; // x1
  UnityEngine_GameObject_o *transform; // x0
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s10
  float v25; // s8
  float v26; // s9
  Il2CppObject *ComponentInChildren_object; // x21
  struct System_Action_o *v28; // x8
  UnityEngine_GameObject_o *v29; // x20
  EventSvtControl_c *v30; // x0
  float v31; // s10
  UnityEngine_GameObject_o *v32; // x20
  EventSvtControl_o *v33; // x0
  const MethodInfo *v34; // x1
  UnityEngine_Vector3_o v35; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B3F0C0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, endAction);
    sub_1BDB878(&Method_EventSvtControl_ReleasePerformance__, v6);
    sub_1BDB878(&EventSvtControl_TypeInfo, v7);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, v8);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_3984/*"CallPerformanceEndAction"*/, v10);
    byte_4B3F0C0 = 1;
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
      v14 = *(_QWORD *)&endAction->fields.extra_arg;
LABEL_21:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64))m_target)(original_method_info, v14);
      return;
    }
    return;
  }
  v15 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0LL);
  v16 = (struct System_Action_o *)System_Delegate__Combine(
                                    (System_Delegate_o *)endAction,
                                    (System_Delegate_o *)v15,
                                    0LL);
  if ( v16 )
  {
    v17 = System_Action_TypeInfo;
    if ( v16->klass != System_Action_TypeInfo || (this->fields.performanceEndAction = v16, v16->klass != v17) )
    {
      v33 = (EventSvtControl_o *)sub_1BDBD94(v16);
      EventSvtControl__CallPerformanceEndAction(v33, v34);
      return;
    }
    p_performanceEndAction = &this->fields.performanceEndAction;
  }
  else
  {
    p_performanceEndAction = &this->fields.performanceEndAction;
    this->fields.performanceEndAction = 0LL;
  }
  sub_1BDB81C(p_performanceEndAction);
  transform = this->fields.objectRef;
  if ( !transform
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = this->fields.objectRef) == 0LL) )
  {
LABEL_28:
    sub_1BDBAD4(transform, v19);
  }
  v24 = v21;
  v25 = v22;
  v26 = v23;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 transform,
                                 (const MethodInfo_3088784 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
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
      v29 = this->fields.objectRef;
      v30 = EventSvtControl_TypeInfo;
      v31 = v24 - (float)SLODWORD(ComponentInChildren_object[10].monitor);
      if ( !EventSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo);
        v30 = EventSvtControl_TypeInfo;
      }
      v35.fields.x = v31;
      v35.fields.y = v25;
      v35.fields.z = v26;
      transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v29, v30->static_fields->BASE_MOVE_TIME, v35, 0LL);
      if ( transform )
      {
        v32 = transform;
        LODWORD(transform[1].monitor) = 3;
        transform[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        sub_1BDB81C(&v32[3].monitor);
        *(_QWORD *)&v32[3].fields.m_CachedPtr = StringLiteral_3984/*"CallPerformanceEndAction"*/;
        sub_1BDB81C(&v32[3].fields);
        return;
      }
    }
    goto LABEL_28;
  }
  v28 = *p_performanceEndAction;
  if ( *p_performanceEndAction )
  {
    m_target = v28->fields.m_target;
    original_method_info = v28->fields.original_method_info;
    v14 = *(_QWORD *)&v28->fields.extra_arg;
    goto LABEL_21;
  }
}


void __fastcall EventSvtControl__EndPlay(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventSvtControl_o *v4; // x19
  __int64 v5; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  int v7; // w9
  ServantVoiceData_o *v8; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x5

  v4 = this;
  if ( (byte_4B3F0B1 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (EventSvtControl_o *)sub_1BDB878(&Method_EventSvtControl_EndPlayProc__, v5);
    byte_4B3F0B1 = 1;
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
      v7 = v4->fields.playCnt - 1;
      if ( v7 >= randomVoiceList->max_length )
        sub_1BDBADC(this, method, v2, v3);
      v8 = randomVoiceList->m_Items[v7];
      if ( !v8 )
LABEL_10:
        sub_1BDBAD4(this, method);
      additionalPerformances = v8->fields.additionalPerformances;
      v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)v4, Method_EventSvtControl_EndPlayProc__, 0LL);
      EventSvtControl__PlayPerformance(v4, additionalPerformances, 2, 1, v10, v11);
    }
  }
}


void __fastcall EventSvtControl__EndPlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventSvtControl_o *v4; // x19
  __int64 v5; // x1
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v8; // x8
  struct SePlayer_o **p_player; // x0
  struct System_Action_o **p_callbakEndPlay; // x0
  System_Action_o *callbakEndPlay; // x20
  struct System_Action_o **p_callbackStopVoice; // x0
  struct System_Action_o *callbackStopVoice; // x20

  v4 = this;
  if ( (byte_4B3F0B2 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23906/*"svtVoicePlay"*/, method);
    this = (EventSvtControl_o *)sub_1BDB878(&StringLiteral_5487/*"END_PLAY"*/, v5);
    byte_4B3F0B2 = 1;
  }
  playCnt = v4->fields.playCnt;
  if ( (int)playCnt < v4->fields.maxPlayCnt )
  {
    randomVoiceList = v4->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= randomVoiceList->max_length )
        sub_1BDBADC(this, method, v2, v3);
      v8 = randomVoiceList->m_Items[playCnt];
      if ( v8 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v4,
          (System_String_o *)StringLiteral_23906/*"svtVoicePlay"*/,
          v8->fields.delay,
          0LL);
        return;
      }
    }
LABEL_16:
    sub_1BDBAD4(this, method);
  }
  p_player = &v4->fields.player;
  if ( v4->fields.player )
  {
    *p_player = 0LL;
    sub_1BDB81C(p_player);
  }
  p_callbakEndPlay = &v4->fields.callbakEndPlay;
  callbakEndPlay = v4->fields.callbakEndPlay;
  v4->fields.playCnt = 0;
  *(_WORD *)&v4->fields.isUnSkippable = 0;
  v4->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    *p_callbakEndPlay = 0LL;
    sub_1BDB81C(p_callbakEndPlay);
    ActionExtensions__Call(callbakEndPlay, 0LL);
  }
  else
  {
    p_callbackStopVoice = &v4->fields.callbackStopVoice;
    callbackStopVoice = v4->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      *p_callbackStopVoice = 0LL;
      sub_1BDB81C(p_callbackStopVoice);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackStopVoice->fields.m_target)(
        callbackStopVoice->fields.original_method_info,
        *(_QWORD *)&callbackStopVoice->fields.extra_arg);
    }
    else
    {
      this = (EventSvtControl_o *)v4->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5487/*"END_PLAY"*/, 0LL);
    }
  }
}


bool __fastcall EventSvtControl__GetIsUnSkippableByVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v15; // w23
  __int64 v16; // x24
  int v17; // w21
  bool v18; // w19
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B3F0BC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, voiceId);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_4B3F0BC = 1;
  }
  memset(&v21, 0, sizeof(v21));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_1BDBAD4(0LL, voiceId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v21 = v20;
  do
  {
LABEL_5:
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v9 )
    {
      v18 = 0;
      v17 = 8;
      goto LABEL_15;
    }
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1BDBAD4(v9, v10);
    monitor = (int)v21.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= monitor )
      sub_1BDBADC(v9, v10, v11, v12);
    v16 = *((_QWORD *)&current[2].klass + (int)v15);
    if ( !v16 )
      sub_1BDBAD4(v9, v10);
    v9 = System_String__op_Equality(*(System_String_o **)(v16 + 16), voiceId, 0LL);
    if ( v9 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v15 >= monitor )
      goto LABEL_5;
  }
  v17 = 7;
  v18 = *(_BYTE *)(v16 + 68) != 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v18 && v17 == 7;
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
  __int64 Master_object; // x0
  System_String_o *v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v29; // x23
  unsigned __int64 v30; // x29
  __int64 v31; // x28
  System_String_o **m_Items; // x20
  Il2CppObject *v33; // x26
  System_String_o **v34; // x25
  System_String_o **v35; // x23
  System_String_array *v36; // x20
  int32_t v37; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListCraft; // x22
  __int64 v39; // x19
  System_Func_object__bool__o *v40; // x28
  System_Collections_Generic_List_T__o *v41; // x0
  System_Func_T__bool__o *v42; // x1
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  int32_t v47; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v55; // w23
  __int64 v56; // x8
  __int64 v57; // x0
  const MethodInfo *v58; // x1
  System_Action_o *v59; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v60; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v61; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+40h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4B3F0BA & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_ServantVoiceData_____, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v9);
    sub_1BDB878(&DataManager_TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_1BDB878(&System_Func_ServantVoiceData____bool__TypeInfo, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_1BDB878(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__0__, v21);
    sub_1BDB878(&EventSvtControl___c__DisplayClass61_0_TypeInfo, v22);
    byte_4B3F0BA = 1;
  }
  memset(&v63, 0, sizeof(v63));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1BDBADC(Master_object, v24, v25, v26);
  }
  v59 = callback;
  v29 = (VoicePlayCondMaster_o *)Master_object;
  v60 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v30 = 0LL;
    v31 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v61 = v29;
    do
    {
      v33 = (Il2CppObject *)sub_1BDBAC4(EventSvtControl___c__DisplayClass61_0_TypeInfo);
      System_Object___ctor(v33, 0LL);
      if ( v30 >= targetVoiceIds->max_length )
        goto LABEL_45;
      if ( !v33 )
        goto LABEL_44;
      v33[1].klass = (Il2CppClass *)m_Items[v30];
      v34 = (System_String_o **)&v33[1];
      Master_object = sub_1BDB81C(&v33[1]);
      if ( !v29 )
        goto LABEL_44;
      Master_object = VoicePlayCondMaster__isVoicePlay(v29, v7, *v34, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( (Master_object & 1) != 0 )
      {
        v35 = m_Items;
        v36 = targetVoiceIds;
        v37 = v7;
        voiceListCraft = this->fields.voiceListCraft;
        v39 = v31;
        v40 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v40,
          v33,
          Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__0__,
          0LL);
        v41 = (System_Collections_Generic_List_T__o *)voiceListCraft;
        v7 = v37;
        targetVoiceIds = v36;
        m_Items = v35;
        v29 = v61;
        v42 = (System_Func_T__bool__o *)v40;
        v31 = v39;
        Master_object = BasicHelper__Any_object_(
                          v41,
                          v42,
                          (const MethodInfo_301CDFC *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( (Master_object & 1) != 0 )
        {
          if ( !v60 )
            goto LABEL_44;
          v24 = *v34;
          items = v60->fields._items;
          v44 = Method_System_Collections_Generic_List_string__Add__;
          ++v60->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v60->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v60,
              (Il2CppObject *)v24,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v60->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v24;
            Master_object = sub_1BDB81C(v46 + 4);
          }
        }
      }
    }
    while ( v31 != ++v30 );
  }
  if ( !v60 )
    goto LABEL_44;
  v47 = UnityEngine_Random__Range_70244360(0, v60->fields._size, 0LL);
  callback = v59;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v60,
                              v47,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1BDB81C(&this->fields.callbakEndPlay);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BDB81C(&this->fields.randomVoiceList);
  Master_object = (__int64)this->fields.voiceListCraft;
  if ( !Master_object )
LABEL_44:
    sub_1BDBAD4(Master_object, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v63 = v62;
LABEL_29:
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v49 )
      break;
    current = v63.fields._current;
    if ( !v63.fields._current )
      sub_1BDBAD4(v49, v50);
    monitor = (int)v63.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v55 = 0;
      while ( 1 )
      {
        if ( v55 >= monitor )
          sub_1BDBADC(v49, v50, v51, v52);
        v56 = *((_QWORD *)&current[2].klass + (int)v55);
        if ( !v56 )
          sub_1BDBAD4(v49, v50);
        v49 = System_String__op_Equality(*(System_String_o **)(v56 + 16), Item, 0LL);
        if ( v49 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v55 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v57 = sub_1BDB81C(&this->fields.randomVoiceList);
      if ( !*p_randomVoiceList )
        sub_1BDBAD4(v57, v58);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v58);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x23
  __int64 v27; // x26
  __int64 v28; // x27
  System_String_o *v29; // x25
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int32_t v34; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v42; // w24
  __int64 v43; // x8
  __int64 v44; // x0
  const MethodInfo *v45; // x1
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B3F0B8 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4B3F0B8 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1BDBAD4(Instance, v20);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1BDBADC(Instance, v20, v21, v22);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v25 = (VoicePlayCondMaster_o *)Instance;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v27 = 0LL;
    v28 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v25 )
    {
      v29 = targetVoiceIds->m_Items[v27];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v25, svtId, v29, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_42;
        items = v26->fields._items;
        v31 = Method_System_Collections_Generic_List_string__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)v29,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v29;
          Instance = (DataManager_o *)sub_1BDB81C(v33 + 4);
        }
      }
      if ( v28 == v27 )
        goto LABEL_23;
      if ( ++v27 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v26 )
    goto LABEL_42;
  v34 = UnityEngine_Random__Range_70244360(0, v26->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v26,
                              v34,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1BDB81C(&this->fields.callbakEndPlay);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BDB81C(&this->fields.randomVoiceList);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v47 = v46;
LABEL_27:
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v36 )
      break;
    current = v47.fields._current;
    if ( !v47.fields._current )
      sub_1BDBAD4(v36, v37);
    monitor = (int)v47.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        if ( v42 >= monitor )
          sub_1BDBADC(v36, v37, v38, v39);
        v43 = *((_QWORD *)&current[2].klass + (int)v42);
        if ( !v43 )
          sub_1BDBAD4(v36, v37);
        v36 = System_String__op_Equality(*(System_String_o **)(v43 + 16), Item, 0LL);
        if ( v36 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v42 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v44 = sub_1BDB81C(&this->fields.randomVoiceList);
      if ( !*p_randomVoiceList )
        sub_1BDBAD4(v44, v45);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v45);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 Master_object; // x0
  System_String_o *v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v29; // x23
  unsigned __int64 v30; // x29
  __int64 v31; // x28
  System_String_o **m_Items; // x20
  Il2CppObject *v33; // x26
  System_String_o **v34; // x25
  System_String_o **v35; // x23
  System_String_array *v36; // x20
  int32_t v37; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListTrade; // x22
  __int64 v39; // x19
  System_Func_object__bool__o *v40; // x28
  System_Collections_Generic_List_T__o *v41; // x0
  System_Func_T__bool__o *v42; // x1
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  int32_t v47; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v55; // w23
  __int64 v56; // x8
  __int64 v57; // x0
  const MethodInfo *v58; // x1
  System_Action_o *v59; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v60; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v61; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+40h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4B3F0B9 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_ServantVoiceData_____, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v9);
    sub_1BDB878(&DataManager_TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_1BDB878(&System_Func_ServantVoiceData____bool__TypeInfo, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_1BDB878(&Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__0__, v21);
    sub_1BDB878(&EventSvtControl___c__DisplayClass60_0_TypeInfo, v22);
    byte_4B3F0B9 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1BDBADC(Master_object, v24, v25, v26);
  }
  v59 = callback;
  v29 = (VoicePlayCondMaster_o *)Master_object;
  v60 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v30 = 0LL;
    v31 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v61 = v29;
    do
    {
      v33 = (Il2CppObject *)sub_1BDBAC4(EventSvtControl___c__DisplayClass60_0_TypeInfo);
      System_Object___ctor(v33, 0LL);
      if ( v30 >= targetVoiceIds->max_length )
        goto LABEL_45;
      if ( !v33 )
        goto LABEL_44;
      v33[1].klass = (Il2CppClass *)m_Items[v30];
      v34 = (System_String_o **)&v33[1];
      Master_object = sub_1BDB81C(&v33[1]);
      if ( !v29 )
        goto LABEL_44;
      Master_object = VoicePlayCondMaster__isVoicePlay(v29, v7, *v34, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( (Master_object & 1) != 0 )
      {
        v35 = m_Items;
        v36 = targetVoiceIds;
        v37 = v7;
        voiceListTrade = this->fields.voiceListTrade;
        v39 = v31;
        v40 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v40,
          v33,
          Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__0__,
          0LL);
        v41 = (System_Collections_Generic_List_T__o *)voiceListTrade;
        v7 = v37;
        targetVoiceIds = v36;
        m_Items = v35;
        v29 = v61;
        v42 = (System_Func_T__bool__o *)v40;
        v31 = v39;
        Master_object = BasicHelper__Any_object_(
                          v41,
                          v42,
                          (const MethodInfo_301CDFC *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( (Master_object & 1) != 0 )
        {
          if ( !v60 )
            goto LABEL_44;
          v24 = *v34;
          items = v60->fields._items;
          v44 = Method_System_Collections_Generic_List_string__Add__;
          ++v60->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v60->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v60,
              (Il2CppObject *)v24,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v60->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v24;
            Master_object = sub_1BDB81C(v46 + 4);
          }
        }
      }
    }
    while ( v31 != ++v30 );
  }
  if ( !v60 )
    goto LABEL_44;
  v47 = UnityEngine_Random__Range_70244360(0, v60->fields._size, 0LL);
  callback = v59;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v60,
                              v47,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1BDB81C(&this->fields.callbakEndPlay);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BDB81C(&this->fields.randomVoiceList);
  Master_object = (__int64)this->fields.voiceListTrade;
  if ( !Master_object )
LABEL_44:
    sub_1BDBAD4(Master_object, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v63 = v62;
LABEL_29:
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v49 )
      break;
    current = v63.fields._current;
    if ( !v63.fields._current )
      sub_1BDBAD4(v49, v50);
    monitor = (int)v63.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v55 = 0;
      while ( 1 )
      {
        if ( v55 >= monitor )
          sub_1BDBADC(v49, v50, v51, v52);
        v56 = *((_QWORD *)&current[2].klass + (int)v55);
        if ( !v56 )
          sub_1BDBAD4(v49, v50);
        v49 = System_String__op_Equality(*(System_String_o **)(v56 + 16), Item, 0LL);
        if ( v49 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v55 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v57 = sub_1BDB81C(&this->fields.randomVoiceList);
      if ( !*p_randomVoiceList )
        sub_1BDBAD4(v57, v58);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v58);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__PlayPerformance(
        EventSvtControl_o *this,
        ServantVoicePerformance_o *performances,
        int32_t timing,
        bool isWaitPerformance,
        System_Action_o *playEndAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct UnityEngine_GameObject_o **p_objectRef; // x24
  UnityEngine_Object_o *objectRef; // x25
  __int64 v14; // x1
  UnityEngine_GameObject_o *performanceRoot; // x0
  System_String_o *assetName; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v18; // x25
  UnityEngine_Object_o *animationRef; // x25
  UnityEngine_Object_o *v20; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v22; // x22
  const MethodInfo *v23; // x4
  System_Collections_IEnumerator_o *v24; // x1

  if ( (byte_4B3F0BE & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, performances);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    byte_4B3F0BE = 1;
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
    *p_objectRef = BoxGachaResultEffectComponent__getEffect(assetName, transform, 0LL);
    sub_1BDB81C(&this->fields.objectRef);
    v18 = (UnityEngine_Object_o *)*p_objectRef;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Implicit(v18, 0LL) )
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
    sub_1BDBAD4(performanceRoot, v14);
  this->fields.animationRef = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                  performanceRoot,
                                                                  (const MethodInfo_3088784 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  sub_1BDB81C(&this->fields.animationRef);
  v20 = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v20, 0LL) )
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
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v22->fields.name, 0LL) )
  {
    v24 = EventSvtControl__PlayPerformanceProc(
            this,
            v22->fields.name,
            v22->fields.delay,
            isWaitPerformance,
            playEndAction,
            v23);
    UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
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

  if ( (byte_4B3F0BF & 1) == 0 )
  {
    sub_1BDB878(&EventSvtControl__PlayPerformanceProc_d__71_TypeInfo, animName);
    byte_4B3F0BF = 1;
  }
  v11 = isWaitPerformance;
  v12 = sub_1BDBAC4(EventSvtControl__PlayPerformanceProc_d__71_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 32) = this;
  sub_1BDB81C(v12 + 32);
  *(_QWORD *)(v12 + 40) = animName;
  sub_1BDB81C(v12 + 40);
  *(float *)(v12 + 48) = delay;
  *(_BYTE *)(v12 + 64) = v11;
  *(_QWORD *)(v12 + 72) = playEndAction;
  sub_1BDB81C(v12 + 72);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x23
  __int64 v27; // x26
  __int64 v28; // x27
  System_String_o *v29; // x25
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int32_t v34; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v42; // w24
  __int64 v43; // x8
  __int64 v44; // x0
  const MethodInfo *v45; // x1
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B3F0B7 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4B3F0B7 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1BDBAD4(Instance, v20);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1BDBADC(Instance, v20, v21, v22);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v25 = (VoicePlayCondMaster_o *)Instance;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v27 = 0LL;
    v28 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v25 )
    {
      v29 = targetVoiceIds->m_Items[v27];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v25, svtId, v29, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_42;
        items = v26->fields._items;
        v31 = Method_System_Collections_Generic_List_string__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)v29,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v29;
          Instance = (DataManager_o *)sub_1BDB81C(v33 + 4);
        }
      }
      if ( v28 == v27 )
        goto LABEL_23;
      if ( ++v27 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v26 )
    goto LABEL_42;
  v34 = UnityEngine_Random__Range_70244360(0, v26->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v26,
                              v34,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1BDB81C(&this->fields.callbakEndPlay);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BDB81C(&this->fields.randomVoiceList);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v47 = v46;
LABEL_27:
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v36 )
      break;
    current = v47.fields._current;
    if ( !v47.fields._current )
      sub_1BDBAD4(v36, v37);
    monitor = (int)v47.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        if ( v42 >= monitor )
          sub_1BDBADC(v36, v37, v38, v39);
        v43 = *((_QWORD *)&current[2].klass + (int)v42);
        if ( !v43 )
          sub_1BDBAD4(v36, v37);
        v36 = System_String__op_Equality(*(System_String_o **)(v43 + 16), Item, 0LL);
        if ( v36 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v42 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v44 = sub_1BDB81C(&this->fields.randomVoiceList);
      if ( !*p_randomVoiceList )
        sub_1BDBAD4(v44, v45);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v45);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__ReleasePerformance(EventSvtControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *objectRef; // x19

  if ( (byte_4B3F0C1 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3F0C1 = 1;
  }
  this->fields.animationRef = 0LL;
  sub_1BDB81C(&this->fields.animationRef);
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(objectRef, 0LL);
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
  BoxGachaTalkInfo_o *v20; // x21
  const MethodInfo *v21; // x1
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_int__o *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  struct System_String_array *befVoiceIds; // x9
  unsigned __int64 v29; // x24
  System_String_o *v30; // x25
  _BOOL8 isVoicePlay; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  const MethodInfo *v34; // x3
  Il2CppObject *current; // x20
  int monitor; // w8
  int i; // w27
  __int64 v38; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  unsigned __int64 v42; // x25
  int32_t v43; // w22
  System_String_o *v44; // x23
  __int64 Item; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x20
  void *v50; // x8
  int v51; // w27
  __int64 v52; // x24
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  __int64 v55; // [xsp+10h] [xbp-C0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-B8h]
  struct System_String_array *v57; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B3F0B6 & 1) == 0 )
  {
    sub_1BDB878(&BoxGachaTalkInfo_TypeInfo, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4B3F0B6 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  v20 = (BoxGachaTalkInfo_o *)sub_1BDBAC4(BoxGachaTalkInfo_TypeInfo);
  BoxGachaTalkInfo___ctor(v20, v21);
  *info = v20;
  sub_1BDB81C(info);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v25 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_70;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_70;
  v55 = *(_QWORD *)&befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  if ( (int)v55 >= 1 )
  {
    if ( (unsigned int)*(_QWORD *)&befVoiceIds->max_length )
    {
      v29 = 0LL;
      v57 = befVoiceIds;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          break;
        v30 = befVoiceIds->m_Items[v29];
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v59,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v60 = v59;
        while ( 1 )
        {
          isVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v60,
                          (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !isVoicePlay )
            break;
          current = v60.fields._current;
          if ( !v60.fields._current )
            sub_1BDBAD4(isVoicePlay, v32);
          monitor = (int)v60.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            for ( i = 0; i < monitor; ++i )
            {
              if ( i >= (unsigned int)monitor )
                sub_1BDBADC(isVoicePlay, v32, v33, v34);
              v38 = *((_QWORD *)&current[2].klass + i);
              if ( !v38 )
                sub_1BDBAD4(isVoicePlay, v32);
              isVoicePlay = System_String__op_Equality(*(System_String_o **)(v38 + 16), v30, 0LL);
              if ( isVoicePlay )
              {
                if ( !MasterData_object )
                  sub_1BDBAD4(isVoicePlay, v32);
                isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                                (VoicePlayCondMaster_o *)MasterData_object,
                                svtId,
                                v30,
                                0LL,
                                -1LL,
                                -1,
                                0LL,
                                0LL,
                                0LL);
                if ( isVoicePlay )
                {
                  if ( !*info )
                    sub_1BDBAD4(0LL, v32);
                  BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v38 + 16),
                    *(System_String_o **)(v38 + 48),
                    v34);
                  if ( !v25 )
                    sub_1BDBAD4(isVoicePlay, v32);
                  items = v25->fields._items;
                  v40 = Method_System_Collections_Generic_List_int__Add__;
                  ++v25->fields._version;
                  if ( !items )
                    sub_1BDBAD4(isVoicePlay, v32);
                  size = v25->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v25,
                      v29,
                      *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v25->fields._size = size + 1;
                    items->m_Items[size + 1] = v29;
                  }
                }
              }
              monitor = (int)current[1].monitor;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v60,
          (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        befVoiceIds = v57;
        if ( ++v29 == (unsigned int)v55 )
          goto LABEL_39;
        if ( v29 >= v57->max_length )
          goto LABEL_71;
      }
LABEL_70:
      sub_1BDBAD4(Instance, v23);
    }
LABEL_71:
    sub_1BDBADC(Instance, v23, v26, v27);
  }
LABEL_39:
  if ( !v25 || !v25->fields._size )
    return 0;
  if ( (int)v55 >= 1 )
  {
    if ( !aftVoiceIds )
      goto LABEL_70;
    v42 = 0LL;
    v43 = 0;
    while ( v42 < aftVoiceIds->max_length )
    {
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_70;
      v44 = aftVoiceIds->m_Items[v42];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v59,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v60 = v59;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v60,
                 (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( (Item & 1) == 0 )
          break;
        v49 = v60.fields._current;
        if ( !v60.fields._current )
          sub_1BDBAD4(Item, v46);
        v50 = v60.fields._current[1].monitor;
        if ( (int)v50 >= 1 )
        {
          v51 = 0;
          do
          {
            if ( v51 >= (unsigned int)v50 )
              sub_1BDBADC(Item, v46, v47, v48);
            v52 = *((_QWORD *)&v49[2].klass + v51);
            if ( !v52 )
              sub_1BDBAD4(Item, v46);
            Item = System_String__op_Equality(*(System_String_o **)(v52 + 16), v44, 0LL);
            if ( (Item & 1) != 0 )
            {
              Item = System_Collections_Generic_List_int___get_Item(
                       v25,
                       v43,
                       (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( v42 == (unsigned int)Item )
              {
                if ( !*info )
                  sub_1BDBAD4(0LL, v46);
                BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v52 + 16),
                  *(System_String_o **)(v52 + 48),
                  v48);
                ++v43;
              }
            }
            LODWORD(v50) = v49[1].monitor;
            ++v51;
          }
          while ( v51 < (int)v50 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v60,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      if ( ++v42 == (unsigned int)v55 )
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
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BDB81C(&this->fields.asstName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 17);
  if ( listCraft )
    *v7 = listCraft;
  else
    *v7 = 0LL;
  sub_1BDB81C(v7);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetDiggingSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listDigging,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BDB81C(&this->fields.asstName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 14);
  if ( listDigging )
    *v7 = listDigging;
  else
    *v7 = 0LL;
  sub_1BDB81C(v7);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetOverwriteSpecialSvtVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  this->fields.specialSvtVoice = voiceId;
  sub_1BDB81C(&this->fields.specialSvtVoice);
}


void __fastcall EventSvtControl__SetOverwriteSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listOverwrite,
        System_String_o *assetName,
        const MethodInfo *method)
{
  EventSvtControl_o *v5; // x20

  v5 = this;
  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_1BDB81C(&this->fields.asstName);
  v5->fields.voiceListOverwrite = listOverwrite;
  v5 = (EventSvtControl_o *)((char *)v5 + 200);
  sub_1BDB81C(v5);
  LODWORD(v5[-1].fields.voiceListDigging) = -1;
}


void __fastcall EventSvtControl__SetRecipeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listRecipe,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BDB81C(&this->fields.asstName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 15);
  if ( listRecipe )
    *v7 = listRecipe;
  else
    *v7 = 0LL;
  sub_1BDB81C(v7);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetSvtFigureCollect(
        EventSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  this->fields.standFigureCollectList = collects;
  sub_1BDB81C(&this->fields.standFigureCollectList);
}


void __fastcall EventSvtControl__SetTradeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTrade,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BDB81C(&this->fields.asstName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 16);
  if ( listTrade )
    *v7 = listTrade;
  else
    *v7 = 0LL;
  sub_1BDB81C(v7);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetTreasureBoxSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTreasureBox,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BDB81C(&this->fields.asstName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 13);
  if ( listTreasureBox )
    *v7 = listTreasureBox;
  else
    *v7 = 0LL;
  sub_1BDB81C(v7);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SvtVoicePlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventSvtControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v11; // x8
  struct ServantVoiceData_array *v12; // x8
  __int64 v13; // x9
  int32_t asstName; // w20
  float FadeTime; // s0
  float v16; // s8
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
  const MethodInfo *v29; // x5
  struct ServantVoiceData_array *v30; // x8
  __int64 v31; // x9
  ServantVoiceData_o *v32; // x8
  struct ServantVoiceData_array *v33; // x8
  __int64 v34; // x9
  ServantVoiceData_o *v35; // x8
  struct System_Int32_array *multiFace; // x23
  unsigned __int64 v37; // x21
  int32_t v38; // w22

  v4 = this;
  if ( (byte_4B3F0B0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v5);
    sub_1BDB878(&Method_EventSvtControl_EndPlay__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    this = (EventSvtControl_o *)sub_1BDB878(&SoundManager_TypeInfo, v8);
    byte_4B3F0B0 = 1;
  }
  randomVoiceList = v4->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_43;
  playCnt = v4->fields.playCnt;
  if ( (unsigned int)playCnt >= randomVoiceList->max_length )
    goto LABEL_44;
  v11 = randomVoiceList->m_Items[playCnt];
  if ( !v11 )
    goto LABEL_43;
  v4->fields.vcName = v11->fields.id;
  this = (EventSvtControl_o *)sub_1BDB81C(&v4->fields.vcName);
  v12 = v4->fields.randomVoiceList;
  if ( !v12 )
    goto LABEL_43;
  v13 = v4->fields.playCnt;
  if ( (unsigned int)v13 >= v12->max_length )
    goto LABEL_44;
  this = (EventSvtControl_o *)v12->m_Items[v13];
  if ( !this )
    goto LABEL_43;
  v4->fields.isUnSkippable = BYTE4(this->fields.vcName);
  asstName = (int32_t)this->fields.asstName;
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
  this = (EventSvtControl_o *)v4->fields.standFigureCollectList;
  v16 = FadeTime;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_304FE28 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v17 = v4->fields.randomVoiceList;
    if ( !v17 )
      goto LABEL_43;
    v18 = v4->fields.playCnt;
    if ( (unsigned int)v18 >= v17->max_length )
      goto LABEL_44;
    v19 = v17->m_Items[v18];
    if ( !v19 )
      goto LABEL_43;
    standFigureCollectList = (System_Collections_Generic_List_object__o *)v4->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v19->fields.face;
      this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    0,
                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !this )
        goto LABEL_43;
      v22 = v4->fields.randomVoiceList;
      if ( !v22 )
        goto LABEL_43;
      v23 = v4->fields.playCnt;
      if ( (unsigned int)v23 >= v22->max_length )
        goto LABEL_44;
      v24 = v22->m_Items[v23];
      if ( !v24 )
        goto LABEL_43;
      this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
      if ( !this )
        goto LABEL_43;
      UIStandFigureR__SetFace_42993220((UIStandFigureR_o *)this, face, v24->fields.form, 0LL, v16, 0LL);
    }
    goto LABEL_21;
  }
  v33 = v4->fields.randomVoiceList;
  if ( !v33 )
    goto LABEL_43;
  v34 = v4->fields.playCnt;
  if ( (unsigned int)v34 >= v33->max_length )
    goto LABEL_44;
  v35 = v33->m_Items[v34];
  if ( !v35 )
    goto LABEL_43;
  multiFace = v35->fields.multiFace;
  if ( multiFace )
  {
    this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.standFigureCollectList,
                                  (const MethodInfo_304FE28 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( (_DWORD)this == multiFace->max_length )
    {
      if ( (int)this >= 1 )
      {
        v37 = 0LL;
        while ( v37 < (unsigned int)this )
        {
          this = (EventSvtControl_o *)v4->fields.standFigureCollectList;
          if ( !this )
            goto LABEL_43;
          v38 = multiFace->m_Items[v37 + 1];
          this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v37,
                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !this )
            goto LABEL_43;
          this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
          if ( !this )
            goto LABEL_43;
          UIStandFigureR__SetFace_42993220((UIStandFigureR_o *)this, v38, asstName, 0LL, v16, 0LL);
          this = *(EventSvtControl_o **)&multiFace->max_length;
          if ( (__int64)++v37 >= (int)this )
            goto LABEL_21;
        }
        goto LABEL_44;
      }
LABEL_21:
      v25 = v4->fields.asstName;
      vcName = v4->fields.vcName;
      volume = v4->fields.volume;
      v28 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)v4, Method_EventSvtControl_EndPlay__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v4->fields.player = SoundManager__playVoice_40520012(v25, vcName, volume, v28, 0, 0LL);
      this = (EventSvtControl_o *)sub_1BDB81C(&v4->fields.player);
      if ( v4->fields.isSkipPerformance )
        goto LABEL_28;
      v30 = v4->fields.randomVoiceList;
      if ( !v30 )
LABEL_43:
        sub_1BDBAD4(this, method);
      v31 = v4->fields.playCnt;
      if ( (unsigned int)v31 < v30->max_length )
      {
        v32 = v30->m_Items[v31];
        if ( v32 )
        {
          EventSvtControl__PlayPerformance(v4, v32->fields.additionalPerformances, 1, 0, 0LL, v29);
LABEL_28:
          ++v4->fields.playCnt;
          return;
        }
        goto LABEL_43;
      }
LABEL_44:
      sub_1BDBADC(this, method, v2, v3);
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
  __int64 v31; // x1
  __int64 v32; // x1
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_T__o *v34; // x24
  System_Collections_Generic_List_T__o *v35; // x22
  Il2CppObject *v36; // x0
  System_Collections_Generic_List_int__o *v37; // x1
  System_Collections_Generic_HashSet_T__o *v38; // x24
  _BOOL8 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  Il2CppObject *current; // x25
  Il2CppClass *klass; // x8
  EventSvtControl___c_c *v45; // x0
  System_String_o *v46; // x26
  System_Func_object__object__o *_9__64_0; // x27
  Il2CppObject *v48; // x28
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_string__o *v50; // x1
  Il2CppObject *v51; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x26
  Il2CppObject *Weight; // x2
  const MethodInfo_36121F4 *v55; // x4
  __int64 v56; // x1
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x26
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  __int64 Item; // x0
  __int64 v64; // x1
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
  __int64 v78; // x1
  struct System_Collections_Generic_List_int__o *voicePlayedValueList; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
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

  if ( (byte_4B3F0BD & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, voiceInfoList);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantVoiceRelationMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_VoiceMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__, v10);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v14);
    sub_1BDB878(&System_Func_ServantVoiceData__string__TypeInfo, v15);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_string__Add__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_string__Contains__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_string___ctor__, v18);
    sub_1BDB878(&System_Collections_Generic_HashSet_string__TypeInfo, v19);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__, v22);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v23);
    sub_1BDB878(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__, v24);
    sub_1BDB878(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__, v25);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v26);
    sub_1BDB878(&System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo, v27);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v28);
    sub_1BDB878(&Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__64_0__, v29);
    sub_1BDB878(&EventSvtControl___c_TypeInfo, v30);
    sub_1BDB878(&StringLiteral_820/*","*/, v31);
    sub_1BDB878(&StringLiteral_19566/*"forcePlayFirst"*/, v32);
    byte_4B3F0BD = 1;
  }
  memset(&v92, 0, sizeof(v92));
  condEntity = 0LL;
  v90.fields.key = 0LL;
  *(_QWORD *)&v90.fields.value = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v34 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v34,
    (const MethodInfo_3658594 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  v35 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v35,
    (const MethodInfo_3658594 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v35;
  sub_1BDB81C(voiceInfoList);
  v36 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
  if ( !v36 )
    goto LABEL_65;
  v85 = v34;
  OriginalSvtId = ServantVoiceRelationMaster__GetOriginalSvtId(
                    (ServantVoiceRelationMaster_o *)v36,
                    this->fields.svtId,
                    0LL);
  v38 = (System_Collections_Generic_HashSet_T__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v38,
    (const MethodInfo_3591DC4 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  if ( !servantVoiceGroupData )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v88,
    (System_Collections_Generic_List_object__o *)servantVoiceGroupData,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v92 = v88;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v92,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v39 )
      break;
    current = v92.fields._current;
    if ( !v92.fields._current )
      sub_1BDBAD4(v39, v40);
    if ( !LODWORD(v92.fields._current[1].monitor) )
      sub_1BDBADC(v39, v40, v41, v42);
    klass = v92.fields._current[2].klass;
    if ( !klass )
      sub_1BDBAD4(v39, v40);
    if ( !Master_object )
      sub_1BDBAD4(v39, v40);
    if ( VoicePlayCondMaster__isVoicePlay_42221840(
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
      v45 = EventSvtControl___c_TypeInfo;
      if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
        v45 = EventSvtControl___c_TypeInfo;
      }
      v46 = (System_String_o *)StringLiteral_820/*","*/;
      _9__64_0 = (System_Func_object__object__o *)v45->static_fields->__9__64_0;
      if ( !_9__64_0 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = EventSvtControl___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v45->static_fields->__9;
        _9__64_0 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_ServantVoiceData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__64_0,
          v48,
          Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__64_0__,
          0LL);
        static_fields = EventSvtControl___c_TypeInfo->static_fields;
        static_fields->__9__64_0 = (struct System_Func_ServantVoiceData__string__o *)_9__64_0;
        sub_1BDB81C(&static_fields->__9__64_0);
      }
      v50 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                                  (System_Func_TSource__TResult__o *)_9__64_0,
                                                                  (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
      v51 = (Il2CppObject *)System_String__Join_62614836(v46, v50, 0LL);
      if ( !v38 )
        sub_1BDBAD4(v51, v52);
      v53 = v51;
      if ( !System_Collections_Generic_HashSet_object___Contains(
              v38,
              v51,
              (const MethodInfo_35924B8 *)Method_System_Collections_Generic_HashSet_string__Contains__) )
      {
        System_Collections_Generic_HashSet_object___Add(
          v38,
          v53,
          (const MethodInfo_3592FA8 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
          v55);
        if ( !condEntity
          || VoicePlayCondEntity__GetScriptIntParam(condEntity, (System_String_o *)StringLiteral_19566/*"forcePlayFirst"*/, -1, 0LL) != 1 )
        {
          goto LABEL_36;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v57 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_VoiceMaster___);
        if ( !condEntity )
          sub_1BDBAD4(v57, v58);
        v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)v57;
        voiceId = condEntity->fields.voiceId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v61 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48263560(voiceId, 0LL);
        if ( !v59 )
          sub_1BDBAD4(v61, v62);
        if ( !DataMasterBase_object__object__object___TryGetEntity(
                v59,
                &entity,
                v61,
                (const MethodInfo_32E6940 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__) )
          goto LABEL_36;
        if ( !OriginalSvtId )
          sub_1BDBAD4(0LL, v56);
        Item = System_Collections_Generic_List_int___get_Item(
                 OriginalSvtId,
                 0,
                 (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !entity )
          sub_1BDBAD4(Item, v64);
        v65 = Item;
        monitor = (int32_t)entity[3].monitor;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsVoicePlayFlag = CondType__IsVoicePlayFlag(v65, monitor, 0LL);
        if ( !IsVoicePlayFlag )
        {
          if ( !v85 )
            sub_1BDBAD4(IsVoicePlayFlag, v56);
          v95 = v90;
          items = v85->fields._items;
          v74 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v85->fields._version;
          if ( !items )
            sub_1BDBAD4(IsVoicePlayFlag, v95.fields.key);
          size = v85->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v85,
              v95,
              *(const MethodInfo_3658E14 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = &items->obj + size;
            v85->fields._size = size + 1;
            v76[2].klass = (Il2CppClass *)v95.fields.key;
            v76 += 2;
            v76->monitor = *(void **)&v95.fields.value;
            v77 = sub_1BDB81C(v76);
          }
          if ( !entity )
            sub_1BDBAD4(v77, v78);
          voicePlayedValueList = this->fields.voicePlayedValueList;
          if ( !voicePlayedValueList )
            sub_1BDBAD4(0LL, v78);
          monitor_low = LODWORD(entity[3].monitor);
          v81 = voicePlayedValueList->fields._items;
          v82 = Method_System_Collections_Generic_List_int__Add__;
          ++voicePlayedValueList->fields._version;
          if ( !v81 )
            sub_1BDBAD4(voicePlayedValueList, monitor_low);
          v83 = voicePlayedValueList->fields._size;
          if ( (unsigned int)v83 >= v81->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              voicePlayedValueList,
              monitor_low,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
          }
          else
          {
            voicePlayedValueList->fields._size = v83 + 1;
            v81->m_Items[v83 + 1] = monitor_low;
          }
        }
        else
        {
LABEL_36:
          v68 = (System_Collections_Generic_List_T__o *)*voiceInfoList;
          if ( !*voiceInfoList )
            sub_1BDBAD4(0LL, v56);
          v94 = v90;
          v69 = v68->fields._items;
          v70 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v68->fields._version;
          if ( !v69 )
            sub_1BDBAD4(v68, v94.fields.key);
          v71 = v68->fields._size;
          if ( (unsigned int)v71 >= v69->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v68,
              v94,
              *(const MethodInfo_3658E14 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
          }
          else
          {
            v72 = &v69->obj + v71;
            v68->fields._size = v71 + 1;
            v72[2].klass = (Il2CppClass *)v94.fields.key;
            v72 += 2;
            v72->monitor = *(void **)&v94.fields.value;
            sub_1BDB81C(v72);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v92,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( !v85 )
    goto LABEL_65;
  v37 = OriginalSvtId;
  if ( v85->fields._size >= 1 )
  {
    this->fields.forcePlayVoiceSvtIdList = OriginalSvtId;
    sub_1BDB81C(&this->fields.forcePlayVoiceSvtIdList);
    *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v85;
    sub_1BDB81C(voiceInfoList);
    return 1;
  }
  if ( !*voiceInfoList )
LABEL_65:
    sub_1BDBAD4(v36, v37);
  return (*voiceInfoList)->fields._size > 0;
}


void __fastcall EventSvtControl__boxGachaPlayVoice(
        EventSvtControl_o *this,
        EventSvtControl_PlayBoxGachVoiceArg_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  __int64 v16; // x1
  __int128 v17; // q1
  const MethodInfo *v18; // x1
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  Il2CppObject *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  void **p_monitor; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  Il2CppClass *klass; // x28
  int namespaze; // w8
  unsigned int v30; // w25
  __int64 v31; // x29
  __int64 v32; // x0
  const MethodInfo *v33; // x1
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x8
  Il2CppObject *Instance; // x0
  __int64 v38; // x1
  System_String_o *v39; // x20
  System_Action_o *v40; // x23
  CommonUI_o *v41; // x19
  System_String_o *v42; // x21
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B3F0B5 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, arg);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BDB878(&EventSvtControl___c__DisplayClass56_0_TypeInfo, v10);
    sub_1BDB878(&Method_EventSvtControl___c__DisplayClass56_1__boxGachaPlayVoice_b__0__, v11);
    sub_1BDB878(&EventSvtControl___c__DisplayClass56_1_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_1/*""*/, v13);
    byte_4B3F0B5 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v14 = sub_1BDBAC4(EventSvtControl___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_35;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BDB81C(v14 + 16);
  v17 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v14 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v14 + 24) = v17;
  sub_1BDB81C(v14 + 24);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v18);
  System_String__IsNullOrEmpty(*(System_String_o **)(v14 + 24), 0LL);
  this->fields.callbakEndPlay = *(struct System_Action_o **)(v14 + 48);
  sub_1BDB81C(&this->fields.callbakEndPlay);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BDB81C(&this->fields.randomVoiceList);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_1BDBAD4(voiceListBoxGacha, v16);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v44 = v43;
LABEL_8:
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v20 = (Il2CppObject *)sub_1BDBAC4(EventSvtControl___c__DisplayClass56_1_TypeInfo);
    System_Object___ctor(v20, 0LL);
    if ( !v20 )
      sub_1BDBAD4(v21, v22);
    v20[1].monitor = (void *)v14;
    p_monitor = &v20[1].monitor;
    sub_1BDB81C(&v20[1].monitor);
    v20[1].klass = (Il2CppClass *)v44.fields._current;
    v24 = sub_1BDB81C(&v20[1]);
    klass = v20[1].klass;
    if ( !klass )
      sub_1BDBAD4(v24, v25);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v30 = 0;
      while ( 1 )
      {
        if ( v30 >= namespaze )
          sub_1BDBADC(v24, v25, v26, v27);
        v31 = *((_QWORD *)&klass->_1.byval_arg.data + (int)v30);
        if ( !v31 )
          sub_1BDBAD4(v24, v25);
        if ( !*p_monitor )
          sub_1BDBAD4(v24, v25);
        v24 = System_String__op_Equality(*(System_String_o **)(v31 + 16), *((System_String_o **)*p_monitor + 3), 0LL);
        if ( (v24 & 1) != 0 )
          break;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v30 >= namespaze )
          goto LABEL_8;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(*(System_String_o **)(v31 + 72), 0LL) )
      {
        *p_randomVoiceList = (struct ServantVoiceData_array *)v20[1].klass;
        v32 = sub_1BDB81C(&this->fields.randomVoiceList);
        if ( !*p_randomVoiceList )
          sub_1BDBAD4(v32, v33);
        this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
        if ( !*p_monitor )
          sub_1BDBAD4(v32, v33);
        this->fields.isSkipPerformance = *((_BYTE *)*p_monitor + 32);
        EventSvtControl__svtVoicePlay(this, v33);
        if ( !*p_monitor )
          sub_1BDBAD4(v34, v35);
        v36 = *((_QWORD *)*p_monitor + 5);
        if ( v36 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 24))(*(_QWORD *)(v36 + 64), *(_QWORD *)(v36 + 40));
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v39 = *(System_String_o **)(v31 + 72);
        v40 = (System_Action_o *)v20[2].klass;
        v41 = (CommonUI_o *)Instance;
        v42 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v40 )
        {
          v40 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(v40, v20, Method_EventSvtControl___c__DisplayClass56_1__boxGachaPlayVoice_b__0__, 0LL);
          v20[2].klass = (Il2CppClass *)v40;
          Instance = (Il2CppObject *)sub_1BDB81C(&v20[2]);
        }
        if ( !v41 )
          sub_1BDBAD4(Instance, v38);
        CommonUI__OpenNotificationDialog(v41, v42, v39, v40, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0, 0LL);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


bool __fastcall EventSvtControl__isUnskippable(EventSvtControl_o *this, const MethodInfo *method)
{
  return this->fields.player && this->fields.maxPlayCnt && this->fields.isUnSkippable;
}


void __fastcall EventSvtControl__playMissionVoice(
        EventSvtControl_o *this,
        System_String_array *voiceIds,
        int32_t svtId,
        System_Action_o *callbackEnds,
        const MethodInfo *method)
{
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
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  __int64 Instance; // x0
  const MethodInfo *v27; // x1
  System_String_o **p_specialSvtVoice; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  Il2CppObject *v33; // x24
  int v34; // w8
  unsigned int v35; // w27
  __int64 v36; // x28
  System_String_o *v37; // x0
  System_String_array *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_String_o *v42; // x1
  VoicePlayCondMaster_o *v43; // x26
  System_Collections_Generic_List_object__o *v44; // x23
  System_Collections_Generic_List_object__o *v45; // x24
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 size; // x20
  unsigned __int64 v49; // x28
  System_String_o *v50; // x27
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  int v55; // w29
  System_Random_o *v56; // x25
  il2cpp_array_size_t v57; // w25
  _BOOL8 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v64; // w19
  __int64 v65; // x8
  System_String_o *v66; // x27
  Il2CppObject *Item; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  EventSvtControl_o *v70; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B3F0AE & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, voiceIds);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__AddRange__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Remove__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor___77036408, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_1BDB878(&System_Random_TypeInfo, v21);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BDB878(&StringLiteral_16088/*"_"*/, v23);
    sub_1BDB878(&StringLiteral_1/*""*/, v24);
    byte_4B3F0AE = 1;
  }
  memset(&v72, 0, sizeof(v72));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BDB81C(&this->fields.randomVoiceList);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_79;
  v70 = this;
  if ( (int)voiceIds->max_length >= 2 )
  {
    v43 = (VoicePlayCondMaster_o *)Instance;
    v44 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v44,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
    v45 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_57497088(
      v45,
      voiceIds->max_length,
      (const MethodInfo_36D5600 *)Method_System_Collections_Generic_List_string___ctor___77036408);
    if ( !v45 )
      goto LABEL_79;
    System_Collections_Generic_List_object___AddRange(
      v45,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_string__AddRange__);
    size = (unsigned int)v45->fields._size;
    if ( (int)size >= 1 )
    {
      v49 = 0LL;
      do
      {
        if ( v49 >= voiceIds->max_length )
LABEL_71:
          sub_1BDBADC(Instance, v27, v46, v47);
        if ( !v43 )
          goto LABEL_79;
        v50 = voiceIds->m_Items[v49];
        Instance = VoicePlayCondMaster__isVoicePlay(v43, svtId, v50, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v44 )
            goto LABEL_79;
          items = v44->fields._items;
          v52 = Method_System_Collections_Generic_List_string__Add__;
          ++v44->fields._version;
          if ( !items )
            goto LABEL_79;
          v53 = v44->fields._size;
          if ( (unsigned int)v53 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v44,
              (Il2CppObject *)v50,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v54 = &items->obj.klass + v53;
            v44->fields._size = v53 + 1;
            v54[4] = (Il2CppClass *)v50;
            Instance = sub_1BDB81C(v54 + 4);
          }
        }
      }
      while ( size != ++v49 );
    }
    if ( !v44 )
      goto LABEL_79;
    v55 = v44->fields._size - 1;
    if ( v55 >= 0 )
    {
      do
      {
        v56 = (System_Random_o *)sub_1BDBAC4(System_Random_TypeInfo);
        System_Random___ctor(v56, 0LL);
        if ( !v56 )
          goto LABEL_79;
        Instance = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v56->klass->vtable._7_Next.method)(
                     v56,
                     (unsigned int)v44->fields._size,
                     v56->klass->vtable._8_NextDouble.methodPtr);
        if ( !v70->fields.voiceListMission )
          goto LABEL_79;
        v57 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v71,
          (System_Collections_Generic_List_object__o *)v70->fields.voiceListMission,
          (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v72 = v71;
        do
        {
          v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v72,
                  (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v58 )
            break;
          current = v72.fields._current;
          if ( !v72.fields._current )
            sub_1BDBAD4(v58, v59);
          monitor = (int)v72.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            v64 = 0;
            while ( 1 )
            {
              if ( v64 >= monitor )
                sub_1BDBADC(v58, v59, v60, v61);
              v65 = *((_QWORD *)&current[2].klass + (int)v64);
              if ( !v65 )
                sub_1BDBAD4(v58, v59);
              v66 = *(System_String_o **)(v65 + 16);
              Item = System_Collections_Generic_List_object___get_Item(
                       v44,
                       v57,
                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
              v58 = System_String__op_Equality(v66, (System_String_o *)Item, 0LL);
              if ( v58 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v64 >= monitor )
                goto LABEL_57;
            }
            *p_randomVoiceList = (struct ServantVoiceData_array *)current;
            sub_1BDB81C(p_randomVoiceList);
          }
LABEL_57:
          ;
        }
        while ( !*p_randomVoiceList );
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v72,
          (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( *p_randomVoiceList )
          goto LABEL_74;
        if ( v57 >= voiceIds->max_length )
          goto LABEL_71;
        System_Collections_Generic_List_object___Remove(
          v45,
          (Il2CppObject *)voiceIds->m_Items[v57],
          (const MethodInfo_36D72EC *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v55 >= 0 );
    }
  }
  else
  {
    Instance = (__int64)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_79;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v71,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v72 = v71;
    p_specialSvtVoice = &this->fields.specialSvtVoice;
    do
    {
      IsNullOrEmpty = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v72,
                        (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !IsNullOrEmpty )
        break;
      v33 = v72.fields._current;
      if ( !v72.fields._current )
        sub_1BDBAD4(IsNullOrEmpty, v30);
      v34 = (int)v72.fields._current[1].monitor;
      if ( v34 >= 1 )
      {
        v35 = 0;
        while ( 1 )
        {
          if ( v35 >= v34 )
            sub_1BDBADC(IsNullOrEmpty, v30, v31, v32);
          v36 = *((_QWORD *)&v33[2].klass + (int)v35);
          if ( !v36 )
            sub_1BDBAD4(IsNullOrEmpty, v30);
          if ( !voiceIds->max_length )
            sub_1BDBADC(IsNullOrEmpty, v30, v31, v32);
          if ( System_String__op_Equality(*(System_String_o **)(v36 + 16), voiceIds->m_Items[0], 0LL)
            && System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL) )
          {
            *p_randomVoiceList = (struct ServantVoiceData_array *)v33;
            sub_1BDB81C(p_randomVoiceList);
            goto LABEL_28;
          }
          IsNullOrEmpty = System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL);
          if ( !IsNullOrEmpty )
          {
            v37 = *(System_String_o **)(v36 + 16);
            if ( !v37 )
              sub_1BDBAD4(0LL, v30);
            v38 = System_String__Split(v37, 0x5Fu, 0, 0LL);
            if ( !v38 )
              sub_1BDBAD4(0LL, v39);
            if ( !v38->max_length )
              sub_1BDBADC(v38, v39, v40, v41);
            v42 = System_String__Concat_62610508(
                    v38->m_Items[0],
                    (System_String_o *)StringLiteral_16088/*"_"*/,
                    *p_specialSvtVoice,
                    0LL);
            IsNullOrEmpty = System_String__op_Equality(*(System_String_o **)(v36 + 16), v42, 0LL);
            if ( IsNullOrEmpty )
              break;
          }
          v34 = (int)v33[1].monitor;
          if ( (int)++v35 >= v34 )
            goto LABEL_28;
        }
        *p_randomVoiceList = (struct ServantVoiceData_array *)v33;
        sub_1BDB81C(p_randomVoiceList);
        *p_specialSvtVoice = (System_String_o *)StringLiteral_1/*""*/;
        sub_1BDB81C(p_specialSvtVoice);
      }
LABEL_28:
      ;
    }
    while ( !*p_randomVoiceList );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v72,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  if ( *p_randomVoiceList )
  {
LABEL_74:
    v70->fields.callbakEndPlay = callbackEnds;
    Instance = sub_1BDB81C(&v70->fields.callbakEndPlay);
    randomVoiceList = v70->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      v70->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(v70, v27);
      return;
    }
LABEL_79:
    sub_1BDBAD4(Instance, v27);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListShop; // x8
  System_Collections_Generic_List_object__o *v20; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v22; // x1
  VoicePlayCondMaster_o *v23; // x22
  _BOOL8 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v31; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Random_o *v38; // x21
  int v39; // w21
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v41; // x0
  System_Exception_o *v42; // x19
  System_String_o *v43; // x0
  __int64 v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B3F0AD & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v15);
    sub_1BDB878(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v16);
    sub_1BDB878(&System_Random_TypeInfo, v17);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4B3F0AD = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v41 = sub_1BDB88C(&System_Exception_TypeInfo);
      v42 = (System_Exception_o *)sub_1BDBAC4(v41);
      v43 = (System_String_o *)sub_1BDB88C(&StringLiteral_25487/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_64325028(v42, v43, 0LL);
      v44 = sub_1BDB88C(&Method_EventSvtControl_playPurchaseVoice__);
      sub_1BDB9A0(v42, v44);
    }
    this->fields.callbackStopVoice = callback;
    sub_1BDB81C(&this->fields.callbackStopVoice);
    v20 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_35;
    v23 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      (System_Collections_Generic_List_object__o *)this->fields.voiceListShop,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v46 = v45;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v24 )
        break;
      current = v46.fields._current;
      if ( !v46.fields._current )
        sub_1BDBAD4(v24, v25);
      if ( !LODWORD(v46.fields._current[1].monitor) )
        sub_1BDBADC(v24, v25, v26, v27);
      klass = v46.fields._current[2].klass;
      if ( !klass )
        sub_1BDBAD4(v24, v25);
      if ( !v23 )
        sub_1BDBAD4(v24, v25);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                      v23,
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
        if ( !v20 )
          sub_1BDBAD4(isVoicePlay, v31);
        v32 = System_Collections_Generic_List_object___Contains(
                v20,
                current,
                (const MethodInfo_36D6154 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
        if ( !v32 )
        {
          items = v20->fields._items;
          v35 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++v20->fields._version;
          if ( !items )
            sub_1BDBAD4(v32, v33);
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              current,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v37[4] = (Il2CppClass *)current;
            sub_1BDB81C(v37 + 4);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v38 = (System_Random_o *)sub_1BDBAC4(System_Random_TypeInfo);
    System_Random___ctor(v38, 0LL);
    if ( !v20 || !v38 )
      goto LABEL_35;
    v39 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v38->klass->vtable._7_Next.method)(
            v38,
            (unsigned int)v20->fields._size,
            v38->klass->vtable._8_NextDouble.methodPtr);
    if ( this->fields.beforeVoiceIdx == v39 )
      v39 = (v39 + 1) % v20->fields._size;
    this->fields.randomVoiceList = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                                      v20,
                                                                      v39,
                                                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    Instance = (Il2CppObject *)sub_1BDB81C(&this->fields.randomVoiceList);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v39;
    if ( !randomVoiceList )
LABEL_35:
      sub_1BDBAD4(Instance, v22);
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v22);
  }
}


void __fastcall EventSvtControl__playVoice(
        EventSvtControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  System_Collections_Generic_List_int__o *v23; // x21
  System_Collections_Generic_List_int__o **p_forcePlayVoiceSvtIdList; // x20
  System_Collections_Generic_List_int__o *v25; // x23
  struct System_Collections_Generic_List_int__o **p_voicePlayedValueList; // x21
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x3
  __int64 PlayableVoiceInfoList; // x0
  const MethodInfo *v30; // x1
  System_Collections_Generic_List_T__o *v31; // x23
  int32_t v32; // w22
  int32_t beforeVoiceIdx; // w9
  int v34; // w1
  const MethodInfo_36121F4 *v35; // x4
  EventSvtControl___c_c *v36; // x0
  System_Func_T__TResult__o *_9__45_0; // x22
  Il2CppObject *v38; // x24
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Int32_array *v41; // x0
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Collections_Generic_List_int__o *forcePlayVoiceSvtIdList; // x8
  __int64 size; // x23
  System_Int32_array_array *v45; // x19
  unsigned __int64 v46; // x24
  System_Int32_array **m_Items; // x25
  System_Int32_array *v48; // x26
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_KeyValuePair_object__int__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *voiceInfoList; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v53; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16

  if ( (byte_4B3F0AC & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____, callback);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1BDB878(&System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo, v7);
    sub_1BDB878(&int_____TypeInfo, v8);
    sub_1BDB878(&int___TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Key__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__, v17);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1BDB878(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v19);
    sub_1BDB878(&NetworkManager_TypeInfo, v20);
    sub_1BDB878(&Method_EventSvtControl___c__playVoice_b__45_0__, v21);
    sub_1BDB878(&EventSvtControl___c_TypeInfo, v22);
    byte_4B3F0AC = 1;
  }
  *(_QWORD *)&v51.fields.value = 0LL;
  voiceInfoList = 0LL;
  v51.fields.key = 0LL;
  v23 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.forcePlayVoiceSvtIdList = v23;
  p_forcePlayVoiceSvtIdList = &this->fields.forcePlayVoiceSvtIdList;
  sub_1BDB81C(&this->fields.forcePlayVoiceSvtIdList);
  v25 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.voicePlayedValueList = v25;
  p_voicePlayedValueList = &this->fields.voicePlayedValueList;
  sub_1BDB81C(&this->fields.voicePlayedValueList);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v27);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_1BDB81C(&this->fields.callbackStopVoice);
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
          *(_QWORD *)&v53.fields.value = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
                                           v31,
                                           v34,
                                           (const MethodInfo_3658AF8 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__).fields.key;
          v53.fields.key = (Il2CppObject *)&v51;
          System_Collections_Generic_KeyValuePair_object__int____ctor(
            v53,
            0LL,
            Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
            v35);
          PlayableVoiceInfoList = (__int64)voiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_43;
          System_Collections_Generic_List_KeyValuePair_object__int____set_Item(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            this->fields.beforeVoiceIdx,
            v51,
            (const MethodInfo_3658B50 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
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
          _9__45_0 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
          System_Func_KeyValuePair_object__int___int____ctor(
            _9__45_0,
            v38,
            Method_EventSvtControl___c__playVoice_b__45_0__,
            0LL);
          static_fields = EventSvtControl___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_KeyValuePair_ServantVoiceData____int___int__o *)_9__45_0;
          sub_1BDB81C(&static_fields->__9__45_0);
        }
        v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                                     (System_Func_TSource__TResult__o *)_9__45_0,
                                                                     (const MethodInfo_30617D0 *)Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
        v41 = System_Linq_Enumerable__ToArray_int_(
                v40,
                (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
        PlayableVoiceInfoList = RandomUtility__GetRandomRangeIndex(v41, 0, 0LL);
        v31 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        if ( !voiceInfoList )
LABEL_43:
          sub_1BDBAD4(PlayableVoiceInfoList, v30);
        v32 = PlayableVoiceInfoList;
      }
      Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
               v31,
               0,
               (const MethodInfo_3658AF8 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
      this->fields.randomVoiceList = (struct ServantVoiceData_array *)BasicHelper__IndexValue_KeyValuePair_object__int__(
                                                                        v31,
                                                                        v32,
                                                                        Item,
                                                                        (const MethodInfo_3021DA4 *)Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____).fields.key;
      PlayableVoiceInfoList = sub_1BDB81C(&this->fields.randomVoiceList);
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
            v45 = (System_Int32_array_array *)sub_1BDB920(int_____TypeInfo, (unsigned int)size);
            v46 = 0LL;
            m_Items = v45->m_Items;
            do
            {
              PlayableVoiceInfoList = sub_1BDB920(int___TypeInfo, 2LL);
              if ( !*p_forcePlayVoiceSvtIdList )
                goto LABEL_43;
              v48 = (System_Int32_array *)PlayableVoiceInfoList;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        *p_forcePlayVoiceSvtIdList,
                                        v46,
                                        (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !v48 )
                goto LABEL_43;
              if ( !v48->max_length )
                goto LABEL_44;
              v48->m_Items[1] = PlayableVoiceInfoList;
              PlayableVoiceInfoList = (__int64)*p_voicePlayedValueList;
              if ( !*p_voicePlayedValueList )
                goto LABEL_43;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        (System_Collections_Generic_List_int__o *)PlayableVoiceInfoList,
                                        v32,
                                        (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( v48->max_length <= 1 )
                goto LABEL_44;
              v48->m_Items[2] = PlayableVoiceInfoList;
              if ( !v45 )
                goto LABEL_43;
              if ( v46 >= v45->max_length )
LABEL_44:
                sub_1BDBADC(PlayableVoiceInfoList, v30, v49, v50);
              *m_Items = v48;
              sub_1BDB81C(m_Items);
              ++v46;
              ++m_Items;
            }
            while ( size != v46 );
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            PlayableVoiceInfoList = (__int64)NetworkManager__getRequest_object_(
                                               0LL,
                                               (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
            if ( PlayableVoiceInfoList )
            {
              TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)PlayableVoiceInfoList, v45, 0LL);
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
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListBoxGacha; // x0

  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_1BDB81C(&this->fields.asstName);
  this->fields.performanceRoot = performanceRoot;
  sub_1BDB81C(&this->fields.performanceRoot);
  p_voiceListBoxGacha = &this->fields.voiceListBoxGacha;
  if ( listBoxGacha )
    *p_voiceListBoxGacha = listBoxGacha;
  else
    *p_voiceListBoxGacha = 0LL;
  sub_1BDB81C(p_voiceListBoxGacha);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__setIndividualShopSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listIndividualShop,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BDB81C(&this->fields.asstName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 11);
  if ( listIndividualShop )
    *v7 = listIndividualShop;
  else
    *v7 = 0LL;
  sub_1BDB81C(v7);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__setSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listRand,
        System_Collections_Generic_List_ServantVoiceData____o *listMission,
        System_Collections_Generic_List_ServantVoiceData____o *listShop,
        System_String_o *assetName,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x0
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListMission; // x0
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListShop; // x0
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListOverwrite; // x19

  if ( (byte_4B3F0AA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, listRand);
    byte_4B3F0AA = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_1BDB81C(&this->fields.asstName);
  if ( listRand && listRand->fields._size >= 1 )
  {
    this->fields.voiceListRand = listRand;
    p_voiceListRand = &this->fields.voiceListRand;
  }
  else
  {
    this->fields.voiceListRand = 0LL;
    p_voiceListRand = &this->fields.voiceListRand;
  }
  sub_1BDB81C(p_voiceListRand);
  p_voiceListMission = &this->fields.voiceListMission;
  if ( listMission )
    *p_voiceListMission = listMission;
  else
    *p_voiceListMission = 0LL;
  sub_1BDB81C(p_voiceListMission);
  p_voiceListShop = &this->fields.voiceListShop;
  if ( listShop )
    *p_voiceListShop = listShop;
  else
    *p_voiceListShop = 0LL;
  sub_1BDB81C(p_voiceListShop);
  this->fields.voiceListOverwrite = 0LL;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_1BDB81C(p_voiceListOverwrite);
  *((_DWORD *)p_voiceListOverwrite - 26) = -1;
}


void __fastcall EventSvtControl__setVoiceForm(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  System_Collections_Generic_List_object__o *monitor; // x0
  __int64 bits; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v16; // x25
  Il2CppObject *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  Il2CppObject *v20; // x21
  System_Predicate_int__o *v21; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  UIStandFigureR_o *v25; // x21
  System_Action_o *v26; // x22
  Il2CppObject *v27; // [xsp+8h] [xbp-68h]

  if ( (byte_4B3F0AB & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EventSvtControl_svtVoicePlay__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Exists__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1BDB878(&System_Predicate_int__TypeInfo, v9);
    sub_1BDB878(&Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__, v10);
    sub_1BDB878(&EventSvtControl___c__DisplayClass44_0_TypeInfo, v11);
    byte_4B3F0AB = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v27 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_20;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = (Il2CppObject *)sub_1BDBAC4(EventSvtControl___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor(v17, 0LL);
      if ( v16 >= randomVoiceList->max_length )
        sub_1BDBADC(monitor, bits, v18, v19);
      if ( !v17 )
        break;
      v17[1].klass = (Il2CppClass *)randomVoiceList->m_Items[v16];
      v20 = v17 + 1;
      sub_1BDB81C(&v17[1]);
      v21 = (System_Predicate_int__o *)sub_1BDBAC4(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(v21, v17, Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__, 0LL);
      if ( !v12 )
        break;
      monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                               v12,
                                                               (System_Predicate_T__o *)v21,
                                                               (const MethodInfo_36B93AC *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        if ( !v20->klass )
          break;
        bits = v20->klass->_1.this_arg.bits;
        items = v12->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            bits,
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size + 1] = bits;
        }
      }
      if ( (__int64)++v16 >= (int)randomVoiceList->max_length )
        goto LABEL_16;
    }
LABEL_20:
    sub_1BDBAD4(monitor, bits);
  }
LABEL_16:
  monitor = (System_Collections_Generic_List_object__o *)v27[5].monitor;
  if ( !monitor )
    goto LABEL_20;
  monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           monitor,
                                                           0,
                                                           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
  if ( !monitor )
    goto LABEL_20;
  v25 = *(UIStandFigureR_o **)&monitor->fields._size;
  v26 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v26, v27, Method_EventSvtControl_svtVoicePlay__, 0LL);
  if ( !v25 )
    goto LABEL_20;
  UIStandFigureR__PreloadFormAssets(v25, v12, v26, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v25; // x23
  System_Collections_Generic_List_object__o *v26; // x24
  __int64 v27; // x26
  __int64 v28; // x27
  System_String_o *v29; // x25
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int32_t v34; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v42; // w25
  __int64 v43; // x8
  __int64 v44; // x0
  const MethodInfo *v45; // x1
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B3F0B4 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4B3F0B4 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !targetVoiceIds )
    goto LABEL_40;
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_21:
      sub_1BDBADC(Instance, v20, v21, v22);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_24;
  }
  v25 = (VoicePlayCondMaster_o *)Instance;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v27 = 0LL;
    v28 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v25 )
    {
      v29 = targetVoiceIds->m_Items[v27];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v25, svtId, v29, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v26 )
          break;
        items = v26->fields._items;
        v31 = Method_System_Collections_Generic_List_string__Add__;
        ++v26->fields._version;
        if ( !items )
          break;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)v29,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v29;
          Instance = (DataManager_o *)sub_1BDB81C(v33 + 4);
        }
      }
      if ( v28 == v27 )
        goto LABEL_22;
      if ( ++v27 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_21;
    }
LABEL_40:
    sub_1BDBAD4(Instance, v20);
  }
LABEL_22:
  if ( !v26 )
    goto LABEL_40;
  v34 = UnityEngine_Random__Range_70244360(0, v26->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v26,
                              v34,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_24:
  this->fields.callbakEndPlay = callback;
  sub_1BDB81C(&this->fields.callbakEndPlay);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BDB81C(&this->fields.randomVoiceList);
  Instance = (DataManager_o *)this->fields.voiceIndividualShopList;
  if ( !Instance )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v47 = v46;
LABEL_26:
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v36 )
      break;
    current = v47.fields._current;
    if ( !v47.fields._current )
      sub_1BDBAD4(v36, v37);
    monitor = (int)v47.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        if ( v42 >= monitor )
          sub_1BDBADC(v36, v37, v38, v39);
        v43 = *((_QWORD *)&current[2].klass + (int)v42);
        if ( !v43 )
          sub_1BDBAD4(v36, v37);
        v36 = System_String__op_Equality(*(System_String_o **)(v43 + 16), Item, 0LL);
        if ( v36 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v42 >= monitor )
          goto LABEL_26;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v44 = sub_1BDB81C(&this->fields.randomVoiceList);
      if ( !*p_randomVoiceList )
        sub_1BDBAD4(v44, v45);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v45);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  __int64 v7; // x1

  if ( (byte_4B3F0B3 & 1) == 0 )
  {
    sub_1BDB878(&SoundManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_23906/*"svtVoicePlay"*/, v3);
    byte_4B3F0B3 = 1;
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
      sub_1BDBAD4(0LL, v7);
    SePlayer__Destroy(*p_player, 0LL);
    this->fields.player = 0LL;
    sub_1BDB81C(&this->fields.player);
    this->fields.callbakEndPlay = 0LL;
    sub_1BDB81C(&this->fields.callbakEndPlay);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70269080(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23906/*"svtVoicePlay"*/,
    0LL);
}


void __fastcall EventSvtControl__svtVoicePlay(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventSvtControl_o *v4; // x19
  __int64 v5; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v9; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x5

  v4 = this;
  if ( (byte_4B3F0AF & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (EventSvtControl_o *)sub_1BDB878(&Method_EventSvtControl_SvtVoicePlayProc__, v5);
    byte_4B3F0AF = 1;
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
        sub_1BDBADC(this, method, v2, v3);
      v9 = randomVoiceList->m_Items[playCnt];
      if ( v9 )
      {
        additionalPerformances = v9->fields.additionalPerformances;
        v11 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(v11, (Il2CppObject *)v4, Method_EventSvtControl_SvtVoicePlayProc__, 0LL);
        EventSvtControl__PlayPerformance(v4, additionalPerformances, 0, 1, v11, v12);
        return;
      }
LABEL_13:
      sub_1BDBAD4(this, method);
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListOverwrite; // x8
  System_Collections_Generic_List_object__o *v26; // x21
  VoicePlayCondMaster_o *v27; // x23
  _BOOL8 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Random_o *v40; // x20
  int32_t v41; // w0
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B3F0BB & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v9);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_1BDB878(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_1BDB878(&System_Random_TypeInfo, v20);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4B3F0BB = 1;
  }
  memset(&v44, 0, sizeof(v44));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               eventId,
               (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v26 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_34;
        v27 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v43,
          (System_Collections_Generic_List_object__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v44 = v43;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v44,
                  (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v28 )
            break;
          current = v44.fields._current;
          if ( !v44.fields._current )
            sub_1BDBAD4(v28, v29);
          if ( !LODWORD(v44.fields._current[1].monitor) )
            sub_1BDBADC(v28, v29, v30, v31);
          klass = v44.fields._current[2].klass;
          if ( !klass )
            sub_1BDBAD4(v28, v29);
          if ( !v27 )
            sub_1BDBAD4(v28, v29);
          isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                          v27,
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
            if ( !v26 )
              sub_1BDBAD4(isVoicePlay, v35);
            items = v26->fields._items;
            v37 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v26->fields._version;
            if ( !items )
              sub_1BDBAD4(isVoicePlay, v35);
            size = v26->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                current,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v39[4] = (Il2CppClass *)current;
              sub_1BDB81C(v39 + 4);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v44,
          (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v26 )
        {
          if ( v26->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_1BDB81C(&this->fields.callbackStopVoice);
            v40 = (System_Random_o *)sub_1BDBAC4(System_Random_TypeInfo);
            System_Random___ctor(v40, 0LL);
            if ( v40 )
            {
              v41 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v40->klass->vtable._7_Next.method)(
                      v40,
                      (unsigned int)v26->fields._size,
                      v40->klass->vtable._8_NextDouble.methodPtr);
              this->fields.randomVoiceList = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                                                v26,
                                                                                v41,
                                                                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
              Instance = (Il2CppObject *)sub_1BDB81C(&this->fields.randomVoiceList);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v23);
                return;
              }
            }
LABEL_34:
            sub_1BDBAD4(Instance, v23);
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, v24);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct EventSvtControl_o *_4__this; // x22
  Il2CppObject *v9; // x21
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v11; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct EventSvtControl___c__DisplayClass71_0_o *_8__1; // x8
  Il2CppObject *v15; // x20
  System_Func_bool__o *v16; // x21
  UnityEngine_WaitUntil_o *v17; // x20
  Il2CppObject **v18; // x19
  struct System_Action_o *playEndAction; // x8

  v2 = this;
  if ( (byte_4B3F0C8 & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, method);
    sub_1BDB878(&Method_EventSvtControl___c__DisplayClass71_0__PlayPerformanceProc_b__0__, v3);
    sub_1BDB878(&EventSvtControl___c__DisplayClass71_0_TypeInfo, v4);
    sub_1BDB878(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)sub_1BDB878(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4B3F0C8 = 1;
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
    v9 = (Il2CppObject *)sub_1BDBAC4(EventSvtControl___c__DisplayClass71_0_TypeInfo);
    System_Object___ctor(v9, 0LL);
    v2->fields.__8__1 = (struct EventSvtControl___c__DisplayClass71_0_o *)v9;
    sub_1BDB81C(&v2->fields.__8__1);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    *(_QWORD *)&this->fields.__1__state = v2->fields.__4__this;
    sub_1BDB81C(&this->fields);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    this->fields.__2__current = (Il2CppObject *)v2->fields.animName;
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)sub_1BDB81C(&this->fields.__2__current);
    delay = v2->fields.delay;
    if ( delay > 0.0 )
    {
      v11 = (UnityEngine_WaitForSeconds_o *)sub_1BDBAC4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v11, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v11;
      p__2__current = &v2->fields.__2__current;
      sub_1BDB81C(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
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
            UnityEngine_Animation__Play_70027660((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0LL);
            if ( v2->fields.isWaitPerformance )
            {
              v15 = (Il2CppObject *)v2->fields.__8__1;
              v16 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v16,
                v15,
                Method_EventSvtControl___c__DisplayClass71_0__PlayPerformanceProc_b__0__,
                0LL);
              v17 = (UnityEngine_WaitUntil_o *)sub_1BDBAC4(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v17, v16, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v17;
              v18 = &v2->fields.__2__current;
              sub_1BDB81C(v18);
              *((_DWORD *)v18 - 2) = 2;
              return 1;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_21:
    sub_1BDBAD4(this, method);
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

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_EventSvtControl__PlayPerformanceProc_d__71_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
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
  Il2CppObject *v2; // x19

  if ( (byte_4B3F0C4 & 1) == 0 )
  {
    sub_1BDB878(&EventSvtControl___c_TypeInfo, v1);
    byte_4B3F0C4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventSvtControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventSvtControl___c_TypeInfo->static_fields->__9 = (struct EventSvtControl___c_o *)v2;
  sub_1BDB81C(EventSvtControl___c_TypeInfo->static_fields);
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
    sub_1BDBAD4(this, 0LL);
  return x->fields.id;
}


int32_t __fastcall EventSvtControl___c___playVoice_b__45_0(
        EventSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_ServantVoiceData____int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4B3F0C5 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Value__, x.fields.key);
    byte_4B3F0C5 = 1;
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
    sub_1BDBAD4(this, a);
  return System_Int32__Equals_64087084((int32_t)&v5, voice->fields.form, 0LL);
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
  struct EventSvtControl___c__DisplayClass56_0_o *CS___8__locals1; // x8
  EventSvtControl___c__DisplayClass56_1_o *v3; // x19
  struct EventSvtControl___c__DisplayClass56_0_o *v4; // x8
  struct System_Action_o *_9__0; // x9
  struct EventSvtControl___c__DisplayClass56_0_o *v6; // x8
  struct System_Action_o *callBackStartPlay; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  v3 = this;
  this = (EventSvtControl___c__DisplayClass56_1_o *)CS___8__locals1->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  this[1].fields.__9__0 = (struct System_Action_o *)v3->fields.vdArray;
  this = (EventSvtControl___c__DisplayClass56_1_o *)sub_1BDB81C(&this[1].fields.__9__0);
  v4 = v3->fields.CS___8__locals1;
  if ( !v4
    || (this = (EventSvtControl___c__DisplayClass56_1_o *)v4->fields.__4__this) == 0LL
    || (_9__0 = this[1].fields.__9__0) == 0LL
    || (LODWORD(this[2].klass) = _9__0->fields.m_target,
        BYTE2(this[5].fields.vdArray) = v4->fields.arg.fields.skipPerformance,
        EventSvtControl__svtVoicePlay((EventSvtControl_o *)this, method),
        (v6 = v3->fields.CS___8__locals1) == 0LL) )
  {
LABEL_10:
    sub_1BDBAD4(this, method);
  }
  callBackStartPlay = v6->fields.arg.fields.callBackStartPlay;
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Func_ServantVoiceData__bool__o *_9__1; // x22

  if ( (byte_4B3F0C6 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_ServantVoiceData___, dataList);
    sub_1BDB878(&System_Func_ServantVoiceData__bool__TypeInfo, v5);
    sub_1BDB878(&Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__1__, v6);
    byte_4B3F0C6 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1BDBAC4(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BDB81C(&this->fields.__9__1);
  }
  return BasicHelper__Any_object__50450088(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool __fastcall EventSvtControl___c__DisplayClass60_0___PlayEventTradeVoice_b__1(
        EventSvtControl___c__DisplayClass60_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BDBAD4(this, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Func_ServantVoiceData__bool__o *_9__1; // x22

  if ( (byte_4B3F0C7 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_ServantVoiceData___, dataList);
    sub_1BDB878(&System_Func_ServantVoiceData__bool__TypeInfo, v5);
    sub_1BDB878(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__1__, v6);
    byte_4B3F0C7 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1BDBAC4(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BDB81C(&this->fields.__9__1);
  }
  return BasicHelper__Any_object__50450088(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool __fastcall EventSvtControl___c__DisplayClass61_0___PlayEventCraftVoice_b__1(
        EventSvtControl___c__DisplayClass61_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL);
}