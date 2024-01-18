void __fastcall EventSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4188229 & 1) == 0 )
  {
    sub_B2C35C(&EventSvtControl_TypeInfo, v1);
    byte_4188229 = 1;
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
  System_Action_o *v12; // x0
  System_Action_o *v13; // x21
  struct System_Action_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Action_o **p_performanceEndAction; // x20
  __int64 v22; // x1
  UnityEngine_GameObject_o *transform; // x0
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s10
  float v28; // s8
  float v29; // s9
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_GameObject_o *v31; // x20
  EventSvtControl_c *v32; // x0
  float v33; // s10
  UnityEngine_GameObject_o *v34; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  EventSvtControl_o *v49; // x0
  const MethodInfo *v50; // x1
  UnityEngine_Vector3_o v51; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4188227 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, endAction);
    sub_B2C35C(&Method_EventSvtControl_ReleasePerformance__, v6);
    sub_B2C35C(&EventSvtControl_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_3465/*"CallPerformanceEndAction"*/, v10);
    byte_4188227 = 1;
  }
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(objectRef, 0LL, 0LL) )
  {
    v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0LL);
    v14 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)endAction,
                                      (System_Delegate_o *)v13,
                                      0LL);
    if ( v14 && v14->klass != System_Action_TypeInfo )
    {
      v49 = (EventSvtControl_o *)sub_B2C728(v14);
      EventSvtControl__CallPerformanceEndAction(v49, v50);
      return;
    }
    this->fields.performanceEndAction = v14;
    p_performanceEndAction = &this->fields.performanceEndAction;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.performanceEndAction,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    transform = this->fields.objectRef;
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( transform )
      {
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
        transform = this->fields.objectRef;
        if ( transform )
        {
          v27 = v24;
          v28 = v25;
          v29 = v26;
          ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                transform,
                                                                                (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
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
            v12 = *p_performanceEndAction;
            if ( *p_performanceEndAction )
              goto LABEL_19;
            return;
          }
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            v31 = this->fields.objectRef;
            v32 = EventSvtControl_TypeInfo;
            v33 = v27 - (float)ComponentInChildren_Dropdown_DropdownItem[6].fields.m_CachedPtr;
            if ( (BYTE3(EventSvtControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventSvtControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo);
              v32 = EventSvtControl_TypeInfo;
            }
            v51.fields.x = v33;
            v51.fields.y = v28;
            v51.fields.z = v29;
            transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                      v31,
                                                      v32->static_fields->BASE_MOVE_TIME,
                                                      v51,
                                                      0LL);
            if ( transform )
            {
              v34 = transform;
              LODWORD(transform[1].klass) = 3;
              gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
              v34[3].klass = (UnityEngine_GameObject_c *)gameObject;
              sub_B2C2F8((BattleServantConfConponent_o *)&v34[3], gameObject, v36, v37, v38, v39, v40, v41);
              v42 = (System_Int32_array **)StringLiteral_3465/*"CallPerformanceEndAction"*/;
              v34[3].monitor = (void *)StringLiteral_3465/*"CallPerformanceEndAction"*/;
              sub_B2C2F8((BattleServantConfConponent_o *)&v34[3].monitor, v42, v43, v44, v45, v46, v47, v48);
              return;
            }
          }
        }
      }
    }
    sub_B2C434(transform, v22);
  }
  if ( endAction )
  {
    v12 = endAction;
LABEL_19:
    System_Action__Invoke(v12, 0LL);
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
  __int64 v10; // x0

  v2 = this;
  if ( (byte_418821B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (EventSvtControl_o *)sub_B2C35C(&Method_EventSvtControl_EndPlayProc__, v3);
    byte_418821B = 1;
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
      {
        v10 = sub_B2C460(this);
        sub_B2C400(v10, 0LL);
      }
      v6 = randomVoiceList->m_Items[v5];
      if ( !v6 )
LABEL_10:
        sub_B2C434(this, method);
      additionalPerformances = v6->fields.additionalPerformances;
      v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)v2, Method_EventSvtControl_EndPlayProc__, 0LL);
      EventSvtControl__PlayPerformance(v2, additionalPerformances, 2, 1, v8, v9);
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
  if ( (byte_418821C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22473/*"svtVoicePlay"*/, method);
    this = (EventSvtControl_o *)sub_B2C35C(&StringLiteral_5494/*"END_PLAY"*/, v9);
    byte_418821C = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= randomVoiceList->max_length )
      {
        v18 = sub_B2C460(this);
        sub_B2C400(v18, 0LL);
      }
      v12 = randomVoiceList->m_Items[playCnt];
      if ( v12 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_22473/*"svtVoicePlay"*/,
          v12->fields.delay,
          0LL);
        return;
      }
    }
LABEL_16:
    sub_B2C434(this, method);
  }
  p_player = (BattleServantConfConponent_o *)&v8->fields.player;
  if ( v8->fields.player )
  {
    p_player->klass = 0LL;
    sub_B2C2F8(p_player, 0LL, v2, v3, v4, v5, v6, v7);
  }
  p_callbakEndPlay = (BattleServantConfConponent_o *)&v8->fields.callbakEndPlay;
  callbakEndPlay = v8->fields.callbakEndPlay;
  v8->fields.playCnt = 0;
  *(_WORD *)&v8->fields.isUnSkippable = 0;
  v8->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    p_callbakEndPlay->klass = 0LL;
    sub_B2C2F8(p_callbakEndPlay, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(callbakEndPlay, 0LL);
  }
  else
  {
    p_callbackStopVoice = (BattleServantConfConponent_o *)&v8->fields.callbackStopVoice;
    callbackStopVoice = v8->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      p_callbackStopVoice->klass = 0LL;
      sub_B2C2F8(p_callbackStopVoice, 0LL, v2, v3, v4, v5, v6, v7);
      System_Action__Invoke(callbackStopVoice, 0LL);
    }
    else
    {
      this = (EventSvtControl_o *)v8->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5494/*"END_PLAY"*/, 0LL);
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
  __int64 v14; // x1
  _BOOL4 v15; // w19
  int v16; // w20
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4188224 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, voiceId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_4188224 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_B2C434(0LL, voiceId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListBoxGacha,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v21 = v20;
  do
  {
LABEL_12:
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v13 )
    {
      v15 = 0;
      v16 = 1;
      goto LABEL_15;
    }
    current = v21.fields.current;
    if ( !v21.fields.current )
      sub_B2C434(v13, v14);
    monitor = (int)v21.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= monitor )
    {
      v18 = sub_B2C460(v13);
      sub_B2C400(v18, 0LL);
    }
    v12 = *((_QWORD *)&current[2].klass + (int)v11);
    if ( !v12 )
      sub_B2C434(v13, v14);
    v13 = System_String__op_Equality(*(System_String_o **)(v12 + 16), voiceId, 0LL);
    if ( v13 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v11 >= monitor )
      goto LABEL_12;
  }
  v16 = 3;
  v15 = *(_BYTE *)(v12 + 68) != 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v15 & ((unsigned int)(v16 + 1) >> 2);
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
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  const MethodInfo *v58; // x1
  __int64 v59; // x0
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4188222 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4188222 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_B2C434(Instance, v20);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_19:
      v35 = sub_B2C460(Instance);
      sub_B2C400(v35, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_24;
  }
  v29 = (VoicePlayCondMaster_o *)Instance;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
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
  v36 = UnityEngine_Random__Range_35348680(0, v30->fields._size, 0LL);
  if ( v30->fields._size <= (unsigned int)v36 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  m_Items = (System_String_o **)&v30->fields._items->m_Items[v36];
LABEL_24:
  v37 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v39, v40, v41, v42, v43, v44);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v61 = v60;
LABEL_33:
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v49 )
      break;
    current = v61.fields.current;
    if ( !v61.fields.current )
      sub_B2C434(v49, v50);
    monitor = (int)v61.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        if ( v47 >= monitor )
        {
          v59 = sub_B2C460(v49);
          sub_B2C400(v59, 0LL);
        }
        v48 = *((_QWORD *)&current[2].klass + (int)v47);
        if ( !v48 )
          sub_B2C434(v49, v50);
        v49 = System_String__op_Equality(*(System_String_o **)(v48 + 16), v37, 0LL);
        if ( v49 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v47 >= monitor )
          goto LABEL_33;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      if ( !*p_randomVoiceList )
        sub_B2C434(v57, v58);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v58);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v15; // x1
  UnityEngine_GameObject_o *performanceRoot; // x0
  System_String_o *assetName; // x25
  UnityEngine_Transform_o *transform; // x26
  System_Int32_array **Effect; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *v26; // x25
  struct UnityEngine_Animation_o **p_animationRef; // x25
  UnityEngine_Object_o *animationRef; // x26
  System_Int32_array **ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Object_o *v36; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v38; // x22
  const MethodInfo *v39; // x4
  System_Collections_IEnumerator_o *v40; // x1

  if ( (byte_4188225 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaResultEffectComponent_TypeInfo, performances);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_4188225 = 1;
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.objectRef, Effect, v20, v21, v22, v23, v24, v25);
    v26 = (UnityEngine_Object_o *)*p_objectRef;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Implicit(v26, 0LL) )
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
    sub_B2C434(performanceRoot, v15);
  ComponentInChildren_Dropdown_DropdownItem = (System_Int32_array **)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                       performanceRoot,
                                                                       (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  *p_animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_Dropdown_DropdownItem;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.animationRef,
    ComponentInChildren_Dropdown_DropdownItem,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (UnityEngine_Object_o *)*p_animationRef;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Implicit(v36, 0LL) )
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
  v38 = *p_afterPerformance;
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v38->fields.name, 0LL) )
  {
    v40 = EventSvtControl__PlayPerformanceProc(
            this,
            v38->fields.name,
            v38->fields.delay,
            isWaitPerformance,
            playEndAction,
            v39);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v40, 0LL);
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

  if ( (byte_4188226 & 1) == 0 )
  {
    sub_B2C35C(&EventSvtControl__PlayPerformanceProc_d__60_TypeInfo, animName);
    byte_4188226 = 1;
  }
  v11 = sub_B2C42C(EventSvtControl__PlayPerformanceProc_d__60_TypeInfo);
  EventSvtControl__PlayPerformanceProc_d__60___ctor((EventSvtControl__PlayPerformanceProc_d__60_o *)v11, 0, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  *(_QWORD *)(v11 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = animName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)animName, v20, v21, v22, v23, v24, v25);
  *(float *)(v11 + 48) = delay;
  *(_BYTE *)(v11 + 64) = isWaitPerformance;
  *(_QWORD *)(v11 + 72) = playEndAction;
  sub_B2C2F8(
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
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  const MethodInfo *v58; // x1
  __int64 v59; // x0
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4188221 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4188221 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_B2C434(Instance, v20);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_19:
      v35 = sub_B2C460(Instance);
      sub_B2C400(v35, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_24;
  }
  v29 = (VoicePlayCondMaster_o *)Instance;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
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
  v36 = UnityEngine_Random__Range_35348680(0, v30->fields._size, 0LL);
  if ( v30->fields._size <= (unsigned int)v36 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  m_Items = (System_String_o **)&v30->fields._items->m_Items[v36];
LABEL_24:
  v37 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v39, v40, v41, v42, v43, v44);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v61 = v60;
LABEL_33:
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v49 )
      break;
    current = v61.fields.current;
    if ( !v61.fields.current )
      sub_B2C434(v49, v50);
    monitor = (int)v61.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        if ( v47 >= monitor )
        {
          v59 = sub_B2C460(v49);
          sub_B2C400(v59, 0LL);
        }
        v48 = *((_QWORD *)&current[2].klass + (int)v47);
        if ( !v48 )
          sub_B2C434(v49, v50);
        v49 = System_String__op_Equality(*(System_String_o **)(v48 + 16), v37, 0LL);
        if ( v49 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v47 >= monitor )
          goto LABEL_33;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      if ( !*p_randomVoiceList )
        sub_B2C434(v57, v58);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v58);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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

  if ( (byte_4188228 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188228 = 1;
  }
  this->fields.animationRef = 0LL;
  p_animationRef = &this->fields.animationRef;
  sub_B2C2F8((BattleServantConfConponent_o *)p_animationRef, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = (UnityEngine_Object_o *)*(p_animationRef - 1);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(v10, 0LL);
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
  __int64 v28; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_int__o *v30; // x21
  struct System_String_array *befVoiceIds; // x10
  __int64 v32; // x9
  unsigned __int64 v33; // x24
  int v34; // w20
  System_String_o *v35; // x25
  int monitor; // w8
  int i; // w27
  __int64 v38; // x20
  _BOOL8 isVoicePlay; // x0
  __int64 v40; // x1
  __int64 v41; // x0
  __int64 v42; // x1
  Il2CppObject *current; // x28
  int v44; // w27
  int v45; // w8
  __int64 v46; // x0
  unsigned __int64 v47; // x20
  unsigned int v48; // w23
  int v49; // w24
  System_String_o *v50; // x22
  void *v51; // x8
  int v52; // w25
  __int64 v53; // x27
  _BOOL8 v54; // x0
  __int64 v55; // x1
  Il2CppObject *v56; // x28
  int v57; // w8
  __int64 v58; // x0
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  __int64 v61; // x0
  __int64 v62; // [xsp+8h] [xbp-D8h]
  int v63; // [xsp+10h] [xbp-D0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-C8h]
  struct System_String_array *v65; // [xsp+30h] [xbp-B0h]
  int v67; // [xsp+40h] [xbp-A0h]
  _BYTE v68[32]; // [xsp+48h] [xbp-98h] BYREF
  int v69; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_4188220 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaTalkInfo_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4188220 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v69 = 0;
  v20 = (BoxGachaTalkInfo_o *)sub_B2C42C(BoxGachaTalkInfo_TypeInfo);
  BoxGachaTalkInfo___ctor(v20, 0LL);
  *info = v20;
  sub_B2C2F8((BattleServantConfConponent_o *)info, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v30 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_73;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_73;
  v32 = *(_QWORD *)&befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  v63 = v32;
  if ( (int)v32 < 1 )
  {
    v44 = 0;
    if ( !v30 )
      return 0;
  }
  else
  {
    v62 = *(_QWORD *)&befVoiceIds->max_length;
    if ( !(_DWORD)v62 )
      goto LABEL_74;
    v33 = 0LL;
    v34 = 0;
    v65 = befVoiceIds;
    while ( 1 )
    {
      v67 = v34;
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_73;
      v35 = befVoiceIds->m_Items[v33];
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v68,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v70 = *(System_Collections_Generic_List_Enumerator_T__o *)v68;
      while ( 1 )
      {
        isVoicePlay = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v70,
                        (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( !isVoicePlay )
          break;
        current = v70.fields.current;
        if ( !v70.fields.current )
          sub_B2C434(isVoicePlay, v40);
        monitor = (int)v70.fields.current[1].monitor;
        if ( monitor >= 1 )
        {
          for ( i = 0; i < monitor; ++i )
          {
            if ( i >= (unsigned int)monitor )
            {
              v46 = sub_B2C460(isVoicePlay);
              sub_B2C400(v46, 0LL);
            }
            v38 = *((_QWORD *)&current[2].klass + i);
            if ( !v38 )
              sub_B2C434(isVoicePlay, v40);
            isVoicePlay = System_String__op_Equality(*(System_String_o **)(v38 + 16), v35, 0LL);
            if ( isVoicePlay )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                sub_B2C434(isVoicePlay, v40);
              isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                              MasterData_WarQuestSelectionMaster,
                              svtId,
                              v35,
                              0LL,
                              -1LL,
                              -1,
                              0LL);
              if ( isVoicePlay )
              {
                if ( !*info )
                  sub_B2C434(0LL, v40);
                BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v38 + 16),
                  *(System_String_o **)(v38 + 48),
                  0LL);
                if ( !v30 )
                  sub_B2C434(v41, v42);
                System_Collections_Generic_List_int___Add(
                  v30,
                  v33,
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            monitor = (int)current[1].monitor;
          }
        }
      }
      *(_DWORD *)&v68[4 * v67 + 24] = 202;
      v34 = ++v69;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v70,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      v44 = v34;
      befVoiceIds = v65;
      if ( v34 )
      {
        v45 = v34 - 1;
        if ( *(_DWORD *)&v68[4 * v34 + 20] == 202 )
        {
          v44 = --v34;
          v69 = v45;
        }
      }
      if ( (__int64)++v33 >= v63 )
        break;
      if ( v33 >= v65->max_length )
        goto LABEL_74;
    }
    LODWORD(v32) = v62;
    if ( !v30 )
      return 0;
  }
  if ( !v30->fields._size )
    return 0;
  if ( (int)v32 >= 1 )
  {
    if ( aftVoiceIds )
    {
      v47 = 0LL;
      v48 = 0;
      while ( v47 < aftVoiceIds->max_length )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          goto LABEL_73;
        v49 = v44;
        v50 = aftVoiceIds->m_Items[v47];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v68,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v70 = *(System_Collections_Generic_List_Enumerator_T__o *)v68;
        while ( 1 )
        {
          v54 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v70,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v54 )
            break;
          v56 = v70.fields.current;
          if ( !v70.fields.current )
            sub_B2C434(v54, v55);
          v51 = v70.fields.current[1].monitor;
          if ( (int)v51 >= 1 )
          {
            v52 = 0;
            do
            {
              if ( v52 >= (unsigned int)v51 )
              {
                v58 = sub_B2C460(v54);
                sub_B2C400(v58, 0LL);
              }
              v53 = *((_QWORD *)&v56[2].klass + v52);
              if ( !v53 )
                sub_B2C434(v54, v55);
              v54 = System_String__op_Equality(*(System_String_o **)(v53 + 16), v50, 0LL);
              if ( v54 )
              {
                if ( v30->fields._size <= v48 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                if ( v47 == v30->fields._items->m_Items[v48 + 1] )
                {
                  if ( !*info )
                    sub_B2C434(0LL, v55);
                  BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v53 + 16),
                    *(System_String_o **)(v53 + 48),
                    0LL);
                  ++v48;
                }
              }
              LODWORD(v51) = v56[1].monitor;
              ++v52;
            }
            while ( v52 < (int)v51 );
          }
        }
        *(_DWORD *)&v68[4 * v49 + 24] = 377;
        v44 = ++v69;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v70,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v44 )
        {
          v57 = v44 - 1;
          if ( *(_DWORD *)&v68[4 * v44 + 20] == 377 )
          {
            --v44;
            v69 = v57;
          }
        }
        if ( (__int64)++v47 >= v63 )
          goto LABEL_70;
      }
LABEL_74:
      v61 = sub_B2C460(Instance);
      sub_B2C400(v61, 0LL);
    }
LABEL_73:
    sub_B2C434(Instance, v28);
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
  sub_B2C2F8(
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
  sub_B2C2F8(v17, v18, v11, v12, v13, v14, v15, v16);
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
  sub_B2C2F8(
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
  sub_B2C2F8(v9, (System_Int32_array **)listOverwrite, v10, v11, v12, v13, v14, v15);
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
  sub_B2C2F8(
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
  sub_B2C2F8(v17, v18, v11, v12, v13, v14, v15, v16);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(v17, v18, v11, v12, v13, v14, v15, v16);
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
  float FadeTime; // s0
  float v25; // s8
  struct ServantVoiceData_array *v26; // x8
  __int64 v27; // x9
  ServantVoiceData_o *v28; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  int32_t face; // w20
  StandFigureCollect_o *v31; // x8
  struct ServantVoiceData_array *v32; // x9
  __int64 v33; // x10
  ServantVoiceData_o *v34; // x9
  System_String_o *asstName; // x20
  System_String_o *v36; // x21
  float volume; // s8
  System_Action_o *v38; // x22
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x5
  struct ServantVoiceData_array *v47; // x8
  __int64 v48; // x9
  ServantVoiceData_o *v49; // x8
  struct ServantVoiceData_array *v50; // x8
  __int64 v51; // x9
  ServantVoiceData_o *v52; // x8
  struct System_Int32_array *multiFace; // x22
  __int64 v54; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *v55; // x25
  StandFigureCollect_o *v56; // x8
  __int64 v57; // x0

  v8 = this;
  if ( (byte_418821A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_B2C35C(&Method_EventSvtControl_EndPlay__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v11);
    this = (EventSvtControl_o *)sub_B2C35C(&SoundManager_TypeInfo, v12);
    byte_418821A = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
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
  v25 = FadeTime;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v26 = v8->fields.randomVoiceList;
    if ( !v26 )
      goto LABEL_50;
    v27 = v8->fields.playCnt;
    if ( (unsigned int)v27 >= v26->max_length )
      goto LABEL_51;
    v28 = v26->m_Items[v27];
    if ( !v28 )
      goto LABEL_50;
    standFigureCollectList = v8->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v28->fields.face;
      if ( !standFigureCollectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v31 = standFigureCollectList->fields._items->m_Items[0];
      if ( !v31 )
        goto LABEL_50;
      v32 = v8->fields.randomVoiceList;
      if ( !v32 )
        goto LABEL_50;
      v33 = v8->fields.playCnt;
      if ( (unsigned int)v33 >= v32->max_length )
        goto LABEL_51;
      v34 = v32->m_Items[v33];
      if ( !v34 )
        goto LABEL_50;
      this = (EventSvtControl_o *)v31->fields._standFigure_k__BackingField;
      if ( !this )
        goto LABEL_50;
      UIStandFigureR__SetFace_40495504((UIStandFigureR_o *)this, face, v34->fields.form, 0LL, v25, 0LL);
    }
    goto LABEL_25;
  }
  v50 = v8->fields.randomVoiceList;
  if ( !v50 )
    goto LABEL_50;
  v51 = v8->fields.playCnt;
  if ( (unsigned int)v51 >= v50->max_length )
    goto LABEL_51;
  v52 = v50->m_Items[v51];
  if ( !v52 )
    goto LABEL_50;
  multiFace = v52->fields.multiFace;
  if ( multiFace )
  {
    this = (EventSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                  (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( (_DWORD)this == multiFace->max_length )
    {
      if ( (int)this >= 1 )
      {
        v54 = 0LL;
        while ( (unsigned int)v54 < (unsigned int)this )
        {
          v55 = v8->fields.standFigureCollectList;
          if ( !v55 )
            goto LABEL_50;
          if ( v55->fields._size <= (unsigned int)v54 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v56 = v55->fields._items->m_Items[v54];
          if ( !v56 )
            goto LABEL_50;
          this = (EventSvtControl_o *)v56->fields._standFigure_k__BackingField;
          if ( !this )
            goto LABEL_50;
          UIStandFigureR__SetFace_40495504((UIStandFigureR_o *)this, multiFace->m_Items[v54 + 1], vcName, 0LL, v25, 0LL);
          this = (EventSvtControl_o *)multiFace->max_length;
          if ( (int)++v54 >= (int)this )
            goto LABEL_25;
        }
        goto LABEL_51;
      }
LABEL_25:
      asstName = v8->fields.asstName;
      v36 = v8->fields.vcName;
      volume = v8->fields.volume;
      v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v38, (Il2CppObject *)v8, Method_EventSvtControl_EndPlay__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v39 = (System_Int32_array **)SoundManager__playVoice_24786800(asstName, v36, volume, v38, 0LL);
      v8->fields.player = (struct SePlayer_o *)v39;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.player, v39, v40, v41, v42, v43, v44, v45);
      if ( v8->fields.isSkipPerformance )
        goto LABEL_33;
      v47 = v8->fields.randomVoiceList;
      if ( !v47 )
LABEL_50:
        sub_B2C434(this, method);
      v48 = v8->fields.playCnt;
      if ( (unsigned int)v48 < v47->max_length )
      {
        v49 = v47->m_Items[v48];
        if ( v49 )
        {
          EventSvtControl__PlayPerformance(v8, v49->fields.additionalPerformances, 1, 0, 0LL, v46);
LABEL_33:
          ++v8->fields.playCnt;
          return;
        }
        goto LABEL_50;
      }
LABEL_51:
      v57 = sub_B2C460(this);
      sub_B2C400(v57, 0LL);
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
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int128 v23; // q1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  struct System_Action_o *v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x22
  __int64 v46; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x23
  System_Int32_array **current; // x1
  System_Int32_array ***v56; // x24
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  _BOOL8 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x27
  int v66; // w8
  unsigned int v67; // w26
  __int64 v68; // x28
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  __int64 v76; // x0
  const MethodInfo *v77; // x1
  __int64 v78; // x0
  __int64 v79; // x1
  System_Action_o *v80; // x0
  WebViewManager_o *Instance; // x0
  __int64 v82; // x1
  System_String_o *v83; // x20
  System_Action_o *v84; // x23
  CommonUI_o *v85; // x19
  System_String_o *v86; // x21
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v93; // x0
  System_Collections_Generic_List_Enumerator_T__o v94; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_418821F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, arg);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&EventSvtControl___c__DisplayClass48_0_TypeInfo, v10);
    sub_B2C35C(&Method_EventSvtControl___c__DisplayClass48_1__boxGachaPlayVoice_b__0__, v11);
    sub_B2C35C(&EventSvtControl___c__DisplayClass48_1_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_418821F = 1;
  }
  memset(&v95, 0, sizeof(v95));
  v14 = sub_B2C42C(EventSvtControl___c__DisplayClass48_0_TypeInfo);
  EventSvtControl___c__DisplayClass48_0___ctor((EventSvtControl___c__DisplayClass48_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_35;
  *(_QWORD *)(v14 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  v23 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v14 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v14 + 24) = v23;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 24), 0LL, v24, v25, v26, v27, v28, v29);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v30);
  System_String__IsNullOrEmpty(*(System_String_o **)(v14 + 24), 0LL);
  v31 = *(struct System_Action_o **)(v14 + 48);
  this->fields.callbakEndPlay = v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v39, v40, v41, v42, v43, v44);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_B2C434(voiceListBoxGacha, v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v94,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListBoxGacha,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v95 = v94;
LABEL_17:
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v95,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v45 = sub_B2C42C(EventSvtControl___c__DisplayClass48_1_TypeInfo);
    EventSvtControl___c__DisplayClass48_1___ctor((EventSvtControl___c__DisplayClass48_1_o *)v45, 0LL);
    if ( !v45 )
      sub_B2C434(v46, v47);
    *(_QWORD *)(v45 + 24) = v14;
    v54 = v45 + 24;
    sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 24), (System_Int32_array **)v14, v48, v49, v50, v51, v52, v53);
    current = (System_Int32_array **)v95.fields.current;
    *(_QWORD *)(v45 + 16) = v95.fields.current;
    v56 = (System_Int32_array ***)(v45 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 16), current, v57, v58, v59, v60, v61, v62);
    v65 = *(_QWORD *)(v45 + 16);
    if ( !v65 )
      sub_B2C434(v63, v64);
    v66 = *(_DWORD *)(v65 + 24);
    if ( v66 >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= v66 )
        {
          v93 = sub_B2C460(v63);
          sub_B2C400(v93, 0LL);
        }
        v68 = *(_QWORD *)(v65 + 8LL * (int)v67 + 32);
        if ( !v68 )
          sub_B2C434(v63, v64);
        if ( !*(_QWORD *)v54 )
          sub_B2C434(v63, v64);
        v63 = System_String__op_Equality(
                *(System_String_o **)(v68 + 16),
                *(System_String_o **)(*(_QWORD *)v54 + 24LL),
                0LL);
        if ( v63 )
          break;
        v66 = *(_DWORD *)(v65 + 24);
        if ( (int)++v67 >= v66 )
          goto LABEL_17;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(*(System_String_o **)(v68 + 72), 0LL) )
      {
        v75 = *v56;
        *p_randomVoiceList = (struct ServantVoiceData_array *)*v56;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.randomVoiceList, v75, v69, v70, v71, v72, v73, v74);
        if ( !*p_randomVoiceList )
          sub_B2C434(v76, v77);
        this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
        if ( !*(_QWORD *)v54 )
          sub_B2C434(v76, v77);
        this->fields.isSkipPerformance = *(_BYTE *)(*(_QWORD *)v54 + 32LL);
        EventSvtControl__svtVoicePlay(this, v77);
        if ( !*(_QWORD *)v54 )
          sub_B2C434(v78, v79);
        v80 = *(System_Action_o **)(*(_QWORD *)v54 + 40LL);
        if ( v80 )
          System_Action__Invoke(v80, 0LL);
      }
      else
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v83 = *(System_String_o **)(v68 + 72);
        v84 = *(System_Action_o **)(v45 + 32);
        v85 = (CommonUI_o *)Instance;
        v86 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v84 )
        {
          v84 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v84,
            (Il2CppObject *)v45,
            Method_EventSvtControl___c__DisplayClass48_1__boxGachaPlayVoice_b__0__,
            0LL);
          *(_QWORD *)(v45 + 32) = v84;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v45 + 32),
            (System_Int32_array **)v84,
            v87,
            v88,
            v89,
            v90,
            v91,
            v92);
        }
        if ( !v85 )
          sub_B2C434(Instance, v82);
        CommonUI__OpenNotificationDialog(v85, v86, v83, v84, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v95,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  const MethodInfo *v29; // x1
  _BOOL8 v30; // x0
  __int64 v31; // x1
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
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v50; // x19
  signed __int64 size; // x19
  unsigned __int64 v52; // x20
  System_String_o *v53; // x27
  int v54; // w28
  System_Random_o *v55; // x25
  il2cpp_array_size_t v56; // w25
  _BOOL8 v57; // x0
  __int64 v58; // x1
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v61; // w19
  __int64 v62; // x8
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int v69; // w19
  int v70; // w10
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x0
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Action_o *action; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v77; // [xsp+8h] [xbp-B8h]
  int v78; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+20h] [xbp-A0h] BYREF
  int v80[4]; // [xsp+38h] [xbp-88h]
  int v81; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4188218 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, voiceIds);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__AddRange__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320976, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v23);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v24);
    sub_B2C35C(&System_Random_TypeInfo, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_4188218 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  v81 = 0;
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = (BattleServantConfConponent_o *)&this->fields.randomVoiceList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
    0LL,
    *(System_String_array ***)&svtId,
    (System_String_array **)callbackEnds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_72;
  action = callbackEnds;
  if ( (int)voiceIds->max_length >= 2 )
  {
    v48 = (VoicePlayCondMaster_o *)Instance;
    v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v49,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
    v50 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v50,
      voiceIds->max_length,
      (const MethodInfo_2EF386C *)Method_System_Collections_Generic_List_string___ctor___67320976);
    if ( !v50 )
      goto LABEL_72;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v50,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_string__AddRange__);
    v77 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v50;
    size = v50->fields._size;
    if ( (int)size >= 1 )
    {
      v52 = 0LL;
      do
      {
        if ( v52 >= voiceIds->max_length )
        {
LABEL_64:
          v74 = sub_B2C460(Instance);
          sub_B2C400(v74, 0LL);
        }
        if ( !v48 )
          goto LABEL_72;
        v53 = voiceIds->m_Items[v52];
        Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v48, svtId, v53, 0LL, -1LL, -1, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v49 )
            goto LABEL_72;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v49,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        }
      }
      while ( (__int64)++v52 < size );
    }
    if ( !v49 )
      goto LABEL_72;
    v54 = v49->fields._size - 1;
    if ( v54 >= 0 )
    {
      v78 = 0;
      do
      {
        v55 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
        System_Random___ctor(v55, 0LL);
        if ( !v55 )
          goto LABEL_72;
        Instance = (DataManager_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v55->klass->vtable._7_Next.method)(
                                      v55,
                                      (unsigned int)v49->fields._size,
                                      v55->klass->vtable._8_NextDouble.methodPtr);
        if ( !this->fields.voiceListMission )
          goto LABEL_72;
        v56 = (unsigned int)Instance;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v79,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListMission,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v82 = v79;
        do
        {
          v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v82,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v57 )
            break;
          current = v82.fields.current;
          if ( !v82.fields.current )
            sub_B2C434(v57, v58);
          monitor = (int)v82.fields.current[1].monitor;
          if ( monitor >= 1 )
          {
            v61 = 0;
            while ( 1 )
            {
              if ( v61 >= monitor )
              {
                v71 = sub_B2C460(v57);
                sub_B2C400(v71, 0LL);
              }
              v62 = *((_QWORD *)&current[2].klass + (int)v61);
              if ( !v62 )
                sub_B2C434(v57, v58);
              if ( v49->fields._size <= v56 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v57 = System_String__op_Equality(
                      *(System_String_o **)(v62 + 16),
                      (System_String_o *)v49->fields._items->m_Items[v56],
                      0LL);
              if ( v57 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v61 >= monitor )
                goto LABEL_50;
            }
            p_randomVoiceList->klass = (BattleServantConfConponent_c *)current;
            sub_B2C2F8(p_randomVoiceList, (System_Int32_array **)current, v63, v64, v65, v66, v67, v68);
          }
LABEL_50:
          ;
        }
        while ( !p_randomVoiceList->klass );
        v80[v78] = 277;
        v69 = ++v81;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v82,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        v70 = v69;
        if ( v69 && v80[v69 - 1] == 277 )
        {
          v70 = v69 - 1;
          v81 = v69 - 1;
        }
        if ( p_randomVoiceList->klass )
          goto LABEL_67;
        v78 = v70;
        if ( v56 >= voiceIds->max_length )
          goto LABEL_64;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v77,
          (WarBoardManager_TaskList_o *)voiceIds->m_Items[v56],
          (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v54 >= 0 );
    }
  }
  else
  {
    Instance = (DataManager_o *)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_72;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v79,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v82 = v79;
    do
    {
      v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v82,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v30 )
        break;
      v32 = v82.fields.current;
      if ( !v82.fields.current )
        sub_B2C434(v30, v31);
      v33 = (int)v82.fields.current[1].monitor;
      if ( v33 >= 1 )
      {
        v34 = 0;
        while ( 1 )
        {
          if ( v34 >= v33 )
          {
            v73 = sub_B2C460(v30);
            sub_B2C400(v73, 0LL);
          }
          v35 = *((_QWORD *)&v32[2].klass + (int)v34);
          if ( !v35 )
            sub_B2C434(v30, v31);
          if ( !voiceIds->max_length )
          {
            v72 = sub_B2C460(v30);
            sub_B2C400(v72, 0LL);
          }
          v30 = System_String__op_Equality(*(System_String_o **)(v35 + 16), voiceIds->m_Items[0], 0LL);
          if ( v30 )
            break;
          v33 = (int)v32[1].monitor;
          if ( (int)++v34 >= v33 )
            goto LABEL_21;
        }
        p_randomVoiceList->klass = (BattleServantConfConponent_c *)v32;
        sub_B2C2F8(
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
    v80[0] = 427;
    v81 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v82,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v81 = 0;
  }
  if ( p_randomVoiceList->klass )
  {
LABEL_67:
    this->fields.callbakEndPlay = action;
    sub_B2C2F8(
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
      EventSvtControl__svtVoicePlay(this, v29);
      return;
    }
LABEL_72:
    sub_B2C434(Instance, v29);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v26; // x1
  VoicePlayCondMaster_o *v27; // x22
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v33; // x1
  System_Random_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int v41; // w21
  int32_t size; // w8
  struct ServantVoiceData_array *v43; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v45; // x0
  __int64 v46; // x0
  System_Exception_o *v47; // x19
  System_String_o *v48; // x0
  __int64 v49; // x0
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4188217 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v19);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v20);
    sub_B2C35C(&System_Random_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4188217 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v46 = sub_B2C360(&System_Exception_TypeInfo);
      v47 = (System_Exception_o *)sub_B2C42C(v46);
      v48 = (System_String_o *)sub_B2C360(&StringLiteral_23811/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_15978392(v47, v48, 0LL);
      v49 = sub_B2C360(&Method_EventSvtControl_playPurchaseVoice__);
      sub_B2C400(v47, v49);
    }
    this->fields.callbackStopVoice = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v24,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_33;
    v27 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v50,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListShop,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v51 = v50;
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v51,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v28 )
        break;
      current = v51.fields.current;
      if ( !v51.fields.current )
        sub_B2C434(v28, v29);
      if ( !LODWORD(v51.fields.current[1].monitor) )
      {
        v45 = sub_B2C460(v28);
        sub_B2C400(v45, 0LL);
      }
      klass = v51.fields.current[2].klass;
      if ( !klass )
        sub_B2C434(v28, v29);
      if ( !v27 )
        sub_B2C434(v28, v29);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(v27, svtId, (System_String_o *)klass->_1.name, 0LL, -1LL, -1, 0LL);
      if ( isVoicePlay )
      {
        if ( !v24 )
          sub_B2C434(isVoicePlay, v33);
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v24,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__) )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)current,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v51,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v34 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
    System_Random___ctor(v34, 0LL);
    if ( !v24 || !v34 )
      goto LABEL_33;
    v41 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v34->klass->vtable._7_Next.method)(
            v34,
            (unsigned int)v24->fields._size,
            v34->klass->vtable._8_NextDouble.methodPtr);
    size = v24->fields._size;
    if ( this->fields.beforeVoiceIdx == v41 )
      v41 = (v41 + 1) % size;
    if ( size <= (unsigned int)v41 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v43 = (struct ServantVoiceData_array *)v24->fields._items->m_Items[v41];
    this->fields.randomVoiceList = v43;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v43,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v41;
    if ( !randomVoiceList )
LABEL_33:
      sub_B2C434(Instance, v26);
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v26);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v24; // x1
  VoicePlayCondMaster_o *v25; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v31; // x1
  System_Random_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int v39; // w21
  int32_t size; // w8
  struct ServantVoiceData_array *v41; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v43; // x0
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4188216 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, callback);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_B2C35C(&System_Random_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4188216 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)callback);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v22,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListRand )
      goto LABEL_33;
    v25 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v44,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListRand,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v45 = v44;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v45,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v26 )
        break;
      current = v45.fields.current;
      if ( !v45.fields.current )
        sub_B2C434(v26, v27);
      if ( !LODWORD(v45.fields.current[1].monitor) )
      {
        v43 = sub_B2C460(v26);
        sub_B2C400(v43, 0LL);
      }
      klass = v45.fields.current[2].klass;
      if ( !klass )
        sub_B2C434(v26, v27);
      if ( !v25 )
        sub_B2C434(v26, v27);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                      v25,
                      this->fields.svtId,
                      (System_String_o *)klass->_1.name,
                      0LL,
                      -1LL,
                      -1,
                      0LL);
      if ( isVoicePlay )
      {
        if ( !v22 )
          sub_B2C434(isVoicePlay, v31);
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v22,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__) )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            (EventMissionProgressRequest_Argument_ProgressData_o *)current,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v45,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    if ( !v22 )
      goto LABEL_33;
    if ( !v22->fields._size )
      return;
    v32 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
    System_Random___ctor(v32, 0LL);
    if ( !v32 )
      goto LABEL_33;
    v39 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v32->klass->vtable._7_Next.method)(
            v32,
            (unsigned int)v22->fields._size,
            v32->klass->vtable._8_NextDouble.methodPtr);
    size = v22->fields._size;
    if ( this->fields.beforeVoiceIdx == v39 )
      v39 = (v39 + 1) % size;
    if ( size <= (unsigned int)v39 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v41 = (struct ServantVoiceData_array *)v22->fields._items->m_Items[v39];
    this->fields.randomVoiceList = v41;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v41,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v39;
    if ( !randomVoiceList )
LABEL_33:
      sub_B2C434(Instance, v24);
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v24);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)performanceRoot,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.performanceRoot = performanceRoot;
  sub_B2C2F8(
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
  sub_B2C2F8(p_voiceListBoxGacha, v24, v17, v18, v19, v20, v21, v22);
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
  sub_B2C2F8(
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
  sub_B2C2F8(v17, v18, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4188214 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, listRand);
    byte_4188214 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)p_voiceListRand, v21, v14, v15, v16, v17, v18, v19);
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
  sub_B2C2F8(p_voiceListMission, v29, v22, v23, v24, v25, v26, v27);
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
  sub_B2C2F8(p_voiceListShop, v37, v30, v31, v32, v33, v34, v35);
  this->fields.voiceListOverwrite = 0LL;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_B2C2F8((BattleServantConfConponent_o *)p_voiceListOverwrite, 0LL, v39, v40, v41, v42, v43, v44);
  *((_DWORD *)p_voiceListOverwrite - 22) = -1;
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
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v17; // x25
  __int64 v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  __int64 v26; // x21
  System_Predicate_int__o *v27; // x23
  Il2CppClass *klass; // x19
  __int64 v29; // x8
  UIStandFigureR_o *v30; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  Il2CppObject *v33; // [xsp+8h] [xbp-58h]

  if ( (byte_4188215 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventSvtControl_svtVoicePlay__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Exists__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v9);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v10);
    sub_B2C35C(&Method_EventSvtControl___c__DisplayClass36_0__setVoiceForm_b__0__, v11);
    sub_B2C35C(&EventSvtControl___c__DisplayClass36_0_TypeInfo, v12);
    byte_4188215 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v33 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_19;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      v18 = sub_B2C42C(EventSvtControl___c__DisplayClass36_0_TypeInfo);
      EventSvtControl___c__DisplayClass36_0___ctor((EventSvtControl___c__DisplayClass36_0_o *)v18, 0LL);
      if ( v17 >= randomVoiceList->max_length )
      {
        v32 = sub_B2C460(v14);
        sub_B2C400(v32, 0LL);
      }
      if ( !v18 )
        break;
      v25 = (System_Int32_array **)randomVoiceList->m_Items[v17];
      *(_QWORD *)(v18 + 16) = v25;
      v26 = v18 + 16;
      sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), v25, v19, v20, v21, v22, v23, v24);
      v27 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v27,
        (Il2CppObject *)v18,
        Method_EventSvtControl___c__DisplayClass36_0__setVoiceForm_b__0__,
        (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
      if ( !v13 )
        break;
      v14 = System_Collections_Generic_List_int___Exists(
              v13,
              (System_Predicate_T__o *)v27,
              (const MethodInfo_2F6784C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( !v14 )
      {
        if ( !*(_QWORD *)v26 )
          break;
        System_Collections_Generic_List_int___Add(
          v13,
          *(_DWORD *)(*(_QWORD *)v26 + 56LL),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v17 >= (int)randomVoiceList->max_length )
        goto LABEL_13;
    }
LABEL_19:
    sub_B2C434(v14, v15);
  }
LABEL_13:
  klass = v33[5].klass;
  if ( !klass )
    goto LABEL_19;
  if ( !LODWORD(klass->_1.namespaze) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v29 = *((_QWORD *)klass->_1.name + 4);
  if ( !v29 )
    goto LABEL_19;
  v30 = *(UIStandFigureR_o **)(v29 + 24);
  v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v31, v33, Method_EventSvtControl_svtVoicePlay__, 0LL);
  if ( !v30 )
    goto LABEL_19;
  UIStandFigureR__PreloadFormAssets(v30, v13, v31, 0LL);
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
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  const MethodInfo *v58; // x1
  __int64 v59; // x0
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_418821E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418821E = 1;
  }
  memset(&v61, 0, sizeof(v61));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !targetVoiceIds )
    goto LABEL_39;
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_18:
      v35 = sub_B2C460(Instance);
      sub_B2C400(v35, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_23;
  }
  v29 = (VoicePlayCondMaster_o *)Instance;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v32 >= v33 )
        goto LABEL_19;
      if ( v32 >= targetVoiceIds->max_length )
        goto LABEL_18;
    }
LABEL_39:
    sub_B2C434(Instance, v20);
  }
LABEL_19:
  if ( !v30 )
    goto LABEL_39;
  v36 = UnityEngine_Random__Range_35348680(0, v30->fields._size, 0LL);
  if ( v30->fields._size <= (unsigned int)v36 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  m_Items = (System_String_o **)&v30->fields._items->m_Items[v36];
LABEL_23:
  v37 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v39, v40, v41, v42, v43, v44);
  Instance = (DataManager_o *)this->fields.voiceIndividualShopList;
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v61 = v60;
LABEL_32:
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v49 )
      break;
    current = v61.fields.current;
    if ( !v61.fields.current )
      sub_B2C434(v49, v50);
    monitor = (int)v61.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        if ( v47 >= monitor )
        {
          v59 = sub_B2C460(v49);
          sub_B2C400(v59, 0LL);
        }
        v48 = *((_QWORD *)&current[2].klass + (int)v47);
        if ( !v48 )
          sub_B2C434(v49, v50);
        v49 = System_String__op_Equality(*(System_String_o **)(v48 + 16), v37, 0LL);
        if ( v49 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v47 >= monitor )
          goto LABEL_32;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      if ( !*p_randomVoiceList )
        sub_B2C434(v57, v58);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v58);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418821D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_22473/*"svtVoicePlay"*/, v3);
    byte_418821D = 1;
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
      sub_B2C434(0LL, v7);
    SePlayer__Destroy(*p_player, 0LL);
    this->fields.player = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.player, 0LL, v8, v9, v10, v11, v12, v13);
    this->fields.callbakEndPlay = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbakEndPlay, 0LL, v14, v15, v16, v17, v18, v19);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35308996(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22473/*"svtVoicePlay"*/,
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
  __int64 v11; // x0

  v2 = this;
  if ( (byte_4188219 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (EventSvtControl_o *)sub_B2C35C(&Method_EventSvtControl_SvtVoicePlayProc__, v3);
    byte_4188219 = 1;
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
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
      }
      v7 = randomVoiceList->m_Items[playCnt];
      if ( v7 )
      {
        additionalPerformances = v7->fields.additionalPerformances;
        v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v9, (Il2CppObject *)v2, Method_EventSvtControl_SvtVoicePlayProc__, 0LL);
        EventSvtControl__PlayPerformance(v2, additionalPerformances, 0, 1, v9, v10);
        return;
      }
LABEL_13:
      sub_B2C434(this, method);
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
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListOverwrite; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  VoicePlayCondMaster_o *v27; // x23
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v33; // x1
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Random_o *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  unsigned int v46; // w20
  struct ServantVoiceData_array *v47; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v49; // x0
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4188223 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_B2C35C(&System_Random_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4188223 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                eventId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_33;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v26,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_33;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_33;
        v27 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v50,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v51 = v50;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v51,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v28 )
            break;
          current = v51.fields.current;
          if ( !v51.fields.current )
            sub_B2C434(v28, v29);
          if ( !LODWORD(v51.fields.current[1].monitor) )
          {
            v49 = sub_B2C460(v28);
            sub_B2C400(v49, 0LL);
          }
          klass = v51.fields.current[2].klass;
          if ( !klass )
            sub_B2C434(v28, v29);
          if ( !v27 )
            sub_B2C434(v28, v29);
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
              sub_B2C434(isVoicePlay, v33);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v26,
              (EventMissionProgressRequest_Argument_ProgressData_o *)current,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v51,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v26 )
        {
          if ( v26->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
              (System_Int32_array **)callback,
              v24,
              v34,
              v35,
              v36,
              v37,
              v38);
            v39 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
            System_Random___ctor(v39, 0LL);
            if ( v39 )
            {
              v46 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v39->klass->vtable._7_Next.method)(
                      v39,
                      (unsigned int)v26->fields._size,
                      v39->klass->vtable._8_NextDouble.methodPtr);
              if ( v26->fields._size <= v46 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v47 = (struct ServantVoiceData_array *)v26->fields._items->m_Items[v46];
              this->fields.randomVoiceList = v47;
              sub_B2C2F8(
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
                EventSvtControl__svtVoicePlay(this, v23);
                return;
              }
            }
LABEL_33:
            sub_B2C434(Instance, v23);
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
  EventSvtControl__PlayPerformanceProc_d__60_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct EventSvtControl_o *_4__this; // x21
  Il2CppObject *v10; // x20
  struct EventSvtControl_o *v11; // x1
  Il2CppObject *animName; // x1
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *playEndAction; // x0
  struct EventSvtControl___c__DisplayClass60_0_o *_8__1; // x8
  Il2CppObject *v18; // x20
  System_Func_bool__o *v19; // x21
  UnityEngine_WaitUntil_o *v20; // x20

  v2 = this;
  if ( (byte_418419D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&Method_EventSvtControl___c__DisplayClass60_0__PlayPerformanceProc_b__0__, v4);
    sub_B2C35C(&EventSvtControl___c__DisplayClass60_0_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v6);
    this = (EventSvtControl__PlayPerformanceProc_d__60_o *)sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v7);
    byte_418419D = 1;
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
  v10 = (Il2CppObject *)sub_B2C42C(EventSvtControl___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor(v10, 0LL);
  v2->fields.__8__1 = (struct EventSvtControl___c__DisplayClass60_0_o *)v10;
  sub_B2C2F8(&v2->fields.__8__1, v10);
  this = (EventSvtControl__PlayPerformanceProc_d__60_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_22;
  v11 = v2->fields.__4__this;
  *(_QWORD *)&this->fields.__1__state = v11;
  sub_B2C2F8(&this->fields, v11);
  this = (EventSvtControl__PlayPerformanceProc_d__60_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_22;
  animName = (Il2CppObject *)v2->fields.animName;
  this->fields.__2__current = animName;
  sub_B2C2F8(&this->fields.__2__current, animName);
  delay = v2->fields.delay;
  if ( delay <= 0.0 )
  {
LABEL_11:
    if ( _4__this )
    {
      this = (EventSvtControl__PlayPerformanceProc_d__60_o *)_4__this->fields.animationRef;
      if ( this )
      {
        UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
        _8__1 = v2->fields.__8__1;
        if ( _8__1 )
        {
          this = (EventSvtControl__PlayPerformanceProc_d__60_o *)_4__this->fields.animationRef;
          if ( this )
          {
            UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0LL);
            if ( v2->fields.isWaitPerformance )
            {
              v18 = (Il2CppObject *)v2->fields.__8__1;
              v19 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v19,
                v18,
                Method_EventSvtControl___c__DisplayClass60_0__PlayPerformanceProc_b__0__,
                (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
              v20 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v20, v19, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v20;
              sub_B2C2F8(&v2->fields.__2__current, v20);
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
    sub_B2C434(this, method);
  }
  v14 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v14, delay, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, v14);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_EventSvtControl__PlayPerformanceProc_d__60_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
    sub_B2C434(this, a);
  return System_Int32__Equals_38381340((int32_t)&v5, voice->fields.form, 0LL);
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
  sub_B2C2F8(&this[1].fields.CS___8__locals1, vdArray);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL);
}