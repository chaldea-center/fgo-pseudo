void __fastcall EventSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A23983 & 1) == 0 )
  {
    sub_1B715CC(&EventSvtControl_TypeInfo, v1);
    byte_4A23983 = 1;
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_Action_c *v19; // x1
  struct System_Action_o **p_performanceEndAction; // x20
  __int64 v21; // x1
  UnityEngine_GameObject_o *transform; // x0
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float v26; // s10
  float v27; // s8
  float v28; // s9
  Il2CppObject *ComponentInChildren_object; // x21
  struct System_Action_o *v30; // x8
  UnityEngine_GameObject_o *v31; // x20
  EventSvtControl_c *v32; // x0
  float v33; // s10
  UnityEngine_GameObject_o *v34; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  EventSvtControl_o *v41; // x0
  const MethodInfo *v42; // x1
  UnityEngine_Vector3_o v43; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A23981 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, endAction);
    sub_1B715CC(&Method_EventSvtControl_ReleasePerformance__, v6);
    sub_1B715CC(&EventSvtControl_TypeInfo, v7);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, v8);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v9);
    sub_1B715CC(&StringLiteral_3951/*"CallPerformanceEndAction"*/, v10);
    byte_4A23981 = 1;
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
  v15 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0LL);
  v16 = (struct System_Action_o *)System_Delegate__Combine(
                                    (System_Delegate_o *)endAction,
                                    (System_Delegate_o *)v15,
                                    0LL);
  if ( v16 )
  {
    v19 = System_Action_TypeInfo;
    if ( v16->klass != System_Action_TypeInfo || (this->fields.performanceEndAction = v16, v16->klass != v19) )
    {
      sub_1B71AE8(v16);
      EventSvtControl__CallPerformanceEndAction(v41, v42);
      return;
    }
    p_performanceEndAction = &this->fields.performanceEndAction;
  }
  else
  {
    p_performanceEndAction = &this->fields.performanceEndAction;
    this->fields.performanceEndAction = 0LL;
  }
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_performanceEndAction, (int32_t)v16, v17, v18);
  transform = this->fields.objectRef;
  if ( !transform
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = this->fields.objectRef) == 0LL) )
  {
LABEL_28:
    sub_1B71828(transform, v21);
  }
  v26 = v23;
  v27 = v24;
  v28 = v25;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 transform,
                                 (const MethodInfo_2EAABFC *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
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
      v31 = this->fields.objectRef;
      v32 = EventSvtControl_TypeInfo;
      v33 = v26 - (float)SLODWORD(ComponentInChildren_object[10].monitor);
      if ( !EventSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo);
        v32 = EventSvtControl_TypeInfo;
      }
      v43.fields.x = v33;
      v43.fields.y = v27;
      v43.fields.z = v28;
      transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v31, v32->static_fields->BASE_MOVE_TIME, v43, 0LL);
      if ( transform )
      {
        v34 = transform;
        LODWORD(transform[1].monitor) = 3;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v34[3].monitor = gameObject;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v34[3].monitor, (int32_t)gameObject, v36, v37);
        v38 = StringLiteral_3951/*"CallPerformanceEndAction"*/;
        *(_QWORD *)&v34[3].fields.m_CachedPtr = StringLiteral_3951/*"CallPerformanceEndAction"*/;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v34[3].fields, v38, v39, v40);
        return;
      }
    }
    goto LABEL_28;
  }
  v30 = *p_performanceEndAction;
  if ( *p_performanceEndAction )
  {
    m_target = v30->fields.m_target;
    original_method_info = v30->fields.original_method_info;
    v14 = *(_QWORD *)&v30->fields.extra_arg;
    goto LABEL_21;
  }
}


void __fastcall EventSvtControl__EndPlay(EventSvtControl_o *this, const MethodInfo *method)
{
  EventSvtControl_o *v2; // x19
  __int64 v3; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  int v5; // w9
  ServantVoiceData_o *v6; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x5

  v2 = this;
  if ( (byte_4A23973 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    this = (EventSvtControl_o *)sub_1B715CC(&Method_EventSvtControl_EndPlayProc__, v3);
    byte_4A23973 = 1;
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
      v5 = v2->fields.playCnt - 1;
      if ( v5 >= randomVoiceList->max_length )
        sub_1B71830(this, method);
      v6 = randomVoiceList->m_Items[v5];
      if ( !v6 )
LABEL_10:
        sub_1B71828(this, method);
      additionalPerformances = v6->fields.additionalPerformances;
      v8 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)v2, Method_EventSvtControl_EndPlayProc__, 0LL);
      EventSvtControl__PlayPerformance(v2, additionalPerformances, 2, 1, v8, v9);
    }
  }
}


void __fastcall EventSvtControl__EndPlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  EventSvtControl_o *v4; // x19
  __int64 v5; // x1
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v8; // x8
  ServantStatusBattleListViewItem_o *p_player; // x0
  ServantStatusBattleListViewItem_o *p_callbakEndPlay; // x0
  System_Action_o *callbakEndPlay; // x20
  ServantStatusBattleListViewItem_o *p_callbackStopVoice; // x0
  struct System_Action_o *callbackStopVoice; // x20

  v4 = this;
  if ( (byte_4A23974 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_23655/*"svtVoicePlay"*/, method);
    this = (EventSvtControl_o *)sub_1B715CC(&StringLiteral_5467/*"END_PLAY"*/, v5);
    byte_4A23974 = 1;
  }
  playCnt = v4->fields.playCnt;
  if ( (int)playCnt < v4->fields.maxPlayCnt )
  {
    randomVoiceList = v4->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= randomVoiceList->max_length )
        sub_1B71830(this, method);
      v8 = randomVoiceList->m_Items[playCnt];
      if ( v8 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v4,
          (System_String_o *)StringLiteral_23655/*"svtVoicePlay"*/,
          v8->fields.delay,
          0LL);
        return;
      }
    }
LABEL_16:
    sub_1B71828(this, method);
  }
  p_player = (ServantStatusBattleListViewItem_o *)&v4->fields.player;
  if ( v4->fields.player )
  {
    p_player->klass = 0LL;
    sub_1B71570(p_player, 0, v2, v3);
  }
  p_callbakEndPlay = (ServantStatusBattleListViewItem_o *)&v4->fields.callbakEndPlay;
  callbakEndPlay = v4->fields.callbakEndPlay;
  v4->fields.playCnt = 0;
  *(_WORD *)&v4->fields.isUnSkippable = 0;
  v4->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    p_callbakEndPlay->klass = 0LL;
    sub_1B71570(p_callbakEndPlay, 0, v2, v3);
    ActionExtensions__Call(callbakEndPlay, 0LL);
  }
  else
  {
    p_callbackStopVoice = (ServantStatusBattleListViewItem_o *)&v4->fields.callbackStopVoice;
    callbackStopVoice = v4->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      p_callbackStopVoice->klass = 0LL;
      sub_1B71570(p_callbackStopVoice, 0, v2, v3);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackStopVoice->fields.m_target)(
        callbackStopVoice->fields.original_method_info,
        *(_QWORD *)&callbackStopVoice->fields.extra_arg);
    }
    else
    {
      this = (EventSvtControl_o *)v4->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5467/*"END_PLAY"*/, 0LL);
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
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v13; // w23
  __int64 v14; // x24
  int v15; // w21
  bool v16; // w19
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A2397D & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, voiceId);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_4A2397D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_1B71828(0LL, voiceId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v19 = v18;
  do
  {
LABEL_5:
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v9 )
    {
      v16 = 0;
      v15 = 8;
      goto LABEL_15;
    }
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1B71828(v9, v10);
    monitor = (int)v19.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= monitor )
      sub_1B71830(v9, v10);
    v14 = *((_QWORD *)&current[2].klass + (int)v13);
    if ( !v14 )
      sub_1B71828(v9, v10);
    v9 = System_String__op_Equality(*(System_String_o **)(v14 + 16), voiceId, 0LL);
    if ( v9 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v13 >= monitor )
      goto LABEL_5;
  }
  v15 = 7;
  v16 = *(_BYTE *)(v14 + 68) != 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v16 && v15 == 7;
}


void __fastcall EventSvtControl__OnDestroy(EventSvtControl_o *this, const MethodInfo *method)
{
  this->fields.isDead = 1;
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
  int32_t v21; // w2
  int32_t v22; // w3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x23
  __int64 v27; // x26
  __int64 v28; // x27
  System_String_o *v29; // x25
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int32_t v36; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v44; // w24
  __int64 v45; // x8
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x0
  const MethodInfo *v49; // x1
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A2397A & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4A2397A = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1B71828(Instance, v20);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1B71830(Instance, v20);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v25 = (VoicePlayCondMaster_o *)Instance;
  v26 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
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
        v33 = Method_System_Collections_Generic_List_string__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)v29,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v29;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v29, v30, v31);
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
  v36 = UnityEngine_Random__Range_69217592(0, v26->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v26,
                              v36,
                              (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, (int32_t)callback, v21, v22);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, v38, v39);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v51 = v50;
LABEL_27:
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v40 )
      break;
    current = v51.fields._current;
    if ( !v51.fields._current )
      sub_1B71828(v40, v41);
    monitor = (int)v51.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v44 >= monitor )
          sub_1B71830(v40, v41);
        v45 = *((_QWORD *)&current[2].klass + (int)v44);
        if ( !v45 )
          sub_1B71828(v40, v41);
        v40 = System_String__op_Equality(*(System_String_o **)(v45 + 16), Item, 0LL);
        if ( v40 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v44 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)current, v46, v47);
      if ( !*p_randomVoiceList )
        sub_1B71828(v48, v49);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v49);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  VoicePlayCondMaster_o *Master_object; // x0
  System_String_o *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v29; // x23
  unsigned __int64 v30; // x29
  __int64 v31; // x28
  System_String_o **m_Items; // x20
  __int64 v33; // x26
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x1
  System_String_o **v37; // x25
  System_String_o **v38; // x23
  System_String_array *v39; // x20
  int32_t v40; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListTrade; // x22
  __int64 v42; // x19
  System_Func_object__bool__o *v43; // x28
  System_Collections_Generic_List_T__o *v44; // x0
  System_Func_T__bool__o *v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  int32_t v52; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int32_t v54; // w2
  int32_t v55; // w3
  _BOOL8 v56; // x0
  __int64 v57; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v60; // w23
  __int64 v61; // x8
  int32_t v62; // w2
  int32_t v63; // w3
  __int64 v64; // x0
  const MethodInfo *v65; // x1
  System_Action_o *v66; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v67; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v68; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+40h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4A2397B & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_ServantVoiceData_____, *(_QWORD *)&svtId);
    sub_1B715CC(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v9);
    sub_1B715CC(&DataManager_TypeInfo, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_1B715CC(&System_Func_ServantVoiceData____bool__TypeInfo, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, v18);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_1B715CC(&Method_EventSvtControl___c__DisplayClass58_0__PlayEventTradeVoice_b__0__, v21);
    sub_1B715CC(&EventSvtControl___c__DisplayClass58_0_TypeInfo, v22);
    byte_4A2397B = 1;
  }
  memset(&v70, 0, sizeof(v70));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1B71830(Master_object, v24);
  }
  v66 = callback;
  v29 = Master_object;
  v67 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v67,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v30 = 0LL;
    v31 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v68 = v29;
    do
    {
      v33 = sub_1B71818(EventSvtControl___c__DisplayClass58_0_TypeInfo);
      EventSvtControl___c__DisplayClass58_0___ctor((EventSvtControl___c__DisplayClass58_0_o *)v33, 0LL);
      if ( v30 >= targetVoiceIds->max_length )
        goto LABEL_45;
      if ( !v33 )
        goto LABEL_44;
      v36 = m_Items[v30];
      *(_QWORD *)(v33 + 16) = v36;
      v37 = (System_String_o **)(v33 + 16);
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)v36, v34, v35);
      if ( !v29 )
        goto LABEL_44;
      Master_object = (VoicePlayCondMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                 v29,
                                                 v7,
                                                 *v37,
                                                 0LL,
                                                 -1LL,
                                                 -1,
                                                 0LL,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v38 = m_Items;
        v39 = targetVoiceIds;
        v40 = v7;
        voiceListTrade = this->fields.voiceListTrade;
        v42 = v31;
        v43 = (System_Func_object__bool__o *)sub_1B71818(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v43,
          (Il2CppObject *)v33,
          Method_EventSvtControl___c__DisplayClass58_0__PlayEventTradeVoice_b__0__,
          0LL);
        v44 = (System_Collections_Generic_List_T__o *)voiceListTrade;
        v7 = v40;
        targetVoiceIds = v39;
        m_Items = v38;
        v29 = v68;
        v45 = (System_Func_T__bool__o *)v43;
        v31 = v42;
        Master_object = (VoicePlayCondMaster_o *)BasicHelper__Any_object_(
                                                   v44,
                                                   v45,
                                                   (const MethodInfo_2E467B0 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v67 )
            goto LABEL_44;
          v24 = *v37;
          items = v67->fields._items;
          v49 = Method_System_Collections_Generic_List_string__Add__;
          ++v67->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v67->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v67,
              (Il2CppObject *)v24,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + size;
            v67->fields._size = size + 1;
            v51[4] = (Il2CppClass *)v24;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v24, v46, v47);
          }
        }
      }
    }
    while ( v31 != ++v30 );
  }
  if ( !v67 )
    goto LABEL_44;
  v52 = UnityEngine_Random__Range_69217592(0, v67->fields._size, 0LL);
  callback = v66;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v67,
                              v52,
                              (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, (int32_t)callback, v25, v26);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, v54, v55);
  Master_object = (VoicePlayCondMaster_o *)this->fields.voiceListTrade;
  if ( !Master_object )
LABEL_44:
    sub_1B71828(Master_object, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v70 = v69;
LABEL_29:
  while ( 1 )
  {
    v56 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v56 )
      break;
    current = v70.fields._current;
    if ( !v70.fields._current )
      sub_1B71828(v56, v57);
    monitor = (int)v70.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v60 = 0;
      while ( 1 )
      {
        if ( v60 >= monitor )
          sub_1B71830(v56, v57);
        v61 = *((_QWORD *)&current[2].klass + (int)v60);
        if ( !v61 )
          sub_1B71828(v56, v57);
        v56 = System_String__op_Equality(*(System_String_o **)(v61 + 16), Item, 0LL);
        if ( v56 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v60 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)current, v62, v63);
      if ( !*p_randomVoiceList )
        sub_1B71828(v64, v65);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v65);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  UnityEngine_GameObject_o *Effect; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Object_o *v21; // x25
  struct UnityEngine_Animation_o **p_animationRef; // x25
  UnityEngine_Object_o *animationRef; // x26
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Object_o *v27; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v29; // x22
  const MethodInfo *v30; // x4
  System_Collections_IEnumerator_o *v31; // x1

  if ( (byte_4A2397F & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, performances);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v11);
    byte_4A2397F = 1;
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
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.objectRef, (int32_t)Effect, v19, v20);
    v21 = (UnityEngine_Object_o *)*p_objectRef;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Implicit(v21, 0LL) )
      goto LABEL_6;
  }
  p_animationRef = &this->fields.animationRef;
  animationRef = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(animationRef, 0LL, 0LL) )
    goto LABEL_23;
  performanceRoot = *p_objectRef;
  if ( !*p_objectRef )
LABEL_32:
    sub_1B71828(performanceRoot, v14);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 performanceRoot,
                                 (const MethodInfo_2EAABFC *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  *p_animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_object;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.animationRef,
    (int32_t)ComponentInChildren_object,
    v25,
    v26);
  v27 = (UnityEngine_Object_o *)*p_animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v27, 0LL) )
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
  v29 = *p_afterPerformance;
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v29->fields.name, 0LL) )
  {
    v31 = EventSvtControl__PlayPerformanceProc(
            this,
            v29->fields.name,
            v29->fields.delay,
            isWaitPerformance,
            playEndAction,
            v30);
    UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, v31, 0LL);
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
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A23980 & 1) == 0 )
  {
    sub_1B715CC(&EventSvtControl__PlayPerformanceProc_d__68_TypeInfo, animName);
    byte_4A23980 = 1;
  }
  v11 = sub_1B71818(EventSvtControl__PlayPerformanceProc_d__68_TypeInfo);
  EventSvtControl__PlayPerformanceProc_d__68___ctor((EventSvtControl__PlayPerformanceProc_d__68_o *)v11, 0, 0LL);
  if ( !v11 )
    sub_1B71828(v12, v13);
  *(_QWORD *)(v11 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 40) = animName;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v11 + 40), (int32_t)animName, v16, v17);
  *(float *)(v11 + 48) = delay;
  *(_BYTE *)(v11 + 64) = isWaitPerformance;
  *(_QWORD *)(v11 + 72) = playEndAction;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v11 + 72), (int32_t)playEndAction, v18, v19);
  return (System_Collections_IEnumerator_o *)v11;
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
  int32_t v21; // w2
  int32_t v22; // w3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x23
  __int64 v27; // x26
  __int64 v28; // x27
  System_String_o *v29; // x25
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int32_t v36; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v44; // w24
  __int64 v45; // x8
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x0
  const MethodInfo *v49; // x1
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A23979 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4A23979 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1B71828(Instance, v20);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1B71830(Instance, v20);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v25 = (VoicePlayCondMaster_o *)Instance;
  v26 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
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
        v33 = Method_System_Collections_Generic_List_string__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)v29,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v29;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v29, v30, v31);
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
  v36 = UnityEngine_Random__Range_69217592(0, v26->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v26,
                              v36,
                              (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, (int32_t)callback, v21, v22);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, v38, v39);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v51 = v50;
LABEL_27:
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v40 )
      break;
    current = v51.fields._current;
    if ( !v51.fields._current )
      sub_1B71828(v40, v41);
    monitor = (int)v51.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v44 >= monitor )
          sub_1B71830(v40, v41);
        v45 = *((_QWORD *)&current[2].klass + (int)v44);
        if ( !v45 )
          sub_1B71828(v40, v41);
        v40 = System_String__op_Equality(*(System_String_o **)(v45 + 16), Item, 0LL);
        if ( v40 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v44 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)current, v46, v47);
      if ( !*p_randomVoiceList )
        sub_1B71828(v48, v49);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v49);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__ReleasePerformance(EventSvtControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct UnityEngine_Animation_o **p_animationRef; // x19
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4A23982 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A23982 = 1;
  }
  this->fields.animationRef = 0LL;
  p_animationRef = &this->fields.animationRef;
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_animationRef, 0, v2, v3);
  v6 = (UnityEngine_Object_o *)*(p_animationRef - 1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69257852(v6, 0LL);
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
  int32_t v22; // w2
  int32_t v23; // w3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_int__o *v27; // x21
  struct System_String_array *befVoiceIds; // x9
  unsigned __int64 v29; // x24
  System_String_o *v30; // x25
  _BOOL8 isVoicePlay; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x20
  int monitor; // w8
  int i; // w27
  __int64 v36; // x28
  const MethodInfo *v37; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  unsigned __int64 v41; // x25
  int32_t v42; // w22
  System_String_o *v43; // x23
  __int64 Item; // x0
  __int64 v45; // x1
  Il2CppObject *v46; // x20
  void *v47; // x8
  int v48; // w27
  __int64 v49; // x24
  const MethodInfo *v50; // x3
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  __int64 v53; // [xsp+10h] [xbp-C0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-B8h]
  struct System_String_array *v55; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4A23978 & 1) == 0 )
  {
    sub_1B715CC(&BoxGachaTalkInfo_TypeInfo, *(_QWORD *)&svtId);
    sub_1B715CC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A23978 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v20 = (BoxGachaTalkInfo_o *)sub_1B71818(BoxGachaTalkInfo_TypeInfo);
  BoxGachaTalkInfo___ctor(v20, v21);
  *info = v20;
  sub_1B71570((ServantStatusBattleListViewItem_o *)info, (int32_t)v20, v22, v23);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v27 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_70;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_70;
  v53 = *(_QWORD *)&befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  if ( (int)v53 >= 1 )
  {
    if ( (unsigned int)*(_QWORD *)&befVoiceIds->max_length )
    {
      v29 = 0LL;
      v55 = befVoiceIds;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          break;
        v30 = befVoiceIds->m_Items[v29];
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v57,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v58 = v57;
        while ( 1 )
        {
          isVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v58,
                          (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !isVoicePlay )
            break;
          current = v58.fields._current;
          if ( !v58.fields._current )
            sub_1B71828(isVoicePlay, v32);
          monitor = (int)v58.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            for ( i = 0; i < monitor; ++i )
            {
              if ( i >= (unsigned int)monitor )
                sub_1B71830(isVoicePlay, v32);
              v36 = *((_QWORD *)&current[2].klass + i);
              if ( !v36 )
                sub_1B71828(isVoicePlay, v32);
              isVoicePlay = System_String__op_Equality(*(System_String_o **)(v36 + 16), v30, 0LL);
              if ( isVoicePlay )
              {
                if ( !MasterData_object )
                  sub_1B71828(isVoicePlay, v32);
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
                    sub_1B71828(0LL, v32);
                  BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v36 + 16),
                    *(System_String_o **)(v36 + 48),
                    v37);
                  if ( !v27 )
                    sub_1B71828(isVoicePlay, v32);
                  items = v27->fields._items;
                  v39 = Method_System_Collections_Generic_List_int__Add__;
                  ++v27->fields._version;
                  if ( !items )
                    sub_1B71828(isVoicePlay, v32);
                  size = v27->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v27,
                      v29,
                      *(const MethodInfo_34B323C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v27->fields._size = size + 1;
                    items->m_Items[size + 1] = v29;
                  }
                }
              }
              monitor = (int)current[1].monitor;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v58,
          (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        befVoiceIds = v55;
        if ( ++v29 == (unsigned int)v53 )
          goto LABEL_39;
        if ( v29 >= v55->max_length )
          goto LABEL_71;
      }
LABEL_70:
      sub_1B71828(Instance, v25);
    }
LABEL_71:
    sub_1B71830(Instance, v25);
  }
LABEL_39:
  if ( !v27 || !v27->fields._size )
    return 0;
  if ( (int)v53 >= 1 )
  {
    if ( !aftVoiceIds )
      goto LABEL_70;
    v41 = 0LL;
    v42 = 0;
    while ( v41 < aftVoiceIds->max_length )
    {
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_70;
      v43 = aftVoiceIds->m_Items[v41];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v57,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v58 = v57;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v58,
                 (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( (Item & 1) == 0 )
          break;
        v46 = v58.fields._current;
        if ( !v58.fields._current )
          sub_1B71828(Item, v45);
        v47 = v58.fields._current[1].monitor;
        if ( (int)v47 >= 1 )
        {
          v48 = 0;
          do
          {
            if ( v48 >= (unsigned int)v47 )
              sub_1B71830(Item, v45);
            v49 = *((_QWORD *)&v46[2].klass + v48);
            if ( !v49 )
              sub_1B71828(Item, v45);
            Item = System_String__op_Equality(*(System_String_o **)(v49 + 16), v43, 0LL);
            if ( (Item & 1) != 0 )
            {
              Item = System_Collections_Generic_List_int___get_Item(
                       v27,
                       v42,
                       (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( v41 == (unsigned int)Item )
              {
                if ( !*info )
                  sub_1B71828(0LL, v45);
                BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v49 + 16),
                  *(System_String_o **)(v49 + 48),
                  v50);
                ++v42;
              }
            }
            LODWORD(v47) = v46[1].monitor;
            ++v48;
          }
          while ( v48 < (int)v47 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v58,
        (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      if ( ++v41 == (unsigned int)v53 )
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


void __fastcall EventSvtControl__SetDiggingSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listDigging,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *v9; // x0
  int32_t v10; // w1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)assetName,
    (int32_t)method);
  v9 = (ServantStatusBattleListViewItem_o *)(p_asstName + 14);
  if ( listDigging )
  {
    v9->klass = (ServantStatusBattleListViewItem_c *)listDigging;
    v10 = (int)listDigging;
  }
  else
  {
    v10 = 0;
    v9->klass = 0LL;
  }
  sub_1B71570(v9, v10, v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetOverwriteSpecialSvtVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.specialSvtVoice = voiceId;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.specialSvtVoice, (int32_t)voiceId, (int32_t)method, v3);
}


void __fastcall EventSvtControl__SetOverwriteSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listOverwrite,
        System_String_o *assetName,
        const MethodInfo *method)
{
  EventSvtControl_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  v5 = this;
  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)assetName,
    (int32_t)method);
  v5->fields.voiceListOverwrite = listOverwrite;
  v5 = (EventSvtControl_o *)((char *)v5 + 192);
  sub_1B71570((ServantStatusBattleListViewItem_o *)v5, (int32_t)listOverwrite, v6, v7);
  LODWORD(v5[-1].fields.voiceListDigging) = -1;
}


void __fastcall EventSvtControl__SetRecipeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listRecipe,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *v9; // x0
  int32_t v10; // w1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)assetName,
    (int32_t)method);
  v9 = (ServantStatusBattleListViewItem_o *)(p_asstName + 15);
  if ( listRecipe )
  {
    v9->klass = (ServantStatusBattleListViewItem_c *)listRecipe;
    v10 = (int)listRecipe;
  }
  else
  {
    v10 = 0;
    v9->klass = 0LL;
  }
  sub_1B71570(v9, v10, v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetSvtFigureCollect(
        EventSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.standFigureCollectList = collects;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.standFigureCollectList,
    (int32_t)collects,
    (int32_t)method,
    v3);
}


void __fastcall EventSvtControl__SetTradeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTrade,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *v9; // x0
  int32_t v10; // w1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)assetName,
    (int32_t)method);
  v9 = (ServantStatusBattleListViewItem_o *)(p_asstName + 16);
  if ( listTrade )
  {
    v9->klass = (ServantStatusBattleListViewItem_c *)listTrade;
    v10 = (int)listTrade;
  }
  else
  {
    v10 = 0;
    v9->klass = 0LL;
  }
  sub_1B71570(v9, v10, v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetTreasureBoxSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTreasureBox,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *v9; // x0
  int32_t v10; // w1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)assetName,
    (int32_t)method);
  v9 = (ServantStatusBattleListViewItem_o *)(p_asstName + 13);
  if ( listTreasureBox )
  {
    v9->klass = (ServantStatusBattleListViewItem_c *)listTreasureBox;
    v10 = (int)listTreasureBox;
  }
  else
  {
    v10 = 0;
    v9->klass = 0LL;
  }
  sub_1B71570(v9, v10, v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SvtVoicePlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  EventSvtControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v11; // x8
  struct System_String_o *id; // x1
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
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x5
  struct ServantVoiceData_array *v34; // x8
  __int64 v35; // x9
  ServantVoiceData_o *v36; // x8
  struct ServantVoiceData_array *v37; // x8
  __int64 v38; // x9
  ServantVoiceData_o *v39; // x8
  struct System_Int32_array *multiFace; // x23
  unsigned __int64 v41; // x21
  int32_t v42; // w22

  v4 = this;
  if ( (byte_4A23972 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v5);
    sub_1B715CC(&Method_EventSvtControl_EndPlay__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    this = (EventSvtControl_o *)sub_1B715CC(&SoundManager_TypeInfo, v8);
    byte_4A23972 = 1;
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
  id = v11->fields.id;
  v4->fields.vcName = id;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.vcName, (int32_t)id, v2, v3);
  v13 = v4->fields.randomVoiceList;
  if ( !v13 )
    goto LABEL_43;
  v14 = v4->fields.playCnt;
  if ( (unsigned int)v14 >= v13->max_length )
    goto LABEL_44;
  this = (EventSvtControl_o *)v13->m_Items[v14];
  if ( !this )
    goto LABEL_43;
  v4->fields.isUnSkippable = BYTE4(this->fields.vcName);
  asstName = (int32_t)this->fields.asstName;
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
  this = (EventSvtControl_o *)v4->fields.standFigureCollectList;
  v17 = FadeTime;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_2E78500 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v18 = v4->fields.randomVoiceList;
    if ( !v18 )
      goto LABEL_43;
    v19 = v4->fields.playCnt;
    if ( (unsigned int)v19 >= v18->max_length )
      goto LABEL_44;
    v20 = v18->m_Items[v19];
    if ( !v20 )
      goto LABEL_43;
    standFigureCollectList = (System_Collections_Generic_List_object__o *)v4->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v20->fields.face;
      this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    0,
                                    (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !this )
        goto LABEL_43;
      v23 = v4->fields.randomVoiceList;
      if ( !v23 )
        goto LABEL_43;
      v24 = v4->fields.playCnt;
      if ( (unsigned int)v24 >= v23->max_length )
        goto LABEL_44;
      v25 = v23->m_Items[v24];
      if ( !v25 )
        goto LABEL_43;
      this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
      if ( !this )
        goto LABEL_43;
      UIStandFigureR__SetFace_40759120((UIStandFigureR_o *)this, face, v25->fields.form, 0LL, v17, 0LL);
    }
    goto LABEL_21;
  }
  v37 = v4->fields.randomVoiceList;
  if ( !v37 )
    goto LABEL_43;
  v38 = v4->fields.playCnt;
  if ( (unsigned int)v38 >= v37->max_length )
    goto LABEL_44;
  v39 = v37->m_Items[v38];
  if ( !v39 )
    goto LABEL_43;
  multiFace = v39->fields.multiFace;
  if ( multiFace )
  {
    this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.standFigureCollectList,
                                  (const MethodInfo_2E78500 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( (_DWORD)this == multiFace->max_length )
    {
      if ( (int)this >= 1 )
      {
        v41 = 0LL;
        while ( v41 < (unsigned int)this )
        {
          this = (EventSvtControl_o *)v4->fields.standFigureCollectList;
          if ( !this )
            goto LABEL_43;
          v42 = multiFace->m_Items[v41 + 1];
          this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v41,
                                        (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !this )
            goto LABEL_43;
          this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
          if ( !this )
            goto LABEL_43;
          UIStandFigureR__SetFace_40759120((UIStandFigureR_o *)this, v42, asstName, 0LL, v17, 0LL);
          this = *(EventSvtControl_o **)&multiFace->max_length;
          if ( (__int64)++v41 >= (int)this )
            goto LABEL_21;
        }
        goto LABEL_44;
      }
LABEL_21:
      v26 = v4->fields.asstName;
      vcName = v4->fields.vcName;
      volume = v4->fields.volume;
      v29 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)v4, Method_EventSvtControl_EndPlay__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v30 = SoundManager__playVoice_38497276(v26, vcName, volume, v29, 0LL);
      v4->fields.player = v30;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.player, (int32_t)v30, v31, v32);
      if ( v4->fields.isSkipPerformance )
        goto LABEL_28;
      v34 = v4->fields.randomVoiceList;
      if ( !v34 )
LABEL_43:
        sub_1B71828(this, method);
      v35 = v4->fields.playCnt;
      if ( (unsigned int)v35 < v34->max_length )
      {
        v36 = v34->m_Items[v35];
        if ( v36 )
        {
          EventSvtControl__PlayPerformance(v4, v36->fields.additionalPerformances, 1, 0, 0LL, v33);
LABEL_28:
          ++v4->fields.playCnt;
          return;
        }
        goto LABEL_43;
      }
LABEL_44:
      sub_1B71830(this, method);
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
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x0
  System_Collections_Generic_List_int__o *v39; // x1
  System_Collections_Generic_HashSet_T__o *v40; // x24
  _BOOL8 v41; // x0
  __int64 v42; // x1
  Il2CppObject *current; // x25
  Il2CppClass *klass; // x8
  EventSvtControl___c_c *v45; // x0
  System_String_o *v46; // x26
  System_Func_object__object__o *_9__61_0; // x27
  Il2CppObject *v48; // x28
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_IEnumerable_string__o *v52; // x1
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x26
  Il2CppObject *Weight; // x2
  const MethodInfo_3409B78 *v57; // x4
  __int64 v58; // x1
  int32_t v59; // w3
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x26
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  __int64 Item; // x0
  __int64 v67; // x1
  int32_t v68; // w25
  int32_t monitor; // w26
  _BOOL8 IsVoicePlayFlag; // x0
  System_Collections_Generic_List_T__o *v71; // x0
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  ServantStatusBattleListViewItem_o *v75; // x8
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  ServantStatusBattleListViewItem_o *v79; // x0
  __int64 v80; // x0
  __int64 v81; // x1
  struct System_Collections_Generic_List_int__o *voicePlayedValueList; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  int32_t v87; // w2
  int32_t v88; // w3
  int32_t v89; // w2
  int32_t v90; // w3
  System_Collections_Generic_List_T__o *v92; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_int__o *OriginalSvtId; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+38h] [xbp-B8h] BYREF
  Il2CppObject *entity; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v97; // [xsp+58h] [xbp-98h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+70h] [xbp-80h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v100; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o v101; // 0:x1.16
  System_Collections_Generic_KeyValuePair_object__int__o v102; // 0:x1.16

  if ( (byte_4A2397E & 1) == 0 )
  {
    sub_1B715CC(&CondType_TypeInfo, voiceInfoList);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantVoiceRelationMaster___, v6);
    sub_1B715CC(&Method_DataManager_GetMaster_VoiceMaster___, v7);
    sub_1B715CC(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v8);
    sub_1B715CC(&DataManager_TypeInfo, v9);
    sub_1B715CC(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__, v10);
    sub_1B715CC(&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v14);
    sub_1B715CC(&System_Func_ServantVoiceData__string__TypeInfo, v15);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_string__Add__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_string__Contains__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_string___ctor__, v18);
    sub_1B715CC(&System_Collections_Generic_HashSet_string__TypeInfo, v19);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__, v20);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1B715CC(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__, v22);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v23);
    sub_1B715CC(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__, v24);
    sub_1B715CC(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__, v25);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v26);
    sub_1B715CC(&System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo, v27);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v28);
    sub_1B715CC(&Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__61_0__, v29);
    sub_1B715CC(&EventSvtControl___c_TypeInfo, v30);
    sub_1B715CC(&StringLiteral_868/*","*/, v31);
    sub_1B715CC(&StringLiteral_19485/*"forcePlayFirst"*/, v32);
    byte_4A2397E = 1;
  }
  memset(&v99, 0, sizeof(v99));
  condEntity = 0LL;
  v97.fields.key = 0LL;
  *(_QWORD *)&v97.fields.value = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v34 = (System_Collections_Generic_List_T__o *)sub_1B71818(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v34,
    (const MethodInfo_34278C8 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  v35 = (System_Collections_Generic_List_T__o *)sub_1B71818(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v35,
    (const MethodInfo_34278C8 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v35;
  sub_1B71570((ServantStatusBattleListViewItem_o *)voiceInfoList, (int32_t)v35, v36, v37);
  v38 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
  if ( !v38 )
    goto LABEL_65;
  v92 = v34;
  OriginalSvtId = ServantVoiceRelationMaster__GetOriginalSvtId(
                    (ServantVoiceRelationMaster_o *)v38,
                    this->fields.svtId,
                    0LL);
  v40 = (System_Collections_Generic_HashSet_T__o *)sub_1B71818(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v40,
    (const MethodInfo_338EE34 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  if ( !servantVoiceGroupData )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v95,
    (System_Collections_Generic_List_object__o *)servantVoiceGroupData,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v99 = v95;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v99,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v41 )
      break;
    current = v99.fields._current;
    if ( !v99.fields._current )
      sub_1B71828(v41, v42);
    if ( !LODWORD(v99.fields._current[1].monitor) )
      sub_1B71830(v41, v42);
    klass = v99.fields._current[2].klass;
    if ( !klass )
      sub_1B71828(v41, v42);
    if ( !Master_object )
      sub_1B71828(v41, v42);
    if ( VoicePlayCondMaster__isVoicePlay_40097628(
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
      v46 = (System_String_o *)StringLiteral_868/*","*/;
      _9__61_0 = (System_Func_object__object__o *)v45->static_fields->__9__61_0;
      if ( !_9__61_0 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = EventSvtControl___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v45->static_fields->__9;
        _9__61_0 = (System_Func_object__object__o *)sub_1B71818(System_Func_ServantVoiceData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__61_0,
          v48,
          Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__61_0__,
          0LL);
        static_fields = EventSvtControl___c_TypeInfo->static_fields;
        static_fields->__9__61_0 = (struct System_Func_ServantVoiceData__string__o *)_9__61_0;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v50, v51);
      }
      v52 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                                  (System_Func_TSource__TResult__o *)_9__61_0,
                                                                  (const MethodInfo_2E8BEEC *)Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
      v53 = (Il2CppObject *)System_String__Join_61521160(v46, v52, 0LL);
      if ( !v40 )
        sub_1B71828(v53, v54);
      v55 = v53;
      if ( !System_Collections_Generic_HashSet_object___Contains(
              v40,
              v53,
              (const MethodInfo_338F528 *)Method_System_Collections_Generic_HashSet_string__Contains__) )
      {
        System_Collections_Generic_HashSet_object___Add(
          v40,
          v55,
          (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_string__Add__);
        Weight = (Il2CppObject *)(unsigned int)VoicePlayCondMaster__GetWeight(
                                                 (VoicePlayCondMaster_o *)Master_object,
                                                 condEntity,
                                                 10,
                                                 0LL);
        v100.fields.key = (Il2CppObject *)&v97;
        *(_QWORD *)&v100.fields.value = current;
        System_Collections_Generic_KeyValuePair_object__int____ctor(
          v100,
          Weight,
          Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
          v57);
        if ( !condEntity
          || VoicePlayCondEntity__GetScriptIntParam(condEntity, (System_String_o *)StringLiteral_19485/*"forcePlayFirst"*/, -1, 0LL) != 1 )
        {
          goto LABEL_36;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v60 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_VoiceMaster___);
        if ( !condEntity )
          sub_1B71828(v60, v61);
        v62 = (DataMasterBase_TMaster__TEntity__PKType__o *)v60;
        voiceId = condEntity->fields.voiceId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v64 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46344112(voiceId, 0LL);
        if ( !v62 )
          sub_1B71828(v64, v65);
        if ( !DataMasterBase_object__object__object___TryGetEntity(
                v62,
                &entity,
                v64,
                (const MethodInfo_30F8B08 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__) )
          goto LABEL_36;
        if ( !OriginalSvtId )
          sub_1B71828(0LL, v58);
        Item = System_Collections_Generic_List_int___get_Item(
                 OriginalSvtId,
                 0,
                 (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !entity )
          sub_1B71828(Item, v67);
        v68 = Item;
        monitor = (int32_t)entity[3].monitor;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsVoicePlayFlag = CondType__IsVoicePlayFlag(v68, monitor, 0LL);
        if ( !IsVoicePlayFlag )
        {
          if ( !v92 )
            sub_1B71828(IsVoicePlayFlag, v58);
          v102 = v97;
          items = v92->fields._items;
          v77 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v92->fields._version;
          if ( !items )
            sub_1B71828(IsVoicePlayFlag, v102.fields.key);
          size = v92->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v92,
              v102,
              *(const MethodInfo_3428148 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v79 = (ServantStatusBattleListViewItem_o *)(&items->obj + size);
            v92->fields._size = size + 1;
            v79->fields.sortValue0 = (int64_t)v102.fields.key;
            v79 = (ServantStatusBattleListViewItem_o *)((char *)v79 + 32);
            v79->monitor = *(void **)&v102.fields.value;
            sub_1B71570(v79, 0, v102.fields.value, v59);
          }
          if ( !entity )
            sub_1B71828(v80, v81);
          voicePlayedValueList = this->fields.voicePlayedValueList;
          if ( !voicePlayedValueList )
            sub_1B71828(0LL, v81);
          monitor_low = LODWORD(entity[3].monitor);
          v84 = voicePlayedValueList->fields._items;
          v85 = Method_System_Collections_Generic_List_int__Add__;
          ++voicePlayedValueList->fields._version;
          if ( !v84 )
            sub_1B71828(voicePlayedValueList, monitor_low);
          v86 = voicePlayedValueList->fields._size;
          if ( (unsigned int)v86 >= v84->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              voicePlayedValueList,
              monitor_low,
              *(const MethodInfo_34B323C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            voicePlayedValueList->fields._size = v86 + 1;
            v84->m_Items[v86 + 1] = monitor_low;
          }
        }
        else
        {
LABEL_36:
          v71 = (System_Collections_Generic_List_T__o *)*voiceInfoList;
          if ( !*voiceInfoList )
            sub_1B71828(0LL, v58);
          v101 = v97;
          v72 = v71->fields._items;
          v73 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v71->fields._version;
          if ( !v72 )
            sub_1B71828(v71, v101.fields.key);
          v74 = v71->fields._size;
          if ( (unsigned int)v74 >= v72->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v71,
              v101,
              *(const MethodInfo_3428148 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = (ServantStatusBattleListViewItem_o *)(&v72->obj + v74);
            v71->fields._size = v74 + 1;
            v75->fields.sortValue0 = (int64_t)v101.fields.key;
            v75 = (ServantStatusBattleListViewItem_o *)((char *)v75 + 32);
            v75->monitor = *(void **)&v101.fields.value;
            sub_1B71570(v75, 0, v101.fields.value, v59);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v99,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( !v92 )
    goto LABEL_65;
  v39 = OriginalSvtId;
  if ( v92->fields._size >= 1 )
  {
    this->fields.forcePlayVoiceSvtIdList = OriginalSvtId;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&this->fields.forcePlayVoiceSvtIdList,
      (int32_t)OriginalSvtId,
      v87,
      v88);
    *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v92;
    sub_1B71570((ServantStatusBattleListViewItem_o *)voiceInfoList, (int32_t)v92, v89, v90);
    return 1;
  }
  if ( !*voiceInfoList )
LABEL_65:
    sub_1B71828(v38, v39);
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
  int32_t v17; // w2
  int32_t v18; // w3
  __int128 v19; // q1
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  struct System_Action_o *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x23
  int32_t current; // w1
  struct ServantVoiceData_array **v36; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  _BOOL8 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x28
  int v42; // w8
  unsigned int v43; // w25
  __int64 v44; // x29
  int32_t v45; // w2
  int32_t v46; // w3
  struct ServantVoiceData_array *v47; // x1
  __int64 v48; // x0
  const MethodInfo *v49; // x1
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x8
  Il2CppObject *Instance; // x0
  __int64 v54; // x1
  System_String_o *v55; // x20
  System_Action_o *v56; // x23
  CommonUI_o *v57; // x19
  System_String_o *v58; // x21
  int32_t v59; // w2
  int32_t v60; // w3
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4A23977 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, arg);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v8);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B715CC(&EventSvtControl___c__DisplayClass54_0_TypeInfo, v10);
    sub_1B715CC(&Method_EventSvtControl___c__DisplayClass54_1__boxGachaPlayVoice_b__0__, v11);
    sub_1B715CC(&EventSvtControl___c__DisplayClass54_1_TypeInfo, v12);
    sub_1B715CC(&StringLiteral_1/*""*/, v13);
    byte_4A23977 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v14 = sub_1B71818(EventSvtControl___c__DisplayClass54_0_TypeInfo);
  EventSvtControl___c__DisplayClass54_0___ctor((EventSvtControl___c__DisplayClass54_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_35;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  v19 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v14 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v14 + 24) = v19;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v14 + 24), 0, v20, v21);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v22);
  System_String__IsNullOrEmpty(*(System_String_o **)(v14 + 24), 0LL);
  v23 = *(struct System_Action_o **)(v14 + 48);
  this->fields.callbakEndPlay = v23;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, (int32_t)v23, v24, v25);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, v27, v28);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_1B71828(voiceListBoxGacha, v16);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v62 = v61;
LABEL_8:
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v62,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v29 = sub_1B71818(EventSvtControl___c__DisplayClass54_1_TypeInfo);
    EventSvtControl___c__DisplayClass54_1___ctor((EventSvtControl___c__DisplayClass54_1_o *)v29, 0LL);
    if ( !v29 )
      sub_1B71828(v30, v31);
    *(_QWORD *)(v29 + 24) = v14;
    v34 = v29 + 24;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v29 + 24), v14, v32, v33);
    current = (int32_t)v62.fields._current;
    *(_QWORD *)(v29 + 16) = v62.fields._current;
    v36 = (struct ServantVoiceData_array **)(v29 + 16);
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v29 + 16), current, v37, v38);
    v41 = *(_QWORD *)(v29 + 16);
    if ( !v41 )
      sub_1B71828(v39, v40);
    v42 = *(_DWORD *)(v41 + 24);
    if ( v42 >= 1 )
    {
      v43 = 0;
      while ( 1 )
      {
        if ( v43 >= v42 )
          sub_1B71830(v39, v40);
        v44 = *(_QWORD *)(v41 + 8LL * (int)v43 + 32);
        if ( !v44 )
          sub_1B71828(v39, v40);
        if ( !*(_QWORD *)v34 )
          sub_1B71828(v39, v40);
        v39 = System_String__op_Equality(
                *(System_String_o **)(v44 + 16),
                *(System_String_o **)(*(_QWORD *)v34 + 24LL),
                0LL);
        if ( v39 )
          break;
        v42 = *(_DWORD *)(v41 + 24);
        if ( (int)++v43 >= v42 )
          goto LABEL_8;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(*(System_String_o **)(v44 + 72), 0LL) )
      {
        v47 = *v36;
        *p_randomVoiceList = *v36;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)v47, v45, v46);
        if ( !*p_randomVoiceList )
          sub_1B71828(v48, v49);
        this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
        if ( !*(_QWORD *)v34 )
          sub_1B71828(v48, v49);
        this->fields.isSkipPerformance = *(_BYTE *)(*(_QWORD *)v34 + 32LL);
        EventSvtControl__svtVoicePlay(this, v49);
        if ( !*(_QWORD *)v34 )
          sub_1B71828(v50, v51);
        v52 = *(_QWORD *)(*(_QWORD *)v34 + 40LL);
        if ( v52 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(v52 + 24))(*(_QWORD *)(v52 + 64), *(_QWORD *)(v52 + 40));
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v55 = *(System_String_o **)(v44 + 72);
        v56 = *(System_Action_o **)(v29 + 32);
        v57 = (CommonUI_o *)Instance;
        v58 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v56 )
        {
          v56 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
          System_Action___ctor(
            v56,
            (Il2CppObject *)v29,
            Method_EventSvtControl___c__DisplayClass54_1__boxGachaPlayVoice_b__0__,
            0LL);
          *(_QWORD *)(v29 + 32) = v56;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v56, v59, v60);
        }
        if ( !v57 )
          sub_1B71828(Instance, v54);
        CommonUI__OpenNotificationDialog(v57, v58, v55, v56, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v62,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  ServantStatusBattleListViewItem_o *p_randomVoiceList; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v27; // x1
  System_String_o **p_specialSvtVoice; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x24
  int v32; // w8
  unsigned int v33; // w27
  __int64 v34; // x28
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x0
  System_String_array *v38; // x0
  __int64 v39; // x1
  System_String_o *v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  VoicePlayCondMaster_o *v48; // x26
  System_Collections_Generic_List_object__o *v49; // x23
  System_Collections_Generic_List_object__o *v50; // x24
  __int64 size; // x20
  unsigned __int64 v52; // x28
  System_String_o *v53; // x27
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  int v58; // w29
  System_Random_o *v59; // x25
  il2cpp_array_size_t v60; // w25
  _BOOL8 v61; // x0
  __int64 v62; // x1
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v65; // w19
  __int64 v66; // x8
  System_String_o *v67; // x27
  Il2CppObject *Item; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  struct ServantVoiceData_array *randomVoiceList; // x8
  EventSvtControl_o *v73; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A23970 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, voiceIds);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__AddRange__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Remove__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor___75809136, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, v18);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_1B715CC(&System_Random_TypeInfo, v21);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B715CC(&StringLiteral_16073/*"_"*/, v23);
    sub_1B715CC(&StringLiteral_1/*""*/, v24);
    byte_4A23970 = 1;
  }
  memset(&v75, 0, sizeof(v75));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = (ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, svtId, (int32_t)callbackEnds);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_79;
  v73 = this;
  if ( (int)voiceIds->max_length >= 2 )
  {
    v48 = (VoicePlayCondMaster_o *)Instance;
    v49 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v49,
      (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
    v50 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_55376540(
      v50,
      voiceIds->max_length,
      (const MethodInfo_34CFA9C *)Method_System_Collections_Generic_List_string___ctor___75809136);
    if ( !v50 )
      goto LABEL_79;
    System_Collections_Generic_List_object___AddRange(
      v50,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_string__AddRange__);
    size = (unsigned int)v50->fields._size;
    if ( (int)size >= 1 )
    {
      v52 = 0LL;
      do
      {
        if ( v52 >= voiceIds->max_length )
LABEL_71:
          sub_1B71830(Instance, v27);
        if ( !v48 )
          goto LABEL_79;
        v53 = voiceIds->m_Items[v52];
        Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v48, svtId, v53, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v49 )
            goto LABEL_79;
          items = v49->fields._items;
          v55 = Method_System_Collections_Generic_List_string__Add__;
          ++v49->fields._version;
          if ( !items )
            goto LABEL_79;
          v56 = v49->fields._size;
          if ( (unsigned int)v56 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v49,
              (Il2CppObject *)v53,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &items->obj.klass + v56;
            v49->fields._size = v56 + 1;
            v57[4] = (Il2CppClass *)v53;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v53, v46, v47);
          }
        }
      }
      while ( size != ++v52 );
    }
    if ( !v49 )
      goto LABEL_79;
    v58 = v49->fields._size - 1;
    if ( v58 >= 0 )
    {
      do
      {
        v59 = (System_Random_o *)sub_1B71818(System_Random_TypeInfo);
        System_Random___ctor(v59, 0LL);
        if ( !v59 )
          goto LABEL_79;
        Instance = (DataManager_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v59->klass->vtable._7_Next.method)(
                                      v59,
                                      (unsigned int)v49->fields._size,
                                      v59->klass->vtable._8_NextDouble.methodPtr);
        if ( !v73->fields.voiceListMission )
          goto LABEL_79;
        v60 = (unsigned int)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v74,
          (System_Collections_Generic_List_object__o *)v73->fields.voiceListMission,
          (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v75 = v74;
        do
        {
          v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v75,
                  (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v61 )
            break;
          current = v75.fields._current;
          if ( !v75.fields._current )
            sub_1B71828(v61, v62);
          monitor = (int)v75.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            v65 = 0;
            while ( 1 )
            {
              if ( v65 >= monitor )
                sub_1B71830(v61, v62);
              v66 = *((_QWORD *)&current[2].klass + (int)v65);
              if ( !v66 )
                sub_1B71828(v61, v62);
              v67 = *(System_String_o **)(v66 + 16);
              Item = System_Collections_Generic_List_object___get_Item(
                       v49,
                       v60,
                       (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_string__get_Item__);
              v61 = System_String__op_Equality(v67, (System_String_o *)Item, 0LL);
              if ( v61 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v65 >= monitor )
                goto LABEL_57;
            }
            p_randomVoiceList->klass = (ServantStatusBattleListViewItem_c *)current;
            sub_1B71570(p_randomVoiceList, (int32_t)current, v69, v70);
          }
LABEL_57:
          ;
        }
        while ( !p_randomVoiceList->klass );
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v75,
          (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( p_randomVoiceList->klass )
          goto LABEL_74;
        if ( v60 >= voiceIds->max_length )
          goto LABEL_71;
        System_Collections_Generic_List_object___Remove(
          v50,
          (Il2CppObject *)voiceIds->m_Items[v60],
          (const MethodInfo_34D1788 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v58 >= 0 );
    }
  }
  else
  {
    Instance = (DataManager_o *)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_79;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v74,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v75 = v74;
    p_specialSvtVoice = &this->fields.specialSvtVoice;
    do
    {
      IsNullOrEmpty = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v75,
                        (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !IsNullOrEmpty )
        break;
      v31 = v75.fields._current;
      if ( !v75.fields._current )
        sub_1B71828(IsNullOrEmpty, v30);
      v32 = (int)v75.fields._current[1].monitor;
      if ( v32 >= 1 )
      {
        v33 = 0;
        while ( 1 )
        {
          if ( v33 >= v32 )
            sub_1B71830(IsNullOrEmpty, v30);
          v34 = *((_QWORD *)&v31[2].klass + (int)v33);
          if ( !v34 )
            sub_1B71828(IsNullOrEmpty, v30);
          if ( !voiceIds->max_length )
            sub_1B71830(IsNullOrEmpty, v30);
          if ( System_String__op_Equality(*(System_String_o **)(v34 + 16), voiceIds->m_Items[0], 0LL)
            && System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL) )
          {
            p_randomVoiceList->klass = (ServantStatusBattleListViewItem_c *)v31;
            sub_1B71570(p_randomVoiceList, (int32_t)v31, v35, v36);
            goto LABEL_28;
          }
          IsNullOrEmpty = System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL);
          if ( !IsNullOrEmpty )
          {
            v37 = *(System_String_o **)(v34 + 16);
            if ( !v37 )
              sub_1B71828(0LL, v30);
            v38 = System_String__Split(v37, 0x5Fu, 0, 0LL);
            if ( !v38 )
              sub_1B71828(0LL, v39);
            if ( !v38->max_length )
              sub_1B71830(v38, v39);
            v40 = System_String__Concat_61516764(
                    v38->m_Items[0],
                    (System_String_o *)StringLiteral_16073/*"_"*/,
                    *p_specialSvtVoice,
                    0LL);
            IsNullOrEmpty = System_String__op_Equality(*(System_String_o **)(v34 + 16), v40, 0LL);
            if ( IsNullOrEmpty )
              break;
          }
          v32 = (int)v31[1].monitor;
          if ( (int)++v33 >= v32 )
            goto LABEL_28;
        }
        p_randomVoiceList->klass = (ServantStatusBattleListViewItem_c *)v31;
        sub_1B71570(p_randomVoiceList, (int32_t)v31, v41, v42);
        v43 = (int)StringLiteral_1/*""*/;
        *p_specialSvtVoice = (System_String_o *)StringLiteral_1/*""*/;
        sub_1B71570((ServantStatusBattleListViewItem_o *)p_specialSvtVoice, v43, v44, v45);
      }
LABEL_28:
      ;
    }
    while ( !p_randomVoiceList->klass );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v75,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  if ( p_randomVoiceList->klass )
  {
LABEL_74:
    v73->fields.callbakEndPlay = callbackEnds;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v73->fields.callbakEndPlay, (int32_t)callbackEnds, v46, v47);
    randomVoiceList = v73->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      v73->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(v73, v27);
      return;
    }
LABEL_79:
    sub_1B71828(Instance, v27);
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
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v29; // x1
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Random_o *v38; // x21
  int v39; // w21
  struct ServantVoiceData_array *Item; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v44; // x0
  System_Exception_o *v45; // x19
  System_String_o *v46; // x0
  __int64 v47; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A2396F & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v15);
    sub_1B715CC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v16);
    sub_1B715CC(&System_Random_TypeInfo, v17);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4A2396F = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v44 = sub_1B715E0(&System_Exception_TypeInfo);
      v45 = (System_Exception_o *)sub_1B71818(v44);
      v46 = (System_String_o *)sub_1B715E0(&StringLiteral_25230/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_62546284(v45, v46, 0LL);
      v47 = sub_1B715E0(&Method_EventSvtControl_playPurchaseVoice__);
      sub_1B716F4(v45, v47);
    }
    this->fields.callbackStopVoice = callback;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackStopVoice,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
    v20 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_35;
    v23 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)this->fields.voiceListShop,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v49 = v48;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v24 )
        break;
      current = v49.fields._current;
      if ( !v49.fields._current )
        sub_1B71828(v24, v25);
      if ( !LODWORD(v49.fields._current[1].monitor) )
        sub_1B71830(v24, v25);
      klass = v49.fields._current[2].klass;
      if ( !klass )
        sub_1B71828(v24, v25);
      if ( !v23 )
        sub_1B71828(v24, v25);
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
          sub_1B71828(isVoicePlay, v29);
        v30 = System_Collections_Generic_List_object___Contains(
                v20,
                current,
                (const MethodInfo_34D05F0 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
        if ( !v30 )
        {
          items = v20->fields._items;
          v35 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++v20->fields._version;
          if ( !items )
            sub_1B71828(v30, v31);
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              current,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v37[4] = (Il2CppClass *)current;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)current, v32, v33);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v38 = (System_Random_o *)sub_1B71818(System_Random_TypeInfo);
    System_Random___ctor(v38, 0LL);
    if ( !v20 || !v38 )
      goto LABEL_35;
    v39 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v38->klass->vtable._7_Next.method)(
            v38,
            (unsigned int)v20->fields._size,
            v38->klass->vtable._8_NextDouble.methodPtr);
    if ( this->fields.beforeVoiceIdx == v39 )
      v39 = (v39 + 1) % v20->fields._size;
    Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                              v20,
                                              v39,
                                              (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = Item;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)Item, v41, v42);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v39;
    if ( !randomVoiceList )
LABEL_35:
      sub_1B71828(Instance, v22);
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
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_int__o *v27; // x23
  struct System_Collections_Generic_List_int__o **p_voicePlayedValueList; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x3
  __int64 PlayableVoiceInfoList; // x0
  const MethodInfo *v36; // x1
  System_Collections_Generic_List_T__o *v37; // x23
  int32_t v38; // w22
  int32_t beforeVoiceIdx; // w9
  int v40; // w1
  const MethodInfo_3409B78 *v41; // x4
  EventSvtControl___c_c *v42; // x0
  System_Func_T__TResult__o *_9__43_0; // x22
  Il2CppObject *v44; // x24
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Int32_array *v49; // x0
  struct ServantVoiceData_array *key; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Collections_Generic_List_int__o *forcePlayVoiceSvtIdList; // x8
  __int64 size; // x23
  System_Int32_array_array *v56; // x19
  unsigned __int64 v57; // x24
  ServantStatusBattleListViewItem_o *m_Items; // x25
  ServantStatusBattleListViewItem_c *v59; // x26
  int32_t v60; // w2
  int32_t v61; // w3
  System_Collections_Generic_KeyValuePair_object__int__o v62; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *voiceInfoList; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v64; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16

  if ( (byte_4A2396E & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____, callback);
    sub_1B715CC(&Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___, v5);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B715CC(&System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo, v7);
    sub_1B715CC(&int_____TypeInfo, v8);
    sub_1B715CC(&int___TypeInfo, v9);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Key__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__, v17);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B715CC(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v19);
    sub_1B715CC(&NetworkManager_TypeInfo, v20);
    sub_1B715CC(&Method_EventSvtControl___c__playVoice_b__43_0__, v21);
    sub_1B715CC(&EventSvtControl___c_TypeInfo, v22);
    byte_4A2396E = 1;
  }
  *(_QWORD *)&v62.fields.value = 0LL;
  voiceInfoList = 0LL;
  v62.fields.key = 0LL;
  v23 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.forcePlayVoiceSvtIdList = v23;
  p_forcePlayVoiceSvtIdList = &this->fields.forcePlayVoiceSvtIdList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.forcePlayVoiceSvtIdList, (int32_t)v23, v25, v26);
  v27 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.voicePlayedValueList = v27;
  p_voicePlayedValueList = &this->fields.voicePlayedValueList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayedValueList, (int32_t)v27, v29, v30);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v31);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callbackStopVoice, (int32_t)callback, v32, v33);
    PlayableVoiceInfoList = EventSvtControl__TryGetPlayableVoiceInfoList(
                              this,
                              &voiceInfoList,
                              this->fields.voiceListRand,
                              v34);
    if ( (PlayableVoiceInfoList & 1) != 0 )
    {
      v37 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_43;
      if ( voiceInfoList->fields._size == 1 )
      {
        v38 = 0;
      }
      else
      {
        beforeVoiceIdx = this->fields.beforeVoiceIdx;
        if ( (beforeVoiceIdx & 0x80000000) == 0 )
        {
          if ( beforeVoiceIdx <= voiceInfoList->fields._size - 1 )
            v40 = this->fields.beforeVoiceIdx;
          else
            v40 = voiceInfoList->fields._size - 1;
          this->fields.beforeVoiceIdx = v40;
          *(_QWORD *)&v64.fields.value = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
                                           v37,
                                           v40,
                                           (const MethodInfo_3427E2C *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__).fields.key;
          v64.fields.key = (Il2CppObject *)&v62;
          System_Collections_Generic_KeyValuePair_object__int____ctor(
            v64,
            0LL,
            Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
            v41);
          PlayableVoiceInfoList = (__int64)voiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_43;
          System_Collections_Generic_List_KeyValuePair_object__int____set_Item(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            this->fields.beforeVoiceIdx,
            v62,
            (const MethodInfo_3427E84 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
          v37 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        }
        v42 = EventSvtControl___c_TypeInfo;
        if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
          v42 = EventSvtControl___c_TypeInfo;
        }
        _9__43_0 = (System_Func_T__TResult__o *)v42->static_fields->__9__43_0;
        if ( !_9__43_0 )
        {
          if ( !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v42 = EventSvtControl___c_TypeInfo;
          }
          v44 = (Il2CppObject *)v42->static_fields->__9;
          _9__43_0 = (System_Func_T__TResult__o *)sub_1B71818(System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
          System_Func_KeyValuePair_object__int___int____ctor(
            _9__43_0,
            v44,
            Method_EventSvtControl___c__playVoice_b__43_0__,
            0LL);
          static_fields = EventSvtControl___c_TypeInfo->static_fields;
          static_fields->__9__43_0 = (struct System_Func_KeyValuePair_ServantVoiceData____int___int__o *)_9__43_0;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v46, v47);
        }
        v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                                                     (System_Func_TSource__TResult__o *)_9__43_0,
                                                                     (const MethodInfo_2E8772C *)Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
        v49 = System_Linq_Enumerable__ToArray_int_(
                v48,
                (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
        PlayableVoiceInfoList = RandomUtility__GetRandomRangeIndex(v49, 0, 0LL);
        v37 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        if ( !voiceInfoList )
LABEL_43:
          sub_1B71828(PlayableVoiceInfoList, v36);
        v38 = PlayableVoiceInfoList;
      }
      Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
               v37,
               0,
               (const MethodInfo_3427E2C *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
      key = (struct ServantVoiceData_array *)BasicHelper__IndexValue_KeyValuePair_object__int__(
                                               v37,
                                               v38,
                                               Item,
                                               (const MethodInfo_2E49FDC *)Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____).fields.key;
      this->fields.randomVoiceList = key;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)key, v51, v52);
      randomVoiceList = this->fields.randomVoiceList;
      this->fields.beforeVoiceIdx = v38;
      if ( randomVoiceList )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
        EventSvtControl__setVoiceForm(this, v36);
        forcePlayVoiceSvtIdList = this->fields.forcePlayVoiceSvtIdList;
        if ( forcePlayVoiceSvtIdList )
        {
          size = (unsigned int)forcePlayVoiceSvtIdList->fields._size;
          if ( (int)size < 1 )
            return;
          if ( *p_voicePlayedValueList )
          {
            if ( (*p_voicePlayedValueList)->fields._size <= v38 )
              return;
            v56 = (System_Int32_array_array *)sub_1B71674(int_____TypeInfo, (unsigned int)size);
            v57 = 0LL;
            m_Items = (ServantStatusBattleListViewItem_o *)v56->m_Items;
            do
            {
              PlayableVoiceInfoList = sub_1B71674(int___TypeInfo, 2LL);
              if ( !*p_forcePlayVoiceSvtIdList )
                goto LABEL_43;
              v59 = (ServantStatusBattleListViewItem_c *)PlayableVoiceInfoList;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        *p_forcePlayVoiceSvtIdList,
                                        v57,
                                        (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !v59 )
                goto LABEL_43;
              if ( !LODWORD(v59->_1.namespaze) )
                goto LABEL_44;
              LODWORD(v59->_1.byval_arg.data) = PlayableVoiceInfoList;
              PlayableVoiceInfoList = (__int64)*p_voicePlayedValueList;
              if ( !*p_voicePlayedValueList )
                goto LABEL_43;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        (System_Collections_Generic_List_int__o *)PlayableVoiceInfoList,
                                        v38,
                                        (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( LODWORD(v59->_1.namespaze) <= 1 )
                goto LABEL_44;
              HIDWORD(v59->_1.byval_arg.data) = PlayableVoiceInfoList;
              if ( !v56 )
                goto LABEL_43;
              if ( v57 >= v56->max_length )
LABEL_44:
                sub_1B71830(PlayableVoiceInfoList, v36);
              m_Items->klass = v59;
              sub_1B71570(m_Items, (int32_t)v59, v60, v61);
              ++v57;
              m_Items = (ServantStatusBattleListViewItem_o *)((char *)m_Items + 8);
            }
            while ( size != v57 );
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            PlayableVoiceInfoList = (__int64)NetworkManager__getRequest_object_(
                                               0LL,
                                               (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
            if ( PlayableVoiceInfoList )
            {
              TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)PlayableVoiceInfoList, v56, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  ServantStatusBattleListViewItem_o *p_voiceListBoxGacha; // x0
  int32_t v13; // w1

  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)assetName,
    (int32_t)performanceRoot);
  this->fields.performanceRoot = performanceRoot;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.performanceRoot, (int32_t)performanceRoot, v8, v9);
  p_voiceListBoxGacha = (ServantStatusBattleListViewItem_o *)&this->fields.voiceListBoxGacha;
  if ( listBoxGacha )
  {
    p_voiceListBoxGacha->klass = (ServantStatusBattleListViewItem_c *)listBoxGacha;
    v13 = (int)listBoxGacha;
  }
  else
  {
    v13 = 0;
    p_voiceListBoxGacha->klass = 0LL;
  }
  sub_1B71570(p_voiceListBoxGacha, v13, v10, v11);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__setIndividualShopSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listIndividualShop,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *v9; // x0
  int32_t v10; // w1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)assetName,
    (int32_t)method);
  v9 = (ServantStatusBattleListViewItem_o *)(p_asstName + 11);
  if ( listIndividualShop )
  {
    v9->klass = (ServantStatusBattleListViewItem_c *)listIndividualShop;
    v10 = (int)listIndividualShop;
  }
  else
  {
    v10 = 0;
    v9->klass = 0LL;
  }
  sub_1B71570(v9, v10, v7, v8);
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
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x0
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  ServantStatusBattleListViewItem_o *p_voiceListMission; // x0
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  ServantStatusBattleListViewItem_o *p_voiceListShop; // x0
  int32_t v24; // w1
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListOverwrite; // x19
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A2396C & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, listRand);
    byte_4A2396C = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)listMission,
    (int32_t)listShop);
  if ( listRand && listRand->fields._size >= 1 )
  {
    this->fields.voiceListRand = listRand;
    p_voiceListRand = &this->fields.voiceListRand;
    v16 = (int)listRand;
  }
  else
  {
    this->fields.voiceListRand = 0LL;
    p_voiceListRand = &this->fields.voiceListRand;
    v16 = 0;
  }
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_voiceListRand, v16, v13, v14);
  p_voiceListMission = (ServantStatusBattleListViewItem_o *)&this->fields.voiceListMission;
  if ( listMission )
  {
    p_voiceListMission->klass = (ServantStatusBattleListViewItem_c *)listMission;
    v20 = (int)listMission;
  }
  else
  {
    v20 = 0;
    p_voiceListMission->klass = 0LL;
  }
  sub_1B71570(p_voiceListMission, v20, v17, v18);
  p_voiceListShop = (ServantStatusBattleListViewItem_o *)&this->fields.voiceListShop;
  if ( listShop )
  {
    p_voiceListShop->klass = (ServantStatusBattleListViewItem_c *)listShop;
    v24 = (int)listShop;
  }
  else
  {
    v24 = 0;
    p_voiceListShop->klass = 0LL;
  }
  sub_1B71570(p_voiceListShop, v24, v21, v22);
  this->fields.voiceListOverwrite = 0LL;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_voiceListOverwrite, 0, v26, v27);
  *((_DWORD *)p_voiceListOverwrite - 24) = -1;
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
  __int64 v14; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v16; // x25
  __int64 v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  ServantVoiceData_o *v20; // x1
  __int64 v21; // x21
  System_Predicate_int__o *v22; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  UIStandFigureR_o *v26; // x21
  System_Action_o *v27; // x22
  Il2CppObject *v28; // [xsp+8h] [xbp-68h]

  if ( (byte_4A2396D & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_EventSvtControl_svtVoicePlay__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Exists__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B715CC(&System_Predicate_int__TypeInfo, v9);
    sub_1B715CC(&Method_EventSvtControl___c__DisplayClass42_0__setVoiceForm_b__0__, v10);
    sub_1B715CC(&EventSvtControl___c__DisplayClass42_0_TypeInfo, v11);
    byte_4A2396D = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v28 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_20;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = sub_1B71818(EventSvtControl___c__DisplayClass42_0_TypeInfo);
      EventSvtControl___c__DisplayClass42_0___ctor((EventSvtControl___c__DisplayClass42_0_o *)v17, 0LL);
      if ( v16 >= randomVoiceList->max_length )
        sub_1B71830(monitor, v14);
      if ( !v17 )
        break;
      v20 = randomVoiceList->m_Items[v16];
      *(_QWORD *)(v17 + 16) = v20;
      v21 = v17 + 16;
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v20, v18, v19);
      v22 = (System_Predicate_int__o *)sub_1B71818(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v22,
        (Il2CppObject *)v17,
        Method_EventSvtControl___c__DisplayClass42_0__setVoiceForm_b__0__,
        0LL);
      if ( !v12 )
        break;
      monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                               v12,
                                                               (System_Predicate_T__o *)v22,
                                                               (const MethodInfo_34B3848 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        if ( !*(_QWORD *)v21 )
          break;
        v14 = *(unsigned int *)(*(_QWORD *)v21 + 56LL);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v14,
            *(const MethodInfo_34B323C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size + 1] = v14;
        }
      }
      if ( (__int64)++v16 >= (int)randomVoiceList->max_length )
        goto LABEL_16;
    }
LABEL_20:
    sub_1B71828(monitor, v14);
  }
LABEL_16:
  monitor = (System_Collections_Generic_List_object__o *)v28[5].monitor;
  if ( !monitor )
    goto LABEL_20;
  monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           monitor,
                                                           0,
                                                           (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
  if ( !monitor )
    goto LABEL_20;
  v26 = *(UIStandFigureR_o **)&monitor->fields._size;
  v27 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v27, v28, Method_EventSvtControl_svtVoicePlay__, 0LL);
  if ( !v26 )
    goto LABEL_20;
  UIStandFigureR__PreloadFormAssets(v26, v12, v27, 0LL);
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
  int32_t v21; // w2
  int32_t v22; // w3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v25; // x23
  System_Collections_Generic_List_object__o *v26; // x24
  __int64 v27; // x26
  __int64 v28; // x27
  System_String_o *v29; // x25
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int32_t v36; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v44; // w25
  __int64 v45; // x8
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x0
  const MethodInfo *v49; // x1
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A23976 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4A23976 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !targetVoiceIds )
    goto LABEL_40;
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_21:
      sub_1B71830(Instance, v20);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_24;
  }
  v25 = (VoicePlayCondMaster_o *)Instance;
  v26 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
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
        v33 = Method_System_Collections_Generic_List_string__Add__;
        ++v26->fields._version;
        if ( !items )
          break;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)v29,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v29;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v29, v30, v31);
        }
      }
      if ( v28 == v27 )
        goto LABEL_22;
      if ( ++v27 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_21;
    }
LABEL_40:
    sub_1B71828(Instance, v20);
  }
LABEL_22:
  if ( !v26 )
    goto LABEL_40;
  v36 = UnityEngine_Random__Range_69217592(0, v26->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v26,
                              v36,
                              (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_24:
  this->fields.callbakEndPlay = callback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, (int32_t)callback, v21, v22);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, v38, v39);
  Instance = (DataManager_o *)this->fields.voiceIndividualShopList;
  if ( !Instance )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v51 = v50;
LABEL_26:
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v40 )
      break;
    current = v51.fields._current;
    if ( !v51.fields._current )
      sub_1B71828(v40, v41);
    monitor = (int)v51.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v44 >= monitor )
          sub_1B71830(v40, v41);
        v45 = *((_QWORD *)&current[2].klass + (int)v44);
        if ( !v45 )
          sub_1B71828(v40, v41);
        v40 = System_String__op_Equality(*(System_String_o **)(v45 + 16), Item, 0LL);
        if ( v40 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v44 >= monitor )
          goto LABEL_26;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)current, v46, v47);
      if ( !*p_randomVoiceList )
        sub_1B71828(v48, v49);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v49);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A23975 & 1) == 0 )
  {
    sub_1B715CC(&SoundManager_TypeInfo, method);
    sub_1B715CC(&StringLiteral_23655/*"svtVoicePlay"*/, v3);
    byte_4A23975 = 1;
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
      sub_1B71828(0LL, v7);
    SePlayer__Destroy(*p_player, 0LL);
    this->fields.player = 0LL;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.player, 0, v8, v9);
    this->fields.callbakEndPlay = 0LL;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, 0, v10, v11);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_69242432(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23655/*"svtVoicePlay"*/,
    0LL);
}


void __fastcall EventSvtControl__svtVoicePlay(EventSvtControl_o *this, const MethodInfo *method)
{
  EventSvtControl_o *v2; // x19
  __int64 v3; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v7; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x5

  v2 = this;
  if ( (byte_4A23971 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    this = (EventSvtControl_o *)sub_1B715CC(&Method_EventSvtControl_SvtVoicePlayProc__, v3);
    byte_4A23971 = 1;
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
        sub_1B71830(this, method);
      v7 = randomVoiceList->m_Items[playCnt];
      if ( v7 )
      {
        additionalPerformances = v7->fields.additionalPerformances;
        v9 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
        System_Action___ctor(v9, (Il2CppObject *)v2, Method_EventSvtControl_SvtVoicePlayProc__, 0LL);
        EventSvtControl__PlayPerformance(v2, additionalPerformances, 0, 1, v9, v10);
        return;
      }
LABEL_13:
      sub_1B71828(this, method);
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
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  int32_t v40; // w3
  System_Random_o *v41; // x20
  int32_t v42; // w0
  struct ServantVoiceData_array *Item; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A2397C & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v9);
    sub_1B715CC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_1B715CC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_1B715CC(&System_Random_TypeInfo, v20);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4A2397C = 1;
  }
  memset(&v48, 0, sizeof(v48));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               eventId,
               (const MethodInfo_30F8760 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v26 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_34;
        v27 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v47,
          (System_Collections_Generic_List_object__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v48 = v47;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v48,
                  (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v28 )
            break;
          current = v48.fields._current;
          if ( !v48.fields._current )
            sub_1B71828(v28, v29);
          if ( !LODWORD(v48.fields._current[1].monitor) )
            sub_1B71830(v28, v29);
          klass = v48.fields._current[2].klass;
          if ( !klass )
            sub_1B71828(v28, v29);
          if ( !v27 )
            sub_1B71828(v28, v29);
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
              sub_1B71828(isVoicePlay, v33);
            items = v26->fields._items;
            v37 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v26->fields._version;
            if ( !items )
              sub_1B71828(isVoicePlay, v33);
            size = v26->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                current,
                *(const MethodInfo_34D0260 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v39[4] = (Il2CppClass *)current;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)current, v34, v35);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v48,
          (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v26 )
        {
          if ( v26->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_1B71570(
              (ServantStatusBattleListViewItem_o *)&this->fields.callbackStopVoice,
              (int32_t)callback,
              (int32_t)v24,
              v40);
            v41 = (System_Random_o *)sub_1B71818(System_Random_TypeInfo);
            System_Random___ctor(v41, 0LL);
            if ( v41 )
            {
              v42 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v41->klass->vtable._7_Next.method)(
                      v41,
                      (unsigned int)v26->fields._size,
                      v41->klass->vtable._8_NextDouble.methodPtr);
              Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                        v26,
                                                        v42,
                                                        (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
              this->fields.randomVoiceList = Item;
              sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)Item, v44, v45);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v23);
                return;
              }
            }
LABEL_34:
            sub_1B71828(Instance, v23);
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, v24);
}


void __fastcall EventSvtControl__PlayPerformanceProc_d__68___ctor(
        EventSvtControl__PlayPerformanceProc_d__68_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventSvtControl__PlayPerformanceProc_d__68__MoveNext(
        EventSvtControl__PlayPerformanceProc_d__68_o *this,
        const MethodInfo *method)
{
  EventSvtControl__PlayPerformanceProc_d__68_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct EventSvtControl_o *_4__this; // x22
  Il2CppObject *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct EventSvtControl_o *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *animName; // x1
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v19; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  bool result; // w0
  struct EventSvtControl___c__DisplayClass68_0_o *_8__1; // x8
  Il2CppObject *v25; // x20
  System_Func_bool__o *v26; // x21
  UnityEngine_WaitUntil_o *v27; // x20
  ServantStatusBattleListViewItem_o *v28; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Action_o *playEndAction; // x8

  v2 = this;
  if ( (byte_4A23991 & 1) == 0 )
  {
    sub_1B715CC(&System_Func_bool__TypeInfo, method);
    sub_1B715CC(&Method_EventSvtControl___c__DisplayClass68_0__PlayPerformanceProc_b__0__, v3);
    sub_1B715CC(&EventSvtControl___c__DisplayClass68_0_TypeInfo, v4);
    sub_1B715CC(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    this = (EventSvtControl__PlayPerformanceProc_d__68_o *)sub_1B715CC(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4A23991 = 1;
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
    v9 = (Il2CppObject *)sub_1B71818(EventSvtControl___c__DisplayClass68_0_TypeInfo);
    System_Object___ctor(v9, 0LL);
    v2->fields.__8__1 = (struct EventSvtControl___c__DisplayClass68_0_o *)v9;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, (int32_t)v9, v10, v11);
    this = (EventSvtControl__PlayPerformanceProc_d__68_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    v14 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v14;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v14, v12, v13);
    this = (EventSvtControl__PlayPerformanceProc_d__68_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    animName = (Il2CppObject *)v2->fields.animName;
    this->fields.__2__current = animName;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)animName, v15, v16);
    delay = v2->fields.delay;
    if ( delay > 0.0 )
    {
      v19 = (UnityEngine_WaitForSeconds_o *)sub_1B71818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v19, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v19;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(p__2__current, (int32_t)v19, v21, v22);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_12:
    if ( _4__this )
    {
      this = (EventSvtControl__PlayPerformanceProc_d__68_o *)_4__this->fields.animationRef;
      if ( this )
      {
        UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
        _8__1 = v2->fields.__8__1;
        if ( _8__1 )
        {
          this = (EventSvtControl__PlayPerformanceProc_d__68_o *)_4__this->fields.animationRef;
          if ( this )
          {
            UnityEngine_Animation__Play_69002944((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0LL);
            if ( v2->fields.isWaitPerformance )
            {
              v25 = (Il2CppObject *)v2->fields.__8__1;
              v26 = (System_Func_bool__o *)sub_1B71818(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v26,
                v25,
                Method_EventSvtControl___c__DisplayClass68_0__PlayPerformanceProc_b__0__,
                0LL);
              v27 = (UnityEngine_WaitUntil_o *)sub_1B71818(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v27, v26, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v27;
              v28 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B71570(v28, (int32_t)v27, v29, v30);
              *(_DWORD *)&v28[-1].fields.isMine = 2;
              return 1;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_21:
    sub_1B71828(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall EventSvtControl__PlayPerformanceProc_d__68__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventSvtControl__PlayPerformanceProc_d__68_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventSvtControl__PlayPerformanceProc_d__68__System_Collections_IEnumerator_Reset(
        EventSvtControl__PlayPerformanceProc_d__68_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_EventSvtControl__PlayPerformanceProc_d__68_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall EventSvtControl__PlayPerformanceProc_d__68__System_Collections_IEnumerator_get_Current(
        EventSvtControl__PlayPerformanceProc_d__68_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventSvtControl__PlayPerformanceProc_d__68__System_IDisposable_Dispose(
        EventSvtControl__PlayPerformanceProc_d__68_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventSvtControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2398E & 1) == 0 )
  {
    sub_1B715CC(&EventSvtControl___c_TypeInfo, v1);
    byte_4A2398E = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(EventSvtControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventSvtControl___c_TypeInfo->static_fields->__9 = (struct EventSvtControl___c_o *)v2;
  sub_1B71570((ServantStatusBattleListViewItem_o *)EventSvtControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventSvtControl___c___ctor(EventSvtControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall EventSvtControl___c___TryGetPlayableVoiceInfoList_b__61_0(
        EventSvtControl___c_o *this,
        ServantVoiceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return x->fields.id;
}


int32_t __fastcall EventSvtControl___c___playVoice_b__43_0(
        EventSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_ServantVoiceData____int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4A2398F & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Value__, x.fields.key);
    byte_4A2398F = 1;
  }
  return value;
}


void __fastcall EventSvtControl___c__DisplayClass42_0___ctor(
        EventSvtControl___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventSvtControl___c__DisplayClass42_0___setVoiceForm_b__0(
        EventSvtControl___c__DisplayClass42_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = a;
  voice = this->fields.voice;
  if ( !voice )
    sub_1B71828(this, a);
  return System_Int32__Equals_62310612((int32_t)&v5, voice->fields.form, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass54_0___ctor(
        EventSvtControl___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass54_1___ctor(
        EventSvtControl___c__DisplayClass54_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass54_1___boxGachaPlayVoice_b__0(
        EventSvtControl___c__DisplayClass54_1_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct EventSvtControl___c__DisplayClass54_0_o *CS___8__locals1; // x8
  EventSvtControl___c__DisplayClass54_1_o *v5; // x19
  struct System_Action_o *vdArray; // x1
  struct EventSvtControl___c__DisplayClass54_0_o *v7; // x8
  struct System_Action_o *_9__0; // x9
  struct EventSvtControl___c__DisplayClass54_0_o *v9; // x8
  struct System_Action_o *callBackStartPlay; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  v5 = this;
  this = (EventSvtControl___c__DisplayClass54_1_o *)CS___8__locals1->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  vdArray = (struct System_Action_o *)v5->fields.vdArray;
  this[1].fields.__9__0 = vdArray;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this[1].fields.__9__0, (int32_t)vdArray, v2, v3);
  v7 = v5->fields.CS___8__locals1;
  if ( !v7
    || (this = (EventSvtControl___c__DisplayClass54_1_o *)v7->fields.__4__this) == 0LL
    || (_9__0 = this[1].fields.__9__0) == 0LL
    || (LODWORD(this[2].klass) = _9__0->fields.m_target,
        BYTE2(this[5].monitor) = v7->fields.arg.fields.skipPerformance,
        EventSvtControl__svtVoicePlay((EventSvtControl_o *)this, 0LL),
        (v9 = v5->fields.CS___8__locals1) == 0LL) )
  {
LABEL_10:
    sub_1B71828(this, method);
  }
  callBackStartPlay = v9->fields.arg.fields.callBackStartPlay;
  if ( callBackStartPlay )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callBackStartPlay->fields.m_target)(
      callBackStartPlay->fields.original_method_info,
      *(_QWORD *)&callBackStartPlay->fields.extra_arg);
}


void __fastcall EventSvtControl___c__DisplayClass58_0___ctor(
        EventSvtControl___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventSvtControl___c__DisplayClass58_0___PlayEventTradeVoice_b__0(
        EventSvtControl___c__DisplayClass58_0_o *this,
        ServantVoiceData_array *dataList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Func_ServantVoiceData__bool__o *_9__1; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A23990 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_ServantVoiceData___, dataList);
    sub_1B715CC(&System_Func_ServantVoiceData__bool__TypeInfo, v5);
    sub_1B715CC(&Method_EventSvtControl___c__DisplayClass58_0__PlayEventTradeVoice_b__1__, v6);
    byte_4A23990 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1B71818(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass58_0__PlayEventTradeVoice_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  return BasicHelper__Any_object__48523356(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2E4685C *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool __fastcall EventSvtControl___c__DisplayClass58_0___PlayEventTradeVoice_b__1(
        EventSvtControl___c__DisplayClass58_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B71828(this, 0LL);
  return System_String__op_Equality(data->fields.id, this->fields.id, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass68_0___ctor(
        EventSvtControl___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventSvtControl___c__DisplayClass68_0___PlayPerformanceProc_b__0(
        EventSvtControl___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  struct EventSvtControl_o *_4__this; // x8
  EventSvtControl___c__DisplayClass68_0_o *v3; // x19
  struct EventSvtControl_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v3 = this;
  this = (EventSvtControl___c__DisplayClass68_0_o *)_4__this->fields.animationRef;
  if ( !this )
    goto LABEL_10;
  this = (EventSvtControl___c__DisplayClass68_0_o *)UnityEngine_Animation__get_Item(
                                                      (UnityEngine_Animation_o *)this,
                                                      v3->fields.animName,
                                                      0LL);
  if ( !this )
    goto LABEL_10;
  if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) >= 1.0 )
    return 1;
  v4 = v3->fields.__4__this;
  if ( !v4 || (this = (EventSvtControl___c__DisplayClass68_0_o *)v4->fields.animationRef) == 0LL )
LABEL_10:
    sub_1B71828(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL);
}