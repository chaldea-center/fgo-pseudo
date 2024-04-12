void __fastcall EventSvtControl___cctor(const MethodInfo *method)
{
  if ( (byte_42AF857 & 1) == 0 )
  {
    sub_B52984(&EventSvtControl_TypeInfo);
    byte_42AF857 = 1;
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
  System_Action_o *performanceEndAction; // x0

  performanceEndAction = this->fields.performanceEndAction;
  if ( performanceEndAction )
    System_Action__Invoke(performanceEndAction, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__EndPerformance(
        EventSvtControl_o *this,
        System_Action_o *endAction,
        float speed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *objectRef; // x21
  System_Action_o *v7; // x0
  System_Action_o *v8; // x21
  struct System_Action_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Action_o **p_performanceEndAction; // x20
  __int64 v17; // x1
  UnityEngine_GameObject_o *transform; // x0
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s10
  float v23; // s8
  float v24; // s9
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_GameObject_o *v26; // x20
  EventSvtControl_c *v27; // x0
  float v28; // s10
  UnityEngine_GameObject_o *v29; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  EventSvtControl_o *v44; // x0
  const MethodInfo *v45; // x1
  UnityEngine_Vector3_o v46; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42AF855 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventSvtControl_ReleasePerformance__);
    sub_B52984(&EventSvtControl_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_3498/*"CallPerformanceEndAction"*/);
    byte_42AF855 = 1;
  }
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(objectRef, 0LL, 0LL) )
  {
    v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0LL);
    v9 = (struct System_Action_o *)System_Delegate__Combine(
                                     (System_Delegate_o *)endAction,
                                     (System_Delegate_o *)v8,
                                     0LL);
    if ( v9 && v9->klass != System_Action_TypeInfo )
    {
      v44 = (EventSvtControl_o *)sub_B52D50(v9);
      EventSvtControl__CallPerformanceEndAction(v44, v45);
      return;
    }
    this->fields.performanceEndAction = v9;
    p_performanceEndAction = &this->fields.performanceEndAction;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.performanceEndAction,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    transform = this->fields.objectRef;
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( transform )
      {
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
        transform = this->fields.objectRef;
        if ( transform )
        {
          v22 = v19;
          v23 = v20;
          v24 = v21;
          ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                transform,
                                                                                (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                    ComponentInChildren_Dropdown_DropdownItem,
                                                    0LL,
                                                    0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            v7 = *p_performanceEndAction;
            if ( *p_performanceEndAction )
              goto LABEL_19;
            return;
          }
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            v26 = this->fields.objectRef;
            v27 = EventSvtControl_TypeInfo;
            v28 = v22 - (float)ComponentInChildren_Dropdown_DropdownItem[6].fields.m_CachedPtr;
            if ( (BYTE3(EventSvtControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventSvtControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo);
              v27 = EventSvtControl_TypeInfo;
            }
            v46.fields.x = v28;
            v46.fields.y = v23;
            v46.fields.z = v24;
            transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                      v26,
                                                      v27->static_fields->BASE_MOVE_TIME,
                                                      v46,
                                                      0LL);
            if ( transform )
            {
              v29 = transform;
              LODWORD(transform[1].klass) = 3;
              gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
              v29[3].klass = (UnityEngine_GameObject_c *)gameObject;
              sub_B52920((BattleServantConfConponent_o *)&v29[3], gameObject, v31, v32, v33, v34, v35, v36);
              v37 = (System_Int32_array **)StringLiteral_3498/*"CallPerformanceEndAction"*/;
              v29[3].monitor = (void *)StringLiteral_3498/*"CallPerformanceEndAction"*/;
              sub_B52920((BattleServantConfConponent_o *)&v29[3].monitor, v37, v38, v39, v40, v41, v42, v43);
              return;
            }
          }
        }
      }
    }
    sub_B52A5C(transform, v17);
  }
  if ( endAction )
  {
    v7 = endAction;
LABEL_19:
    System_Action__Invoke(v7, 0LL);
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
  __int64 v9; // x0

  v2 = this;
  if ( (byte_42AF848 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_B52984(&Method_EventSvtControl_EndPlayProc__);
    byte_42AF848 = 1;
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
      {
        v9 = sub_B52A88(this);
        sub_B52A28(v9, 0LL);
      }
      v5 = randomVoiceList->m_Items[v4];
      if ( !v5 )
LABEL_10:
        sub_B52A5C(this, method);
      additionalPerformances = v5->fields.additionalPerformances;
      v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)v2, Method_EventSvtControl_EndPlayProc__, 0LL);
      EventSvtControl__PlayPerformance(v2, additionalPerformances, 2, 1, v7, v8);
    }
  }
}


void __fastcall EventSvtControl__EndPlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventSvtControl_o *v8; // x19
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v11; // x8
  BattleServantConfConponent_o *p_player; // x0
  BattleServantConfConponent_o *p_callbakEndPlay; // x0
  System_Action_o *callbakEndPlay; // x20
  BattleServantConfConponent_o *p_callbackStopVoice; // x0
  System_Action_o *callbackStopVoice; // x20
  __int64 v17; // x0

  v8 = this;
  if ( (byte_42AF849 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22663/*"svtVoicePlay"*/);
    this = (EventSvtControl_o *)sub_B52984(&StringLiteral_5536/*"END_PLAY"*/);
    byte_42AF849 = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= randomVoiceList->max_length )
      {
        v17 = sub_B52A88(this);
        sub_B52A28(v17, 0LL);
      }
      v11 = randomVoiceList->m_Items[playCnt];
      if ( v11 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_22663/*"svtVoicePlay"*/,
          v11->fields.delay,
          0LL);
        return;
      }
    }
LABEL_16:
    sub_B52A5C(this, method);
  }
  p_player = (BattleServantConfConponent_o *)&v8->fields.player;
  if ( v8->fields.player )
  {
    p_player->klass = 0LL;
    sub_B52920(p_player, 0LL, v2, v3, v4, v5, v6, v7);
  }
  p_callbakEndPlay = (BattleServantConfConponent_o *)&v8->fields.callbakEndPlay;
  callbakEndPlay = v8->fields.callbakEndPlay;
  v8->fields.playCnt = 0;
  *(_WORD *)&v8->fields.isUnSkippable = 0;
  v8->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    p_callbakEndPlay->klass = 0LL;
    sub_B52920(p_callbakEndPlay, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(callbakEndPlay, 0LL);
  }
  else
  {
    p_callbackStopVoice = (BattleServantConfConponent_o *)&v8->fields.callbackStopVoice;
    callbackStopVoice = v8->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      p_callbackStopVoice->klass = 0LL;
      sub_B52920(p_callbackStopVoice, 0LL, v2, v3, v4, v5, v6, v7);
      System_Action__Invoke(callbackStopVoice, 0LL);
    }
    else
    {
      this = (EventSvtControl_o *)v8->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5536/*"END_PLAY"*/, 0LL);
    }
  }
}


bool __fastcall EventSvtControl__GetIsUnSkippableByVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  Il2CppObject *current; // x21
  int monitor; // w8
  unsigned int v8; // w22
  __int64 v9; // x23
  _BOOL8 v10; // x0
  __int64 v11; // x1
  _BOOL4 v12; // w19
  int v13; // w20
  __int64 v15; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42AF851 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_42AF851 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_B52A5C(0LL, voiceId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListBoxGacha,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v18 = v17;
  do
  {
LABEL_12:
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v10 )
    {
      v12 = 0;
      v13 = 1;
      goto LABEL_15;
    }
    current = v18.fields.current;
    if ( !v18.fields.current )
      sub_B52A5C(v10, v11);
    monitor = (int)v18.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= monitor )
    {
      v15 = sub_B52A88(v10);
      sub_B52A28(v15, 0LL);
    }
    v9 = *((_QWORD *)&current[2].klass + (int)v8);
    if ( !v9 )
      sub_B52A5C(v10, v11);
    v10 = System_String__op_Equality(*(System_String_o **)(v9 + 16), voiceId, 0LL);
    if ( v10 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v8 >= monitor )
      goto LABEL_12;
  }
  v13 = 3;
  v12 = *(_BYTE *)(v9 + 68) != 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v12 & ((unsigned int)(v13 + 1) >> 2);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v19; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  __int64 v21; // x8
  unsigned __int64 v22; // x26
  signed __int64 v23; // x27
  System_String_o *v24; // x25
  __int64 v25; // x0
  int32_t v26; // w21
  System_String_o *v27; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v37; // w24
  __int64 v38; // x8
  _BOOL8 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0
  const MethodInfo *v48; // x1
  __int64 v49; // x0
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42AF84F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF84F = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_B52A5C(Instance, v10);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_19:
      v25 = sub_B52A88(Instance);
      sub_B52A28(v25, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_24;
  }
  v19 = (VoicePlayCondMaster_o *)Instance;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  v21 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    v23 = (int)v21;
    while ( v19 )
    {
      v24 = targetVoiceIds->m_Items[v22];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v19, svtId, v24, 0LL, -1LL, -1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_41;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v22 >= v23 )
        goto LABEL_20;
      if ( v22 >= targetVoiceIds->max_length )
        goto LABEL_19;
    }
    goto LABEL_41;
  }
LABEL_20:
  if ( !v20 )
    goto LABEL_41;
  v26 = UnityEngine_Random__Range_35650740(0, v20->fields._size, 0LL);
  if ( v20->fields._size <= (unsigned int)v26 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  m_Items = (System_String_o **)&v20->fields._items->m_Items[v26];
LABEL_24:
  v27 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v29, v30, v31, v32, v33, v34);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v51 = v50;
LABEL_33:
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v39 )
      break;
    current = v51.fields.current;
    if ( !v51.fields.current )
      sub_B52A5C(v39, v40);
    monitor = (int)v51.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( v37 >= monitor )
        {
          v49 = sub_B52A88(v39);
          sub_B52A28(v49, 0LL);
        }
        v38 = *((_QWORD *)&current[2].klass + (int)v37);
        if ( !v38 )
          sub_B52A5C(v39, v40);
        v39 = System_String__op_Equality(*(System_String_o **)(v38 + 16), v27, 0LL);
        if ( v39 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v37 >= monitor )
          goto LABEL_33;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      if ( !*p_randomVoiceList )
        sub_B52A5C(v47, v48);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v48);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  UnityEngine_Transform_o *transform; // x26
  System_Int32_array **Effect; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Object_o *v24; // x25
  struct UnityEngine_Animation_o **p_animationRef; // x25
  UnityEngine_Object_o *animationRef; // x26
  System_Int32_array **ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *v34; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v36; // x22
  const MethodInfo *v37; // x4
  System_Collections_IEnumerator_o *v38; // x1

  if ( (byte_42AF853 & 1) == 0 )
  {
    sub_B52984(&BoxGachaResultEffectComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF853 = 1;
  }
  if ( !this->fields.isPlayBoxGachaVoice
    || !performances
    || System_String__IsNullOrEmpty(performances->fields.assetName, 0LL) )
  {
    goto LABEL_6;
  }
  p_objectRef = &this->fields.objectRef;
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(objectRef, 0LL, 0LL) )
  {
    performanceRoot = this->fields.performanceRoot;
    if ( !performanceRoot )
      goto LABEL_39;
    assetName = performances->fields.assetName;
    transform = UnityEngine_GameObject__get_transform(performanceRoot, 0LL);
    if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
    }
    Effect = (System_Int32_array **)BoxGachaResultEffectComponent__getEffect(assetName, transform, 0LL);
    *p_objectRef = (struct UnityEngine_GameObject_o *)Effect;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.objectRef, Effect, v18, v19, v20, v21, v22, v23);
    v24 = (UnityEngine_Object_o *)*p_objectRef;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Implicit(v24, 0LL) )
      goto LABEL_6;
  }
  p_animationRef = &this->fields.animationRef;
  animationRef = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(animationRef, 0LL, 0LL) )
    goto LABEL_30;
  performanceRoot = *p_objectRef;
  if ( !*p_objectRef )
LABEL_39:
    sub_B52A5C(performanceRoot, v13);
  ComponentInChildren_Dropdown_DropdownItem = (System_Int32_array **)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                       performanceRoot,
                                                                       (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  *p_animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_Dropdown_DropdownItem;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.animationRef,
    ComponentInChildren_Dropdown_DropdownItem,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (UnityEngine_Object_o *)*p_animationRef;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Implicit(v34, 0LL) )
    goto LABEL_6;
LABEL_30:
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
  v36 = *p_afterPerformance;
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v36->fields.name, 0LL) )
  {
    v38 = EventSvtControl__PlayPerformanceProc(
            this,
            v36->fields.name,
            v36->fields.delay,
            isWaitPerformance,
            playEndAction,
            v37);
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v38, 0LL);
    return;
  }
LABEL_6:
  if ( playEndAction )
    System_Action__Invoke(playEndAction, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42AF854 & 1) == 0 )
  {
    sub_B52984(&EventSvtControl__PlayPerformanceProc_d__61_TypeInfo);
    byte_42AF854 = 1;
  }
  v11 = sub_B52A54(EventSvtControl__PlayPerformanceProc_d__61_TypeInfo);
  EventSvtControl__PlayPerformanceProc_d__61___ctor((EventSvtControl__PlayPerformanceProc_d__61_o *)v11, 0, 0LL);
  if ( !v11 )
    sub_B52A5C(v12, v13);
  *(_QWORD *)(v11 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = animName;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)animName, v20, v21, v22, v23, v24, v25);
  *(float *)(v11 + 48) = delay;
  *(_BYTE *)(v11 + 64) = isWaitPerformance;
  *(_QWORD *)(v11 + 72) = playEndAction;
  sub_B52920(
    (BattleServantConfConponent_o *)(v11 + 72),
    (System_Int32_array **)playEndAction,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v19; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  __int64 v21; // x8
  unsigned __int64 v22; // x26
  signed __int64 v23; // x27
  System_String_o *v24; // x25
  __int64 v25; // x0
  int32_t v26; // w21
  System_String_o *v27; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v37; // w24
  __int64 v38; // x8
  _BOOL8 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0
  const MethodInfo *v48; // x1
  __int64 v49; // x0
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42AF84E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF84E = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_B52A5C(Instance, v10);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_19:
      v25 = sub_B52A88(Instance);
      sub_B52A28(v25, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_24;
  }
  v19 = (VoicePlayCondMaster_o *)Instance;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  v21 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    v23 = (int)v21;
    while ( v19 )
    {
      v24 = targetVoiceIds->m_Items[v22];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v19, svtId, v24, 0LL, -1LL, -1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_41;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v22 >= v23 )
        goto LABEL_20;
      if ( v22 >= targetVoiceIds->max_length )
        goto LABEL_19;
    }
    goto LABEL_41;
  }
LABEL_20:
  if ( !v20 )
    goto LABEL_41;
  v26 = UnityEngine_Random__Range_35650740(0, v20->fields._size, 0LL);
  if ( v20->fields._size <= (unsigned int)v26 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  m_Items = (System_String_o **)&v20->fields._items->m_Items[v26];
LABEL_24:
  v27 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v29, v30, v31, v32, v33, v34);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v51 = v50;
LABEL_33:
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v39 )
      break;
    current = v51.fields.current;
    if ( !v51.fields.current )
      sub_B52A5C(v39, v40);
    monitor = (int)v51.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( v37 >= monitor )
        {
          v49 = sub_B52A88(v39);
          sub_B52A28(v49, 0LL);
        }
        v38 = *((_QWORD *)&current[2].klass + (int)v37);
        if ( !v38 )
          sub_B52A5C(v39, v40);
        v39 = System_String__op_Equality(*(System_String_o **)(v38 + 16), v27, 0LL);
        if ( v39 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v37 >= monitor )
          goto LABEL_33;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      if ( !*p_randomVoiceList )
        sub_B52A5C(v47, v48);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v48);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__ReleasePerformance(EventSvtControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UnityEngine_Animation_o **p_animationRef; // x19
  UnityEngine_Object_o *v10; // x19

  if ( (byte_42AF856 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF856 = 1;
  }
  this->fields.animationRef = 0LL;
  p_animationRef = &this->fields.animationRef;
  sub_B52920((BattleServantConfConponent_o *)p_animationRef, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = (UnityEngine_Object_o *)*(p_animationRef - 1);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(v10, 0LL);
}


bool __fastcall EventSvtControl__SetBoxGachaTalkInfo(
        EventSvtControl_o *this,
        int32_t svtId,
        BoxGachaTalkEntity_o *talkEntity,
        BoxGachaTalkInfo_o **info,
        const MethodInfo *method)
{
  BoxGachaTalkInfo_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_int__o *v18; // x21
  struct System_String_array *befVoiceIds; // x10
  __int64 v20; // x9
  unsigned __int64 v21; // x24
  int v22; // w20
  System_String_o *v23; // x25
  int monitor; // w8
  int i; // w27
  __int64 v26; // x20
  _BOOL8 isVoicePlay; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x28
  int v32; // w27
  int v33; // w8
  __int64 v34; // x0
  unsigned __int64 v35; // x20
  unsigned int v36; // w23
  int v37; // w24
  System_String_o *v38; // x22
  void *v39; // x8
  int v40; // w25
  __int64 v41; // x27
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *v44; // x28
  int v45; // w8
  __int64 v46; // x0
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  __int64 v49; // x0
  __int64 v50; // [xsp+8h] [xbp-D8h]
  int v51; // [xsp+10h] [xbp-D0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-C8h]
  struct System_String_array *v53; // [xsp+30h] [xbp-B0h]
  int v55; // [xsp+40h] [xbp-A0h]
  _BYTE v56[32]; // [xsp+48h] [xbp-98h] BYREF
  int v57; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42AF84D & 1) == 0 )
  {
    sub_B52984(&BoxGachaTalkInfo_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF84D = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v57 = 0;
  v8 = (BoxGachaTalkInfo_o *)sub_B52A54(BoxGachaTalkInfo_TypeInfo);
  BoxGachaTalkInfo___ctor(v8, 0LL);
  *info = v8;
  sub_B52920((BattleServantConfConponent_o *)info, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v18 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_73;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_73;
  v20 = *(_QWORD *)&befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  v51 = v20;
  if ( (int)v20 < 1 )
  {
    v32 = 0;
    if ( !v18 )
      return 0;
  }
  else
  {
    v50 = *(_QWORD *)&befVoiceIds->max_length;
    if ( !(_DWORD)v50 )
      goto LABEL_74;
    v21 = 0LL;
    v22 = 0;
    v53 = befVoiceIds;
    while ( 1 )
    {
      v55 = v22;
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_73;
      v23 = befVoiceIds->m_Items[v21];
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v56,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v58 = *(System_Collections_Generic_List_Enumerator_T__o *)v56;
      while ( 1 )
      {
        isVoicePlay = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v58,
                        (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( !isVoicePlay )
          break;
        current = v58.fields.current;
        if ( !v58.fields.current )
          sub_B52A5C(isVoicePlay, v28);
        monitor = (int)v58.fields.current[1].monitor;
        if ( monitor >= 1 )
        {
          for ( i = 0; i < monitor; ++i )
          {
            if ( i >= (unsigned int)monitor )
            {
              v34 = sub_B52A88(isVoicePlay);
              sub_B52A28(v34, 0LL);
            }
            v26 = *((_QWORD *)&current[2].klass + i);
            if ( !v26 )
              sub_B52A5C(isVoicePlay, v28);
            isVoicePlay = System_String__op_Equality(*(System_String_o **)(v26 + 16), v23, 0LL);
            if ( isVoicePlay )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                sub_B52A5C(isVoicePlay, v28);
              isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                              MasterData_WarQuestSelectionMaster,
                              svtId,
                              v23,
                              0LL,
                              -1LL,
                              -1,
                              0LL);
              if ( isVoicePlay )
              {
                if ( !*info )
                  sub_B52A5C(0LL, v28);
                BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v26 + 16),
                  *(System_String_o **)(v26 + 48),
                  0LL);
                if ( !v18 )
                  sub_B52A5C(v29, v30);
                System_Collections_Generic_List_int___Add(
                  v18,
                  v21,
                  (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            monitor = (int)current[1].monitor;
          }
        }
      }
      *(_DWORD *)&v56[4 * v55 + 24] = 202;
      v22 = ++v57;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v58,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      v32 = v22;
      befVoiceIds = v53;
      if ( v22 )
      {
        v33 = v22 - 1;
        if ( *(_DWORD *)&v56[4 * v22 + 20] == 202 )
        {
          v32 = --v22;
          v57 = v33;
        }
      }
      if ( (__int64)++v21 >= v51 )
        break;
      if ( v21 >= v53->max_length )
        goto LABEL_74;
    }
    LODWORD(v20) = v50;
    if ( !v18 )
      return 0;
  }
  if ( !v18->fields._size )
    return 0;
  if ( (int)v20 >= 1 )
  {
    if ( aftVoiceIds )
    {
      v35 = 0LL;
      v36 = 0;
      while ( v35 < aftVoiceIds->max_length )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          goto LABEL_73;
        v37 = v32;
        v38 = aftVoiceIds->m_Items[v35];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v56,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v58 = *(System_Collections_Generic_List_Enumerator_T__o *)v56;
        while ( 1 )
        {
          v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v58,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v42 )
            break;
          v44 = v58.fields.current;
          if ( !v58.fields.current )
            sub_B52A5C(v42, v43);
          v39 = v58.fields.current[1].monitor;
          if ( (int)v39 >= 1 )
          {
            v40 = 0;
            do
            {
              if ( v40 >= (unsigned int)v39 )
              {
                v46 = sub_B52A88(v42);
                sub_B52A28(v46, 0LL);
              }
              v41 = *((_QWORD *)&v44[2].klass + v40);
              if ( !v41 )
                sub_B52A5C(v42, v43);
              v42 = System_String__op_Equality(*(System_String_o **)(v41 + 16), v38, 0LL);
              if ( v42 )
              {
                if ( v18->fields._size <= v36 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                if ( v35 == v18->fields._items->m_Items[v36 + 1] )
                {
                  if ( !*info )
                    sub_B52A5C(0LL, v43);
                  BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v41 + 16),
                    *(System_String_o **)(v41 + 48),
                    0LL);
                  ++v36;
                }
              }
              LODWORD(v39) = v44[1].monitor;
              ++v40;
            }
            while ( v40 < (int)v39 );
          }
        }
        *(_DWORD *)&v56[4 * v37 + 24] = 377;
        v32 = ++v57;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v58,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v32 )
        {
          v45 = v32 - 1;
          if ( *(_DWORD *)&v56[4 * v32 + 20] == 377 )
          {
            --v32;
            v57 = v45;
          }
        }
        if ( (__int64)++v35 >= v51 )
          goto LABEL_70;
      }
LABEL_74:
      v49 = sub_B52A88(Instance);
      sub_B52A28(v49, 0LL);
    }
LABEL_73:
    sub_B52A5C(Instance, v16);
  }
LABEL_70:
  if ( !*info )
    goto LABEL_73;
  beforeVoiceIdList = (*info)->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    goto LABEL_73;
  return beforeVoiceIdList->fields._size > 0;
}


void __fastcall EventSvtControl__SetDiggingSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listDigging,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o **p_asstName; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleServantConfConponent_o *v17; // x0
  System_Int32_array **v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (BattleServantConfConponent_o *)(p_asstName + 14);
  if ( listDigging )
  {
    v17->klass = (BattleServantConfConponent_c *)listDigging;
    v18 = (System_Int32_array **)listDigging;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_B52920(v17, v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetOverwriteSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listOverwrite,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v9 = (BattleServantConfConponent_o *)this;
  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v9->fields.buffListView = (struct BattleViewBufflistComponent_o *)listOverwrite;
  v9 = (BattleServantConfConponent_o *)((char *)v9 + 176);
  sub_B52920(v9, (System_Int32_array **)listOverwrite, v10, v11, v12, v13, v14, v15);
  LODWORD(v9[-1].fields.AppendSkillObj) = -1;
}


void __fastcall EventSvtControl__SetRecipeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listRecipe,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o **p_asstName; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleServantConfConponent_o *v17; // x0
  System_Int32_array **v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (BattleServantConfConponent_o *)(p_asstName + 15);
  if ( listRecipe )
  {
    v17->klass = (BattleServantConfConponent_c *)listRecipe;
    v18 = (System_Int32_array **)listRecipe;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_B52920(v17, v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetSvtFigureCollect(
        EventSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.standFigureCollectList = collects;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.standFigureCollectList,
    (System_Int32_array **)collects,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventSvtControl__SetTreasureBoxSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTreasureBox,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o **p_asstName; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleServantConfConponent_o *v17; // x0
  System_Int32_array **v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (BattleServantConfConponent_o *)(p_asstName + 13);
  if ( listTreasureBox )
  {
    v17->klass = (BattleServantConfConponent_c *)listTreasureBox;
    v18 = (System_Int32_array **)listTreasureBox;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_B52920(v17, v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SvtVoicePlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventSvtControl_o *v8; // x19
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v11; // x8
  System_Int32_array **id; // x1
  struct ServantVoiceData_array *v13; // x8
  __int64 v14; // x9
  Il2CppClass **v15; // x10
  EventSvtControl_o **v16; // x10
  Il2CppClass *v17; // x11
  Il2CppClass *v18; // t1
  int32_t vcName; // w20
  float FadeTime; // s0
  float v21; // s8
  struct ServantVoiceData_array *v22; // x8
  __int64 v23; // x9
  ServantVoiceData_o *v24; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  int32_t face; // w20
  StandFigureCollect_o *v27; // x8
  struct ServantVoiceData_array *v28; // x9
  __int64 v29; // x10
  ServantVoiceData_o *v30; // x9
  System_String_o *asstName; // x20
  System_String_o *v32; // x21
  float volume; // s8
  System_Action_o *v34; // x22
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x5
  struct ServantVoiceData_array *v43; // x8
  __int64 v44; // x9
  ServantVoiceData_o *v45; // x8
  struct ServantVoiceData_array *v46; // x8
  __int64 v47; // x9
  ServantVoiceData_o *v48; // x8
  struct System_Int32_array *multiFace; // x22
  __int64 v50; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *v51; // x25
  StandFigureCollect_o *v52; // x8
  __int64 v53; // x0

  v8 = this;
  if ( (byte_42AF847 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_B52984(&Method_EventSvtControl_EndPlay__);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    this = (EventSvtControl_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42AF847 = 1;
  }
  randomVoiceList = v8->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_50;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= randomVoiceList->max_length )
    goto LABEL_51;
  v11 = randomVoiceList->m_Items[playCnt];
  if ( !v11 )
    goto LABEL_50;
  id = (System_Int32_array **)v11->fields.id;
  v8->fields.vcName = (struct System_String_o *)id;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
  v13 = v8->fields.randomVoiceList;
  if ( !v13 )
    goto LABEL_50;
  v14 = v8->fields.playCnt;
  if ( (unsigned int)v14 >= v13->max_length )
    goto LABEL_51;
  v15 = &v13->obj.klass + v14;
  v18 = v15[4];
  v16 = (EventSvtControl_o **)(v15 + 4);
  v17 = v18;
  if ( !v18 )
    goto LABEL_50;
  v8->fields.isUnSkippable = BYTE4(v17->_1.element_class);
  if ( (unsigned int)v14 >= v13->max_length )
    goto LABEL_51;
  this = *v16;
  if ( !*v16 )
    goto LABEL_50;
  vcName = (int32_t)this->fields.vcName;
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
  this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
  v21 = FadeTime;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v22 = v8->fields.randomVoiceList;
    if ( !v22 )
      goto LABEL_50;
    v23 = v8->fields.playCnt;
    if ( (unsigned int)v23 >= v22->max_length )
      goto LABEL_51;
    v24 = v22->m_Items[v23];
    if ( !v24 )
      goto LABEL_50;
    standFigureCollectList = v8->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v24->fields.face;
      if ( !standFigureCollectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v27 = standFigureCollectList->fields._items->m_Items[0];
      if ( !v27 )
        goto LABEL_50;
      v28 = v8->fields.randomVoiceList;
      if ( !v28 )
        goto LABEL_50;
      v29 = v8->fields.playCnt;
      if ( (unsigned int)v29 >= v28->max_length )
        goto LABEL_51;
      v30 = v28->m_Items[v29];
      if ( !v30 )
        goto LABEL_50;
      this = (EventSvtControl_o *)v27->fields._standFigure_k__BackingField;
      if ( !this )
        goto LABEL_50;
      UIStandFigureR__SetFace_40871844((UIStandFigureR_o *)this, face, v30->fields.form, 0LL, v21, 0LL);
    }
    goto LABEL_25;
  }
  v46 = v8->fields.randomVoiceList;
  if ( !v46 )
    goto LABEL_50;
  v47 = v8->fields.playCnt;
  if ( (unsigned int)v47 >= v46->max_length )
    goto LABEL_51;
  v48 = v46->m_Items[v47];
  if ( !v48 )
    goto LABEL_50;
  multiFace = v48->fields.multiFace;
  if ( multiFace )
  {
    this = (EventSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                  (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( (_DWORD)this == multiFace->max_length )
    {
      if ( (int)this >= 1 )
      {
        v50 = 0LL;
        while ( (unsigned int)v50 < (unsigned int)this )
        {
          v51 = v8->fields.standFigureCollectList;
          if ( !v51 )
            goto LABEL_50;
          if ( v51->fields._size <= (unsigned int)v50 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v52 = v51->fields._items->m_Items[v50];
          if ( !v52 )
            goto LABEL_50;
          this = (EventSvtControl_o *)v52->fields._standFigure_k__BackingField;
          if ( !this )
            goto LABEL_50;
          UIStandFigureR__SetFace_40871844((UIStandFigureR_o *)this, multiFace->m_Items[v50 + 1], vcName, 0LL, v21, 0LL);
          this = (EventSvtControl_o *)multiFace->max_length;
          if ( (int)++v50 >= (int)this )
            goto LABEL_25;
        }
        goto LABEL_51;
      }
LABEL_25:
      asstName = v8->fields.asstName;
      v32 = v8->fields.vcName;
      volume = v8->fields.volume;
      v34 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v34, (Il2CppObject *)v8, Method_EventSvtControl_EndPlay__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v35 = (System_Int32_array **)SoundManager__playVoice_23788136(asstName, v32, volume, v34, 0LL);
      v8->fields.player = (struct SePlayer_o *)v35;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields.player, v35, v36, v37, v38, v39, v40, v41);
      if ( v8->fields.isSkipPerformance )
        goto LABEL_33;
      v43 = v8->fields.randomVoiceList;
      if ( !v43 )
LABEL_50:
        sub_B52A5C(this, method);
      v44 = v8->fields.playCnt;
      if ( (unsigned int)v44 < v43->max_length )
      {
        v45 = v43->m_Items[v44];
        if ( v45 )
        {
          EventSvtControl__PlayPerformance(v8, v45->fields.additionalPerformances, 1, 0, 0LL, v42);
LABEL_33:
          ++v8->fields.playCnt;
          return;
        }
        goto LABEL_50;
      }
LABEL_51:
      v53 = sub_B52A88(this);
      sub_B52A28(v53, 0LL);
    }
  }
}


bool __fastcall EventSvtControl__TryGetPlayableVoiceInfoList(
        EventSvtControl_o *this,
        System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o **voiceInfoList,
        System_Collections_Generic_List_ServantVoiceData____o *servantVoiceGroupData,
        const MethodInfo *method)
{
  VoicePlayCondMaster_o *Master_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_KeyValuePair_string__int___o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo_201195C **v17; // x27
  System_String_o **v18; // x26
  const MethodInfo_1B6A2FC **v19; // x19
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  EventSvtControl___c_c *v24; // x0
  struct EventSvtControl___c_StaticFields *static_fields; // x8
  System_String_o *v26; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__54_0; // x25
  VoicePlayCondMaster_o *v28; // x24
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v29; // x21
  EventSvtControl_o *v30; // x22
  const MethodInfo_201195C **v31; // x20
  const MethodInfo_1B6A2FC **v32; // x27
  System_String_o **v33; // x19
  Il2CppObject *v34; // x26
  struct EventSvtControl___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_string__o *v42; // x1
  System_String_o *v43; // x0
  __int64 v44; // x1
  WarBoardAIRoute_RouteData_o *v45; // x24
  System_String_o *Weight; // x2
  const MethodInfo_228F220 *v47; // x4
  __int64 v48; // x1
  __int64 v50; // x0
  System_String_o *v52; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o v54; // [xsp+28h] [xbp-88h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+38h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o v57; // 0:x0.16

  if ( (byte_42AF852 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Func_ServantVoiceData__string___ctor__);
    sub_B52984(&System_Func_ServantVoiceData__string__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_B52984(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_B52984(&System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
    sub_B52984(&Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__54_0__);
    sub_B52984(&EventSvtControl___c_TypeInfo);
    sub_B52984(&StringLiteral_709/*","*/);
    byte_42AF852 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  *(_QWORD *)&v54.fields.value = 0LL;
  condEntity = 0LL;
  v54.fields.key = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v7 = (System_Collections_Generic_List_KeyValuePair_string__int___o *)sub_B52A54(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_string__int_____ctor(
    v7,
    (const MethodInfo_2F8F204 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v7;
  sub_B52920((BattleServantConfConponent_o *)voiceInfoList, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v14,
    (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  if ( !servantVoiceGroupData )
    goto LABEL_34;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v53,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)servantVoiceGroupData,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v17 = (const MethodInfo_201195C **)&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__;
  v18 = (System_String_o **)&StringLiteral_709/*","*/;
  v19 = (const MethodInfo_1B6A2FC **)&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___;
  v56 = v53;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(&v56, *v17);
    if ( !v20 )
      break;
    current = v56.fields.current;
    if ( !v56.fields.current )
      sub_B52A5C(v20, v21);
    if ( !LODWORD(v56.fields.current[1].monitor) )
    {
      v50 = sub_B52A88(v20);
      sub_B52A28(v50, 0LL);
    }
    klass = v56.fields.current[2].klass;
    if ( !klass )
      sub_B52A5C(v20, v21);
    if ( !Master_WarQuestSelectionMaster )
      sub_B52A5C(v20, v21);
    if ( VoicePlayCondMaster__isVoicePlay_21293516(
           Master_WarQuestSelectionMaster,
           this->fields.svtId,
           (System_String_o *)klass->_1.name,
           &condEntity,
           0LL,
           -1LL,
           -1,
           0LL) )
    {
      v24 = EventSvtControl___c_TypeInfo;
      if ( (BYTE3(EventSvtControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventSvtControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
        v24 = EventSvtControl___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      v26 = *v18;
      _9__54_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__54_0;
      if ( !_9__54_0 )
      {
        if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          static_fields = EventSvtControl___c_TypeInfo->static_fields;
        }
        v52 = v26;
        v28 = Master_WarQuestSelectionMaster;
        v29 = v14;
        v30 = this;
        v31 = v17;
        v32 = v19;
        v33 = v18;
        v34 = (Il2CppObject *)static_fields->__9;
        _9__54_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_ServantVoiceData__string__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__54_0,
          v34,
          Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__54_0__,
          (const MethodInfo_2BCA808 *)Method_System_Func_ServantVoiceData__string___ctor__);
        v35 = EventSvtControl___c_TypeInfo->static_fields;
        v35->__9__54_0 = (struct System_Func_ServantVoiceData__string__o *)_9__54_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v35->__9__54_0,
          (System_Int32_array **)_9__54_0,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        v18 = v33;
        v19 = v32;
        v17 = v31;
        this = v30;
        v14 = v29;
        Master_WarQuestSelectionMaster = v28;
        v26 = v52;
      }
      v42 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                                  (System_Func_TSource__TResult__o *)_9__54_0,
                                                                  *v19);
      v43 = System_String__Join_44623760(v26, v42, 0LL);
      if ( !v14 )
        sub_B52A5C(v43, v44);
      v45 = (WarBoardAIRoute_RouteData_o *)v43;
      if ( !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
              (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v14,
              (BattleBuffData_BuffData_o *)v43,
              (const MethodInfo_24E06A8 *)Method_System_Collections_Generic_HashSet_string__Contains__) )
      {
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          v14,
          v45,
          (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_string__Add__);
        Weight = (System_String_o *)(unsigned int)VoicePlayCondMaster__GetWeight(
                                                    Master_WarQuestSelectionMaster,
                                                    condEntity,
                                                    10,
                                                    0LL);
        v57.fields.key = (struct System_String_o *)&v54;
        *(_QWORD *)&v57.fields.value = current;
        System_Collections_Generic_KeyValuePair_string__int____ctor(
          v57,
          Weight,
          Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
          v47);
        if ( !*voiceInfoList )
          sub_B52A5C(0LL, v48);
        System_Collections_Generic_List_KeyValuePair_string__int____Add(
          (System_Collections_Generic_List_KeyValuePair_string__int___o *)*voiceInfoList,
          v54,
          (const MethodInfo_2F8FF94 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( !*voiceInfoList )
LABEL_34:
    sub_B52A5C(v15, v16);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int128 v14; // q1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1
  struct System_Action_o *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x22
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x23
  System_Int32_array **current; // x1
  System_Int32_array ***v47; // x24
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  _BOOL8 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x27
  int v57; // w8
  unsigned int v58; // w26
  __int64 v59; // x28
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  __int64 v67; // x0
  const MethodInfo *v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  System_Action_o *v71; // x0
  WebViewManager_o *Instance; // x0
  __int64 v73; // x1
  System_String_o *v74; // x20
  System_Action_o *v75; // x23
  CommonUI_o *v76; // x19
  System_String_o *v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x0
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42AF84C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&EventSvtControl___c__DisplayClass48_0_TypeInfo);
    sub_B52984(&Method_EventSvtControl___c__DisplayClass48_1__boxGachaPlayVoice_b__0__);
    sub_B52984(&EventSvtControl___c__DisplayClass48_1_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF84C = 1;
  }
  memset(&v86, 0, sizeof(v86));
  v5 = sub_B52A54(EventSvtControl___c__DisplayClass48_0_TypeInfo);
  EventSvtControl___c__DisplayClass48_0___ctor((EventSvtControl___c__DisplayClass48_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  v14 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v5 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v5 + 24) = v14;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), 0LL, v15, v16, v17, v18, v19, v20);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v21);
  System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 24), 0LL);
  v22 = *(struct System_Action_o **)(v5 + 48);
  this->fields.callbakEndPlay = v22;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v30, v31, v32, v33, v34, v35);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_B52A5C(voiceListBoxGacha, v7);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v85,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListBoxGacha,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v86 = v85;
LABEL_17:
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v86,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v36 = sub_B52A54(EventSvtControl___c__DisplayClass48_1_TypeInfo);
    EventSvtControl___c__DisplayClass48_1___ctor((EventSvtControl___c__DisplayClass48_1_o *)v36, 0LL);
    if ( !v36 )
      sub_B52A5C(v37, v38);
    *(_QWORD *)(v36 + 24) = v5;
    v45 = v36 + 24;
    sub_B52920((BattleServantConfConponent_o *)(v36 + 24), (System_Int32_array **)v5, v39, v40, v41, v42, v43, v44);
    current = (System_Int32_array **)v86.fields.current;
    *(_QWORD *)(v36 + 16) = v86.fields.current;
    v47 = (System_Int32_array ***)(v36 + 16);
    sub_B52920((BattleServantConfConponent_o *)(v36 + 16), current, v48, v49, v50, v51, v52, v53);
    v56 = *(_QWORD *)(v36 + 16);
    if ( !v56 )
      sub_B52A5C(v54, v55);
    v57 = *(_DWORD *)(v56 + 24);
    if ( v57 >= 1 )
    {
      v58 = 0;
      while ( 1 )
      {
        if ( v58 >= v57 )
        {
          v84 = sub_B52A88(v54);
          sub_B52A28(v84, 0LL);
        }
        v59 = *(_QWORD *)(v56 + 8LL * (int)v58 + 32);
        if ( !v59 )
          sub_B52A5C(v54, v55);
        if ( !*(_QWORD *)v45 )
          sub_B52A5C(v54, v55);
        v54 = System_String__op_Equality(
                *(System_String_o **)(v59 + 16),
                *(System_String_o **)(*(_QWORD *)v45 + 24LL),
                0LL);
        if ( v54 )
          break;
        v57 = *(_DWORD *)(v56 + 24);
        if ( (int)++v58 >= v57 )
          goto LABEL_17;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(*(System_String_o **)(v59 + 72), 0LL) )
      {
        v66 = *v47;
        *p_randomVoiceList = (struct ServantVoiceData_array *)*v47;
        sub_B52920((BattleServantConfConponent_o *)&this->fields.randomVoiceList, v66, v60, v61, v62, v63, v64, v65);
        if ( !*p_randomVoiceList )
          sub_B52A5C(v67, v68);
        this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
        if ( !*(_QWORD *)v45 )
          sub_B52A5C(v67, v68);
        this->fields.isSkipPerformance = *(_BYTE *)(*(_QWORD *)v45 + 32LL);
        EventSvtControl__svtVoicePlay(this, v68);
        if ( !*(_QWORD *)v45 )
          sub_B52A5C(v69, v70);
        v71 = *(System_Action_o **)(*(_QWORD *)v45 + 40LL);
        if ( v71 )
          System_Action__Invoke(v71, 0LL);
      }
      else
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v74 = *(System_String_o **)(v59 + 72);
        v75 = *(System_Action_o **)(v36 + 32);
        v76 = (CommonUI_o *)Instance;
        v77 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v75 )
        {
          v75 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v75,
            (Il2CppObject *)v36,
            Method_EventSvtControl___c__DisplayClass48_1__boxGachaPlayVoice_b__0__,
            0LL);
          *(_QWORD *)(v36 + 32) = v75;
          sub_B52920(
            (BattleServantConfConponent_o *)(v36 + 32),
            (System_Int32_array **)v75,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83);
        }
        if ( !v76 )
          sub_B52A5C(Instance, v73);
        CommonUI__OpenNotificationDialog(v76, v77, v74, v75, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v86,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_randomVoiceList; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x23
  int v18; // w8
  unsigned int v19; // w20
  __int64 v20; // x8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  VoicePlayCondMaster_o *v33; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x23
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v35; // x19
  signed __int64 size; // x19
  unsigned __int64 v37; // x20
  System_String_o *v38; // x27
  int v39; // w28
  System_Random_o *v40; // x25
  il2cpp_array_size_t v41; // w25
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v46; // w19
  __int64 v47; // x8
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int v54; // w19
  int v55; // w10
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x0
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Action_o *action; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v62; // [xsp+8h] [xbp-B8h]
  int v63; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+20h] [xbp-A0h] BYREF
  int v65[4]; // [xsp+38h] [xbp-88h]
  int v66; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42AF845 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor___68522464);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&System_Random_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF845 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  v66 = 0;
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = (BattleServantConfConponent_o *)&this->fields.randomVoiceList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
    0LL,
    *(System_String_array ***)&svtId,
    (System_String_array **)callbackEnds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_72;
  action = callbackEnds;
  if ( (int)voiceIds->max_length >= 2 )
  {
    v33 = (VoicePlayCondMaster_o *)Instance;
    v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v34,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
    v35 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v35,
      voiceIds->max_length,
      (const MethodInfo_2FF0A10 *)Method_System_Collections_Generic_List_string___ctor___68522464);
    if ( !v35 )
      goto LABEL_72;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v35,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_string__AddRange__);
    v62 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v35;
    size = v35->fields._size;
    if ( (int)size >= 1 )
    {
      v37 = 0LL;
      do
      {
        if ( v37 >= voiceIds->max_length )
        {
LABEL_64:
          v59 = sub_B52A88(Instance);
          sub_B52A28(v59, 0LL);
        }
        if ( !v33 )
          goto LABEL_72;
        v38 = voiceIds->m_Items[v37];
        Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v33, svtId, v38, 0LL, -1LL, -1, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v34 )
            goto LABEL_72;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v34,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
        }
      }
      while ( (__int64)++v37 < size );
    }
    if ( !v34 )
      goto LABEL_72;
    v39 = v34->fields._size - 1;
    if ( v39 >= 0 )
    {
      v63 = 0;
      do
      {
        v40 = (System_Random_o *)sub_B52A54(System_Random_TypeInfo);
        System_Random___ctor(v40, 0LL);
        if ( !v40 )
          goto LABEL_72;
        Instance = (DataManager_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v40->klass->vtable._7_Next.method)(
                                      v40,
                                      (unsigned int)v34->fields._size,
                                      v40->klass->vtable._8_NextDouble.methodPtr);
        if ( !this->fields.voiceListMission )
          goto LABEL_72;
        v41 = (unsigned int)Instance;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v64,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListMission,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v67 = v64;
        do
        {
          v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v67,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v42 )
            break;
          current = v67.fields.current;
          if ( !v67.fields.current )
            sub_B52A5C(v42, v43);
          monitor = (int)v67.fields.current[1].monitor;
          if ( monitor >= 1 )
          {
            v46 = 0;
            while ( 1 )
            {
              if ( v46 >= monitor )
              {
                v56 = sub_B52A88(v42);
                sub_B52A28(v56, 0LL);
              }
              v47 = *((_QWORD *)&current[2].klass + (int)v46);
              if ( !v47 )
                sub_B52A5C(v42, v43);
              if ( v34->fields._size <= v41 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              v42 = System_String__op_Equality(
                      *(System_String_o **)(v47 + 16),
                      (System_String_o *)v34->fields._items->m_Items[v41],
                      0LL);
              if ( v42 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v46 >= monitor )
                goto LABEL_50;
            }
            p_randomVoiceList->klass = (BattleServantConfConponent_c *)current;
            sub_B52920(p_randomVoiceList, (System_Int32_array **)current, v48, v49, v50, v51, v52, v53);
          }
LABEL_50:
          ;
        }
        while ( !p_randomVoiceList->klass );
        v65[v63] = 277;
        v54 = ++v66;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v67,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        v55 = v54;
        if ( v54 && v65[v54 - 1] == 277 )
        {
          v55 = v54 - 1;
          v66 = v54 - 1;
        }
        if ( p_randomVoiceList->klass )
          goto LABEL_67;
        v63 = v55;
        if ( v41 >= voiceIds->max_length )
          goto LABEL_64;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v62,
          (WarBoardManager_TaskList_o *)voiceIds->m_Items[v41],
          (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v39 >= 0 );
    }
  }
  else
  {
    Instance = (DataManager_o *)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_72;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v64,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v67 = v64;
    do
    {
      v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v67,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v15 )
        break;
      v17 = v67.fields.current;
      if ( !v67.fields.current )
        sub_B52A5C(v15, v16);
      v18 = (int)v67.fields.current[1].monitor;
      if ( v18 >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( v19 >= v18 )
          {
            v58 = sub_B52A88(v15);
            sub_B52A28(v58, 0LL);
          }
          v20 = *((_QWORD *)&v17[2].klass + (int)v19);
          if ( !v20 )
            sub_B52A5C(v15, v16);
          if ( !voiceIds->max_length )
          {
            v57 = sub_B52A88(v15);
            sub_B52A28(v57, 0LL);
          }
          v15 = System_String__op_Equality(*(System_String_o **)(v20 + 16), voiceIds->m_Items[0], 0LL);
          if ( v15 )
            break;
          v18 = (int)v17[1].monitor;
          if ( (int)++v19 >= v18 )
            goto LABEL_21;
        }
        p_randomVoiceList->klass = (BattleServantConfConponent_c *)v17;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
          (System_Int32_array **)v17,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
LABEL_21:
      ;
    }
    while ( !p_randomVoiceList->klass );
    v65[0] = 427;
    v66 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v67,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v66 = 0;
  }
  if ( p_randomVoiceList->klass )
  {
LABEL_67:
    this->fields.callbakEndPlay = action;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
      (System_Int32_array **)action,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    randomVoiceList = this->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(this, v14);
      return;
    }
LABEL_72:
    sub_B52A5C(Instance, v14);
  }
  if ( action )
    ActionExtensions__Call(action, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__playPurchaseVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListShop; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v14; // x1
  VoicePlayCondMaster_o *v15; // x22
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v21; // x1
  System_Random_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int v29; // w21
  int32_t size; // w8
  struct ServantVoiceData_array *v31; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  System_Exception_o *v35; // x19
  System_String_o *v36; // x0
  __int64 v37; // x0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42AF844 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&System_Random_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF844 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v34 = sub_B52988(&System_Exception_TypeInfo);
      v35 = (System_Exception_o *)sub_B52A54(v34);
      v36 = (System_String_o *)sub_B52988(&StringLiteral_24007/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_16214224(v35, v36, 0LL);
      v37 = sub_B52988(&Method_EventSvtControl_playPurchaseVoice__);
      sub_B52A28(v35, v37);
    }
    this->fields.callbackStopVoice = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v12,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_33;
    v15 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v38,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListShop,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v39 = v38;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v39,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v16 )
        break;
      current = v39.fields.current;
      if ( !v39.fields.current )
        sub_B52A5C(v16, v17);
      if ( !LODWORD(v39.fields.current[1].monitor) )
      {
        v33 = sub_B52A88(v16);
        sub_B52A28(v33, 0LL);
      }
      klass = v39.fields.current[2].klass;
      if ( !klass )
        sub_B52A5C(v16, v17);
      if ( !v15 )
        sub_B52A5C(v16, v17);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(v15, svtId, (System_String_o *)klass->_1.name, 0LL, -1LL, -1, 0LL);
      if ( isVoicePlay )
      {
        if ( !v12 )
          sub_B52A5C(isVoicePlay, v21);
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__) )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)current,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v39,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v22 = (System_Random_o *)sub_B52A54(System_Random_TypeInfo);
    System_Random___ctor(v22, 0LL);
    if ( !v12 || !v22 )
      goto LABEL_33;
    v29 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._7_Next.method)(
            v22,
            (unsigned int)v12->fields._size,
            v22->klass->vtable._8_NextDouble.methodPtr);
    size = v12->fields._size;
    if ( this->fields.beforeVoiceIdx == v29 )
      v29 = (v29 + 1) % size;
    if ( size <= (unsigned int)v29 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v31 = (struct ServantVoiceData_array *)v12->fields._items->m_Items[v29];
    this->fields.randomVoiceList = v31;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v31,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v29;
    if ( !randomVoiceList )
LABEL_33:
      sub_B52A5C(Instance, v14);
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v14);
  }
}


void __fastcall EventSvtControl__playVoice(
        EventSvtControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *PlayableVoiceInfoList; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *v13; // x20
  int32_t size; // w8
  int32_t v15; // w21
  int32_t beforeVoiceIdx; // w0
  const MethodInfo_228F220 *v17; // x4
  int v18; // w20
  EventSvtControl___c_c *v19; // x0
  struct EventSvtControl___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_string__int___int__o *_9__37_0; // x21
  Il2CppObject *v22; // x22
  struct EventSvtControl___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Int32_array *v31; // x0
  struct System_String_o *key; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_KeyValuePair_object__int__o v40; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *voiceInfoList; // [xsp+18h] [xbp-28h] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o v42; // 0:x0.16

  if ( (byte_42AF843 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____);
    sub_B52984(&Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_KeyValuePair_ServantVoiceData____int___int___ctor__);
    sub_B52984(&System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
    sub_B52984(&Method_EventSvtControl___c__playVoice_b__37_0__);
    sub_B52984(&EventSvtControl___c_TypeInfo);
    byte_42AF843 = 1;
  }
  voiceInfoList = 0LL;
  v40.fields.key = 0LL;
  *(_QWORD *)&v40.fields.value = 0LL;
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)callback);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    PlayableVoiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)EventSvtControl__TryGetPlayableVoiceInfoList(this, &voiceInfoList, this->fields.voiceListRand, v10);
    if ( ((unsigned __int8)PlayableVoiceInfoList & 1) != 0 )
    {
      v13 = voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_31;
      size = voiceInfoList->fields._size;
      if ( size == 1 )
      {
        v15 = 0;
      }
      else
      {
        beforeVoiceIdx = this->fields.beforeVoiceIdx;
        if ( (beforeVoiceIdx & 0x80000000) == 0 )
        {
          PlayableVoiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)UnityEngine_Mathf__Clamp_41468312(beforeVoiceIdx, 0, size - 1, 0LL);
          this->fields.beforeVoiceIdx = (int)PlayableVoiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_31;
          v18 = (int)PlayableVoiceInfoList;
          if ( voiceInfoList->fields._size <= (unsigned int)PlayableVoiceInfoList )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v42.fields.key = (struct System_String_o *)&v40;
          *(_QWORD *)&v42.fields.value = voiceInfoList->fields._items->m_Items[v18].fields.key;
          System_Collections_Generic_KeyValuePair_string__int____ctor(
            v42,
            0LL,
            Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
            v17);
          PlayableVoiceInfoList = voiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_31;
          System_Collections_Generic_List_KeyValuePair_object__int____set_Item(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            this->fields.beforeVoiceIdx,
            v40,
            (const MethodInfo_2F8FC30 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
          v13 = voiceInfoList;
        }
        v19 = EventSvtControl___c_TypeInfo;
        if ( (BYTE3(EventSvtControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSvtControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
          v19 = EventSvtControl___c_TypeInfo;
        }
        static_fields = v19->static_fields;
        _9__37_0 = (System_Func_KeyValuePair_string__int___int__o *)static_fields->__9__37_0;
        if ( !_9__37_0 )
        {
          if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            static_fields = EventSvtControl___c_TypeInfo->static_fields;
          }
          v22 = (Il2CppObject *)static_fields->__9;
          _9__37_0 = (System_Func_KeyValuePair_string__int___int__o *)sub_B52A54(System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
          System_Func_KeyValuePair_string__int___int____ctor(
            _9__37_0,
            v22,
            Method_EventSvtControl___c__playVoice_b__37_0__,
            (const MethodInfo_277BFC8 *)Method_System_Func_KeyValuePair_ServantVoiceData____int___int___ctor__);
          v23 = EventSvtControl___c_TypeInfo->static_fields;
          v23->__9__37_0 = (struct System_Func_KeyValuePair_ServantVoiceData____int___int__o *)_9__37_0;
          sub_B52920(
            (BattleServantConfConponent_o *)&v23->__9__37_0,
            (System_Int32_array **)_9__37_0,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
        }
        v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_string__int___int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                                     (System_Func_TSource__TResult__o *)_9__37_0,
                                                                     (const MethodInfo_1B67590 *)Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
        v31 = System_Linq_Enumerable__ToArray_int_(
                v30,
                (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
        PlayableVoiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)RandomUtility__GetRandomRangeIndex(v31, 0, 0LL);
        v13 = voiceInfoList;
        if ( !voiceInfoList )
          goto LABEL_31;
        v15 = (int)PlayableVoiceInfoList;
      }
      if ( !v13->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      key = BasicHelper__IndexValue_KeyValuePair_string__int__(
              (System_Collections_Generic_List_T__o *)v13,
              v15,
              (System_Collections_Generic_KeyValuePair_string__int__o)v13->fields._items->m_Items[0],
              (const MethodInfo_1A43D9C *)Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____).fields.key;
      this->fields.randomVoiceList = (struct ServantVoiceData_array *)key;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)key,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      randomVoiceList = this->fields.randomVoiceList;
      this->fields.beforeVoiceIdx = v15;
      if ( randomVoiceList )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
        EventSvtControl__setVoiceForm(this, v12);
        return;
      }
LABEL_31:
      sub_B52A5C(PlayableVoiceInfoList, v12);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleServantConfConponent_o *p_voiceListBoxGacha; // x0
  System_Int32_array **v24; // x1

  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)performanceRoot,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.performanceRoot = performanceRoot;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.performanceRoot,
    (System_Int32_array **)performanceRoot,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  p_voiceListBoxGacha = (BattleServantConfConponent_o *)&this->fields.voiceListBoxGacha;
  if ( listBoxGacha )
  {
    p_voiceListBoxGacha->klass = (BattleServantConfConponent_c *)listBoxGacha;
    v24 = (System_Int32_array **)listBoxGacha;
  }
  else
  {
    v24 = 0LL;
    p_voiceListBoxGacha->klass = 0LL;
  }
  sub_B52920(p_voiceListBoxGacha, v24, v17, v18, v19, v20, v21, v22);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__setIndividualShopSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listIndividualShop,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o **p_asstName; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleServantConfConponent_o *v17; // x0
  System_Int32_array **v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (BattleServantConfConponent_o *)(p_asstName + 11);
  if ( listIndividualShop )
  {
    v17->klass = (BattleServantConfConponent_c *)listIndividualShop;
    v18 = (System_Int32_array **)listIndividualShop;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_B52920(v17, v18, v11, v12, v13, v14, v15, v16);
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
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BattleServantConfConponent_o *p_voiceListMission; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  BattleServantConfConponent_o *p_voiceListShop; // x0
  System_Int32_array **v37; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListOverwrite; // x19
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42AF841 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_42AF841 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)listMission,
    (System_String_array **)listShop,
    (System_Boolean_array **)assetName,
    *(System_Int32_array ***)&svtId,
    (System_Int32_array *)method,
    v7);
  if ( listRand && listRand->fields._size >= 1 )
  {
    this->fields.voiceListRand = listRand;
    p_voiceListRand = &this->fields.voiceListRand;
    v21 = (System_Int32_array **)listRand;
  }
  else
  {
    this->fields.voiceListRand = 0LL;
    p_voiceListRand = &this->fields.voiceListRand;
    v21 = 0LL;
  }
  sub_B52920((BattleServantConfConponent_o *)p_voiceListRand, v21, v14, v15, v16, v17, v18, v19);
  p_voiceListMission = (BattleServantConfConponent_o *)&this->fields.voiceListMission;
  if ( listMission )
  {
    p_voiceListMission->klass = (BattleServantConfConponent_c *)listMission;
    v29 = (System_Int32_array **)listMission;
  }
  else
  {
    v29 = 0LL;
    p_voiceListMission->klass = 0LL;
  }
  sub_B52920(p_voiceListMission, v29, v22, v23, v24, v25, v26, v27);
  p_voiceListShop = (BattleServantConfConponent_o *)&this->fields.voiceListShop;
  if ( listShop )
  {
    p_voiceListShop->klass = (BattleServantConfConponent_c *)listShop;
    v37 = (System_Int32_array **)listShop;
  }
  else
  {
    v37 = 0LL;
    p_voiceListShop->klass = 0LL;
  }
  sub_B52920(p_voiceListShop, v37, v30, v31, v32, v33, v34, v35);
  this->fields.voiceListOverwrite = 0LL;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_B52920((BattleServantConfConponent_o *)p_voiceListOverwrite, 0LL, v39, v40, v41, v42, v43, v44);
  *((_DWORD *)p_voiceListOverwrite - 22) = -1;
}


void __fastcall EventSvtControl__setVoiceForm(EventSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v7; // x25
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  __int64 v16; // x21
  System_Predicate_int__o *v17; // x23
  Il2CppClass *klass; // x19
  __int64 v19; // x8
  UIStandFigureR_o *v20; // x21
  System_Action_o *v21; // x22
  __int64 v22; // x0
  Il2CppObject *v23; // [xsp+8h] [xbp-58h]

  if ( (byte_42AF842 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventSvtControl_svtVoicePlay__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Exists__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_System_Predicate_int___ctor__);
    sub_B52984(&System_Predicate_int__TypeInfo);
    sub_B52984(&Method_EventSvtControl___c__DisplayClass36_0__setVoiceForm_b__0__);
    sub_B52984(&EventSvtControl___c__DisplayClass36_0_TypeInfo);
    byte_42AF842 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v23 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_19;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = sub_B52A54(EventSvtControl___c__DisplayClass36_0_TypeInfo);
      EventSvtControl___c__DisplayClass36_0___ctor((EventSvtControl___c__DisplayClass36_0_o *)v8, 0LL);
      if ( v7 >= randomVoiceList->max_length )
      {
        v22 = sub_B52A88(v4);
        sub_B52A28(v22, 0LL);
      }
      if ( !v8 )
        break;
      v15 = (System_Int32_array **)randomVoiceList->m_Items[v7];
      *(_QWORD *)(v8 + 16) = v15;
      v16 = v8 + 16;
      sub_B52920((BattleServantConfConponent_o *)(v8 + 16), v15, v9, v10, v11, v12, v13, v14);
      v17 = (System_Predicate_int__o *)sub_B52A54(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v17,
        (Il2CppObject *)v8,
        Method_EventSvtControl___c__DisplayClass36_0__setVoiceForm_b__0__,
        (const MethodInfo_28D16F8 *)Method_System_Predicate_int___ctor__);
      if ( !v3 )
        break;
      v4 = System_Collections_Generic_List_int___Exists(
             v3,
             (System_Predicate_T__o *)v17,
             (const MethodInfo_3057804 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( !v4 )
      {
        if ( !*(_QWORD *)v16 )
          break;
        System_Collections_Generic_List_int___Add(
          v3,
          *(_DWORD *)(*(_QWORD *)v16 + 56LL),
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v7 >= (int)randomVoiceList->max_length )
        goto LABEL_13;
    }
LABEL_19:
    sub_B52A5C(v4, v5);
  }
LABEL_13:
  klass = v23[5].klass;
  if ( !klass )
    goto LABEL_19;
  if ( !LODWORD(klass->_1.namespaze) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v19 = *((_QWORD *)klass->_1.name + 4);
  if ( !v19 )
    goto LABEL_19;
  v20 = *(UIStandFigureR_o **)(v19 + 24);
  v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v21, v23, Method_EventSvtControl_svtVoicePlay__, 0LL);
  if ( !v20 )
    goto LABEL_19;
  UIStandFigureR__PreloadFormAssets(v20, v3, v21, 0LL);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v19; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  __int64 v21; // x8
  unsigned __int64 v22; // x26
  signed __int64 v23; // x27
  System_String_o *v24; // x25
  __int64 v25; // x0
  int32_t v26; // w21
  System_String_o *v27; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v37; // w24
  __int64 v38; // x8
  _BOOL8 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0
  const MethodInfo *v48; // x1
  __int64 v49; // x0
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42AF84B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF84B = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !targetVoiceIds )
    goto LABEL_39;
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_18:
      v25 = sub_B52A88(Instance);
      sub_B52A28(v25, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_23;
  }
  v19 = (VoicePlayCondMaster_o *)Instance;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  v21 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    v23 = (int)v21;
    while ( v19 )
    {
      v24 = targetVoiceIds->m_Items[v22];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v19, svtId, v24, 0LL, -1LL, -1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v20 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v22 >= v23 )
        goto LABEL_19;
      if ( v22 >= targetVoiceIds->max_length )
        goto LABEL_18;
    }
LABEL_39:
    sub_B52A5C(Instance, v10);
  }
LABEL_19:
  if ( !v20 )
    goto LABEL_39;
  v26 = UnityEngine_Random__Range_35650740(0, v20->fields._size, 0LL);
  if ( v20->fields._size <= (unsigned int)v26 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  m_Items = (System_String_o **)&v20->fields._items->m_Items[v26];
LABEL_23:
  v27 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v29, v30, v31, v32, v33, v34);
  Instance = (DataManager_o *)this->fields.voiceIndividualShopList;
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v51 = v50;
LABEL_32:
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v39 )
      break;
    current = v51.fields.current;
    if ( !v51.fields.current )
      sub_B52A5C(v39, v40);
    monitor = (int)v51.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( v37 >= monitor )
        {
          v49 = sub_B52A88(v39);
          sub_B52A28(v49, 0LL);
        }
        v38 = *((_QWORD *)&current[2].klass + (int)v37);
        if ( !v38 )
          sub_B52A5C(v39, v40);
        v39 = System_String__op_Equality(*(System_String_o **)(v38 + 16), v27, 0LL);
        if ( v39 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v37 >= monitor )
          goto LABEL_32;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      if ( !*p_randomVoiceList )
        sub_B52A5C(v47, v48);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v48);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42AF84A & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_22663/*"svtVoicePlay"*/);
    byte_42AF84A = 1;
  }
  p_player = &this->fields.player;
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    if ( !*p_player )
      sub_B52A5C(0LL, v6);
    SePlayer__Destroy(*p_player, 0LL);
    this->fields.player = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.player, 0LL, v7, v8, v9, v10, v11, v12);
    this->fields.callbakEndPlay = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.callbakEndPlay, 0LL, v13, v14, v15, v16, v17, v18);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35611056(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22663/*"svtVoicePlay"*/,
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
  __int64 v10; // x0

  v2 = this;
  if ( (byte_42AF846 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_B52984(&Method_EventSvtControl_SvtVoicePlayProc__);
    byte_42AF846 = 1;
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
      {
        v10 = sub_B52A88(this);
        sub_B52A28(v10, 0LL);
      }
      v6 = randomVoiceList->m_Items[playCnt];
      if ( v6 )
      {
        additionalPerformances = v6->fields.additionalPerformances;
        v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)v2, Method_EventSvtControl_SvtVoicePlayProc__, 0LL);
        EventSvtControl__PlayPerformance(v2, additionalPerformances, 0, 1, v8, v9);
        return;
      }
LABEL_13:
      sub_B52A5C(this, method);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListOverwrite; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  VoicePlayCondMaster_o *v14; // x23
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v20; // x1
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Random_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  unsigned int v33; // w20
  struct ServantVoiceData_array *v34; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v36; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42AF850 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&System_Random_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF850 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                eventId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_33;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v13,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_33;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_33;
        v14 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v37,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v38 = v37;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v38,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v15 )
            break;
          current = v38.fields.current;
          if ( !v38.fields.current )
            sub_B52A5C(v15, v16);
          if ( !LODWORD(v38.fields.current[1].monitor) )
          {
            v36 = sub_B52A88(v15);
            sub_B52A28(v36, 0LL);
          }
          klass = v38.fields.current[2].klass;
          if ( !klass )
            sub_B52A5C(v15, v16);
          if ( !v14 )
            sub_B52A5C(v15, v16);
          isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                          v14,
                          svtId,
                          (System_String_o *)klass->_1.name,
                          0LL,
                          -1LL,
                          -1,
                          0LL);
          if ( isVoicePlay )
          {
            if ( !v13 )
              sub_B52A5C(isVoicePlay, v20);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v13,
              (EventMissionProgressRequest_Argument_ProgressData_o *)current,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v38,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v13 )
        {
          if ( v13->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_B52920(
              (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
              (System_Int32_array **)callback,
              v11,
              v21,
              v22,
              v23,
              v24,
              v25);
            v26 = (System_Random_o *)sub_B52A54(System_Random_TypeInfo);
            System_Random___ctor(v26, 0LL);
            if ( v26 )
            {
              v33 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v26->klass->vtable._7_Next.method)(
                      v26,
                      (unsigned int)v13->fields._size,
                      v26->klass->vtable._8_NextDouble.methodPtr);
              if ( v13->fields._size <= v33 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              v34 = (struct ServantVoiceData_array *)v13->fields._items->m_Items[v33];
              this->fields.randomVoiceList = v34;
              sub_B52920(
                (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
                (System_Int32_array **)v34,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v10);
                return;
              }
            }
LABEL_33:
            sub_B52A5C(Instance, v10);
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, (const MethodInfo *)v11);
}


void __fastcall EventSvtControl__PlayPerformanceProc_d__61___ctor(
        EventSvtControl__PlayPerformanceProc_d__61_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventSvtControl__PlayPerformanceProc_d__61__MoveNext(
        EventSvtControl__PlayPerformanceProc_d__61_o *this,
        const MethodInfo *method)
{
  EventSvtControl__PlayPerformanceProc_d__61_o *v2; // x19
  int32_t _1__state; // w8
  struct EventSvtControl_o *_4__this; // x21
  Il2CppObject *v5; // x20
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *playEndAction; // x0
  struct EventSvtControl___c__DisplayClass61_0_o *_8__1; // x8
  Il2CppObject *v11; // x20
  System_Func_bool__o *v12; // x21
  UnityEngine_WaitUntil_o *v13; // x20

  v2 = this;
  if ( (byte_42ACDE1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&Method_EventSvtControl___c__DisplayClass61_0__PlayPerformanceProc_b__0__);
    sub_B52984(&EventSvtControl___c__DisplayClass61_0_TypeInfo);
    sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (EventSvtControl__PlayPerformanceProc_d__61_o *)sub_B52984(&UnityEngine_WaitUntil_TypeInfo);
    byte_42ACDE1 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
LABEL_18:
    playEndAction = v2->fields.playEndAction;
    if ( !playEndAction )
      return (char)playEndAction;
    System_Action__Invoke(playEndAction, 0LL);
LABEL_20:
    LOBYTE(playEndAction) = 0;
    return (char)playEndAction;
  }
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_11;
  }
  if ( _1__state )
    goto LABEL_20;
  v2->fields.__1__state = -1;
  v5 = (Il2CppObject *)sub_B52A54(EventSvtControl___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  v2->fields.__8__1 = (struct EventSvtControl___c__DisplayClass61_0_o *)v5;
  sub_B52920(&v2->fields.__8__1);
  this = (EventSvtControl__PlayPerformanceProc_d__61_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_22;
  *(_QWORD *)&this->fields.__1__state = v2->fields.__4__this;
  sub_B52920(&this->fields);
  this = (EventSvtControl__PlayPerformanceProc_d__61_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_22;
  this->fields.__2__current = (Il2CppObject *)v2->fields.animName;
  sub_B52920(&this->fields.__2__current);
  delay = v2->fields.delay;
  if ( delay <= 0.0 )
  {
LABEL_11:
    if ( _4__this )
    {
      this = (EventSvtControl__PlayPerformanceProc_d__61_o *)_4__this->fields.animationRef;
      if ( this )
      {
        UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
        _8__1 = v2->fields.__8__1;
        if ( _8__1 )
        {
          this = (EventSvtControl__PlayPerformanceProc_d__61_o *)_4__this->fields.animationRef;
          if ( this )
          {
            UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0LL);
            if ( v2->fields.isWaitPerformance )
            {
              v11 = (Il2CppObject *)v2->fields.__8__1;
              v12 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v12,
                v11,
                Method_EventSvtControl___c__DisplayClass61_0__PlayPerformanceProc_b__0__,
                (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
              v13 = (UnityEngine_WaitUntil_o *)sub_B52A54(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v13, v12, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v13;
              sub_B52920(&v2->fields.__2__current);
              v2->fields.__1__state = 2;
              LOBYTE(playEndAction) = 1;
              return (char)playEndAction;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_22:
    sub_B52A5C(this, method);
  }
  v7 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v7, delay, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = &v2->fields.__2__current;
  sub_B52920(p__2__current);
  LOBYTE(playEndAction) = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return (char)playEndAction;
}


Il2CppObject *__fastcall EventSvtControl__PlayPerformanceProc_d__61__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventSvtControl__PlayPerformanceProc_d__61_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventSvtControl__PlayPerformanceProc_d__61__System_Collections_IEnumerator_Reset(
        EventSvtControl__PlayPerformanceProc_d__61_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_EventSvtControl__PlayPerformanceProc_d__61_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall EventSvtControl__PlayPerformanceProc_d__61__System_Collections_IEnumerator_get_Current(
        EventSvtControl__PlayPerformanceProc_d__61_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventSvtControl__PlayPerformanceProc_d__61__System_IDisposable_Dispose(
        EventSvtControl__PlayPerformanceProc_d__61_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventSvtControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventSvtControl___c_StaticFields *static_fields; // x0

  if ( (byte_42ACDDF & 1) == 0 )
  {
    sub_B52984(&EventSvtControl___c_TypeInfo);
    byte_42ACDDF = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventSvtControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventSvtControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventSvtControl___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall EventSvtControl___c___ctor(EventSvtControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall EventSvtControl___c___TryGetPlayableVoiceInfoList_b__54_0(
        EventSvtControl___c_o *this,
        ServantVoiceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.id;
}


int32_t __fastcall EventSvtControl___c___playVoice_b__37_0(
        EventSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_ServantVoiceData____int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_42ACDE0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Value__);
    byte_42ACDE0 = 1;
  }
  return value;
}


void __fastcall EventSvtControl___c__DisplayClass36_0___ctor(
        EventSvtControl___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventSvtControl___c__DisplayClass36_0___setVoiceForm_b__0(
        EventSvtControl___c__DisplayClass36_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = a;
  voice = this->fields.voice;
  if ( !voice )
    sub_B52A5C(this, a);
  return System_Int32__Equals_39386936((int32_t)&v5, voice->fields.form, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass48_0___ctor(
        EventSvtControl___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass48_1___ctor(
        EventSvtControl___c__DisplayClass48_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass48_1___boxGachaPlayVoice_b__0(
        EventSvtControl___c__DisplayClass48_1_o *this,
        const MethodInfo *method)
{
  struct EventSvtControl___c__DisplayClass48_0_o *CS___8__locals1; // x8
  EventSvtControl___c__DisplayClass48_1_o *v3; // x19
  struct EventSvtControl___c__DisplayClass48_0_o *v4; // x8
  struct EventSvtControl_o *_4__this; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  struct EventSvtControl___c__DisplayClass48_0_o *v7; // x8
  struct EventSvtControl_o *v8; // x9
  struct EventSvtControl___c__DisplayClass48_0_o *v9; // x8
  struct EventSvtControl___c__DisplayClass48_0_o *v10; // x8
  System_Action_o *callBackStartPlay; // x0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  v3 = this;
  this = (EventSvtControl___c__DisplayClass48_1_o *)CS___8__locals1->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  this[1].fields.CS___8__locals1 = (struct EventSvtControl___c__DisplayClass48_0_o *)v3->fields.vdArray;
  sub_B52920(&this[1].fields.CS___8__locals1);
  v4 = v3->fields.CS___8__locals1;
  if ( !v4 )
    goto LABEL_14;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  randomVoiceList = _4__this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_14;
  _4__this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
  v7 = v3->fields.CS___8__locals1;
  if ( !v7
    || (v8 = v7->fields.__4__this) == 0LL
    || (v8->fields.isSkipPerformance = v7->fields.arg.fields.skipPerformance, (v9 = v3->fields.CS___8__locals1) == 0LL)
    || (this = (EventSvtControl___c__DisplayClass48_1_o *)v9->fields.__4__this) == 0LL
    || (EventSvtControl__svtVoicePlay((EventSvtControl_o *)this, 0LL), (v10 = v3->fields.CS___8__locals1) == 0LL) )
  {
LABEL_14:
    sub_B52A5C(this, method);
  }
  callBackStartPlay = v10->fields.arg.fields.callBackStartPlay;
  if ( callBackStartPlay )
    System_Action__Invoke(callBackStartPlay, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass61_0___ctor(
        EventSvtControl___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventSvtControl___c__DisplayClass61_0___PlayPerformanceProc_b__0(
        EventSvtControl___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  struct EventSvtControl_o *_4__this; // x8
  EventSvtControl___c__DisplayClass61_0_o *v3; // x19
  struct EventSvtControl_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v3 = this;
  this = (EventSvtControl___c__DisplayClass61_0_o *)_4__this->fields.animationRef;
  if ( !this )
    goto LABEL_10;
  this = (EventSvtControl___c__DisplayClass61_0_o *)UnityEngine_Animation__get_Item(
                                                      (UnityEngine_Animation_o *)this,
                                                      v3->fields.animName,
                                                      0LL);
  if ( !this )
    goto LABEL_10;
  if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) >= 1.0 )
    return 1;
  v4 = v3->fields.__4__this;
  if ( !v4 || (this = (EventSvtControl___c__DisplayClass61_0_o *)v4->fields.animationRef) == 0LL )
LABEL_10:
    sub_B52A5C(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL);
}