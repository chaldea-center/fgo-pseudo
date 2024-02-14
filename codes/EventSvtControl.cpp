void __fastcall EventSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421509B & 1) == 0 )
  {
    sub_B0D8A4(&EventSvtControl_TypeInfo, v1);
    byte_421509B = 1;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *objectRef; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x0
  System_Action_o *v15; // x21
  struct System_Action_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Action_o **p_performanceEndAction; // x20
  UnityEngine_GameObject_o *transform; // x0
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s10
  float v29; // s8
  float v30; // s9
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_GameObject_o *v32; // x20
  EventSvtControl_c *v33; // x0
  float v34; // s10
  UnityEngine_GameObject_o *v35; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  EventSvtControl_o *v50; // x0
  const MethodInfo *v51; // x1
  UnityEngine_Vector3_o v52; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4215099 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, endAction);
    sub_B0D8A4(&Method_EventSvtControl_ReleasePerformance__, v6);
    sub_B0D8A4(&EventSvtControl_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_3478/*"CallPerformanceEndAction"*/, v10);
    byte_4215099 = 1;
  }
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(objectRef, 0LL, 0LL) )
  {
    v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0LL);
    v16 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)endAction,
                                      (System_Delegate_o *)v15,
                                      0LL);
    if ( v16 && v16->klass != System_Action_TypeInfo )
    {
      v50 = (EventSvtControl_o *)sub_B0DC70(v16);
      EventSvtControl__CallPerformanceEndAction(v50, v51);
      return;
    }
    this->fields.performanceEndAction = v16;
    p_performanceEndAction = &this->fields.performanceEndAction;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.performanceEndAction,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    transform = this->fields.objectRef;
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( transform )
      {
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
        transform = this->fields.objectRef;
        if ( transform )
        {
          v28 = v25;
          v29 = v26;
          v30 = v27;
          ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                transform,
                                                                                (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
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
            v14 = *p_performanceEndAction;
            if ( *p_performanceEndAction )
              goto LABEL_19;
            return;
          }
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            v32 = this->fields.objectRef;
            v33 = EventSvtControl_TypeInfo;
            v34 = v28 - (float)ComponentInChildren_Dropdown_DropdownItem[6].fields.m_CachedPtr;
            if ( (BYTE3(EventSvtControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventSvtControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo);
              v33 = EventSvtControl_TypeInfo;
            }
            v52.fields.x = v34;
            v52.fields.y = v29;
            v52.fields.z = v30;
            transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                      v32,
                                                      v33->static_fields->BASE_MOVE_TIME,
                                                      v52,
                                                      0LL);
            if ( transform )
            {
              v35 = transform;
              LODWORD(transform[1].klass) = 3;
              gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
              v35[3].klass = (UnityEngine_GameObject_c *)gameObject;
              sub_B0D840((BattleServantConfConponent_o *)&v35[3], gameObject, v37, v38, v39, v40, v41, v42);
              v43 = (System_Int32_array **)StringLiteral_3478/*"CallPerformanceEndAction"*/;
              v35[3].monitor = (void *)StringLiteral_3478/*"CallPerformanceEndAction"*/;
              sub_B0D840((BattleServantConfConponent_o *)&v35[3].monitor, v43, v44, v45, v46, v47, v48, v49);
              return;
            }
          }
        }
      }
    }
    sub_B0D97C(transform);
  }
  if ( endAction )
  {
    v14 = endAction;
LABEL_19:
    System_Action__Invoke(v14, 0LL);
  }
}


void __fastcall EventSvtControl__EndPlay(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventSvtControl_o *v3; // x19
  __int64 v4; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  int v6; // w9
  ServantVoiceData_o *v7; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x5
  __int64 v11; // x0

  v3 = this;
  if ( (byte_421508D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (EventSvtControl_o *)sub_B0D8A4(&Method_EventSvtControl_EndPlayProc__, v4);
    byte_421508D = 1;
  }
  if ( !v3->fields.isDead )
  {
    if ( v3->fields.isSkipPerformance )
    {
      EventSvtControl__EndPlayProc(v3, method);
    }
    else
    {
      randomVoiceList = v3->fields.randomVoiceList;
      if ( !randomVoiceList )
        goto LABEL_10;
      v6 = v3->fields.playCnt - 1;
      if ( v6 >= randomVoiceList->max_length )
      {
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
      }
      v7 = randomVoiceList->m_Items[v6];
      if ( !v7 )
LABEL_10:
        sub_B0D97C(this);
      additionalPerformances = v7->fields.additionalPerformances;
      v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v9, (Il2CppObject *)v3, Method_EventSvtControl_EndPlayProc__, 0LL);
      EventSvtControl__PlayPerformance(v3, additionalPerformances, 2, 1, v9, v10);
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
  __int64 v9; // x1
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v12; // x8
  BattleServantConfConponent_o *p_player; // x0
  BattleServantConfConponent_o *p_callbakEndPlay; // x0
  System_Action_o *callbakEndPlay; // x20
  BattleServantConfConponent_o *p_callbackStopVoice; // x0
  System_Action_o *callbackStopVoice; // x20
  __int64 v18; // x0

  v8 = this;
  if ( (byte_421508E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22549/*"svtVoicePlay"*/, method);
    this = (EventSvtControl_o *)sub_B0D8A4(&StringLiteral_5510/*"END_PLAY"*/, v9);
    byte_421508E = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= randomVoiceList->max_length )
      {
        v18 = sub_B0D9A8(this);
        sub_B0D948(v18, 0LL);
      }
      v12 = randomVoiceList->m_Items[playCnt];
      if ( v12 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_22549/*"svtVoicePlay"*/,
          v12->fields.delay,
          0LL);
        return;
      }
    }
LABEL_16:
    sub_B0D97C(this);
  }
  p_player = (BattleServantConfConponent_o *)&v8->fields.player;
  if ( v8->fields.player )
  {
    p_player->klass = 0LL;
    sub_B0D840(p_player, 0LL, v2, v3, v4, v5, v6, v7);
  }
  p_callbakEndPlay = (BattleServantConfConponent_o *)&v8->fields.callbakEndPlay;
  callbakEndPlay = v8->fields.callbakEndPlay;
  v8->fields.playCnt = 0;
  *(_WORD *)&v8->fields.isUnSkippable = 0;
  v8->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    p_callbakEndPlay->klass = 0LL;
    sub_B0D840(p_callbakEndPlay, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(callbakEndPlay, 0LL);
  }
  else
  {
    p_callbackStopVoice = (BattleServantConfConponent_o *)&v8->fields.callbackStopVoice;
    callbackStopVoice = v8->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      p_callbackStopVoice->klass = 0LL;
      sub_B0D840(p_callbackStopVoice, 0LL, v2, v3, v4, v5, v6, v7);
      System_Action__Invoke(callbackStopVoice, 0LL);
    }
    else
    {
      this = (EventSvtControl_o *)v8->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5510/*"END_PLAY"*/, 0LL);
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
  Il2CppObject *current; // x21
  int monitor; // w8
  unsigned int v11; // w22
  __int64 v12; // x23
  _BOOL8 v13; // x0
  _BOOL4 v14; // w19
  int v15; // w20
  __int64 v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4215096 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, voiceId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_4215096 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListBoxGacha,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v20 = v19;
  do
  {
LABEL_12:
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v13 )
    {
      v14 = 0;
      v15 = 1;
      goto LABEL_15;
    }
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B0D97C(v13);
    monitor = (int)v20.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= monitor )
    {
      v17 = sub_B0D9A8(v13);
      sub_B0D948(v17, 0LL);
    }
    v12 = *((_QWORD *)&current[2].klass + (int)v11);
    if ( !v12 )
      sub_B0D97C(v13);
    v13 = System_String__op_Equality(*(System_String_o **)(v12 + 16), voiceId, 0LL);
    if ( v13 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v11 >= monitor )
      goto LABEL_12;
  }
  v15 = 3;
  v14 = *(_BYTE *)(v12 + 68) != 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v14 & ((unsigned int)(v15 + 1) >> 2);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v29; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x23
  __int64 v31; // x8
  unsigned __int64 v32; // x26
  signed __int64 v33; // x27
  System_String_o *v34; // x25
  __int64 v35; // x0
  int32_t v36; // w21
  System_String_o *v37; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v47; // w24
  __int64 v48; // x8
  _BOOL8 v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x0
  const MethodInfo *v57; // x1
  __int64 v58; // x0
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4215094 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4215094 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_B0D97C(Instance);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_19:
      v35 = sub_B0D9A8(Instance);
      sub_B0D948(v35, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_24;
  }
  v29 = (VoicePlayCondMaster_o *)Instance;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  v31 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    v33 = (int)v31;
    while ( v29 )
    {
      v34 = targetVoiceIds->m_Items[v32];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v29, svtId, v34, 0LL, -1LL, -1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_41;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v32 >= v33 )
        goto LABEL_20;
      if ( v32 >= targetVoiceIds->max_length )
        goto LABEL_19;
    }
    goto LABEL_41;
  }
LABEL_20:
  if ( !v30 )
    goto LABEL_41;
  v36 = UnityEngine_Random__Range_34969060(0, v30->fields._size, 0LL);
  if ( v30->fields._size <= (unsigned int)v36 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  m_Items = (System_String_o **)&v30->fields._items->m_Items[v36];
LABEL_24:
  v37 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v39, v40, v41, v42, v43, v44);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v60 = v59;
LABEL_33:
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v49 )
      break;
    current = v60.fields.current;
    if ( !v60.fields.current )
      sub_B0D97C(v49);
    monitor = (int)v60.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        if ( v47 >= monitor )
        {
          v58 = sub_B0D9A8(v49);
          sub_B0D948(v58, 0LL);
        }
        v48 = *((_QWORD *)&current[2].klass + (int)v47);
        if ( !v48 )
          sub_B0D97C(v49);
        v49 = System_String__op_Equality(*(System_String_o **)(v48 + 16), v37, 0LL);
        if ( v49 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v47 >= monitor )
          goto LABEL_33;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      if ( !*p_randomVoiceList )
        sub_B0D97C(v56);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v57);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v12; // x1
  struct UnityEngine_GameObject_o **p_objectRef; // x24
  UnityEngine_Object_o *objectRef; // x25
  UnityEngine_GameObject_o *performanceRoot; // x0
  System_String_o *assetName; // x25
  UnityEngine_Transform_o *transform; // x26
  System_Int32_array **Effect; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *v25; // x25
  struct UnityEngine_Animation_o **p_animationRef; // x25
  UnityEngine_Object_o *animationRef; // x26
  System_Int32_array **ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Object_o *v35; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v37; // x22
  const MethodInfo *v38; // x4
  System_Collections_IEnumerator_o *v39; // x1

  if ( (byte_4215097 & 1) == 0 )
  {
    sub_B0D8A4(&BoxGachaResultEffectComponent_TypeInfo, performances);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4215097 = 1;
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.objectRef, Effect, v19, v20, v21, v22, v23, v24);
    v25 = (UnityEngine_Object_o *)*p_objectRef;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Implicit(v25, 0LL) )
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
    sub_B0D97C(performanceRoot);
  ComponentInChildren_Dropdown_DropdownItem = (System_Int32_array **)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                       performanceRoot,
                                                                       (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  *p_animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_Dropdown_DropdownItem;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.animationRef,
    ComponentInChildren_Dropdown_DropdownItem,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (UnityEngine_Object_o *)*p_animationRef;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Implicit(v35, 0LL) )
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
  v37 = *p_afterPerformance;
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v37->fields.name, 0LL) )
  {
    v39 = EventSvtControl__PlayPerformanceProc(
            this,
            v37->fields.name,
            v37->fields.delay,
            isWaitPerformance,
            playEndAction,
            v38);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v39, 0LL);
    return;
  }
LABEL_6:
  if ( playEndAction )
    System_Action__Invoke(playEndAction, 0LL);
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
  __int64 v11; // x22
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4215098 & 1) == 0 )
  {
    sub_B0D8A4(&EventSvtControl__PlayPerformanceProc_d__60_TypeInfo, animName);
    byte_4215098 = 1;
  }
  v11 = sub_B0D974(EventSvtControl__PlayPerformanceProc_d__60_TypeInfo, animName, isWaitPerformance);
  EventSvtControl__PlayPerformanceProc_d__60___ctor((EventSvtControl__PlayPerformanceProc_d__60_o *)v11, 0, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  *(_QWORD *)(v11 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 40) = animName;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)animName, v19, v20, v21, v22, v23, v24);
  *(float *)(v11 + 48) = delay;
  *(_BYTE *)(v11 + 64) = isWaitPerformance;
  *(_QWORD *)(v11 + 72) = playEndAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 72),
    (System_Int32_array **)playEndAction,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v29; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x23
  __int64 v31; // x8
  unsigned __int64 v32; // x26
  signed __int64 v33; // x27
  System_String_o *v34; // x25
  __int64 v35; // x0
  int32_t v36; // w21
  System_String_o *v37; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v47; // w24
  __int64 v48; // x8
  _BOOL8 v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x0
  const MethodInfo *v57; // x1
  __int64 v58; // x0
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4215093 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4215093 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_B0D97C(Instance);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_19:
      v35 = sub_B0D9A8(Instance);
      sub_B0D948(v35, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_24;
  }
  v29 = (VoicePlayCondMaster_o *)Instance;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  v31 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    v33 = (int)v31;
    while ( v29 )
    {
      v34 = targetVoiceIds->m_Items[v32];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v29, svtId, v34, 0LL, -1LL, -1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_41;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v32 >= v33 )
        goto LABEL_20;
      if ( v32 >= targetVoiceIds->max_length )
        goto LABEL_19;
    }
    goto LABEL_41;
  }
LABEL_20:
  if ( !v30 )
    goto LABEL_41;
  v36 = UnityEngine_Random__Range_34969060(0, v30->fields._size, 0LL);
  if ( v30->fields._size <= (unsigned int)v36 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  m_Items = (System_String_o **)&v30->fields._items->m_Items[v36];
LABEL_24:
  v37 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v39, v40, v41, v42, v43, v44);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v60 = v59;
LABEL_33:
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v49 )
      break;
    current = v60.fields.current;
    if ( !v60.fields.current )
      sub_B0D97C(v49);
    monitor = (int)v60.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        if ( v47 >= monitor )
        {
          v58 = sub_B0D9A8(v49);
          sub_B0D948(v58, 0LL);
        }
        v48 = *((_QWORD *)&current[2].klass + (int)v47);
        if ( !v48 )
          sub_B0D97C(v49);
        v49 = System_String__op_Equality(*(System_String_o **)(v48 + 16), v37, 0LL);
        if ( v49 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v47 >= monitor )
          goto LABEL_33;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      if ( !*p_randomVoiceList )
        sub_B0D97C(v56);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v57);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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

  if ( (byte_421509A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421509A = 1;
  }
  this->fields.animationRef = 0LL;
  p_animationRef = &this->fields.animationRef;
  sub_B0D840((BattleServantConfConponent_o *)p_animationRef, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = (UnityEngine_Object_o *)*(p_animationRef - 1);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(v10, 0LL);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  DataManager_o *Instance; // x0
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_int__o *v31; // x21
  struct System_String_array *befVoiceIds; // x10
  __int64 v33; // x9
  unsigned __int64 v34; // x24
  int v35; // w20
  System_String_o *v36; // x25
  int monitor; // w8
  int i; // w27
  __int64 v39; // x20
  _BOOL8 isVoicePlay; // x0
  __int64 v41; // x0
  Il2CppObject *current; // x28
  int v43; // w27
  int v44; // w8
  __int64 v45; // x0
  unsigned __int64 v46; // x20
  unsigned int v47; // w23
  int v48; // w24
  System_String_o *v49; // x22
  void *v50; // x8
  int v51; // w25
  __int64 v52; // x27
  _BOOL8 v53; // x0
  Il2CppObject *v54; // x28
  int v55; // w8
  __int64 v56; // x0
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  __int64 v59; // x0
  __int64 v60; // [xsp+8h] [xbp-D8h]
  int v61; // [xsp+10h] [xbp-D0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-C8h]
  struct System_String_array *v63; // [xsp+30h] [xbp-B0h]
  int v65; // [xsp+40h] [xbp-A0h]
  _BYTE v66[32]; // [xsp+48h] [xbp-98h] BYREF
  int v67; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_4215092 & 1) == 0 )
  {
    sub_B0D8A4(&BoxGachaTalkInfo_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4215092 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v67 = 0;
  v20 = (BoxGachaTalkInfo_o *)sub_B0D974(BoxGachaTalkInfo_TypeInfo, *(_QWORD *)&svtId, talkEntity);
  BoxGachaTalkInfo___ctor(v20, 0LL);
  *info = v20;
  sub_B0D840((BattleServantConfConponent_o *)info, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v31 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v29, v30);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_73;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_73;
  v33 = *(_QWORD *)&befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  v61 = v33;
  if ( (int)v33 < 1 )
  {
    v43 = 0;
    if ( !v31 )
      return 0;
  }
  else
  {
    v60 = *(_QWORD *)&befVoiceIds->max_length;
    if ( !(_DWORD)v60 )
      goto LABEL_74;
    v34 = 0LL;
    v35 = 0;
    v63 = befVoiceIds;
    while ( 1 )
    {
      v65 = v35;
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_73;
      v36 = befVoiceIds->m_Items[v34];
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v66,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v68 = *(System_Collections_Generic_List_Enumerator_T__o *)v66;
      while ( 1 )
      {
        isVoicePlay = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v68,
                        (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( !isVoicePlay )
          break;
        current = v68.fields.current;
        if ( !v68.fields.current )
          sub_B0D97C(isVoicePlay);
        monitor = (int)v68.fields.current[1].monitor;
        if ( monitor >= 1 )
        {
          for ( i = 0; i < monitor; ++i )
          {
            if ( i >= (unsigned int)monitor )
            {
              v45 = sub_B0D9A8(isVoicePlay);
              sub_B0D948(v45, 0LL);
            }
            v39 = *((_QWORD *)&current[2].klass + i);
            if ( !v39 )
              sub_B0D97C(isVoicePlay);
            isVoicePlay = System_String__op_Equality(*(System_String_o **)(v39 + 16), v36, 0LL);
            if ( isVoicePlay )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                sub_B0D97C(isVoicePlay);
              isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                              MasterData_WarQuestSelectionMaster,
                              svtId,
                              v36,
                              0LL,
                              -1LL,
                              -1,
                              0LL);
              if ( isVoicePlay )
              {
                if ( !*info )
                  sub_B0D97C(0LL);
                BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v39 + 16),
                  *(System_String_o **)(v39 + 48),
                  0LL);
                if ( !v31 )
                  sub_B0D97C(v41);
                System_Collections_Generic_List_int___Add(
                  v31,
                  v34,
                  (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            monitor = (int)current[1].monitor;
          }
        }
      }
      *(_DWORD *)&v66[4 * v65 + 24] = 202;
      v35 = ++v67;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v68,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      v43 = v35;
      befVoiceIds = v63;
      if ( v35 )
      {
        v44 = v35 - 1;
        if ( *(_DWORD *)&v66[4 * v35 + 20] == 202 )
        {
          v43 = --v35;
          v67 = v44;
        }
      }
      if ( (__int64)++v34 >= v61 )
        break;
      if ( v34 >= v63->max_length )
        goto LABEL_74;
    }
    LODWORD(v33) = v60;
    if ( !v31 )
      return 0;
  }
  if ( !v31->fields._size )
    return 0;
  if ( (int)v33 >= 1 )
  {
    if ( aftVoiceIds )
    {
      v46 = 0LL;
      v47 = 0;
      while ( v46 < aftVoiceIds->max_length )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          goto LABEL_73;
        v48 = v43;
        v49 = aftVoiceIds->m_Items[v46];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v66,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v68 = *(System_Collections_Generic_List_Enumerator_T__o *)v66;
        while ( 1 )
        {
          v53 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v68,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v53 )
            break;
          v54 = v68.fields.current;
          if ( !v68.fields.current )
            sub_B0D97C(v53);
          v50 = v68.fields.current[1].monitor;
          if ( (int)v50 >= 1 )
          {
            v51 = 0;
            do
            {
              if ( v51 >= (unsigned int)v50 )
              {
                v56 = sub_B0D9A8(v53);
                sub_B0D948(v56, 0LL);
              }
              v52 = *((_QWORD *)&v54[2].klass + v51);
              if ( !v52 )
                sub_B0D97C(v53);
              v53 = System_String__op_Equality(*(System_String_o **)(v52 + 16), v49, 0LL);
              if ( v53 )
              {
                if ( v31->fields._size <= v47 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                if ( v46 == v31->fields._items->m_Items[v47 + 1] )
                {
                  if ( !*info )
                    sub_B0D97C(0LL);
                  BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v52 + 16),
                    *(System_String_o **)(v52 + 48),
                    0LL);
                  ++v47;
                }
              }
              LODWORD(v50) = v54[1].monitor;
              ++v51;
            }
            while ( v51 < (int)v50 );
          }
        }
        *(_DWORD *)&v66[4 * v48 + 24] = 377;
        v43 = ++v67;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v68,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v43 )
        {
          v55 = v43 - 1;
          if ( *(_DWORD *)&v66[4 * v43 + 20] == 377 )
          {
            --v43;
            v67 = v55;
          }
        }
        if ( (__int64)++v46 >= v61 )
          goto LABEL_70;
      }
LABEL_74:
      v59 = sub_B0D9A8(Instance);
      sub_B0D948(v59, 0LL);
    }
LABEL_73:
    sub_B0D97C(Instance);
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
  sub_B0D840(
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
  sub_B0D840(v17, v18, v11, v12, v13, v14, v15, v16);
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
  sub_B0D840(
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
  sub_B0D840(v9, (System_Int32_array **)listOverwrite, v10, v11, v12, v13, v14, v15);
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
  sub_B0D840(
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
  sub_B0D840(v17, v18, v11, v12, v13, v14, v15, v16);
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(v17, v18, v11, v12, v13, v14, v15, v16);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v15; // x8
  System_Int32_array **id; // x1
  struct ServantVoiceData_array *v17; // x8
  __int64 v18; // x9
  Il2CppClass **v19; // x10
  EventSvtControl_o **v20; // x10
  Il2CppClass *v21; // x11
  Il2CppClass *v22; // t1
  int32_t vcName; // w20
  __int64 v24; // x1
  __int64 v25; // x2
  float FadeTime; // s0
  float v27; // s8
  struct ServantVoiceData_array *v28; // x8
  __int64 v29; // x9
  ServantVoiceData_o *v30; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  int32_t face; // w20
  StandFigureCollect_o *v33; // x8
  struct ServantVoiceData_array *v34; // x9
  __int64 v35; // x10
  ServantVoiceData_o *v36; // x9
  System_String_o *asstName; // x20
  System_String_o *v38; // x21
  float volume; // s8
  System_Action_o *v40; // x22
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x5
  struct ServantVoiceData_array *v49; // x8
  __int64 v50; // x9
  ServantVoiceData_o *v51; // x8
  struct ServantVoiceData_array *v52; // x8
  __int64 v53; // x9
  ServantVoiceData_o *v54; // x8
  struct System_Int32_array *multiFace; // x22
  __int64 v56; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *v57; // x25
  StandFigureCollect_o *v58; // x8
  __int64 v59; // x0

  v8 = this;
  if ( (byte_421508C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_B0D8A4(&Method_EventSvtControl_EndPlay__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v11);
    this = (EventSvtControl_o *)sub_B0D8A4(&SoundManager_TypeInfo, v12);
    byte_421508C = 1;
  }
  randomVoiceList = v8->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_50;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= randomVoiceList->max_length )
    goto LABEL_51;
  v15 = randomVoiceList->m_Items[playCnt];
  if ( !v15 )
    goto LABEL_50;
  id = (System_Int32_array **)v15->fields.id;
  v8->fields.vcName = (struct System_String_o *)id;
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
  v17 = v8->fields.randomVoiceList;
  if ( !v17 )
    goto LABEL_50;
  v18 = v8->fields.playCnt;
  if ( (unsigned int)v18 >= v17->max_length )
    goto LABEL_51;
  v19 = &v17->obj.klass + v18;
  v22 = v19[4];
  v20 = (EventSvtControl_o **)(v19 + 4);
  v21 = v22;
  if ( !v22 )
    goto LABEL_50;
  v8->fields.isUnSkippable = BYTE4(v21->_1.element_class);
  if ( (unsigned int)v18 >= v17->max_length )
    goto LABEL_51;
  this = *v20;
  if ( !*v20 )
    goto LABEL_50;
  vcName = (int32_t)this->fields.vcName;
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
  this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
  v27 = FadeTime;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v28 = v8->fields.randomVoiceList;
    if ( !v28 )
      goto LABEL_50;
    v29 = v8->fields.playCnt;
    if ( (unsigned int)v29 >= v28->max_length )
      goto LABEL_51;
    v30 = v28->m_Items[v29];
    if ( !v30 )
      goto LABEL_50;
    standFigureCollectList = v8->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v30->fields.face;
      if ( !standFigureCollectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v33 = standFigureCollectList->fields._items->m_Items[0];
      if ( !v33 )
        goto LABEL_50;
      v34 = v8->fields.randomVoiceList;
      if ( !v34 )
        goto LABEL_50;
      v35 = v8->fields.playCnt;
      if ( (unsigned int)v35 >= v34->max_length )
        goto LABEL_51;
      v36 = v34->m_Items[v35];
      if ( !v36 )
        goto LABEL_50;
      this = (EventSvtControl_o *)v33->fields._standFigure_k__BackingField;
      if ( !this )
        goto LABEL_50;
      UIStandFigureR__SetFace_40555568((UIStandFigureR_o *)this, face, v36->fields.form, 0LL, v27, 0LL);
    }
    goto LABEL_25;
  }
  v52 = v8->fields.randomVoiceList;
  if ( !v52 )
    goto LABEL_50;
  v53 = v8->fields.playCnt;
  if ( (unsigned int)v53 >= v52->max_length )
    goto LABEL_51;
  v54 = v52->m_Items[v53];
  if ( !v54 )
    goto LABEL_50;
  multiFace = v54->fields.multiFace;
  if ( multiFace )
  {
    this = (EventSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                  (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( (_DWORD)this == multiFace->max_length )
    {
      if ( (int)this >= 1 )
      {
        v56 = 0LL;
        while ( (unsigned int)v56 < (unsigned int)this )
        {
          v57 = v8->fields.standFigureCollectList;
          if ( !v57 )
            goto LABEL_50;
          if ( v57->fields._size <= (unsigned int)v56 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v58 = v57->fields._items->m_Items[v56];
          if ( !v58 )
            goto LABEL_50;
          this = (EventSvtControl_o *)v58->fields._standFigure_k__BackingField;
          if ( !this )
            goto LABEL_50;
          UIStandFigureR__SetFace_40555568((UIStandFigureR_o *)this, multiFace->m_Items[v56 + 1], vcName, 0LL, v27, 0LL);
          this = (EventSvtControl_o *)multiFace->max_length;
          if ( (int)++v56 >= (int)this )
            goto LABEL_25;
        }
        goto LABEL_51;
      }
LABEL_25:
      asstName = v8->fields.asstName;
      v38 = v8->fields.vcName;
      volume = v8->fields.volume;
      v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
      System_Action___ctor(v40, (Il2CppObject *)v8, Method_EventSvtControl_EndPlay__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v41 = (System_Int32_array **)SoundManager__playVoice_24977528(asstName, v38, volume, v40, 0LL);
      v8->fields.player = (struct SePlayer_o *)v41;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields.player, v41, v42, v43, v44, v45, v46, v47);
      if ( v8->fields.isSkipPerformance )
        goto LABEL_33;
      v49 = v8->fields.randomVoiceList;
      if ( !v49 )
LABEL_50:
        sub_B0D97C(this);
      v50 = v8->fields.playCnt;
      if ( (unsigned int)v50 < v49->max_length )
      {
        v51 = v49->m_Items[v50];
        if ( v51 )
        {
          EventSvtControl__PlayPerformance(v8, v51->fields.additionalPerformances, 1, 0, 0LL, v48);
LABEL_33:
          ++v8->fields.playCnt;
          return;
        }
        goto LABEL_50;
      }
LABEL_51:
      v59 = sub_B0D9A8(this);
      sub_B0D948(v59, 0LL);
    }
  }
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int128 v22; // q1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  struct System_Action_o *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x22
  __int64 v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x23
  System_Int32_array **current; // x1
  System_Int32_array ***v54; // x24
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  _BOOL8 v61; // x0
  __int64 v62; // x27
  int v63; // w8
  unsigned int v64; // w26
  __int64 v65; // x28
  __int64 v66; // x1
  __int64 v67; // x2
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x1
  __int64 v75; // x0
  const MethodInfo *v76; // x1
  __int64 v77; // x0
  System_Action_o *v78; // x0
  WebViewManager_o *Instance; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  System_String_o *v82; // x20
  System_Action_o *v83; // x23
  CommonUI_o *v84; // x19
  System_String_o *v85; // x21
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x0
  System_Collections_Generic_List_Enumerator_T__o v93; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v94; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4215091 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, arg);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&EventSvtControl___c__DisplayClass48_0_TypeInfo, v10);
    sub_B0D8A4(&Method_EventSvtControl___c__DisplayClass48_1__boxGachaPlayVoice_b__0__, v11);
    sub_B0D8A4(&EventSvtControl___c__DisplayClass48_1_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4215091 = 1;
  }
  memset(&v94, 0, sizeof(v94));
  v14 = sub_B0D974(EventSvtControl___c__DisplayClass48_0_TypeInfo, arg, method);
  EventSvtControl___c__DisplayClass48_0___ctor((EventSvtControl___c__DisplayClass48_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_35;
  *(_QWORD *)(v14 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  v22 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v14 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v14 + 24) = v22;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), 0LL, v23, v24, v25, v26, v27, v28);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v29);
  System_String__IsNullOrEmpty(*(System_String_o **)(v14 + 24), 0LL);
  v30 = *(struct System_Action_o **)(v14 + 48);
  this->fields.callbakEndPlay = v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v38, v39, v40, v41, v42, v43);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_B0D97C(voiceListBoxGacha);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v93,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListBoxGacha,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v94 = v93;
LABEL_17:
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v94,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v44 = sub_B0D974(EventSvtControl___c__DisplayClass48_1_TypeInfo, v66, v67);
    EventSvtControl___c__DisplayClass48_1___ctor((EventSvtControl___c__DisplayClass48_1_o *)v44, 0LL);
    if ( !v44 )
      sub_B0D97C(v45);
    *(_QWORD *)(v44 + 24) = v14;
    v52 = v44 + 24;
    sub_B0D840((BattleServantConfConponent_o *)(v44 + 24), (System_Int32_array **)v14, v46, v47, v48, v49, v50, v51);
    current = (System_Int32_array **)v94.fields.current;
    *(_QWORD *)(v44 + 16) = v94.fields.current;
    v54 = (System_Int32_array ***)(v44 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v44 + 16), current, v55, v56, v57, v58, v59, v60);
    v62 = *(_QWORD *)(v44 + 16);
    if ( !v62 )
      sub_B0D97C(v61);
    v63 = *(_DWORD *)(v62 + 24);
    if ( v63 >= 1 )
    {
      v64 = 0;
      while ( 1 )
      {
        if ( v64 >= v63 )
        {
          v92 = sub_B0D9A8(v61);
          sub_B0D948(v92, 0LL);
        }
        v65 = *(_QWORD *)(v62 + 8LL * (int)v64 + 32);
        if ( !v65 )
          sub_B0D97C(v61);
        if ( !*(_QWORD *)v52 )
          sub_B0D97C(v61);
        v61 = System_String__op_Equality(
                *(System_String_o **)(v65 + 16),
                *(System_String_o **)(*(_QWORD *)v52 + 24LL),
                0LL);
        if ( v61 )
          break;
        v63 = *(_DWORD *)(v62 + 24);
        if ( (int)++v64 >= v63 )
          goto LABEL_17;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(*(System_String_o **)(v65 + 72), 0LL) )
      {
        v74 = *v54;
        *p_randomVoiceList = (struct ServantVoiceData_array *)*v54;
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.randomVoiceList, v74, v68, v69, v70, v71, v72, v73);
        if ( !*p_randomVoiceList )
          sub_B0D97C(v75);
        this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
        if ( !*(_QWORD *)v52 )
          sub_B0D97C(v75);
        this->fields.isSkipPerformance = *(_BYTE *)(*(_QWORD *)v52 + 32LL);
        EventSvtControl__svtVoicePlay(this, v76);
        if ( !*(_QWORD *)v52 )
          sub_B0D97C(v77);
        v78 = *(System_Action_o **)(*(_QWORD *)v52 + 40LL);
        if ( v78 )
          System_Action__Invoke(v78, 0LL);
      }
      else
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v82 = *(System_String_o **)(v65 + 72);
        v83 = *(System_Action_o **)(v44 + 32);
        v84 = (CommonUI_o *)Instance;
        v85 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v83 )
        {
          v83 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v80, v81);
          System_Action___ctor(
            v83,
            (Il2CppObject *)v44,
            Method_EventSvtControl___c__DisplayClass48_1__boxGachaPlayVoice_b__0__,
            0LL);
          *(_QWORD *)(v44 + 32) = v83;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v44 + 32),
            (System_Int32_array **)v83,
            v86,
            v87,
            v88,
            v89,
            v90,
            v91);
        }
        if ( !v84 )
          sub_B0D97C(Instance);
        CommonUI__OpenNotificationDialog(v84, v85, v82, v83, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v94,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  BattleServantConfConponent_o *p_randomVoiceList; // x21
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  _BOOL8 v31; // x0
  Il2CppObject *v32; // x23
  int v33; // w8
  unsigned int v34; // w20
  __int64 v35; // x8
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  VoicePlayCondMaster_o *v48; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x23
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v52; // x19
  __int64 v53; // x1
  signed __int64 size; // x19
  unsigned __int64 v55; // x20
  System_String_o *v56; // x27
  int v57; // w28
  System_Random_o *v58; // x25
  il2cpp_array_size_t v59; // w25
  _BOOL8 v60; // x0
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v63; // w19
  __int64 v64; // x8
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  int v71; // w19
  int v72; // w10
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x0
  const MethodInfo *v77; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Action_o *action; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v80; // [xsp+8h] [xbp-B8h]
  int v81; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+20h] [xbp-A0h] BYREF
  int v83[4]; // [xsp+38h] [xbp-88h]
  int v84; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_421508A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, voiceIds);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__AddRange__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor___67894592, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v23);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v24);
    sub_B0D8A4(&System_Random_TypeInfo, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_421508A = 1;
  }
  memset(&v85, 0, sizeof(v85));
  v84 = 0;
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = (BattleServantConfConponent_o *)&this->fields.randomVoiceList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
    0LL,
    *(System_String_array ***)&svtId,
    (System_String_array **)callbackEnds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_72;
  action = callbackEnds;
  if ( (int)voiceIds->max_length >= 2 )
  {
    v48 = (VoicePlayCondMaster_o *)Instance;
    v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_string__TypeInfo,
                                                                                                    v29,
                                                                                                    v30);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v49,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
    v52 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B0D974(
                                                                             System_Collections_Generic_List_string__TypeInfo,
                                                                             v50,
                                                                             v51);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v52,
      voiceIds->max_length,
      (const MethodInfo_2FC4AF4 *)Method_System_Collections_Generic_List_string___ctor___67894592);
    if ( !v52 )
      goto LABEL_72;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v52,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_string__AddRange__);
    v80 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v52;
    size = v52->fields._size;
    if ( (int)size >= 1 )
    {
      v55 = 0LL;
      do
      {
        if ( v55 >= voiceIds->max_length )
        {
LABEL_64:
          v76 = sub_B0D9A8(Instance);
          sub_B0D948(v76, 0LL);
        }
        if ( !v48 )
          goto LABEL_72;
        v56 = voiceIds->m_Items[v55];
        Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v48, svtId, v56, 0LL, -1LL, -1, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v49 )
            goto LABEL_72;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v49,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
        }
      }
      while ( (__int64)++v55 < size );
    }
    if ( !v49 )
      goto LABEL_72;
    v57 = v49->fields._size - 1;
    if ( v57 >= 0 )
    {
      v81 = 0;
      do
      {
        v58 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, v53, v42);
        System_Random___ctor(v58, 0LL);
        if ( !v58 )
          goto LABEL_72;
        Instance = (DataManager_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v58->klass->vtable._7_Next.method)(
                                      v58,
                                      (unsigned int)v49->fields._size,
                                      v58->klass->vtable._8_NextDouble.methodPtr);
        if ( !this->fields.voiceListMission )
          goto LABEL_72;
        v59 = (unsigned int)Instance;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v82,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListMission,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v85 = v82;
        do
        {
          v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v85,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v60 )
            break;
          current = v85.fields.current;
          if ( !v85.fields.current )
            sub_B0D97C(v60);
          monitor = (int)v85.fields.current[1].monitor;
          if ( monitor >= 1 )
          {
            v63 = 0;
            while ( 1 )
            {
              if ( v63 >= monitor )
              {
                v73 = sub_B0D9A8(v60);
                sub_B0D948(v73, 0LL);
              }
              v64 = *((_QWORD *)&current[2].klass + (int)v63);
              if ( !v64 )
                sub_B0D97C(v60);
              if ( v49->fields._size <= v59 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v60 = System_String__op_Equality(
                      *(System_String_o **)(v64 + 16),
                      (System_String_o *)v49->fields._items->m_Items[v59],
                      0LL);
              if ( v60 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v63 >= monitor )
                goto LABEL_50;
            }
            p_randomVoiceList->klass = (BattleServantConfConponent_c *)current;
            sub_B0D840(p_randomVoiceList, (System_Int32_array **)current, v65, v66, v67, v68, v69, v70);
          }
LABEL_50:
          ;
        }
        while ( !p_randomVoiceList->klass );
        v83[v81] = 277;
        v71 = ++v84;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v85,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        v72 = v71;
        if ( v71 && v83[v71 - 1] == 277 )
        {
          v72 = v71 - 1;
          v84 = v71 - 1;
        }
        if ( p_randomVoiceList->klass )
          goto LABEL_67;
        v81 = v72;
        if ( v59 >= voiceIds->max_length )
          goto LABEL_64;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v80,
          (WarBoardManager_TaskList_o *)voiceIds->m_Items[v59],
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v57 >= 0 );
    }
  }
  else
  {
    Instance = (DataManager_o *)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_72;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v82,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v85 = v82;
    do
    {
      v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v85,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v31 )
        break;
      v32 = v85.fields.current;
      if ( !v85.fields.current )
        sub_B0D97C(v31);
      v33 = (int)v85.fields.current[1].monitor;
      if ( v33 >= 1 )
      {
        v34 = 0;
        while ( 1 )
        {
          if ( v34 >= v33 )
          {
            v75 = sub_B0D9A8(v31);
            sub_B0D948(v75, 0LL);
          }
          v35 = *((_QWORD *)&v32[2].klass + (int)v34);
          if ( !v35 )
            sub_B0D97C(v31);
          if ( !voiceIds->max_length )
          {
            v74 = sub_B0D9A8(v31);
            sub_B0D948(v74, 0LL);
          }
          v31 = System_String__op_Equality(*(System_String_o **)(v35 + 16), voiceIds->m_Items[0], 0LL);
          if ( v31 )
            break;
          v33 = (int)v32[1].monitor;
          if ( (int)++v34 >= v33 )
            goto LABEL_21;
        }
        p_randomVoiceList->klass = (BattleServantConfConponent_c *)v32;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
          (System_Int32_array **)v32,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
LABEL_21:
      ;
    }
    while ( !p_randomVoiceList->klass );
    v83[0] = 427;
    v84 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v85,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v84 = 0;
  }
  if ( p_randomVoiceList->klass )
  {
LABEL_67:
    this->fields.callbakEndPlay = action;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
      (System_Int32_array **)action,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    randomVoiceList = this->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(this, v77);
      return;
    }
LABEL_72:
    sub_B0D97C(Instance);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListShop; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  DataManager_o *Instance; // x0
  VoicePlayCondMaster_o *v28; // x22
  _BOOL8 v29; // x0
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  System_Random_o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int v42; // w21
  int32_t size; // w8
  struct ServantVoiceData_array *v44; // x1
  const MethodInfo *v45; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  System_Exception_o *v51; // x19
  System_String_o *v52; // x0
  __int64 v53; // x0
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4215089 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v20);
    sub_B0D8A4(&System_Random_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4215089 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v48 = sub_B0D8A8(&System_Exception_TypeInfo);
      v51 = (System_Exception_o *)sub_B0D974(v48, v49, v50);
      v52 = (System_String_o *)sub_B0D8A8(&StringLiteral_23889/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_15634744(v51, v52, 0LL);
      v53 = sub_B0D8A8(&Method_EventSvtControl_playPurchaseVoice__);
      sub_B0D948(v51, v53);
    }
    this->fields.callbackStopVoice = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                    v24,
                                                                                                    v25);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v26,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_33;
    v28 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v54,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListShop,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v55 = v54;
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v55,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v29 )
        break;
      current = v55.fields.current;
      if ( !v55.fields.current )
        sub_B0D97C(v29);
      if ( !LODWORD(v55.fields.current[1].monitor) )
      {
        v47 = sub_B0D9A8(v29);
        sub_B0D948(v47, 0LL);
      }
      klass = v55.fields.current[2].klass;
      if ( !klass )
        sub_B0D97C(v29);
      if ( !v28 )
        sub_B0D97C(v29);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(v28, svtId, (System_String_o *)klass->_1.name, 0LL, -1LL, -1, 0LL);
      if ( isVoicePlay )
      {
        if ( !v26 )
          sub_B0D97C(isVoicePlay);
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v26,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__) )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)current,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v55,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v35 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, v33, v34);
    System_Random___ctor(v35, 0LL);
    if ( !v26 || !v35 )
      goto LABEL_33;
    v42 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v35->klass->vtable._7_Next.method)(
            v35,
            (unsigned int)v26->fields._size,
            v35->klass->vtable._8_NextDouble.methodPtr);
    size = v26->fields._size;
    if ( this->fields.beforeVoiceIdx == v42 )
      v42 = (v42 + 1) % size;
    if ( size <= (unsigned int)v42 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v44 = (struct ServantVoiceData_array *)v26->fields._items->m_Items[v42];
    this->fields.randomVoiceList = v44;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v44,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v42;
    if ( !randomVoiceList )
LABEL_33:
      sub_B0D97C(Instance);
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v45);
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
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  DataManager_o *Instance; // x0
  VoicePlayCondMaster_o *v26; // x21
  _BOOL8 v27; // x0
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Random_o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int v40; // w21
  int32_t size; // w8
  struct ServantVoiceData_array *v42; // x1
  const MethodInfo *v43; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v45; // x0
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4215088 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, callback);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_B0D8A4(&System_Random_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4215088 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)callback);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                    v22,
                                                                                                    v23);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v24,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListRand )
      goto LABEL_33;
    v26 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v46,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListRand,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v47 = v46;
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v47,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v27 )
        break;
      current = v47.fields.current;
      if ( !v47.fields.current )
        sub_B0D97C(v27);
      if ( !LODWORD(v47.fields.current[1].monitor) )
      {
        v45 = sub_B0D9A8(v27);
        sub_B0D948(v45, 0LL);
      }
      klass = v47.fields.current[2].klass;
      if ( !klass )
        sub_B0D97C(v27);
      if ( !v26 )
        sub_B0D97C(v27);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                      v26,
                      this->fields.svtId,
                      (System_String_o *)klass->_1.name,
                      0LL,
                      -1LL,
                      -1,
                      0LL);
      if ( isVoicePlay )
      {
        if ( !v24 )
          sub_B0D97C(isVoicePlay);
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v24,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__) )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)current,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v47,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    if ( !v24 )
      goto LABEL_33;
    if ( !v24->fields._size )
      return;
    v33 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, v31, v32);
    System_Random___ctor(v33, 0LL);
    if ( !v33 )
      goto LABEL_33;
    v40 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v33->klass->vtable._7_Next.method)(
            v33,
            (unsigned int)v24->fields._size,
            v33->klass->vtable._8_NextDouble.methodPtr);
    size = v24->fields._size;
    if ( this->fields.beforeVoiceIdx == v40 )
      v40 = (v40 + 1) % size;
    if ( size <= (unsigned int)v40 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v42 = (struct ServantVoiceData_array *)v24->fields._items->m_Items[v40];
    this->fields.randomVoiceList = v42;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v42,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v40;
    if ( !randomVoiceList )
LABEL_33:
      sub_B0D97C(Instance);
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v43);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)performanceRoot,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.performanceRoot = performanceRoot;
  sub_B0D840(
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
  sub_B0D840(p_voiceListBoxGacha, v24, v17, v18, v19, v20, v21, v22);
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
  sub_B0D840(
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
  sub_B0D840(v17, v18, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4215086 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, listRand);
    byte_4215086 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)p_voiceListRand, v21, v14, v15, v16, v17, v18, v19);
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
  sub_B0D840(p_voiceListMission, v29, v22, v23, v24, v25, v26, v27);
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
  sub_B0D840(p_voiceListShop, v37, v30, v31, v32, v33, v34, v35);
  this->fields.voiceListOverwrite = 0LL;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_B0D840((BattleServantConfConponent_o *)p_voiceListOverwrite, 0LL, v39, v40, v41, v42, v43, v44);
  *((_DWORD *)p_voiceListOverwrite - 22) = -1;
}


void __fastcall EventSvtControl__setVoiceForm(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v19; // x25
  __int64 v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  __int64 v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  System_Predicate_int__o *v31; // x23
  Il2CppClass *klass; // x19
  __int64 v33; // x8
  UIStandFigureR_o *v34; // x21
  System_Action_o *v35; // x22
  __int64 v36; // x0
  Il2CppObject *v37; // [xsp+8h] [xbp-58h]

  if ( (byte_4215087 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventSvtControl_svtVoicePlay__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Exists__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v10);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v11);
    sub_B0D8A4(&Method_EventSvtControl___c__DisplayClass36_0__setVoiceForm_b__0__, v12);
    sub_B0D8A4(&EventSvtControl___c__DisplayClass36_0_TypeInfo, v13);
    byte_4215087 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v37 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_19;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      v20 = sub_B0D974(EventSvtControl___c__DisplayClass36_0_TypeInfo, v16, v17);
      EventSvtControl___c__DisplayClass36_0___ctor((EventSvtControl___c__DisplayClass36_0_o *)v20, 0LL);
      if ( v19 >= randomVoiceList->max_length )
      {
        v36 = sub_B0D9A8(v15);
        sub_B0D948(v36, 0LL);
      }
      if ( !v20 )
        break;
      v27 = (System_Int32_array **)randomVoiceList->m_Items[v19];
      *(_QWORD *)(v20 + 16) = v27;
      v28 = v20 + 16;
      sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), v27, v21, v22, v23, v24, v25, v26);
      v31 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v29, v30);
      System_Predicate_int____ctor(
        v31,
        (Il2CppObject *)v20,
        Method_EventSvtControl___c__DisplayClass36_0__setVoiceForm_b__0__,
        (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
      if ( !v14 )
        break;
      v15 = System_Collections_Generic_List_int___Exists(
              v14,
              (System_Predicate_T__o *)v31,
              (const MethodInfo_2FB0754 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( !v15 )
      {
        if ( !*(_QWORD *)v28 )
          break;
        System_Collections_Generic_List_int___Add(
          v14,
          *(_DWORD *)(*(_QWORD *)v28 + 56LL),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v19 >= (int)randomVoiceList->max_length )
        goto LABEL_13;
    }
LABEL_19:
    sub_B0D97C(v15);
  }
LABEL_13:
  klass = v37[5].klass;
  if ( !klass )
    goto LABEL_19;
  if ( !LODWORD(klass->_1.namespaze) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v33 = *((_QWORD *)klass->_1.name + 4);
  if ( !v33 )
    goto LABEL_19;
  v34 = *(UIStandFigureR_o **)(v33 + 24);
  v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v35, v37, Method_EventSvtControl_svtVoicePlay__, 0LL);
  if ( !v34 )
    goto LABEL_19;
  UIStandFigureR__PreloadFormAssets(v34, v14, v35, 0LL);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v29; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x23
  __int64 v31; // x8
  unsigned __int64 v32; // x26
  signed __int64 v33; // x27
  System_String_o *v34; // x25
  __int64 v35; // x0
  int32_t v36; // w21
  System_String_o *v37; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v47; // w24
  __int64 v48; // x8
  _BOOL8 v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x0
  const MethodInfo *v57; // x1
  __int64 v58; // x0
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4215090 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4215090 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !targetVoiceIds )
    goto LABEL_39;
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_18:
      v35 = sub_B0D9A8(Instance);
      sub_B0D948(v35, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_23;
  }
  v29 = (VoicePlayCondMaster_o *)Instance;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  v31 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    v33 = (int)v31;
    while ( v29 )
    {
      v34 = targetVoiceIds->m_Items[v32];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v29, svtId, v34, 0LL, -1LL, -1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v30 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v32 >= v33 )
        goto LABEL_19;
      if ( v32 >= targetVoiceIds->max_length )
        goto LABEL_18;
    }
LABEL_39:
    sub_B0D97C(Instance);
  }
LABEL_19:
  if ( !v30 )
    goto LABEL_39;
  v36 = UnityEngine_Random__Range_34969060(0, v30->fields._size, 0LL);
  if ( v30->fields._size <= (unsigned int)v36 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  m_Items = (System_String_o **)&v30->fields._items->m_Items[v36];
LABEL_23:
  v37 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v39, v40, v41, v42, v43, v44);
  Instance = (DataManager_o *)this->fields.voiceIndividualShopList;
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v60 = v59;
LABEL_32:
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v49 )
      break;
    current = v60.fields.current;
    if ( !v60.fields.current )
      sub_B0D97C(v49);
    monitor = (int)v60.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        if ( v47 >= monitor )
        {
          v58 = sub_B0D9A8(v49);
          sub_B0D948(v58, 0LL);
        }
        v48 = *((_QWORD *)&current[2].klass + (int)v47);
        if ( !v48 )
          sub_B0D97C(v49);
        v49 = System_String__op_Equality(*(System_String_o **)(v48 + 16), v37, 0LL);
        if ( v49 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v47 >= monitor )
          goto LABEL_32;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      if ( !*p_randomVoiceList )
        sub_B0D97C(v56);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v57);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
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

  if ( (byte_421508F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_22549/*"svtVoicePlay"*/, v3);
    byte_421508F = 1;
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
      sub_B0D97C(0LL);
    SePlayer__Destroy(*p_player, 0LL);
    this->fields.player = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.player, 0LL, v7, v8, v9, v10, v11, v12);
    this->fields.callbakEndPlay = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbakEndPlay, 0LL, v13, v14, v15, v16, v17, v18);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34929376(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22549/*"svtVoicePlay"*/,
    0LL);
}


void __fastcall EventSvtControl__svtVoicePlay(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventSvtControl_o *v3; // x19
  __int64 v4; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v8; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x5
  __int64 v12; // x0

  v3 = this;
  if ( (byte_421508B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (EventSvtControl_o *)sub_B0D8A4(&Method_EventSvtControl_SvtVoicePlayProc__, v4);
    byte_421508B = 1;
  }
  if ( v3->fields.asstName && v3->fields.maxPlayCnt )
  {
    randomVoiceList = v3->fields.randomVoiceList;
    if ( !randomVoiceList )
      goto LABEL_13;
    playCnt = v3->fields.playCnt;
    max_length = randomVoiceList->max_length;
    if ( (int)playCnt < max_length )
    {
      if ( v3->fields.isSkipPerformance )
      {
        EventSvtControl__SvtVoicePlayProc(v3, method);
        return;
      }
      if ( (unsigned int)playCnt >= max_length )
      {
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
      }
      v8 = randomVoiceList->m_Items[playCnt];
      if ( v8 )
      {
        additionalPerformances = v8->fields.additionalPerformances;
        v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
        System_Action___ctor(v10, (Il2CppObject *)v3, Method_EventSvtControl_SvtVoicePlayProc__, 0LL);
        EventSvtControl__PlayPerformance(v3, additionalPerformances, 0, 1, v10, v11);
        return;
      }
LABEL_13:
      sub_B0D97C(this);
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
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListOverwrite; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  VoicePlayCondMaster_o *v27; // x23
  _BOOL8 v28; // x0
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  System_Random_o *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  unsigned int v46; // w20
  struct ServantVoiceData_array *v47; // x1
  const MethodInfo *v48; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v50; // x0
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4215095 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_B0D8A4(&System_Random_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4215095 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                eventId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_33;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ServantVoiceData____TypeInfo, v23, v24);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v26,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_33;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_33;
        v27 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v51,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v52 = v51;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v52,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v28 )
            break;
          current = v52.fields.current;
          if ( !v52.fields.current )
            sub_B0D97C(v28);
          if ( !LODWORD(v52.fields.current[1].monitor) )
          {
            v50 = sub_B0D9A8(v28);
            sub_B0D948(v50, 0LL);
          }
          klass = v52.fields.current[2].klass;
          if ( !klass )
            sub_B0D97C(v28);
          if ( !v27 )
            sub_B0D97C(v28);
          isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                          v27,
                          svtId,
                          (System_String_o *)klass->_1.name,
                          0LL,
                          -1LL,
                          -1,
                          0LL);
          if ( isVoicePlay )
          {
            if ( !v26 )
              sub_B0D97C(isVoicePlay);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v26,
              (EventMissionProgressRequest_Argument_ProgressData_o *)current,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v52,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v26 )
        {
          if ( v26->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
              (System_Int32_array **)callback,
              v24,
              v32,
              v33,
              v34,
              v35,
              v36);
            v39 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, v37, v38);
            System_Random___ctor(v39, 0LL);
            if ( v39 )
            {
              v46 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v39->klass->vtable._7_Next.method)(
                      v39,
                      (unsigned int)v26->fields._size,
                      v39->klass->vtable._8_NextDouble.methodPtr);
              if ( v26->fields._size <= v46 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v47 = (struct ServantVoiceData_array *)v26->fields._items->m_Items[v46];
              this->fields.randomVoiceList = v47;
              sub_B0D840(
                (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
                (System_Int32_array **)v47,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v48);
                return;
              }
            }
LABEL_33:
            sub_B0D97C(Instance);
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, (const MethodInfo *)v24);
}


void __fastcall EventSvtControl__PlayPerformanceProc_d__60___ctor(
        EventSvtControl__PlayPerformanceProc_d__60_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventSvtControl__PlayPerformanceProc_d__60__MoveNext(
        EventSvtControl__PlayPerformanceProc_d__60_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventSvtControl__PlayPerformanceProc_d__60_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct EventSvtControl_o *_4__this; // x21
  Il2CppObject *v11; // x20
  struct EventSvtControl_o *v12; // x1
  Il2CppObject *animName; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v17; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *playEndAction; // x0
  struct EventSvtControl___c__DisplayClass60_0_o *_8__1; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x20
  System_Func_bool__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_WaitUntil_o *v27; // x20

  v3 = this;
  if ( (byte_4210F19 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, method);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v4);
    sub_B0D8A4(&Method_EventSvtControl___c__DisplayClass60_0__PlayPerformanceProc_b__0__, v5);
    sub_B0D8A4(&EventSvtControl___c__DisplayClass60_0_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    this = (EventSvtControl__PlayPerformanceProc_d__60_o *)sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v8);
    byte_4210F19 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
LABEL_18:
    playEndAction = v3->fields.playEndAction;
    if ( !playEndAction )
      return (char)playEndAction;
    System_Action__Invoke(playEndAction, 0LL);
LABEL_20:
    LOBYTE(playEndAction) = 0;
    return (char)playEndAction;
  }
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_11;
  }
  if ( _1__state )
    goto LABEL_20;
  v3->fields.__1__state = -1;
  v11 = (Il2CppObject *)sub_B0D974(EventSvtControl___c__DisplayClass60_0_TypeInfo, method, v2);
  System_Object___ctor(v11, 0LL);
  v3->fields.__8__1 = (struct EventSvtControl___c__DisplayClass60_0_o *)v11;
  sub_B0D840(&v3->fields.__8__1, v11);
  this = (EventSvtControl__PlayPerformanceProc_d__60_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_22;
  v12 = v3->fields.__4__this;
  *(_QWORD *)&this->fields.__1__state = v12;
  sub_B0D840(&this->fields, v12);
  this = (EventSvtControl__PlayPerformanceProc_d__60_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_22;
  animName = (Il2CppObject *)v3->fields.animName;
  this->fields.__2__current = animName;
  sub_B0D840(&this->fields.__2__current, animName);
  delay = v3->fields.delay;
  if ( delay <= 0.0 )
  {
LABEL_11:
    if ( _4__this )
    {
      this = (EventSvtControl__PlayPerformanceProc_d__60_o *)_4__this->fields.animationRef;
      if ( this )
      {
        UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
        _8__1 = v3->fields.__8__1;
        if ( _8__1 )
        {
          this = (EventSvtControl__PlayPerformanceProc_d__60_o *)_4__this->fields.animationRef;
          if ( this )
          {
            UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0LL);
            if ( v3->fields.isWaitPerformance )
            {
              v23 = (Il2CppObject *)v3->fields.__8__1;
              v24 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v21, v22);
              System_Func_bool____ctor(
                v24,
                v23,
                Method_EventSvtControl___c__DisplayClass60_0__PlayPerformanceProc_b__0__,
                (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
              v27 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v25, v26);
              UnityEngine_WaitUntil___ctor(v27, v24, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v27;
              sub_B0D840(&v3->fields.__2__current, v27);
              v3->fields.__1__state = 2;
              LOBYTE(playEndAction) = 1;
              return (char)playEndAction;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_22:
    sub_B0D97C(this);
  }
  v17 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v14, v15);
  UnityEngine_WaitForSeconds___ctor(v17, delay, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v17;
  p__2__current = &v3->fields.__2__current;
  sub_B0D840(p__2__current, v17);
  LOBYTE(playEndAction) = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return (char)playEndAction;
}


Il2CppObject *__fastcall EventSvtControl__PlayPerformanceProc_d__60__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventSvtControl__PlayPerformanceProc_d__60_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventSvtControl__PlayPerformanceProc_d__60__System_Collections_IEnumerator_Reset(
        EventSvtControl__PlayPerformanceProc_d__60_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventSvtControl__PlayPerformanceProc_d__60_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall EventSvtControl__PlayPerformanceProc_d__60__System_Collections_IEnumerator_get_Current(
        EventSvtControl__PlayPerformanceProc_d__60_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventSvtControl__PlayPerformanceProc_d__60__System_IDisposable_Dispose(
        EventSvtControl__PlayPerformanceProc_d__60_o *this,
        const MethodInfo *method)
{
  ;
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
    sub_B0D97C(this);
  return System_Int32__Equals_38472956((int32_t)&v5, voice->fields.form, 0LL);
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
  struct EventSvtControl___c__DisplayClass48_0_o *vdArray; // x1
  struct EventSvtControl___c__DisplayClass48_0_o *v5; // x8
  struct EventSvtControl_o *_4__this; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  struct EventSvtControl___c__DisplayClass48_0_o *v8; // x8
  struct EventSvtControl_o *v9; // x9
  struct EventSvtControl___c__DisplayClass48_0_o *v10; // x8
  struct EventSvtControl___c__DisplayClass48_0_o *v11; // x8
  System_Action_o *callBackStartPlay; // x0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  v3 = this;
  this = (EventSvtControl___c__DisplayClass48_1_o *)CS___8__locals1->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  vdArray = (struct EventSvtControl___c__DisplayClass48_0_o *)v3->fields.vdArray;
  this[1].fields.CS___8__locals1 = vdArray;
  sub_B0D840(&this[1].fields.CS___8__locals1, vdArray);
  v5 = v3->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_14;
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  randomVoiceList = _4__this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_14;
  _4__this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
  v8 = v3->fields.CS___8__locals1;
  if ( !v8
    || (v9 = v8->fields.__4__this) == 0LL
    || (v9->fields.isSkipPerformance = v8->fields.arg.fields.skipPerformance, (v10 = v3->fields.CS___8__locals1) == 0LL)
    || (this = (EventSvtControl___c__DisplayClass48_1_o *)v10->fields.__4__this) == 0LL
    || (EventSvtControl__svtVoicePlay((EventSvtControl_o *)this, 0LL), (v11 = v3->fields.CS___8__locals1) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(this);
  }
  callBackStartPlay = v11->fields.arg.fields.callBackStartPlay;
  if ( callBackStartPlay )
    System_Action__Invoke(callBackStartPlay, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass60_0___ctor(
        EventSvtControl___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventSvtControl___c__DisplayClass60_0___PlayPerformanceProc_b__0(
        EventSvtControl___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  struct EventSvtControl_o *_4__this; // x8
  EventSvtControl___c__DisplayClass60_0_o *v3; // x19
  struct EventSvtControl_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v3 = this;
  this = (EventSvtControl___c__DisplayClass60_0_o *)_4__this->fields.animationRef;
  if ( !this )
    goto LABEL_10;
  this = (EventSvtControl___c__DisplayClass60_0_o *)UnityEngine_Animation__get_Item(
                                                      (UnityEngine_Animation_o *)this,
                                                      v3->fields.animName,
                                                      0LL);
  if ( !this )
    goto LABEL_10;
  if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) >= 1.0 )
    return 1;
  v4 = v3->fields.__4__this;
  if ( !v4 || (this = (EventSvtControl___c__DisplayClass60_0_o *)v4->fields.animationRef) == 0LL )
LABEL_10:
    sub_B0D97C(this);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL);
}