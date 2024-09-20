void __fastcall EventSvtControl___cctor(const MethodInfo *method)
{
  if ( (byte_4A5F057 & 1) == 0 )
  {
    sub_1B885B0(&EventSvtControl_TypeInfo);
    byte_4A5F057 = 1;
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_c *v14; // x1
  struct System_Action_o **p_performanceEndAction; // x20
  __int64 v16; // x1
  UnityEngine_GameObject_o *transform; // x0
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s10
  float v22; // s8
  float v23; // s9
  Il2CppObject *ComponentInChildren_object; // x21
  struct System_Action_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x20
  EventSvtControl_c *v27; // x0
  float v28; // s10
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  EventSvtControl_o *v36; // x0
  const MethodInfo *v37; // x1
  UnityEngine_Vector3_o v38; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A5F055 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventSvtControl_ReleasePerformance__);
    sub_1B885B0(&EventSvtControl_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3969/*"CallPerformanceEndAction"*/);
    byte_4A5F055 = 1;
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
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0LL);
  v11 = (struct System_Action_o *)System_Delegate__Combine(
                                    (System_Delegate_o *)endAction,
                                    (System_Delegate_o *)v10,
                                    0LL);
  if ( v11 )
  {
    v14 = System_Action_TypeInfo;
    if ( v11->klass != System_Action_TypeInfo || (this->fields.performanceEndAction = v11, v11->klass != v14) )
    {
      sub_1B88ACC(v11);
      EventSvtControl__CallPerformanceEndAction(v36, v37);
      return;
    }
    p_performanceEndAction = &this->fields.performanceEndAction;
  }
  else
  {
    p_performanceEndAction = &this->fields.performanceEndAction;
    this->fields.performanceEndAction = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_performanceEndAction, (int32_t)v11, v12, v13);
  transform = this->fields.objectRef;
  if ( !transform
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = this->fields.objectRef) == 0LL) )
  {
LABEL_28:
    sub_1B8880C(transform, v16);
  }
  v21 = v18;
  v22 = v19;
  v23 = v20;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 transform,
                                 (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
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
      v26 = this->fields.objectRef;
      v27 = EventSvtControl_TypeInfo;
      v28 = v21 - (float)SLODWORD(ComponentInChildren_object[10].monitor);
      if ( !EventSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo);
        v27 = EventSvtControl_TypeInfo;
      }
      v38.fields.x = v28;
      v38.fields.y = v22;
      v38.fields.z = v23;
      transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v26, v27->static_fields->BASE_MOVE_TIME, v38, 0LL);
      if ( transform )
      {
        v29 = transform;
        LODWORD(transform[1].monitor) = 3;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v29[3].monitor = gameObject;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v29[3].monitor, (int32_t)gameObject, v31, v32);
        v33 = StringLiteral_3969/*"CallPerformanceEndAction"*/;
        *(_QWORD *)&v29[3].fields.m_CachedPtr = StringLiteral_3969/*"CallPerformanceEndAction"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v29[3].fields, v33, v34, v35);
        return;
      }
    }
    goto LABEL_28;
  }
  v25 = *p_performanceEndAction;
  if ( *p_performanceEndAction )
  {
    m_target = v25->fields.m_target;
    original_method_info = v25->fields.original_method_info;
    v9 = *(_QWORD *)&v25->fields.extra_arg;
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
  if ( (byte_4A5F047 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_1B885B0(&Method_EventSvtControl_EndPlayProc__);
    byte_4A5F047 = 1;
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
        sub_1B88814(this, method);
      v5 = randomVoiceList->m_Items[v4];
      if ( !v5 )
LABEL_10:
        sub_1B8880C(this, method);
      additionalPerformances = v5->fields.additionalPerformances;
      v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)v2, Method_EventSvtControl_EndPlayProc__, 0LL);
      EventSvtControl__PlayPerformance(v2, additionalPerformances, 2, 1, v7, v8);
    }
  }
}


void __fastcall EventSvtControl__EndPlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  EventSvtControl_o *v4; // x19
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v7; // x8
  ServantStatusBattleListViewItem_o *p_player; // x0
  ServantStatusBattleListViewItem_o *p_callbakEndPlay; // x0
  System_Action_o *callbakEndPlay; // x20
  ServantStatusBattleListViewItem_o *p_callbackStopVoice; // x0
  struct System_Action_o *callbackStopVoice; // x20

  v4 = this;
  if ( (byte_4A5F048 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23713/*"svtVoicePlay"*/);
    this = (EventSvtControl_o *)sub_1B885B0(&StringLiteral_5487/*"END_PLAY"*/);
    byte_4A5F048 = 1;
  }
  playCnt = v4->fields.playCnt;
  if ( (int)playCnt < v4->fields.maxPlayCnt )
  {
    randomVoiceList = v4->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= randomVoiceList->max_length )
        sub_1B88814(this, method);
      v7 = randomVoiceList->m_Items[playCnt];
      if ( v7 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v4,
          (System_String_o *)StringLiteral_23713/*"svtVoicePlay"*/,
          v7->fields.delay,
          0LL);
        return;
      }
    }
LABEL_16:
    sub_1B8880C(this, method);
  }
  p_player = (ServantStatusBattleListViewItem_o *)&v4->fields.player;
  if ( v4->fields.player )
  {
    p_player->klass = 0LL;
    sub_1B88554(p_player, 0, v2, v3);
  }
  p_callbakEndPlay = (ServantStatusBattleListViewItem_o *)&v4->fields.callbakEndPlay;
  callbakEndPlay = v4->fields.callbakEndPlay;
  v4->fields.playCnt = 0;
  *(_WORD *)&v4->fields.isUnSkippable = 0;
  v4->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    p_callbakEndPlay->klass = 0LL;
    sub_1B88554(p_callbakEndPlay, 0, v2, v3);
    ActionExtensions__Call(callbakEndPlay, 0LL);
  }
  else
  {
    p_callbackStopVoice = (ServantStatusBattleListViewItem_o *)&v4->fields.callbackStopVoice;
    callbackStopVoice = v4->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      p_callbackStopVoice->klass = 0LL;
      sub_1B88554(p_callbackStopVoice, 0, v2, v3);
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

  if ( (byte_4A5F051 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_4A5F051 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_1B8880C(0LL, voiceId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v16 = v15;
  do
  {
LABEL_5:
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v6 )
    {
      v13 = 0;
      v12 = 8;
      goto LABEL_15;
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1B8880C(v6, v7);
    monitor = (int)v16.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= monitor )
      sub_1B88814(v6, v7);
    v11 = *((_QWORD *)&current[2].klass + (int)v10);
    if ( !v11 )
      sub_1B8880C(v6, v7);
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v13 && v12 == 7;
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v15; // x24
  System_Collections_Generic_List_object__o *v16; // x23
  __int64 v17; // x26
  __int64 v18; // x27
  System_String_o *v19; // x25
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  int32_t v26; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v34; // w24
  __int64 v35; // x8
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x0
  const MethodInfo *v39; // x1
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5F04E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F04E = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1B8880C(Instance, v10);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1B88814(Instance, v10);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v15 = (VoicePlayCondMaster_o *)Instance;
  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v17 = 0LL;
    v18 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v15 )
    {
      v19 = targetVoiceIds->m_Items[v17];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v15, svtId, v19, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_42;
        items = v16->fields._items;
        v23 = Method_System_Collections_Generic_List_string__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)v19,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v19;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
        }
      }
      if ( v18 == v17 )
        goto LABEL_23;
      if ( ++v17 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v16 )
    goto LABEL_42;
  v26 = UnityEngine_Random__Range_69419120(0, v16->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v16,
                              v26,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, (int32_t)callback, v11, v12);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, v28, v29);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v41 = v40;
LABEL_27:
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v30 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1B8880C(v30, v31);
    monitor = (int)v41.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v34 = 0;
      while ( 1 )
      {
        if ( v34 >= monitor )
          sub_1B88814(v30, v31);
        v35 = *((_QWORD *)&current[2].klass + (int)v34);
        if ( !v35 )
          sub_1B8880C(v30, v31);
        v30 = System_String__op_Equality(*(System_String_o **)(v35 + 16), Item, 0LL);
        if ( v30 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v34 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)current, v36, v37);
      if ( !*p_randomVoiceList )
        sub_1B8880C(v38, v39);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v39);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v15; // x23
  unsigned __int64 v16; // x29
  __int64 v17; // x28
  System_String_o **m_Items; // x20
  __int64 v19; // x26
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x1
  System_String_o **v23; // x25
  System_String_o **v24; // x23
  System_String_array *v25; // x20
  int32_t v26; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListTrade; // x22
  __int64 v28; // x19
  System_Func_object__bool__o *v29; // x28
  System_Collections_Generic_List_T__o *v30; // x0
  System_Func_T__bool__o *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int32_t v38; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v46; // w23
  __int64 v47; // x8
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x0
  const MethodInfo *v51; // x1
  System_Action_o *v52; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v53; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v54; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+40h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4A5F04F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_ServantVoiceData_____);
    sub_1B885B0(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&System_Func_ServantVoiceData____bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_EventSvtControl___c__DisplayClass58_0__PlayEventTradeVoice_b__0__);
    sub_1B885B0(&EventSvtControl___c__DisplayClass58_0_TypeInfo);
    byte_4A5F04F = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1B88814(Master_object, v10);
  }
  v52 = callback;
  v15 = Master_object;
  v53 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v16 = 0LL;
    v17 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v54 = v15;
    do
    {
      v19 = sub_1B887FC(EventSvtControl___c__DisplayClass58_0_TypeInfo);
      EventSvtControl___c__DisplayClass58_0___ctor((EventSvtControl___c__DisplayClass58_0_o *)v19, 0LL);
      if ( v16 >= targetVoiceIds->max_length )
        goto LABEL_45;
      if ( !v19 )
        goto LABEL_44;
      v22 = m_Items[v16];
      *(_QWORD *)(v19 + 16) = v22;
      v23 = (System_String_o **)(v19 + 16);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)v22, v20, v21);
      if ( !v15 )
        goto LABEL_44;
      Master_object = (VoicePlayCondMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                 v15,
                                                 v7,
                                                 *v23,
                                                 0LL,
                                                 -1LL,
                                                 -1,
                                                 0LL,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v24 = m_Items;
        v25 = targetVoiceIds;
        v26 = v7;
        voiceListTrade = this->fields.voiceListTrade;
        v28 = v17;
        v29 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v29,
          (Il2CppObject *)v19,
          Method_EventSvtControl___c__DisplayClass58_0__PlayEventTradeVoice_b__0__,
          0LL);
        v30 = (System_Collections_Generic_List_T__o *)voiceListTrade;
        v7 = v26;
        targetVoiceIds = v25;
        m_Items = v24;
        v15 = v54;
        v31 = (System_Func_T__bool__o *)v29;
        v17 = v28;
        Master_object = (VoicePlayCondMaster_o *)BasicHelper__Any_object_(
                                                   v30,
                                                   v31,
                                                   (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v53 )
            goto LABEL_44;
          v10 = *v23;
          items = v53->fields._items;
          v35 = Method_System_Collections_Generic_List_string__Add__;
          ++v53->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v53->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v53,
              (Il2CppObject *)v10,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v53->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v10;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v10, v32, v33);
          }
        }
      }
    }
    while ( v17 != ++v16 );
  }
  if ( !v53 )
    goto LABEL_44;
  v38 = UnityEngine_Random__Range_69419120(0, v53->fields._size, 0LL);
  callback = v52;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v53,
                              v38,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, (int32_t)callback, v11, v12);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, v40, v41);
  Master_object = (VoicePlayCondMaster_o *)this->fields.voiceListTrade;
  if ( !Master_object )
LABEL_44:
    sub_1B8880C(Master_object, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v56 = v55;
LABEL_29:
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v42 )
      break;
    current = v56.fields._current;
    if ( !v56.fields._current )
      sub_1B8880C(v42, v43);
    monitor = (int)v56.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( v46 >= monitor )
          sub_1B88814(v42, v43);
        v47 = *((_QWORD *)&current[2].klass + (int)v46);
        if ( !v47 )
          sub_1B8880C(v42, v43);
        v42 = System_String__op_Equality(*(System_String_o **)(v47 + 16), Item, 0LL);
        if ( v42 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v46 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)current, v48, v49);
      if ( !*p_randomVoiceList )
        sub_1B8880C(v50, v51);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v51);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Object_o *v20; // x25
  struct UnityEngine_Animation_o **p_animationRef; // x25
  UnityEngine_Object_o *animationRef; // x26
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_Object_o *v26; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v28; // x22
  const MethodInfo *v29; // x4
  System_Collections_IEnumerator_o *v30; // x1

  if ( (byte_4A5F053 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F053 = 1;
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.objectRef, (int32_t)Effect, v18, v19);
    v20 = (UnityEngine_Object_o *)*p_objectRef;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Implicit(v20, 0LL) )
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
    sub_1B8880C(performanceRoot, v13);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 performanceRoot,
                                 (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  *p_animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.animationRef,
    (int32_t)ComponentInChildren_object,
    v24,
    v25);
  v26 = (UnityEngine_Object_o *)*p_animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v26, 0LL) )
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
  v28 = *p_afterPerformance;
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v28->fields.name, 0LL) )
  {
    v30 = EventSvtControl__PlayPerformanceProc(
            this,
            v28->fields.name,
            v28->fields.delay,
            isWaitPerformance,
            playEndAction,
            v29);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v30, 0LL);
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

  if ( (byte_4A5F054 & 1) == 0 )
  {
    sub_1B885B0(&EventSvtControl__PlayPerformanceProc_d__68_TypeInfo);
    byte_4A5F054 = 1;
  }
  v11 = sub_1B887FC(EventSvtControl__PlayPerformanceProc_d__68_TypeInfo);
  EventSvtControl__PlayPerformanceProc_d__68___ctor((EventSvtControl__PlayPerformanceProc_d__68_o *)v11, 0, 0LL);
  if ( !v11 )
    sub_1B8880C(v12, v13);
  *(_QWORD *)(v11 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 40) = animName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 40), (int32_t)animName, v16, v17);
  *(float *)(v11 + 48) = delay;
  *(_BYTE *)(v11 + 64) = isWaitPerformance;
  *(_QWORD *)(v11 + 72) = playEndAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 72), (int32_t)playEndAction, v18, v19);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v15; // x24
  System_Collections_Generic_List_object__o *v16; // x23
  __int64 v17; // x26
  __int64 v18; // x27
  System_String_o *v19; // x25
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  int32_t v26; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v34; // w24
  __int64 v35; // x8
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x0
  const MethodInfo *v39; // x1
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5F04D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F04D = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1B8880C(Instance, v10);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1B88814(Instance, v10);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v15 = (VoicePlayCondMaster_o *)Instance;
  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v17 = 0LL;
    v18 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v15 )
    {
      v19 = targetVoiceIds->m_Items[v17];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v15, svtId, v19, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_42;
        items = v16->fields._items;
        v23 = Method_System_Collections_Generic_List_string__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)v19,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v19;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
        }
      }
      if ( v18 == v17 )
        goto LABEL_23;
      if ( ++v17 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v16 )
    goto LABEL_42;
  v26 = UnityEngine_Random__Range_69419120(0, v16->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v16,
                              v26,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, (int32_t)callback, v11, v12);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, v28, v29);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v41 = v40;
LABEL_27:
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v30 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1B8880C(v30, v31);
    monitor = (int)v41.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v34 = 0;
      while ( 1 )
      {
        if ( v34 >= monitor )
          sub_1B88814(v30, v31);
        v35 = *((_QWORD *)&current[2].klass + (int)v34);
        if ( !v35 )
          sub_1B8880C(v30, v31);
        v30 = System_String__op_Equality(*(System_String_o **)(v35 + 16), Item, 0LL);
        if ( v30 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v34 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)current, v36, v37);
      if ( !*p_randomVoiceList )
        sub_1B8880C(v38, v39);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v39);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__ReleasePerformance(EventSvtControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct UnityEngine_Animation_o **p_animationRef; // x19
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4A5F056 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F056 = 1;
  }
  this->fields.animationRef = 0LL;
  p_animationRef = &this->fields.animationRef;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_animationRef, 0, v2, v3);
  v6 = (UnityEngine_Object_o *)*(p_animationRef - 1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(v6, 0LL);
}


bool __fastcall EventSvtControl__SetBoxGachaTalkInfo(
        EventSvtControl_o *this,
        int32_t svtId,
        BoxGachaTalkEntity_o *talkEntity,
        BoxGachaTalkInfo_o **info,
        const MethodInfo *method)
{
  BoxGachaTalkInfo_o *v8; // x21
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_int__o *v15; // x21
  struct System_String_array *befVoiceIds; // x9
  unsigned __int64 v17; // x24
  System_String_o *v18; // x25
  _BOOL8 isVoicePlay; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x20
  int monitor; // w8
  int i; // w27
  __int64 v24; // x28
  const MethodInfo *v25; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  unsigned __int64 v29; // x25
  int32_t v30; // w22
  System_String_o *v31; // x23
  __int64 Item; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x20
  void *v35; // x8
  int v36; // w27
  __int64 v37; // x24
  const MethodInfo *v38; // x3
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  __int64 v41; // [xsp+10h] [xbp-C0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-B8h]
  struct System_String_array *v43; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4A5F04C & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaTalkInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F04C = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v8 = (BoxGachaTalkInfo_o *)sub_1B887FC(BoxGachaTalkInfo_TypeInfo);
  BoxGachaTalkInfo___ctor(v8, v9);
  *info = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)info, (int32_t)v8, v10, v11);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v15 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_70;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_70;
  v41 = *(_QWORD *)&befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  if ( (int)v41 >= 1 )
  {
    if ( (unsigned int)*(_QWORD *)&befVoiceIds->max_length )
    {
      v17 = 0LL;
      v43 = befVoiceIds;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          break;
        v18 = befVoiceIds->m_Items[v17];
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v45,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v46 = v45;
        while ( 1 )
        {
          isVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v46,
                          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !isVoicePlay )
            break;
          current = v46.fields._current;
          if ( !v46.fields._current )
            sub_1B8880C(isVoicePlay, v20);
          monitor = (int)v46.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            for ( i = 0; i < monitor; ++i )
            {
              if ( i >= (unsigned int)monitor )
                sub_1B88814(isVoicePlay, v20);
              v24 = *((_QWORD *)&current[2].klass + i);
              if ( !v24 )
                sub_1B8880C(isVoicePlay, v20);
              isVoicePlay = System_String__op_Equality(*(System_String_o **)(v24 + 16), v18, 0LL);
              if ( isVoicePlay )
              {
                if ( !MasterData_object )
                  sub_1B8880C(isVoicePlay, v20);
                isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                                (VoicePlayCondMaster_o *)MasterData_object,
                                svtId,
                                v18,
                                0LL,
                                -1LL,
                                -1,
                                0LL,
                                0LL,
                                0LL);
                if ( isVoicePlay )
                {
                  if ( !*info )
                    sub_1B8880C(0LL, v20);
                  BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v24 + 16),
                    *(System_String_o **)(v24 + 48),
                    v25);
                  if ( !v15 )
                    sub_1B8880C(isVoicePlay, v20);
                  items = v15->fields._items;
                  v27 = Method_System_Collections_Generic_List_int__Add__;
                  ++v15->fields._version;
                  if ( !items )
                    sub_1B8880C(isVoicePlay, v20);
                  size = v15->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v15,
                      v17,
                      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v15->fields._size = size + 1;
                    items->m_Items[size + 1] = v17;
                  }
                }
              }
              monitor = (int)current[1].monitor;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v46,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        befVoiceIds = v43;
        if ( ++v17 == (unsigned int)v41 )
          goto LABEL_39;
        if ( v17 >= v43->max_length )
          goto LABEL_71;
      }
LABEL_70:
      sub_1B8880C(Instance, v13);
    }
LABEL_71:
    sub_1B88814(Instance, v13);
  }
LABEL_39:
  if ( !v15 || !v15->fields._size )
    return 0;
  if ( (int)v41 >= 1 )
  {
    if ( !aftVoiceIds )
      goto LABEL_70;
    v29 = 0LL;
    v30 = 0;
    while ( v29 < aftVoiceIds->max_length )
    {
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_70;
      v31 = aftVoiceIds->m_Items[v29];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v46 = v45;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v46,
                 (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( (Item & 1) == 0 )
          break;
        v34 = v46.fields._current;
        if ( !v46.fields._current )
          sub_1B8880C(Item, v33);
        v35 = v46.fields._current[1].monitor;
        if ( (int)v35 >= 1 )
        {
          v36 = 0;
          do
          {
            if ( v36 >= (unsigned int)v35 )
              sub_1B88814(Item, v33);
            v37 = *((_QWORD *)&v34[2].klass + v36);
            if ( !v37 )
              sub_1B8880C(Item, v33);
            Item = System_String__op_Equality(*(System_String_o **)(v37 + 16), v31, 0LL);
            if ( (Item & 1) != 0 )
            {
              Item = System_Collections_Generic_List_int___get_Item(
                       v15,
                       v30,
                       (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( v29 == (unsigned int)Item )
              {
                if ( !*info )
                  sub_1B8880C(0LL, v33);
                BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v37 + 16),
                  *(System_String_o **)(v37 + 48),
                  v38);
                ++v30;
              }
            }
            LODWORD(v35) = v34[1].monitor;
            ++v36;
          }
          while ( v36 < (int)v35 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v46,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      if ( ++v29 == (unsigned int)v41 )
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
  sub_1B88554(
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
  sub_1B88554(v9, v10, v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetOverwriteSpecialSvtVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.specialSvtVoice = voiceId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.specialSvtVoice, (int32_t)voiceId, (int32_t)method, v3);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)assetName,
    (int32_t)method);
  v5->fields.voiceListOverwrite = listOverwrite;
  v5 = (EventSvtControl_o *)((char *)v5 + 192);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v5, (int32_t)listOverwrite, v6, v7);
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
  sub_1B88554(
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
  sub_1B88554(v9, v10, v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetSvtFigureCollect(
        EventSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.standFigureCollectList = collects;
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(v9, v10, v7, v8);
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
  sub_1B88554(
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
  sub_1B88554(v9, v10, v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SvtVoicePlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  EventSvtControl_o *v4; // x19
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v7; // x8
  struct System_String_o *id; // x1
  struct ServantVoiceData_array *v9; // x8
  __int64 v10; // x9
  int32_t asstName; // w20
  float FadeTime; // s0
  float v13; // s8
  struct ServantVoiceData_array *v14; // x8
  __int64 v15; // x9
  ServantVoiceData_o *v16; // x8
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  int32_t face; // w20
  struct ServantVoiceData_array *v19; // x8
  __int64 v20; // x9
  ServantVoiceData_o *v21; // x8
  System_String_o *v22; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v25; // x22
  SePlayer_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
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
  if ( (byte_4A5F046 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1B885B0(&Method_EventSvtControl_EndPlay__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    this = (EventSvtControl_o *)sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5F046 = 1;
  }
  randomVoiceList = v4->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_43;
  playCnt = v4->fields.playCnt;
  if ( (unsigned int)playCnt >= randomVoiceList->max_length )
    goto LABEL_44;
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 )
    goto LABEL_43;
  id = v7->fields.id;
  v4->fields.vcName = id;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.vcName, (int32_t)id, v2, v3);
  v9 = v4->fields.randomVoiceList;
  if ( !v9 )
    goto LABEL_43;
  v10 = v4->fields.playCnt;
  if ( (unsigned int)v10 >= v9->max_length )
    goto LABEL_44;
  this = (EventSvtControl_o *)v9->m_Items[v10];
  if ( !this )
    goto LABEL_43;
  v4->fields.isUnSkippable = BYTE4(this->fields.vcName);
  asstName = (int32_t)this->fields.asstName;
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
  this = (EventSvtControl_o *)v4->fields.standFigureCollectList;
  v13 = FadeTime;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v14 = v4->fields.randomVoiceList;
    if ( !v14 )
      goto LABEL_43;
    v15 = v4->fields.playCnt;
    if ( (unsigned int)v15 >= v14->max_length )
      goto LABEL_44;
    v16 = v14->m_Items[v15];
    if ( !v16 )
      goto LABEL_43;
    standFigureCollectList = (System_Collections_Generic_List_object__o *)v4->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v16->fields.face;
      this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    0,
                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !this )
        goto LABEL_43;
      v19 = v4->fields.randomVoiceList;
      if ( !v19 )
        goto LABEL_43;
      v20 = v4->fields.playCnt;
      if ( (unsigned int)v20 >= v19->max_length )
        goto LABEL_44;
      v21 = v19->m_Items[v20];
      if ( !v21 )
        goto LABEL_43;
      this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
      if ( !this )
        goto LABEL_43;
      UIStandFigureR__SetFace_41048928((UIStandFigureR_o *)this, face, v21->fields.form, 0LL, v13, 0LL);
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
                                  (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
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
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !this )
            goto LABEL_43;
          this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
          if ( !this )
            goto LABEL_43;
          UIStandFigureR__SetFace_41048928((UIStandFigureR_o *)this, v38, asstName, 0LL, v13, 0LL);
          this = *(EventSvtControl_o **)&multiFace->max_length;
          if ( (__int64)++v37 >= (int)this )
            goto LABEL_21;
        }
        goto LABEL_44;
      }
LABEL_21:
      v22 = v4->fields.asstName;
      vcName = v4->fields.vcName;
      volume = v4->fields.volume;
      v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)v4, Method_EventSvtControl_EndPlay__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v26 = SoundManager__playVoice_38702940(v22, vcName, volume, v25, 0LL);
      v4->fields.player = v26;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.player, (int32_t)v26, v27, v28);
      if ( v4->fields.isSkipPerformance )
        goto LABEL_28;
      v30 = v4->fields.randomVoiceList;
      if ( !v30 )
LABEL_43:
        sub_1B8880C(this, method);
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
      sub_1B88814(this, method);
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
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x0
  System_Collections_Generic_List_int__o *v12; // x1
  System_Collections_Generic_HashSet_T__o *v13; // x24
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x25
  Il2CppClass *klass; // x8
  EventSvtControl___c_c *v18; // x0
  System_String_o *v19; // x26
  System_Func_object__object__o *_9__61_0; // x27
  Il2CppObject *v21; // x28
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_string__o *v25; // x1
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x26
  Il2CppObject *Weight; // x2
  const MethodInfo_3434C70 *v30; // x4
  __int64 v31; // x1
  int32_t v32; // w3
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x26
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  __int64 Item; // x0
  __int64 v40; // x1
  int32_t v41; // w25
  int32_t monitor; // w26
  _BOOL8 IsVoicePlayFlag; // x0
  System_Collections_Generic_List_T__o *v44; // x0
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  ServantStatusBattleListViewItem_o *v48; // x8
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  ServantStatusBattleListViewItem_o *v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  struct System_Collections_Generic_List_int__o *voicePlayedValueList; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w2
  int32_t v63; // w3
  System_Collections_Generic_List_T__o *v65; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_int__o *OriginalSvtId; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+38h] [xbp-B8h] BYREF
  Il2CppObject *entity; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v70; // [xsp+58h] [xbp-98h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+70h] [xbp-80h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v73; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o v74; // 0:x1.16
  System_Collections_Generic_KeyValuePair_object__int__o v75; // 0:x1.16

  if ( (byte_4A5F052 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&System_Func_ServantVoiceData__string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__61_0__);
    sub_1B885B0(&EventSvtControl___c_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_19536/*"forcePlayFirst"*/);
    byte_4A5F052 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  condEntity = 0LL;
  v70.fields.key = 0LL;
  *(_QWORD *)&v70.fields.value = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v7 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v7,
    (const MethodInfo_34529C0 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  v8 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v8,
    (const MethodInfo_34529C0 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)voiceInfoList, (int32_t)v8, v9, v10);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
  if ( !v11 )
    goto LABEL_65;
  v65 = v7;
  OriginalSvtId = ServantVoiceRelationMaster__GetOriginalSvtId(
                    (ServantVoiceRelationMaster_o *)v11,
                    this->fields.svtId,
                    0LL);
  v13 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v13,
    (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  if ( !servantVoiceGroupData )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    (System_Collections_Generic_List_object__o *)servantVoiceGroupData,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v72 = v68;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v14 )
      break;
    current = v72.fields._current;
    if ( !v72.fields._current )
      sub_1B8880C(v14, v15);
    if ( !LODWORD(v72.fields._current[1].monitor) )
      sub_1B88814(v14, v15);
    klass = v72.fields._current[2].klass;
    if ( !klass )
      sub_1B8880C(v14, v15);
    if ( !Master_object )
      sub_1B8880C(v14, v15);
    if ( VoicePlayCondMaster__isVoicePlay_40309812(
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
      v18 = EventSvtControl___c_TypeInfo;
      if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
        v18 = EventSvtControl___c_TypeInfo;
      }
      v19 = (System_String_o *)StringLiteral_868/*","*/;
      _9__61_0 = (System_Func_object__object__o *)v18->static_fields->__9__61_0;
      if ( !_9__61_0 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = EventSvtControl___c_TypeInfo;
        }
        v21 = (Il2CppObject *)v18->static_fields->__9;
        _9__61_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_ServantVoiceData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__61_0,
          v21,
          Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__61_0__,
          0LL);
        static_fields = EventSvtControl___c_TypeInfo->static_fields;
        static_fields->__9__61_0 = (struct System_Func_ServantVoiceData__string__o *)_9__61_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v23, v24);
      }
      v25 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                                  (System_Func_TSource__TResult__o *)_9__61_0,
                                                                  (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
      v26 = (Il2CppObject *)System_String__Join_61722688(v19, v25, 0LL);
      if ( !v13 )
        sub_1B8880C(v26, v27);
      v28 = v26;
      if ( !System_Collections_Generic_HashSet_object___Contains(
              v13,
              v26,
              (const MethodInfo_33B9878 *)Method_System_Collections_Generic_HashSet_string__Contains__) )
      {
        System_Collections_Generic_HashSet_object___Add(
          v13,
          v28,
          (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_string__Add__);
        Weight = (Il2CppObject *)(unsigned int)VoicePlayCondMaster__GetWeight(
                                                 (VoicePlayCondMaster_o *)Master_object,
                                                 condEntity,
                                                 10,
                                                 0LL);
        v73.fields.key = (Il2CppObject *)&v70;
        *(_QWORD *)&v73.fields.value = current;
        System_Collections_Generic_KeyValuePair_object__int____ctor(
          v73,
          Weight,
          Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
          v30);
        if ( !condEntity
          || VoicePlayCondEntity__GetScriptIntParam(condEntity, (System_String_o *)StringLiteral_19536/*"forcePlayFirst"*/, -1, 0LL) != 1 )
        {
          goto LABEL_36;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v33 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_VoiceMaster___);
        if ( !condEntity )
          sub_1B8880C(v33, v34);
        v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)v33;
        voiceId = condEntity->fields.voiceId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v37 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(voiceId, 0LL);
        if ( !v35 )
          sub_1B8880C(v37, v38);
        if ( !DataMasterBase_object__object__object___TryGetEntity(
                v35,
                &entity,
                v37,
                (const MethodInfo_311DCDC *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__) )
          goto LABEL_36;
        if ( !OriginalSvtId )
          sub_1B8880C(0LL, v31);
        Item = System_Collections_Generic_List_int___get_Item(
                 OriginalSvtId,
                 0,
                 (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !entity )
          sub_1B8880C(Item, v40);
        v41 = Item;
        monitor = (int32_t)entity[3].monitor;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsVoicePlayFlag = CondType__IsVoicePlayFlag(v41, monitor, 0LL);
        if ( !IsVoicePlayFlag )
        {
          if ( !v65 )
            sub_1B8880C(IsVoicePlayFlag, v31);
          v75 = v70;
          items = v65->fields._items;
          v50 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v65->fields._version;
          if ( !items )
            sub_1B8880C(IsVoicePlayFlag, v75.fields.key);
          size = v65->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v65,
              v75,
              *(const MethodInfo_3453240 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = (ServantStatusBattleListViewItem_o *)(&items->obj + size);
            v65->fields._size = size + 1;
            v52->fields.sortValue0 = (int64_t)v75.fields.key;
            v52 = (ServantStatusBattleListViewItem_o *)((char *)v52 + 32);
            v52->monitor = *(void **)&v75.fields.value;
            sub_1B88554(v52, 0, v75.fields.value, v32);
          }
          if ( !entity )
            sub_1B8880C(v53, v54);
          voicePlayedValueList = this->fields.voicePlayedValueList;
          if ( !voicePlayedValueList )
            sub_1B8880C(0LL, v54);
          monitor_low = LODWORD(entity[3].monitor);
          v57 = voicePlayedValueList->fields._items;
          v58 = Method_System_Collections_Generic_List_int__Add__;
          ++voicePlayedValueList->fields._version;
          if ( !v57 )
            sub_1B8880C(voicePlayedValueList, monitor_low);
          v59 = voicePlayedValueList->fields._size;
          if ( (unsigned int)v59 >= v57->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              voicePlayedValueList,
              monitor_low,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            voicePlayedValueList->fields._size = v59 + 1;
            v57->m_Items[v59 + 1] = monitor_low;
          }
        }
        else
        {
LABEL_36:
          v44 = (System_Collections_Generic_List_T__o *)*voiceInfoList;
          if ( !*voiceInfoList )
            sub_1B8880C(0LL, v31);
          v74 = v70;
          v45 = v44->fields._items;
          v46 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v44->fields._version;
          if ( !v45 )
            sub_1B8880C(v44, v74.fields.key);
          v47 = v44->fields._size;
          if ( (unsigned int)v47 >= v45->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v44,
              v74,
              *(const MethodInfo_3453240 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = (ServantStatusBattleListViewItem_o *)(&v45->obj + v47);
            v44->fields._size = v47 + 1;
            v48->fields.sortValue0 = (int64_t)v74.fields.key;
            v48 = (ServantStatusBattleListViewItem_o *)((char *)v48 + 32);
            v48->monitor = *(void **)&v74.fields.value;
            sub_1B88554(v48, 0, v74.fields.value, v32);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( !v65 )
    goto LABEL_65;
  v12 = OriginalSvtId;
  if ( v65->fields._size >= 1 )
  {
    this->fields.forcePlayVoiceSvtIdList = OriginalSvtId;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.forcePlayVoiceSvtIdList,
      (int32_t)OriginalSvtId,
      v60,
      v61);
    *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v65;
    sub_1B88554((ServantStatusBattleListViewItem_o *)voiceInfoList, (int32_t)v65, v62, v63);
    return 1;
  }
  if ( !*voiceInfoList )
LABEL_65:
    sub_1B8880C(v11, v12);
  return (*voiceInfoList)->fields._size > 0;
}


void __fastcall EventSvtControl__boxGachaPlayVoice(
        EventSvtControl_o *this,
        EventSvtControl_PlayBoxGachVoiceArg_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int128 v10; // q1
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  struct System_Action_o *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x23
  int32_t current; // w1
  struct ServantVoiceData_array **v27; // x24
  int32_t v28; // w2
  int32_t v29; // w3
  _BOOL8 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x28
  int v33; // w8
  unsigned int v34; // w25
  __int64 v35; // x29
  int32_t v36; // w2
  int32_t v37; // w3
  struct ServantVoiceData_array *v38; // x1
  __int64 v39; // x0
  const MethodInfo *v40; // x1
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x8
  Il2CppObject *Instance; // x0
  __int64 v45; // x1
  System_String_o *v46; // x20
  System_Action_o *v47; // x23
  CommonUI_o *v48; // x19
  System_String_o *v49; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4A5F04B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&EventSvtControl___c__DisplayClass54_0_TypeInfo);
    sub_1B885B0(&Method_EventSvtControl___c__DisplayClass54_1__boxGachaPlayVoice_b__0__);
    sub_1B885B0(&EventSvtControl___c__DisplayClass54_1_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F04B = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v5 = sub_1B887FC(EventSvtControl___c__DisplayClass54_0_TypeInfo);
  EventSvtControl___c__DisplayClass54_0___ctor((EventSvtControl___c__DisplayClass54_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  v10 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v5 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v5 + 24) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), 0, v11, v12);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v13);
  System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 24), 0LL);
  v14 = *(struct System_Action_o **)(v5 + 48);
  this->fields.callbakEndPlay = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, (int32_t)v14, v15, v16);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, v18, v19);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_1B8880C(voiceListBoxGacha, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v53 = v52;
LABEL_8:
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v20 = sub_1B887FC(EventSvtControl___c__DisplayClass54_1_TypeInfo);
    EventSvtControl___c__DisplayClass54_1___ctor((EventSvtControl___c__DisplayClass54_1_o *)v20, 0LL);
    if ( !v20 )
      sub_1B8880C(v21, v22);
    *(_QWORD *)(v20 + 24) = v5;
    v25 = v20 + 24;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 24), v5, v23, v24);
    current = (int32_t)v53.fields._current;
    *(_QWORD *)(v20 + 16) = v53.fields._current;
    v27 = (struct ServantVoiceData_array **)(v20 + 16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 16), current, v28, v29);
    v32 = *(_QWORD *)(v20 + 16);
    if ( !v32 )
      sub_1B8880C(v30, v31);
    v33 = *(_DWORD *)(v32 + 24);
    if ( v33 >= 1 )
    {
      v34 = 0;
      while ( 1 )
      {
        if ( v34 >= v33 )
          sub_1B88814(v30, v31);
        v35 = *(_QWORD *)(v32 + 8LL * (int)v34 + 32);
        if ( !v35 )
          sub_1B8880C(v30, v31);
        if ( !*(_QWORD *)v25 )
          sub_1B8880C(v30, v31);
        v30 = System_String__op_Equality(
                *(System_String_o **)(v35 + 16),
                *(System_String_o **)(*(_QWORD *)v25 + 24LL),
                0LL);
        if ( v30 )
          break;
        v33 = *(_DWORD *)(v32 + 24);
        if ( (int)++v34 >= v33 )
          goto LABEL_8;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(*(System_String_o **)(v35 + 72), 0LL) )
      {
        v38 = *v27;
        *p_randomVoiceList = *v27;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)v38, v36, v37);
        if ( !*p_randomVoiceList )
          sub_1B8880C(v39, v40);
        this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
        if ( !*(_QWORD *)v25 )
          sub_1B8880C(v39, v40);
        this->fields.isSkipPerformance = *(_BYTE *)(*(_QWORD *)v25 + 32LL);
        EventSvtControl__svtVoicePlay(this, v40);
        if ( !*(_QWORD *)v25 )
          sub_1B8880C(v41, v42);
        v43 = *(_QWORD *)(*(_QWORD *)v25 + 40LL);
        if ( v43 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(v43 + 24))(*(_QWORD *)(v43 + 64), *(_QWORD *)(v43 + 40));
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v46 = *(System_String_o **)(v35 + 72);
        v47 = *(System_Action_o **)(v20 + 32);
        v48 = (CommonUI_o *)Instance;
        v49 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v47 )
        {
          v47 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v47,
            (Il2CppObject *)v20,
            Method_EventSvtControl___c__DisplayClass54_1__boxGachaPlayVoice_b__0__,
            0LL);
          *(_QWORD *)(v20 + 32) = v47;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v47, v50, v51);
        }
        if ( !v48 )
          sub_1B8880C(Instance, v45);
        CommonUI__OpenNotificationDialog(v48, v49, v46, v47, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  ServantStatusBattleListViewItem_o *p_randomVoiceList; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v10; // x1
  System_String_o **p_specialSvtVoice; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x24
  int v15; // w8
  unsigned int v16; // w27
  __int64 v17; // x28
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x0
  System_String_array *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  VoicePlayCondMaster_o *v31; // x26
  System_Collections_Generic_List_object__o *v32; // x23
  System_Collections_Generic_List_object__o *v33; // x24
  __int64 size; // x20
  unsigned __int64 v35; // x28
  System_String_o *v36; // x27
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  int v41; // w29
  System_Random_o *v42; // x25
  il2cpp_array_size_t v43; // w25
  _BOOL8 v44; // x0
  __int64 v45; // x1
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v48; // w19
  __int64 v49; // x8
  System_String_o *v50; // x27
  Il2CppObject *Item; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  struct ServantVoiceData_array *randomVoiceList; // x8
  EventSvtControl_o *v56; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5F044 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor___76047520);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&System_Random_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F044 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = (ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, svtId, (int32_t)callbackEnds);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_79;
  v56 = this;
  if ( (int)voiceIds->max_length >= 2 )
  {
    v31 = (VoicePlayCondMaster_o *)Instance;
    v32 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v32,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
    v33 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562352(
      v33,
      voiceIds->max_length,
      (const MethodInfo_34FD070 *)Method_System_Collections_Generic_List_string___ctor___76047520);
    if ( !v33 )
      goto LABEL_79;
    System_Collections_Generic_List_object___AddRange(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_string__AddRange__);
    size = (unsigned int)v33->fields._size;
    if ( (int)size >= 1 )
    {
      v35 = 0LL;
      do
      {
        if ( v35 >= voiceIds->max_length )
LABEL_71:
          sub_1B88814(Instance, v10);
        if ( !v31 )
          goto LABEL_79;
        v36 = voiceIds->m_Items[v35];
        Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v31, svtId, v36, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v32 )
            goto LABEL_79;
          items = v32->fields._items;
          v38 = Method_System_Collections_Generic_List_string__Add__;
          ++v32->fields._version;
          if ( !items )
            goto LABEL_79;
          v39 = v32->fields._size;
          if ( (unsigned int)v39 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)v36,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + v39;
            v32->fields._size = v39 + 1;
            v40[4] = (Il2CppClass *)v36;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v36, v29, v30);
          }
        }
      }
      while ( size != ++v35 );
    }
    if ( !v32 )
      goto LABEL_79;
    v41 = v32->fields._size - 1;
    if ( v41 >= 0 )
    {
      do
      {
        v42 = (System_Random_o *)sub_1B887FC(System_Random_TypeInfo);
        System_Random___ctor(v42, 0LL);
        if ( !v42 )
          goto LABEL_79;
        Instance = (DataManager_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v42->klass->vtable._7_Next.method)(
                                      v42,
                                      (unsigned int)v32->fields._size,
                                      v42->klass->vtable._8_NextDouble.methodPtr);
        if ( !v56->fields.voiceListMission )
          goto LABEL_79;
        v43 = (unsigned int)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v57,
          (System_Collections_Generic_List_object__o *)v56->fields.voiceListMission,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v58 = v57;
        do
        {
          v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v58,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v44 )
            break;
          current = v58.fields._current;
          if ( !v58.fields._current )
            sub_1B8880C(v44, v45);
          monitor = (int)v58.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            v48 = 0;
            while ( 1 )
            {
              if ( v48 >= monitor )
                sub_1B88814(v44, v45);
              v49 = *((_QWORD *)&current[2].klass + (int)v48);
              if ( !v49 )
                sub_1B8880C(v44, v45);
              v50 = *(System_String_o **)(v49 + 16);
              Item = System_Collections_Generic_List_object___get_Item(
                       v32,
                       v43,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
              v44 = System_String__op_Equality(v50, (System_String_o *)Item, 0LL);
              if ( v44 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v48 >= monitor )
                goto LABEL_57;
            }
            p_randomVoiceList->klass = (ServantStatusBattleListViewItem_c *)current;
            sub_1B88554(p_randomVoiceList, (int32_t)current, v52, v53);
          }
LABEL_57:
          ;
        }
        while ( !p_randomVoiceList->klass );
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v58,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( p_randomVoiceList->klass )
          goto LABEL_74;
        if ( v43 >= voiceIds->max_length )
          goto LABEL_71;
        System_Collections_Generic_List_object___Remove(
          v33,
          (Il2CppObject *)voiceIds->m_Items[v43],
          (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v41 >= 0 );
    }
  }
  else
  {
    Instance = (DataManager_o *)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_79;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v57,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v58 = v57;
    p_specialSvtVoice = &this->fields.specialSvtVoice;
    do
    {
      IsNullOrEmpty = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v58,
                        (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !IsNullOrEmpty )
        break;
      v14 = v58.fields._current;
      if ( !v58.fields._current )
        sub_1B8880C(IsNullOrEmpty, v13);
      v15 = (int)v58.fields._current[1].monitor;
      if ( v15 >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= v15 )
            sub_1B88814(IsNullOrEmpty, v13);
          v17 = *((_QWORD *)&v14[2].klass + (int)v16);
          if ( !v17 )
            sub_1B8880C(IsNullOrEmpty, v13);
          if ( !voiceIds->max_length )
            sub_1B88814(IsNullOrEmpty, v13);
          if ( System_String__op_Equality(*(System_String_o **)(v17 + 16), voiceIds->m_Items[0], 0LL)
            && System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL) )
          {
            p_randomVoiceList->klass = (ServantStatusBattleListViewItem_c *)v14;
            sub_1B88554(p_randomVoiceList, (int32_t)v14, v18, v19);
            goto LABEL_28;
          }
          IsNullOrEmpty = System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL);
          if ( !IsNullOrEmpty )
          {
            v20 = *(System_String_o **)(v17 + 16);
            if ( !v20 )
              sub_1B8880C(0LL, v13);
            v21 = System_String__Split(v20, 0x5Fu, 0, 0LL);
            if ( !v21 )
              sub_1B8880C(0LL, v22);
            if ( !v21->max_length )
              sub_1B88814(v21, v22);
            v23 = System_String__Concat_61718292(
                    v21->m_Items[0],
                    (System_String_o *)StringLiteral_16123/*"_"*/,
                    *p_specialSvtVoice,
                    0LL);
            IsNullOrEmpty = System_String__op_Equality(*(System_String_o **)(v17 + 16), v23, 0LL);
            if ( IsNullOrEmpty )
              break;
          }
          v15 = (int)v14[1].monitor;
          if ( (int)++v16 >= v15 )
            goto LABEL_28;
        }
        p_randomVoiceList->klass = (ServantStatusBattleListViewItem_c *)v14;
        sub_1B88554(p_randomVoiceList, (int32_t)v14, v24, v25);
        v26 = (int)StringLiteral_1/*""*/;
        *p_specialSvtVoice = (System_String_o *)StringLiteral_1/*""*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)p_specialSvtVoice, v26, v27, v28);
      }
LABEL_28:
      ;
    }
    while ( !p_randomVoiceList->klass );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v58,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  if ( p_randomVoiceList->klass )
  {
LABEL_74:
    v56->fields.callbakEndPlay = callbackEnds;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v56->fields.callbakEndPlay, (int32_t)callbackEnds, v29, v30);
    randomVoiceList = v56->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      v56->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(v56, v10);
      return;
    }
LABEL_79:
    sub_1B8880C(Instance, v10);
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
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Random_o *v26; // x21
  int v27; // w21
  struct ServantVoiceData_array *Item; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v32; // x0
  System_Exception_o *v33; // x19
  System_String_o *v34; // x0
  __int64 v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5F043 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&System_Random_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F043 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v32 = sub_1B885C4(&System_Exception_TypeInfo);
      v33 = (System_Exception_o *)sub_1B887FC(v32);
      v34 = (System_String_o *)sub_1B885C4(&StringLiteral_25289/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_62747812(v33, v34, 0LL);
      v35 = sub_1B885C4(&Method_EventSvtControl_playPurchaseVoice__);
      sub_1B886D8(v33, v35);
    }
    this->fields.callbackStopVoice = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackStopVoice,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
    v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_35;
    v11 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      (System_Collections_Generic_List_object__o *)this->fields.voiceListShop,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v37 = v36;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v12 )
        break;
      current = v37.fields._current;
      if ( !v37.fields._current )
        sub_1B8880C(v12, v13);
      if ( !LODWORD(v37.fields._current[1].monitor) )
        sub_1B88814(v12, v13);
      klass = v37.fields._current[2].klass;
      if ( !klass )
        sub_1B8880C(v12, v13);
      if ( !v11 )
        sub_1B8880C(v12, v13);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                      v11,
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
        if ( !v8 )
          sub_1B8880C(isVoicePlay, v17);
        v18 = System_Collections_Generic_List_object___Contains(
                v8,
                current,
                (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
        if ( !v18 )
        {
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++v8->fields._version;
          if ( !items )
            sub_1B8880C(v18, v19);
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              current,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v25[4] = (Il2CppClass *)current;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)current, v20, v21);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v26 = (System_Random_o *)sub_1B887FC(System_Random_TypeInfo);
    System_Random___ctor(v26, 0LL);
    if ( !v8 || !v26 )
      goto LABEL_35;
    v27 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v26->klass->vtable._7_Next.method)(
            v26,
            (unsigned int)v8->fields._size,
            v26->klass->vtable._8_NextDouble.methodPtr);
    if ( this->fields.beforeVoiceIdx == v27 )
      v27 = (v27 + 1) % v8->fields._size;
    Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                              v8,
                                              v27,
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = Item;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)Item, v29, v30);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v27;
    if ( !randomVoiceList )
LABEL_35:
      sub_1B8880C(Instance, v10);
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v10);
  }
}


void __fastcall EventSvtControl__playVoice(
        EventSvtControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  System_Collections_Generic_List_int__o **p_forcePlayVoiceSvtIdList; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_int__o *v9; // x23
  struct System_Collections_Generic_List_int__o **p_voicePlayedValueList; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x3
  __int64 PlayableVoiceInfoList; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_T__o *v19; // x23
  int32_t v20; // w22
  int32_t beforeVoiceIdx; // w9
  int v22; // w1
  const MethodInfo_3434C70 *v23; // x4
  EventSvtControl___c_c *v24; // x0
  System_Func_T__TResult__o *_9__43_0; // x22
  Il2CppObject *v26; // x24
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Int32_array *v31; // x0
  struct ServantVoiceData_array *key; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Collections_Generic_List_int__o *forcePlayVoiceSvtIdList; // x8
  __int64 size; // x23
  System_Int32_array_array *v38; // x19
  unsigned __int64 v39; // x24
  ServantStatusBattleListViewItem_o *m_Items; // x25
  ServantStatusBattleListViewItem_c *v41; // x26
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_KeyValuePair_object__int__o v44; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *voiceInfoList; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v46; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16

  if ( (byte_4A5F042 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
    sub_1B885B0(&int_____TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_EventSvtControl___c__playVoice_b__43_0__);
    sub_1B885B0(&EventSvtControl___c_TypeInfo);
    byte_4A5F042 = 1;
  }
  *(_QWORD *)&v44.fields.value = 0LL;
  voiceInfoList = 0LL;
  v44.fields.key = 0LL;
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.forcePlayVoiceSvtIdList = v5;
  p_forcePlayVoiceSvtIdList = &this->fields.forcePlayVoiceSvtIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.forcePlayVoiceSvtIdList, (int32_t)v5, v7, v8);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.voicePlayedValueList = v9;
  p_voicePlayedValueList = &this->fields.voicePlayedValueList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayedValueList, (int32_t)v9, v11, v12);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v13);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackStopVoice, (int32_t)callback, v14, v15);
    PlayableVoiceInfoList = EventSvtControl__TryGetPlayableVoiceInfoList(
                              this,
                              &voiceInfoList,
                              this->fields.voiceListRand,
                              v16);
    if ( (PlayableVoiceInfoList & 1) != 0 )
    {
      v19 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_43;
      if ( voiceInfoList->fields._size == 1 )
      {
        v20 = 0;
      }
      else
      {
        beforeVoiceIdx = this->fields.beforeVoiceIdx;
        if ( (beforeVoiceIdx & 0x80000000) == 0 )
        {
          if ( beforeVoiceIdx <= voiceInfoList->fields._size - 1 )
            v22 = this->fields.beforeVoiceIdx;
          else
            v22 = voiceInfoList->fields._size - 1;
          this->fields.beforeVoiceIdx = v22;
          *(_QWORD *)&v46.fields.value = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
                                           v19,
                                           v22,
                                           (const MethodInfo_3452F24 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__).fields.key;
          v46.fields.key = (Il2CppObject *)&v44;
          System_Collections_Generic_KeyValuePair_object__int____ctor(
            v46,
            0LL,
            Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
            v23);
          PlayableVoiceInfoList = (__int64)voiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_43;
          System_Collections_Generic_List_KeyValuePair_object__int____set_Item(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            this->fields.beforeVoiceIdx,
            v44,
            (const MethodInfo_3452F7C *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
          v19 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        }
        v24 = EventSvtControl___c_TypeInfo;
        if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
          v24 = EventSvtControl___c_TypeInfo;
        }
        _9__43_0 = (System_Func_T__TResult__o *)v24->static_fields->__9__43_0;
        if ( !_9__43_0 )
        {
          if ( !v24->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            v24 = EventSvtControl___c_TypeInfo;
          }
          v26 = (Il2CppObject *)v24->static_fields->__9;
          _9__43_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
          System_Func_KeyValuePair_object__int___int____ctor(
            _9__43_0,
            v26,
            Method_EventSvtControl___c__playVoice_b__43_0__,
            0LL);
          static_fields = EventSvtControl___c_TypeInfo->static_fields;
          static_fields->__9__43_0 = (struct System_Func_KeyValuePair_ServantVoiceData____int___int__o *)_9__43_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v28, v29);
        }
        v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                                     (System_Func_TSource__TResult__o *)_9__43_0,
                                                                     (const MethodInfo_2EABC4C *)Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
        v31 = System_Linq_Enumerable__ToArray_int_(
                v30,
                (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
        PlayableVoiceInfoList = RandomUtility__GetRandomRangeIndex(v31, 0, 0LL);
        v19 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        if ( !voiceInfoList )
LABEL_43:
          sub_1B8880C(PlayableVoiceInfoList, v18);
        v20 = PlayableVoiceInfoList;
      }
      Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
               v19,
               0,
               (const MethodInfo_3452F24 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
      key = (struct ServantVoiceData_array *)BasicHelper__IndexValue_KeyValuePair_object__int__(
                                               v19,
                                               v20,
                                               Item,
                                               (const MethodInfo_2E6E4FC *)Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____).fields.key;
      this->fields.randomVoiceList = key;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)key, v33, v34);
      randomVoiceList = this->fields.randomVoiceList;
      this->fields.beforeVoiceIdx = v20;
      if ( randomVoiceList )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
        EventSvtControl__setVoiceForm(this, v18);
        forcePlayVoiceSvtIdList = this->fields.forcePlayVoiceSvtIdList;
        if ( forcePlayVoiceSvtIdList )
        {
          size = (unsigned int)forcePlayVoiceSvtIdList->fields._size;
          if ( (int)size < 1 )
            return;
          if ( *p_voicePlayedValueList )
          {
            if ( (*p_voicePlayedValueList)->fields._size <= v20 )
              return;
            v38 = (System_Int32_array_array *)sub_1B88658(int_____TypeInfo, (unsigned int)size);
            v39 = 0LL;
            m_Items = (ServantStatusBattleListViewItem_o *)v38->m_Items;
            do
            {
              PlayableVoiceInfoList = sub_1B88658(int___TypeInfo, 2LL);
              if ( !*p_forcePlayVoiceSvtIdList )
                goto LABEL_43;
              v41 = (ServantStatusBattleListViewItem_c *)PlayableVoiceInfoList;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        *p_forcePlayVoiceSvtIdList,
                                        v39,
                                        (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !v41 )
                goto LABEL_43;
              if ( !LODWORD(v41->_1.namespaze) )
                goto LABEL_44;
              LODWORD(v41->_1.byval_arg.data) = PlayableVoiceInfoList;
              PlayableVoiceInfoList = (__int64)*p_voicePlayedValueList;
              if ( !*p_voicePlayedValueList )
                goto LABEL_43;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        (System_Collections_Generic_List_int__o *)PlayableVoiceInfoList,
                                        v20,
                                        (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( LODWORD(v41->_1.namespaze) <= 1 )
                goto LABEL_44;
              HIDWORD(v41->_1.byval_arg.data) = PlayableVoiceInfoList;
              if ( !v38 )
                goto LABEL_43;
              if ( v39 >= v38->max_length )
LABEL_44:
                sub_1B88814(PlayableVoiceInfoList, v18);
              m_Items->klass = v41;
              sub_1B88554(m_Items, (int32_t)v41, v42, v43);
              ++v39;
              m_Items = (ServantStatusBattleListViewItem_o *)((char *)m_Items + 8);
            }
            while ( size != v39 );
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            PlayableVoiceInfoList = (__int64)NetworkManager__getRequest_object_(
                                               0LL,
                                               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
            if ( PlayableVoiceInfoList )
            {
              TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)PlayableVoiceInfoList, v38, 0LL);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)assetName,
    (int32_t)performanceRoot);
  this->fields.performanceRoot = performanceRoot;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.performanceRoot, (int32_t)performanceRoot, v8, v9);
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
  sub_1B88554(p_voiceListBoxGacha, v13, v10, v11);
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
  sub_1B88554(
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
  sub_1B88554(v9, v10, v7, v8);
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

  if ( (byte_4A5F040 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_4A5F040 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_1B88554(
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_voiceListRand, v16, v13, v14);
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
  sub_1B88554(p_voiceListMission, v20, v17, v18);
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
  sub_1B88554(p_voiceListShop, v24, v21, v22);
  this->fields.voiceListOverwrite = 0LL;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_voiceListOverwrite, 0, v26, v27);
  *((_DWORD *)p_voiceListOverwrite - 24) = -1;
}


void __fastcall EventSvtControl__setVoiceForm(EventSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Collections_Generic_List_object__o *monitor; // x0
  __int64 v5; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v7; // x25
  __int64 v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  ServantVoiceData_o *v11; // x1
  __int64 v12; // x21
  System_Predicate_int__o *v13; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  UIStandFigureR_o *v17; // x21
  System_Action_o *v18; // x22
  Il2CppObject *v19; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5F041 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventSvtControl_svtVoicePlay__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Exists__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Predicate_int__TypeInfo);
    sub_1B885B0(&Method_EventSvtControl___c__DisplayClass42_0__setVoiceForm_b__0__);
    sub_1B885B0(&EventSvtControl___c__DisplayClass42_0_TypeInfo);
    byte_4A5F041 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v19 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_20;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = sub_1B887FC(EventSvtControl___c__DisplayClass42_0_TypeInfo);
      EventSvtControl___c__DisplayClass42_0___ctor((EventSvtControl___c__DisplayClass42_0_o *)v8, 0LL);
      if ( v7 >= randomVoiceList->max_length )
        sub_1B88814(monitor, v5);
      if ( !v8 )
        break;
      v11 = randomVoiceList->m_Items[v7];
      *(_QWORD *)(v8 + 16) = v11;
      v12 = v8 + 16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)v11, v9, v10);
      v13 = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v13,
        (Il2CppObject *)v8,
        Method_EventSvtControl___c__DisplayClass42_0__setVoiceForm_b__0__,
        0LL);
      if ( !v3 )
        break;
      monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                               v3,
                                                               (System_Predicate_T__o *)v13,
                                                               (const MethodInfo_34E0E1C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        if ( !*(_QWORD *)v12 )
          break;
        v5 = *(unsigned int *)(*(_QWORD *)v12 + 56LL);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v5,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_1B8880C(monitor, v5);
  }
LABEL_16:
  monitor = (System_Collections_Generic_List_object__o *)v19[5].monitor;
  if ( !monitor )
    goto LABEL_20;
  monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           monitor,
                                                           0,
                                                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
  if ( !monitor )
    goto LABEL_20;
  v17 = *(UIStandFigureR_o **)&monitor->fields._size;
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v18, v19, Method_EventSvtControl_svtVoicePlay__, 0LL);
  if ( !v17 )
    goto LABEL_20;
  UIStandFigureR__PreloadFormAssets(v17, v3, v18, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v15; // x23
  System_Collections_Generic_List_object__o *v16; // x24
  __int64 v17; // x26
  __int64 v18; // x27
  System_String_o *v19; // x25
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  int32_t v26; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v34; // w25
  __int64 v35; // x8
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x0
  const MethodInfo *v39; // x1
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5F04A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F04A = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !targetVoiceIds )
    goto LABEL_40;
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_21:
      sub_1B88814(Instance, v10);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_24;
  }
  v15 = (VoicePlayCondMaster_o *)Instance;
  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v17 = 0LL;
    v18 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v15 )
    {
      v19 = targetVoiceIds->m_Items[v17];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v15, svtId, v19, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v16 )
          break;
        items = v16->fields._items;
        v23 = Method_System_Collections_Generic_List_string__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)v19,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v19;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
        }
      }
      if ( v18 == v17 )
        goto LABEL_22;
      if ( ++v17 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_21;
    }
LABEL_40:
    sub_1B8880C(Instance, v10);
  }
LABEL_22:
  if ( !v16 )
    goto LABEL_40;
  v26 = UnityEngine_Random__Range_69419120(0, v16->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v16,
                              v26,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_24:
  this->fields.callbakEndPlay = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, (int32_t)callback, v11, v12);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, 0, v28, v29);
  Instance = (DataManager_o *)this->fields.voiceIndividualShopList;
  if ( !Instance )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v41 = v40;
LABEL_26:
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v30 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1B8880C(v30, v31);
    monitor = (int)v41.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v34 = 0;
      while ( 1 )
      {
        if ( v34 >= monitor )
          sub_1B88814(v30, v31);
        v35 = *((_QWORD *)&current[2].klass + (int)v34);
        if ( !v35 )
          sub_1B8880C(v30, v31);
        v30 = System_String__op_Equality(*(System_String_o **)(v35 + 16), Item, 0LL);
        if ( v30 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v34 >= monitor )
          goto LABEL_26;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)current, v36, v37);
      if ( !*p_randomVoiceList )
        sub_1B8880C(v38, v39);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v39);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5F049 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&StringLiteral_23713/*"svtVoicePlay"*/);
    byte_4A5F049 = 1;
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
      sub_1B8880C(0LL, v6);
    SePlayer__Destroy(*p_player, 0LL);
    this->fields.player = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.player, 0, v7, v8);
    this->fields.callbakEndPlay = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbakEndPlay, 0, v9, v10);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_69443960(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23713/*"svtVoicePlay"*/,
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
  if ( (byte_4A5F045 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_1B885B0(&Method_EventSvtControl_SvtVoicePlayProc__);
    byte_4A5F045 = 1;
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
        sub_1B88814(this, method);
      v6 = randomVoiceList->m_Items[playCnt];
      if ( v6 )
      {
        additionalPerformances = v6->fields.additionalPerformances;
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)v2, Method_EventSvtControl_SvtVoicePlayProc__, 0LL);
        EventSvtControl__PlayPerformance(v2, additionalPerformances, 0, 1, v8, v9);
        return;
      }
LABEL_13:
      sub_1B8880C(this, method);
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
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  int32_t v27; // w3
  System_Random_o *v28; // x20
  int32_t v29; // w0
  struct ServantVoiceData_array *Item; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5F050 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&System_Random_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F050 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               eventId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v13 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_34;
        v14 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v34,
          (System_Collections_Generic_List_object__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v35 = v34;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v35,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v15 )
            break;
          current = v35.fields._current;
          if ( !v35.fields._current )
            sub_1B8880C(v15, v16);
          if ( !LODWORD(v35.fields._current[1].monitor) )
            sub_1B88814(v15, v16);
          klass = v35.fields._current[2].klass;
          if ( !klass )
            sub_1B8880C(v15, v16);
          if ( !v14 )
            sub_1B8880C(v15, v16);
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
              sub_1B8880C(isVoicePlay, v20);
            items = v13->fields._items;
            v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v13->fields._version;
            if ( !items )
              sub_1B8880C(isVoicePlay, v20);
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                current,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v26[4] = (Il2CppClass *)current;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)current, v21, v22);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v35,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v13 )
        {
          if ( v13->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&this->fields.callbackStopVoice,
              (int32_t)callback,
              (int32_t)v11,
              v27);
            v28 = (System_Random_o *)sub_1B887FC(System_Random_TypeInfo);
            System_Random___ctor(v28, 0LL);
            if ( v28 )
            {
              v29 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._7_Next.method)(
                      v28,
                      (unsigned int)v13->fields._size,
                      v28->klass->vtable._8_NextDouble.methodPtr);
              Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                        v13,
                                                        v29,
                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
              this->fields.randomVoiceList = Item;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)Item, v31, v32);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v10);
                return;
              }
            }
LABEL_34:
            sub_1B8880C(Instance, v10);
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, v11);
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
  int32_t _1__state; // w8
  struct EventSvtControl_o *_4__this; // x22
  Il2CppObject *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  struct EventSvtControl_o *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *animName; // x1
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v15; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  bool result; // w0
  struct EventSvtControl___c__DisplayClass68_0_o *_8__1; // x8
  Il2CppObject *v21; // x20
  System_Func_bool__o *v22; // x21
  UnityEngine_WaitUntil_o *v23; // x20
  ServantStatusBattleListViewItem_o *v24; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Action_o *playEndAction; // x8

  v2 = this;
  if ( (byte_4A5F065 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_EventSvtControl___c__DisplayClass68_0__PlayPerformanceProc_b__0__);
    sub_1B885B0(&EventSvtControl___c__DisplayClass68_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (EventSvtControl__PlayPerformanceProc_d__68_o *)sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5F065 = 1;
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
    v5 = (Il2CppObject *)sub_1B887FC(EventSvtControl___c__DisplayClass68_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    v2->fields.__8__1 = (struct EventSvtControl___c__DisplayClass68_0_o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, (int32_t)v5, v6, v7);
    this = (EventSvtControl__PlayPerformanceProc_d__68_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    v10 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v10, v8, v9);
    this = (EventSvtControl__PlayPerformanceProc_d__68_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    animName = (Il2CppObject *)v2->fields.animName;
    this->fields.__2__current = animName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)animName, v11, v12);
    delay = v2->fields.delay;
    if ( delay > 0.0 )
    {
      v15 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v15, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v15;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)v15, v17, v18);
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
            UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0LL);
            if ( v2->fields.isWaitPerformance )
            {
              v21 = (Il2CppObject *)v2->fields.__8__1;
              v22 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v22,
                v21,
                Method_EventSvtControl___c__DisplayClass68_0__PlayPerformanceProc_b__0__,
                0LL);
              v23 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v23, v22, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v23;
              v24 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B88554(v24, (int32_t)v23, v25, v26);
              *(_DWORD *)&v24[-1].fields.isMine = 2;
              return 1;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_21:
    sub_1B8880C(this, method);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_EventSvtControl__PlayPerformanceProc_d__68_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5F062 & 1) == 0 )
  {
    sub_1B885B0(&EventSvtControl___c_TypeInfo);
    byte_4A5F062 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventSvtControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventSvtControl___c_TypeInfo->static_fields->__9 = (struct EventSvtControl___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventSvtControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields.id;
}


int32_t __fastcall EventSvtControl___c___playVoice_b__43_0(
        EventSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_ServantVoiceData____int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4A5F063 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Value__);
    byte_4A5F063 = 1;
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
    sub_1B8880C(this, a);
  return System_Int32__Equals_62512140((int32_t)&v5, voice->fields.form, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this[1].fields.__9__0, (int32_t)vdArray, v2, v3);
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
    sub_1B8880C(this, method);
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
  struct System_Func_ServantVoiceData__bool__o *_9__1; // x22
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5F064 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_ServantVoiceData___);
    sub_1B885B0(&System_Func_ServantVoiceData__bool__TypeInfo);
    sub_1B885B0(&Method_EventSvtControl___c__DisplayClass58_0__PlayEventTradeVoice_b__1__);
    byte_4A5F064 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1B887FC(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass58_0__PlayEventTradeVoice_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  return BasicHelper__Any_object__48672124(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool __fastcall EventSvtControl___c__DisplayClass58_0___PlayEventTradeVoice_b__1(
        EventSvtControl___c__DisplayClass58_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL);
}