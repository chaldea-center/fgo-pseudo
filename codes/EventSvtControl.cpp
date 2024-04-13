void __fastcall EventSvtControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E846E & 1) == 0 )
  {
    sub_B5D5C4(&EventSvtControl_TypeInfo, v1, v2, v3);
    byte_42E846E = 1;
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
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UnityEngine_Object_o *objectRef; // x21
  System_Action_o *v23; // x0
  System_Action_o *v24; // x21
  struct System_Action_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Action_o **p_performanceEndAction; // x20
  __int64 v33; // x1
  UnityEngine_GameObject_o *transform; // x0
  float v35; // s0
  float v36; // s1
  float v37; // s2
  float v38; // s10
  float v39; // s8
  float v40; // s9
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_GameObject_o *v42; // x20
  EventSvtControl_c *v43; // x0
  float v44; // s10
  UnityEngine_GameObject_o *v45; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  EventSvtControl_o *v60; // x0
  const MethodInfo *v61; // x1
  UnityEngine_Vector3_o v62; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42E846C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAction, (_DWORD)method, v4);
    sub_B5D5C4(&Method_EventSvtControl_ReleasePerformance__, v7, v8, v9);
    sub_B5D5C4(&EventSvtControl_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3531/*"CallPerformanceEndAction"*/, v19, v20, v21);
    byte_42E846C = 1;
  }
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(objectRef, 0LL, 0LL) )
  {
    v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0LL);
    v25 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)endAction,
                                      (System_Delegate_o *)v24,
                                      0LL);
    if ( v25 && v25->klass != System_Action_TypeInfo )
    {
      v60 = (EventSvtControl_o *)sub_B5D990(v25);
      EventSvtControl__CallPerformanceEndAction(v60, v61);
      return;
    }
    this->fields.performanceEndAction = v25;
    p_performanceEndAction = &this->fields.performanceEndAction;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.performanceEndAction,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    transform = this->fields.objectRef;
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( transform )
      {
        *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
        transform = this->fields.objectRef;
        if ( transform )
        {
          v38 = v35;
          v39 = v36;
          v40 = v37;
          ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                transform,
                                                                                (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
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
            v23 = *p_performanceEndAction;
            if ( *p_performanceEndAction )
              goto LABEL_19;
            return;
          }
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            v42 = this->fields.objectRef;
            v43 = EventSvtControl_TypeInfo;
            v44 = v38 - (float)ComponentInChildren_Dropdown_DropdownItem[6].fields.m_CachedPtr;
            if ( (BYTE3(EventSvtControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventSvtControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo);
              v43 = EventSvtControl_TypeInfo;
            }
            v62.fields.x = v44;
            v62.fields.y = v39;
            v62.fields.z = v40;
            transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                      v42,
                                                      v43->static_fields->BASE_MOVE_TIME,
                                                      v62,
                                                      0LL);
            if ( transform )
            {
              v45 = transform;
              LODWORD(transform[1].klass) = 3;
              gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
              v45[3].klass = (UnityEngine_GameObject_c *)gameObject;
              sub_B5D560((BattleServantConfConponent_o *)&v45[3], gameObject, v47, v48, v49, v50, v51, v52);
              v53 = (System_Int32_array **)StringLiteral_3531/*"CallPerformanceEndAction"*/;
              v45[3].monitor = (void *)StringLiteral_3531/*"CallPerformanceEndAction"*/;
              sub_B5D560((BattleServantConfConponent_o *)&v45[3].monitor, v53, v54, v55, v56, v57, v58, v59);
              return;
            }
          }
        }
      }
    }
    sub_B5D69C(transform, v33);
  }
  if ( endAction )
  {
    v23 = endAction;
LABEL_19:
    System_Action__Invoke(v23, 0LL);
  }
}


void __fastcall EventSvtControl__EndPlay(EventSvtControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventSvtControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ServantVoiceData_array *randomVoiceList; // x8
  int v9; // w9
  ServantVoiceData_o *v10; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x5
  __int64 v14; // x0

  v4 = this;
  if ( (byte_42E845F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (EventSvtControl_o *)sub_B5D5C4(&Method_EventSvtControl_EndPlayProc__, v5, v6, v7);
    byte_42E845F = 1;
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
      v9 = v4->fields.playCnt - 1;
      if ( v9 >= randomVoiceList->max_length )
      {
        v14 = sub_B5D6C8(this);
        sub_B5D668(v14, 0LL);
      }
      v10 = randomVoiceList->m_Items[v9];
      if ( !v10 )
LABEL_10:
        sub_B5D69C(this, method);
      additionalPerformances = v10->fields.additionalPerformances;
      v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)v4, Method_EventSvtControl_EndPlayProc__, 0LL);
      EventSvtControl__PlayPerformance(v4, additionalPerformances, 2, 1, v12, v13);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v14; // x8
  BattleServantConfConponent_o *p_player; // x0
  BattleServantConfConponent_o *p_callbakEndPlay; // x0
  System_Action_o *callbakEndPlay; // x20
  BattleServantConfConponent_o *p_callbackStopVoice; // x0
  System_Action_o *callbackStopVoice; // x20
  __int64 v20; // x0

  v8 = this;
  if ( (byte_42E8460 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22778/*"svtVoicePlay"*/, (_DWORD)method, (_DWORD)v2, v3);
    this = (EventSvtControl_o *)sub_B5D5C4(&StringLiteral_5571/*"END_PLAY"*/, v9, v10, v11);
    byte_42E8460 = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= randomVoiceList->max_length )
      {
        v20 = sub_B5D6C8(this);
        sub_B5D668(v20, 0LL);
      }
      v14 = randomVoiceList->m_Items[playCnt];
      if ( v14 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_22778/*"svtVoicePlay"*/,
          v14->fields.delay,
          0LL);
        return;
      }
    }
LABEL_16:
    sub_B5D69C(this, method);
  }
  p_player = (BattleServantConfConponent_o *)&v8->fields.player;
  if ( v8->fields.player )
  {
    p_player->klass = 0LL;
    sub_B5D560(p_player, 0LL, v2, v3, v4, v5, v6, v7);
  }
  p_callbakEndPlay = (BattleServantConfConponent_o *)&v8->fields.callbakEndPlay;
  callbakEndPlay = v8->fields.callbakEndPlay;
  v8->fields.playCnt = 0;
  *(_WORD *)&v8->fields.isUnSkippable = 0;
  v8->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    p_callbakEndPlay->klass = 0LL;
    sub_B5D560(p_callbakEndPlay, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(callbakEndPlay, 0LL);
  }
  else
  {
    p_callbackStopVoice = (BattleServantConfConponent_o *)&v8->fields.callbackStopVoice;
    callbackStopVoice = v8->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      p_callbackStopVoice->klass = 0LL;
      sub_B5D560(p_callbackStopVoice, 0LL, v2, v3, v4, v5, v6, v7);
      System_Action__Invoke(callbackStopVoice, 0LL);
    }
    else
    {
      this = (EventSvtControl_o *)v8->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5571/*"END_PLAY"*/, 0LL);
    }
  }
}


bool __fastcall EventSvtControl__GetIsUnSkippableByVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  Il2CppObject *current; // x21
  int monitor; // w8
  unsigned int v18; // w22
  __int64 v19; // x23
  _BOOL8 v20; // x0
  __int64 v21; // x1
  _BOOL4 v22; // w19
  int v23; // w20
  __int64 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E8468 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__,
      (_DWORD)voiceId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v12, v13, v14);
    byte_42E8468 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_B5D69C(0LL, voiceId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListBoxGacha,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v28 = v27;
  do
  {
LABEL_12:
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v20 )
    {
      v22 = 0;
      v23 = 1;
      goto LABEL_15;
    }
    current = v28.fields.current;
    if ( !v28.fields.current )
      sub_B5D69C(v20, v21);
    monitor = (int)v28.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= monitor )
    {
      v25 = sub_B5D6C8(v20);
      sub_B5D668(v25, 0LL);
    }
    v19 = *((_QWORD *)&current[2].klass + (int)v18);
    if ( !v19 )
      sub_B5D69C(v20, v21);
    v20 = System_String__op_Equality(*(System_String_o **)(v19 + 16), voiceId, 0LL);
    if ( v20 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v18 >= monitor )
      goto LABEL_12;
  }
  v23 = 3;
  v22 = *(_BYTE *)(v19 + 68) != 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v22 & ((unsigned int)(v23 + 1) >> 2);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  DataManager_o *Instance; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v49; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x23
  __int64 v51; // x8
  unsigned __int64 v52; // x26
  signed __int64 v53; // x27
  System_String_o *v54; // x25
  __int64 v55; // x0
  int32_t v56; // w21
  System_String_o *v57; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v67; // w24
  __int64 v68; // x8
  _BOOL8 v69; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x0
  const MethodInfo *v78; // x1
  __int64 v79; // x0
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E8466 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId, (_DWORD)targetVoiceIds, callback);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    byte_42E8466 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_B5D69C(Instance, v40);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_19:
      v55 = sub_B5D6C8(Instance);
      sub_B5D668(v55, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_24;
  }
  v49 = (VoicePlayCondMaster_o *)Instance;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  v51 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v51 >= 1 )
  {
    v52 = 0LL;
    v53 = (int)v51;
    while ( v49 )
    {
      v54 = targetVoiceIds->m_Items[v52];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v49, svtId, v54, 0LL, -1LL, -1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v50 )
          goto LABEL_41;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v50,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v52 >= v53 )
        goto LABEL_20;
      if ( v52 >= targetVoiceIds->max_length )
        goto LABEL_19;
    }
    goto LABEL_41;
  }
LABEL_20:
  if ( !v50 )
    goto LABEL_41;
  v56 = UnityEngine_Random__Range_35654020(0, v50->fields._size, 0LL);
  if ( v50->fields._size <= (unsigned int)v56 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  m_Items = (System_String_o **)&v50->fields._items->m_Items[v56];
LABEL_24:
  v57 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v59, v60, v61, v62, v63, v64);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v80,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v81 = v80;
LABEL_33:
  while ( 1 )
  {
    v69 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v81,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v69 )
      break;
    current = v81.fields.current;
    if ( !v81.fields.current )
      sub_B5D69C(v69, v70);
    monitor = (int)v81.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= monitor )
        {
          v79 = sub_B5D6C8(v69);
          sub_B5D668(v79, 0LL);
        }
        v68 = *((_QWORD *)&current[2].klass + (int)v67);
        if ( !v68 )
          sub_B5D69C(v69, v70);
        v69 = System_String__op_Equality(*(System_String_o **)(v68 + 16), v57, 0LL);
        if ( v69 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v67 >= monitor )
          goto LABEL_33;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      if ( !*p_randomVoiceList )
        sub_B5D69C(v77, v78);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v78);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v81,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__PlayPerformance(
        EventSvtControl_o *this,
        ServantVoicePerformance_o *performances,
        int32_t timing,
        bool isWaitPerformance,
        System_Action_o *playEndAction,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct UnityEngine_GameObject_o **p_objectRef; // x24
  UnityEngine_Object_o *objectRef; // x25
  __int64 v19; // x1
  UnityEngine_GameObject_o *performanceRoot; // x0
  System_String_o *assetName; // x25
  UnityEngine_Transform_o *transform; // x26
  System_Int32_array **Effect; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *v30; // x25
  struct UnityEngine_Animation_o **p_animationRef; // x25
  UnityEngine_Object_o *animationRef; // x26
  System_Int32_array **ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *v40; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v42; // x22
  const MethodInfo *v43; // x4
  System_Collections_IEnumerator_o *v44; // x1

  if ( (byte_42E846A & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaResultEffectComponent_TypeInfo, (_DWORD)performances, timing, isWaitPerformance);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E846A = 1;
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.objectRef, Effect, v24, v25, v26, v27, v28, v29);
    v30 = (UnityEngine_Object_o *)*p_objectRef;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Implicit(v30, 0LL) )
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
    sub_B5D69C(performanceRoot, v19);
  ComponentInChildren_Dropdown_DropdownItem = (System_Int32_array **)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                       performanceRoot,
                                                                       (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  *p_animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_Dropdown_DropdownItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animationRef,
    ComponentInChildren_Dropdown_DropdownItem,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (UnityEngine_Object_o *)*p_animationRef;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Implicit(v40, 0LL) )
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
  v42 = *p_afterPerformance;
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v42->fields.name, 0LL) )
  {
    v44 = EventSvtControl__PlayPerformanceProc(
            this,
            v42->fields.name,
            v42->fields.delay,
            isWaitPerformance,
            playEndAction,
            v43);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v44, 0LL);
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

  if ( (byte_42E846B & 1) == 0 )
  {
    sub_B5D5C4(&EventSvtControl__PlayPerformanceProc_d__61_TypeInfo, (_DWORD)animName, isWaitPerformance, playEndAction);
    byte_42E846B = 1;
  }
  v11 = sub_B5D694(EventSvtControl__PlayPerformanceProc_d__61_TypeInfo);
  EventSvtControl__PlayPerformanceProc_d__61___ctor((EventSvtControl__PlayPerformanceProc_d__61_o *)v11, 0, 0LL);
  if ( !v11 )
    sub_B5D69C(v12, v13);
  *(_QWORD *)(v11 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = animName;
  sub_B5D560((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)animName, v20, v21, v22, v23, v24, v25);
  *(float *)(v11 + 48) = delay;
  *(_BYTE *)(v11 + 64) = isWaitPerformance;
  *(_QWORD *)(v11 + 72) = playEndAction;
  sub_B5D560(
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  DataManager_o *Instance; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v49; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x23
  __int64 v51; // x8
  unsigned __int64 v52; // x26
  signed __int64 v53; // x27
  System_String_o *v54; // x25
  __int64 v55; // x0
  int32_t v56; // w21
  System_String_o *v57; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v67; // w24
  __int64 v68; // x8
  _BOOL8 v69; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x0
  const MethodInfo *v78; // x1
  __int64 v79; // x0
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E8465 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId, (_DWORD)targetVoiceIds, callback);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    byte_42E8465 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_B5D69C(Instance, v40);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_19:
      v55 = sub_B5D6C8(Instance);
      sub_B5D668(v55, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_24;
  }
  v49 = (VoicePlayCondMaster_o *)Instance;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  v51 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v51 >= 1 )
  {
    v52 = 0LL;
    v53 = (int)v51;
    while ( v49 )
    {
      v54 = targetVoiceIds->m_Items[v52];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v49, svtId, v54, 0LL, -1LL, -1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v50 )
          goto LABEL_41;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v50,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v52 >= v53 )
        goto LABEL_20;
      if ( v52 >= targetVoiceIds->max_length )
        goto LABEL_19;
    }
    goto LABEL_41;
  }
LABEL_20:
  if ( !v50 )
    goto LABEL_41;
  v56 = UnityEngine_Random__Range_35654020(0, v50->fields._size, 0LL);
  if ( v50->fields._size <= (unsigned int)v56 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  m_Items = (System_String_o **)&v50->fields._items->m_Items[v56];
LABEL_24:
  v57 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v59, v60, v61, v62, v63, v64);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v80,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v81 = v80;
LABEL_33:
  while ( 1 )
  {
    v69 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v81,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v69 )
      break;
    current = v81.fields.current;
    if ( !v81.fields.current )
      sub_B5D69C(v69, v70);
    monitor = (int)v81.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= monitor )
        {
          v79 = sub_B5D6C8(v69);
          sub_B5D668(v79, 0LL);
        }
        v68 = *((_QWORD *)&current[2].klass + (int)v67);
        if ( !v68 )
          sub_B5D69C(v69, v70);
        v69 = System_String__op_Equality(*(System_String_o **)(v68 + 16), v57, 0LL);
        if ( v69 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v67 >= monitor )
          goto LABEL_33;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      if ( !*p_randomVoiceList )
        sub_B5D69C(v77, v78);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v78);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v81,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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

  if ( (byte_42E846D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E846D = 1;
  }
  this->fields.animationRef = 0LL;
  p_animationRef = &this->fields.animationRef;
  sub_B5D560((BattleServantConfConponent_o *)p_animationRef, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = (UnityEngine_Object_o *)*(p_animationRef - 1);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(v10, 0LL);
}


bool __fastcall EventSvtControl__SetBoxGachaTalkInfo(
        EventSvtControl_o *this,
        int32_t svtId,
        BoxGachaTalkEntity_o *talkEntity,
        BoxGachaTalkInfo_o **info,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  BoxGachaTalkInfo_o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  DataManager_o *Instance; // x0
  __int64 v52; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_int__o *v54; // x21
  struct System_String_array *befVoiceIds; // x10
  __int64 v56; // x9
  unsigned __int64 v57; // x24
  int v58; // w20
  System_String_o *v59; // x25
  int monitor; // w8
  int i; // w27
  __int64 v62; // x20
  _BOOL8 isVoicePlay; // x0
  __int64 v64; // x1
  __int64 v65; // x0
  __int64 v66; // x1
  Il2CppObject *current; // x28
  int v68; // w27
  int v69; // w8
  __int64 v70; // x0
  unsigned __int64 v71; // x20
  unsigned int v72; // w23
  int v73; // w24
  System_String_o *v74; // x22
  void *v75; // x8
  int v76; // w25
  __int64 v77; // x27
  _BOOL8 v78; // x0
  __int64 v79; // x1
  Il2CppObject *v80; // x28
  int v81; // w8
  __int64 v82; // x0
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  __int64 v85; // x0
  __int64 v86; // [xsp+8h] [xbp-D8h]
  int v87; // [xsp+10h] [xbp-D0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-C8h]
  struct System_String_array *v89; // [xsp+30h] [xbp-B0h]
  int v91; // [xsp+40h] [xbp-A0h]
  _BYTE v92[32]; // [xsp+48h] [xbp-98h] BYREF
  int v93; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v94; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42E8464 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaTalkInfo_TypeInfo, svtId, (_DWORD)talkEntity, info);
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    byte_42E8464 = 1;
  }
  memset(&v94, 0, sizeof(v94));
  v93 = 0;
  v44 = (BoxGachaTalkInfo_o *)sub_B5D694(BoxGachaTalkInfo_TypeInfo);
  BoxGachaTalkInfo___ctor(v44, 0LL);
  *info = v44;
  sub_B5D560((BattleServantConfConponent_o *)info, (System_Int32_array **)v44, v45, v46, v47, v48, v49, v50);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v54 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v54,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !talkEntity )
    goto LABEL_73;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_73;
  v56 = *(_QWORD *)&befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  v87 = v56;
  if ( (int)v56 < 1 )
  {
    v68 = 0;
    if ( !v54 )
      return 0;
  }
  else
  {
    v86 = *(_QWORD *)&befVoiceIds->max_length;
    if ( !(_DWORD)v86 )
      goto LABEL_74;
    v57 = 0LL;
    v58 = 0;
    v89 = befVoiceIds;
    while ( 1 )
    {
      v91 = v58;
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_73;
      v59 = befVoiceIds->m_Items[v57];
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v92,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v94 = *(System_Collections_Generic_List_Enumerator_T__o *)v92;
      while ( 1 )
      {
        isVoicePlay = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v94,
                        (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( !isVoicePlay )
          break;
        current = v94.fields.current;
        if ( !v94.fields.current )
          sub_B5D69C(isVoicePlay, v64);
        monitor = (int)v94.fields.current[1].monitor;
        if ( monitor >= 1 )
        {
          for ( i = 0; i < monitor; ++i )
          {
            if ( i >= (unsigned int)monitor )
            {
              v70 = sub_B5D6C8(isVoicePlay);
              sub_B5D668(v70, 0LL);
            }
            v62 = *((_QWORD *)&current[2].klass + i);
            if ( !v62 )
              sub_B5D69C(isVoicePlay, v64);
            isVoicePlay = System_String__op_Equality(*(System_String_o **)(v62 + 16), v59, 0LL);
            if ( isVoicePlay )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                sub_B5D69C(isVoicePlay, v64);
              isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                              MasterData_WarQuestSelectionMaster,
                              svtId,
                              v59,
                              0LL,
                              -1LL,
                              -1,
                              0LL);
              if ( isVoicePlay )
              {
                if ( !*info )
                  sub_B5D69C(0LL, v64);
                BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v62 + 16),
                  *(System_String_o **)(v62 + 48),
                  0LL);
                if ( !v54 )
                  sub_B5D69C(v65, v66);
                System_Collections_Generic_List_int___Add(
                  v54,
                  v57,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            monitor = (int)current[1].monitor;
          }
        }
      }
      *(_DWORD *)&v92[4 * v91 + 24] = 202;
      v58 = ++v93;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v94,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      v68 = v58;
      befVoiceIds = v89;
      if ( v58 )
      {
        v69 = v58 - 1;
        if ( *(_DWORD *)&v92[4 * v58 + 20] == 202 )
        {
          v68 = --v58;
          v93 = v69;
        }
      }
      if ( (__int64)++v57 >= v87 )
        break;
      if ( v57 >= v89->max_length )
        goto LABEL_74;
    }
    LODWORD(v56) = v86;
    if ( !v54 )
      return 0;
  }
  if ( !v54->fields._size )
    return 0;
  if ( (int)v56 >= 1 )
  {
    if ( aftVoiceIds )
    {
      v71 = 0LL;
      v72 = 0;
      while ( v71 < aftVoiceIds->max_length )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          goto LABEL_73;
        v73 = v68;
        v74 = aftVoiceIds->m_Items[v71];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v92,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v94 = *(System_Collections_Generic_List_Enumerator_T__o *)v92;
        while ( 1 )
        {
          v78 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v94,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v78 )
            break;
          v80 = v94.fields.current;
          if ( !v94.fields.current )
            sub_B5D69C(v78, v79);
          v75 = v94.fields.current[1].monitor;
          if ( (int)v75 >= 1 )
          {
            v76 = 0;
            do
            {
              if ( v76 >= (unsigned int)v75 )
              {
                v82 = sub_B5D6C8(v78);
                sub_B5D668(v82, 0LL);
              }
              v77 = *((_QWORD *)&v80[2].klass + v76);
              if ( !v77 )
                sub_B5D69C(v78, v79);
              v78 = System_String__op_Equality(*(System_String_o **)(v77 + 16), v74, 0LL);
              if ( v78 )
              {
                if ( v54->fields._size <= v72 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                if ( v71 == v54->fields._items->m_Items[v72 + 1] )
                {
                  if ( !*info )
                    sub_B5D69C(0LL, v79);
                  BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v77 + 16),
                    *(System_String_o **)(v77 + 48),
                    0LL);
                  ++v72;
                }
              }
              LODWORD(v75) = v80[1].monitor;
              ++v76;
            }
            while ( v76 < (int)v75 );
          }
        }
        *(_DWORD *)&v92[4 * v73 + 24] = 377;
        v68 = ++v93;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v94,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v68 )
        {
          v81 = v68 - 1;
          if ( *(_DWORD *)&v92[4 * v68 + 20] == 377 )
          {
            --v68;
            v93 = v81;
          }
        }
        if ( (__int64)++v71 >= v87 )
          goto LABEL_70;
      }
LABEL_74:
      v85 = sub_B5D6C8(Instance);
      sub_B5D668(v85, 0LL);
    }
LABEL_73:
    sub_B5D69C(Instance, v52);
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
  sub_B5D560(
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
  sub_B5D560(v17, v18, v11, v12, v13, v14, v15, v16);
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
  sub_B5D560(
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
  sub_B5D560(v9, (System_Int32_array **)listOverwrite, v10, v11, v12, v13, v14, v15);
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
  sub_B5D560(
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
  sub_B5D560(v17, v18, v11, v12, v13, v14, v15, v16);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(v17, v18, v11, v12, v13, v14, v15, v16);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v23; // x8
  System_Int32_array **id; // x1
  struct ServantVoiceData_array *v25; // x8
  __int64 v26; // x9
  Il2CppClass **v27; // x10
  EventSvtControl_o **v28; // x10
  Il2CppClass *v29; // x11
  Il2CppClass *v30; // t1
  int32_t vcName; // w20
  float FadeTime; // s0
  float v33; // s8
  struct ServantVoiceData_array *v34; // x8
  __int64 v35; // x9
  ServantVoiceData_o *v36; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  int32_t face; // w20
  StandFigureCollect_o *v39; // x8
  struct ServantVoiceData_array *v40; // x9
  __int64 v41; // x10
  ServantVoiceData_o *v42; // x9
  System_String_o *asstName; // x20
  System_String_o *v44; // x21
  float volume; // s8
  System_Action_o *v46; // x22
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x5
  struct ServantVoiceData_array *v55; // x8
  __int64 v56; // x9
  ServantVoiceData_o *v57; // x8
  struct ServantVoiceData_array *v58; // x8
  __int64 v59; // x9
  ServantVoiceData_o *v60; // x8
  struct System_Int32_array *multiFace; // x22
  __int64 v62; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *v63; // x25
  StandFigureCollect_o *v64; // x8
  __int64 v65; // x0

  v8 = this;
  if ( (byte_42E845E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9, v10, v11);
    sub_B5D5C4(&Method_EventSvtControl_EndPlay__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v15, v16, v17);
    this = (EventSvtControl_o *)sub_B5D5C4(&SoundManager_TypeInfo, v18, v19, v20);
    byte_42E845E = 1;
  }
  randomVoiceList = v8->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_50;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= randomVoiceList->max_length )
    goto LABEL_51;
  v23 = randomVoiceList->m_Items[playCnt];
  if ( !v23 )
    goto LABEL_50;
  id = (System_Int32_array **)v23->fields.id;
  v8->fields.vcName = (struct System_String_o *)id;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
  v25 = v8->fields.randomVoiceList;
  if ( !v25 )
    goto LABEL_50;
  v26 = v8->fields.playCnt;
  if ( (unsigned int)v26 >= v25->max_length )
    goto LABEL_51;
  v27 = &v25->obj.klass + v26;
  v30 = v27[4];
  v28 = (EventSvtControl_o **)(v27 + 4);
  v29 = v30;
  if ( !v30 )
    goto LABEL_50;
  v8->fields.isUnSkippable = BYTE4(v29->_1.element_class);
  if ( (unsigned int)v26 >= v25->max_length )
    goto LABEL_51;
  this = *v28;
  if ( !*v28 )
    goto LABEL_50;
  vcName = (int32_t)this->fields.vcName;
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
  this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
  v33 = FadeTime;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v34 = v8->fields.randomVoiceList;
    if ( !v34 )
      goto LABEL_50;
    v35 = v8->fields.playCnt;
    if ( (unsigned int)v35 >= v34->max_length )
      goto LABEL_51;
    v36 = v34->m_Items[v35];
    if ( !v36 )
      goto LABEL_50;
    standFigureCollectList = v8->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v36->fields.face;
      if ( !standFigureCollectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v39 = standFigureCollectList->fields._items->m_Items[0];
      if ( !v39 )
        goto LABEL_50;
      v40 = v8->fields.randomVoiceList;
      if ( !v40 )
        goto LABEL_50;
      v41 = v8->fields.playCnt;
      if ( (unsigned int)v41 >= v40->max_length )
        goto LABEL_51;
      v42 = v40->m_Items[v41];
      if ( !v42 )
        goto LABEL_50;
      this = (EventSvtControl_o *)v39->fields._standFigure_k__BackingField;
      if ( !this )
        goto LABEL_50;
      UIStandFigureR__SetFace_40975992((UIStandFigureR_o *)this, face, v42->fields.form, 0LL, v33, 0LL);
    }
    goto LABEL_25;
  }
  v58 = v8->fields.randomVoiceList;
  if ( !v58 )
    goto LABEL_50;
  v59 = v8->fields.playCnt;
  if ( (unsigned int)v59 >= v58->max_length )
    goto LABEL_51;
  v60 = v58->m_Items[v59];
  if ( !v60 )
    goto LABEL_50;
  multiFace = v60->fields.multiFace;
  if ( multiFace )
  {
    this = (EventSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                  (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( (_DWORD)this == multiFace->max_length )
    {
      if ( (int)this >= 1 )
      {
        v62 = 0LL;
        while ( (unsigned int)v62 < (unsigned int)this )
        {
          v63 = v8->fields.standFigureCollectList;
          if ( !v63 )
            goto LABEL_50;
          if ( v63->fields._size <= (unsigned int)v62 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v64 = v63->fields._items->m_Items[v62];
          if ( !v64 )
            goto LABEL_50;
          this = (EventSvtControl_o *)v64->fields._standFigure_k__BackingField;
          if ( !this )
            goto LABEL_50;
          UIStandFigureR__SetFace_40975992((UIStandFigureR_o *)this, multiFace->m_Items[v62 + 1], vcName, 0LL, v33, 0LL);
          this = (EventSvtControl_o *)multiFace->max_length;
          if ( (int)++v62 >= (int)this )
            goto LABEL_25;
        }
        goto LABEL_51;
      }
LABEL_25:
      asstName = v8->fields.asstName;
      v44 = v8->fields.vcName;
      volume = v8->fields.volume;
      v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v46, (Il2CppObject *)v8, Method_EventSvtControl_EndPlay__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v47 = (System_Int32_array **)SoundManager__playVoice_23391328(asstName, v44, volume, v46, 0LL);
      v8->fields.player = (struct SePlayer_o *)v47;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields.player, v47, v48, v49, v50, v51, v52, v53);
      if ( v8->fields.isSkipPerformance )
        goto LABEL_33;
      v55 = v8->fields.randomVoiceList;
      if ( !v55 )
LABEL_50:
        sub_B5D69C(this, method);
      v56 = v8->fields.playCnt;
      if ( (unsigned int)v56 < v55->max_length )
      {
        v57 = v55->m_Items[v56];
        if ( v57 )
        {
          EventSvtControl__PlayPerformance(v8, v57->fields.additionalPerformances, 1, 0, 0LL, v54);
LABEL_33:
          ++v8->fields.playCnt;
          return;
        }
        goto LABEL_50;
      }
LABEL_51:
      v65 = sub_B5D6C8(this);
      sub_B5D668(v65, 0LL);
    }
  }
}


bool __fastcall EventSvtControl__TryGetPlayableVoiceInfoList(
        EventSvtControl_o *this,
        System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o **voiceInfoList,
        System_Collections_Generic_List_ServantVoiceData____o *servantVoiceGroupData,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  VoicePlayCondMaster_o *Master_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_KeyValuePair_string__int___o *v67; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v74; // x22
  __int64 v75; // x0
  __int64 v76; // x1
  const MethodInfo_201EFD0 **v77; // x27
  System_String_o **v78; // x26
  const MethodInfo_1CB354C **v79; // x19
  _BOOL8 v80; // x0
  __int64 v81; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  EventSvtControl___c_c *v84; // x0
  struct EventSvtControl___c_StaticFields *static_fields; // x8
  System_String_o *v86; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__54_0; // x25
  VoicePlayCondMaster_o *v88; // x24
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v89; // x21
  EventSvtControl_o *v90; // x22
  const MethodInfo_201EFD0 **v91; // x20
  const MethodInfo_1CB354C **v92; // x27
  System_String_o **v93; // x19
  Il2CppObject *v94; // x26
  struct EventSvtControl___c_StaticFields *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Collections_Generic_IEnumerable_string__o *v102; // x1
  System_String_o *v103; // x0
  __int64 v104; // x1
  WarBoardAIRoute_RouteData_o *v105; // x24
  System_String_o *Weight; // x2
  const MethodInfo_237D8C8 *v107; // x4
  __int64 v108; // x1
  __int64 v110; // x0
  System_String_o *v112; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o v114; // [xsp+28h] [xbp-88h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+38h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v116; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o v117; // 0:x0.16

  if ( (byte_42E8469 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_VoicePlayCondMaster___,
      (_DWORD)voiceInfoList,
      (_DWORD)servantVoiceGroupData,
      method);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_ServantVoiceData__string___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_ServantVoiceData__string__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string__Contains__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_HashSet_string__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__, v48, v49, v50);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__,
      v51,
      v52,
      v53);
    sub_B5D5C4(&System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__54_0__, v57, v58, v59);
    sub_B5D5C4(&EventSvtControl___c_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_707/*","*/, v63, v64, v65);
    byte_42E8469 = 1;
  }
  memset(&v116, 0, sizeof(v116));
  *(_QWORD *)&v114.fields.value = 0LL;
  condEntity = 0LL;
  v114.fields.key = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v67 = (System_Collections_Generic_List_KeyValuePair_string__int___o *)sub_B5D694(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_string__int_____ctor(
    v67,
    (const MethodInfo_2FB0248 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v67;
  sub_B5D560((BattleServantConfConponent_o *)voiceInfoList, (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
  v74 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v74,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  if ( !servantVoiceGroupData )
    goto LABEL_34;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v113,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)servantVoiceGroupData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v77 = (const MethodInfo_201EFD0 **)&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__;
  v78 = (System_String_o **)&StringLiteral_707/*","*/;
  v79 = (const MethodInfo_1CB354C **)&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___;
  v116 = v113;
  while ( 1 )
  {
    v80 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(&v116, *v77);
    if ( !v80 )
      break;
    current = v116.fields.current;
    if ( !v116.fields.current )
      sub_B5D69C(v80, v81);
    if ( !LODWORD(v116.fields.current[1].monitor) )
    {
      v110 = sub_B5D6C8(v80);
      sub_B5D668(v110, 0LL);
    }
    klass = v116.fields.current[2].klass;
    if ( !klass )
      sub_B5D69C(v80, v81);
    if ( !Master_WarQuestSelectionMaster )
      sub_B5D69C(v80, v81);
    if ( VoicePlayCondMaster__isVoicePlay_21340036(
           Master_WarQuestSelectionMaster,
           this->fields.svtId,
           (System_String_o *)klass->_1.name,
           &condEntity,
           0LL,
           -1LL,
           -1,
           0LL) )
    {
      v84 = EventSvtControl___c_TypeInfo;
      if ( (BYTE3(EventSvtControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventSvtControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
        v84 = EventSvtControl___c_TypeInfo;
      }
      static_fields = v84->static_fields;
      v86 = *v78;
      _9__54_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__54_0;
      if ( !_9__54_0 )
      {
        if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v84);
          static_fields = EventSvtControl___c_TypeInfo->static_fields;
        }
        v112 = v86;
        v88 = Master_WarQuestSelectionMaster;
        v89 = v74;
        v90 = this;
        v91 = v77;
        v92 = v79;
        v93 = v78;
        v94 = (Il2CppObject *)static_fields->__9;
        _9__54_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_ServantVoiceData__string__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__54_0,
          v94,
          Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__54_0__,
          (const MethodInfo_2C3041C *)Method_System_Func_ServantVoiceData__string___ctor__);
        v95 = EventSvtControl___c_TypeInfo->static_fields;
        v95->__9__54_0 = (struct System_Func_ServantVoiceData__string__o *)_9__54_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v95->__9__54_0,
          (System_Int32_array **)_9__54_0,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
        v78 = v93;
        v79 = v92;
        v77 = v91;
        this = v90;
        v74 = v89;
        Master_WarQuestSelectionMaster = v88;
        v86 = v112;
      }
      v102 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                                   (System_Func_TSource__TResult__o *)_9__54_0,
                                                                   *v79);
      v103 = System_String__Join_44633232(v86, v102, 0LL);
      if ( !v74 )
        sub_B5D69C(v103, v104);
      v105 = (WarBoardAIRoute_RouteData_o *)v103;
      if ( !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
              (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v74,
              (BattleBuffData_BuffData_o *)v103,
              (const MethodInfo_25064D8 *)Method_System_Collections_Generic_HashSet_string__Contains__) )
      {
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          v74,
          v105,
          (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_string__Add__);
        Weight = (System_String_o *)(unsigned int)VoicePlayCondMaster__GetWeight(
                                                    Master_WarQuestSelectionMaster,
                                                    condEntity,
                                                    10,
                                                    0LL);
        v117.fields.key = (struct System_String_o *)&v114;
        *(_QWORD *)&v117.fields.value = current;
        System_Collections_Generic_KeyValuePair_string__int____ctor(
          v117,
          Weight,
          Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
          v107);
        if ( !*voiceInfoList )
          sub_B5D69C(0LL, v108);
        System_Collections_Generic_List_KeyValuePair_string__int____Add(
          (System_Collections_Generic_List_KeyValuePair_string__int___o *)*voiceInfoList,
          v114,
          (const MethodInfo_2FB0FD8 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v116,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( !*voiceInfoList )
LABEL_34:
    sub_B5D69C(v75, v76);
  return (*voiceInfoList)->fields._size > 0;
}


void __fastcall EventSvtControl__boxGachaPlayVoice(
        EventSvtControl_o *this,
        EventSvtControl_PlayBoxGachVoiceArg_o *arg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int128 v42; // q1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  const MethodInfo *v49; // x1
  struct System_Action_o *v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x22
  __int64 v65; // x0
  __int64 v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x23
  System_Int32_array **current; // x1
  System_Int32_array ***v75; // x24
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  _BOOL8 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x27
  int v85; // w8
  unsigned int v86; // w26
  __int64 v87; // x28
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x1
  __int64 v95; // x0
  const MethodInfo *v96; // x1
  __int64 v97; // x0
  __int64 v98; // x1
  System_Action_o *v99; // x0
  WebViewManager_o *Instance; // x0
  __int64 v101; // x1
  System_String_o *v102; // x20
  System_Action_o *v103; // x23
  CommonUI_o *v104; // x19
  System_String_o *v105; // x21
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 v112; // x0
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v114; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42E8463 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)arg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&EventSvtControl___c__DisplayClass48_0_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_EventSvtControl___c__DisplayClass48_1__boxGachaPlayVoice_b__0__, v24, v25, v26);
    sub_B5D5C4(&EventSvtControl___c__DisplayClass48_1_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42E8463 = 1;
  }
  memset(&v114, 0, sizeof(v114));
  v33 = sub_B5D694(EventSvtControl___c__DisplayClass48_0_TypeInfo);
  EventSvtControl___c__DisplayClass48_0___ctor((EventSvtControl___c__DisplayClass48_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_35;
  *(_QWORD *)(v33 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
  v42 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v33 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v33 + 24) = v42;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 24), 0LL, v43, v44, v45, v46, v47, v48);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v49);
  System_String__IsNullOrEmpty(*(System_String_o **)(v33 + 24), 0LL);
  v50 = *(struct System_Action_o **)(v33 + 48);
  this->fields.callbakEndPlay = v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v58, v59, v60, v61, v62, v63);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_B5D69C(voiceListBoxGacha, v35);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v113,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListBoxGacha,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v114 = v113;
LABEL_17:
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v114,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v64 = sub_B5D694(EventSvtControl___c__DisplayClass48_1_TypeInfo);
    EventSvtControl___c__DisplayClass48_1___ctor((EventSvtControl___c__DisplayClass48_1_o *)v64, 0LL);
    if ( !v64 )
      sub_B5D69C(v65, v66);
    *(_QWORD *)(v64 + 24) = v33;
    v73 = v64 + 24;
    sub_B5D560((BattleServantConfConponent_o *)(v64 + 24), (System_Int32_array **)v33, v67, v68, v69, v70, v71, v72);
    current = (System_Int32_array **)v114.fields.current;
    *(_QWORD *)(v64 + 16) = v114.fields.current;
    v75 = (System_Int32_array ***)(v64 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v64 + 16), current, v76, v77, v78, v79, v80, v81);
    v84 = *(_QWORD *)(v64 + 16);
    if ( !v84 )
      sub_B5D69C(v82, v83);
    v85 = *(_DWORD *)(v84 + 24);
    if ( v85 >= 1 )
    {
      v86 = 0;
      while ( 1 )
      {
        if ( v86 >= v85 )
        {
          v112 = sub_B5D6C8(v82);
          sub_B5D668(v112, 0LL);
        }
        v87 = *(_QWORD *)(v84 + 8LL * (int)v86 + 32);
        if ( !v87 )
          sub_B5D69C(v82, v83);
        if ( !*(_QWORD *)v73 )
          sub_B5D69C(v82, v83);
        v82 = System_String__op_Equality(
                *(System_String_o **)(v87 + 16),
                *(System_String_o **)(*(_QWORD *)v73 + 24LL),
                0LL);
        if ( v82 )
          break;
        v85 = *(_DWORD *)(v84 + 24);
        if ( (int)++v86 >= v85 )
          goto LABEL_17;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(*(System_String_o **)(v87 + 72), 0LL) )
      {
        v94 = *v75;
        *p_randomVoiceList = (struct ServantVoiceData_array *)*v75;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.randomVoiceList, v94, v88, v89, v90, v91, v92, v93);
        if ( !*p_randomVoiceList )
          sub_B5D69C(v95, v96);
        this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
        if ( !*(_QWORD *)v73 )
          sub_B5D69C(v95, v96);
        this->fields.isSkipPerformance = *(_BYTE *)(*(_QWORD *)v73 + 32LL);
        EventSvtControl__svtVoicePlay(this, v96);
        if ( !*(_QWORD *)v73 )
          sub_B5D69C(v97, v98);
        v99 = *(System_Action_o **)(*(_QWORD *)v73 + 40LL);
        if ( v99 )
          System_Action__Invoke(v99, 0LL);
      }
      else
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v102 = *(System_String_o **)(v87 + 72);
        v103 = *(System_Action_o **)(v64 + 32);
        v104 = (CommonUI_o *)Instance;
        v105 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v103 )
        {
          v103 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v103,
            (Il2CppObject *)v64,
            Method_EventSvtControl___c__DisplayClass48_1__boxGachaPlayVoice_b__0__,
            0LL);
          *(_QWORD *)(v64 + 32) = v103;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v64 + 32),
            (System_Int32_array **)v103,
            v106,
            v107,
            v108,
            v109,
            v110,
            v111);
        }
        if ( !v104 )
          sub_B5D69C(Instance, v101);
        CommonUI__OpenNotificationDialog(v104, v105, v102, v103, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v114,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  BattleServantConfConponent_o *p_randomVoiceList; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v59; // x1
  _BOOL8 v60; // x0
  __int64 v61; // x1
  Il2CppObject *v62; // x23
  int v63; // w8
  unsigned int v64; // w20
  __int64 v65; // x8
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  VoicePlayCondMaster_o *v78; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x23
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v80; // x19
  signed __int64 size; // x19
  unsigned __int64 v82; // x20
  System_String_o *v83; // x27
  int v84; // w28
  System_Random_o *v85; // x25
  il2cpp_array_size_t v86; // w25
  _BOOL8 v87; // x0
  __int64 v88; // x1
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v91; // w19
  __int64 v92; // x8
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  int v99; // w19
  int v100; // w10
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Action_o *action; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v107; // [xsp+8h] [xbp-B8h]
  int v108; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v109; // [xsp+20h] [xbp-A0h] BYREF
  int v110[4]; // [xsp+38h] [xbp-88h]
  int v111; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v112; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42E845C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, (_DWORD)voiceIds, svtId, callbackEnds);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__AddRange__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor___68749864, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&System_Random_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    byte_42E845C = 1;
  }
  memset(&v112, 0, sizeof(v112));
  v111 = 0;
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = (BattleServantConfConponent_o *)&this->fields.randomVoiceList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
    0LL,
    *(System_String_array ***)&svtId,
    (System_String_array **)callbackEnds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_72;
  action = callbackEnds;
  if ( (int)voiceIds->max_length >= 2 )
  {
    v78 = (VoicePlayCondMaster_o *)Instance;
    v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v79,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
    v80 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v80,
      voiceIds->max_length,
      (const MethodInfo_30563CC *)Method_System_Collections_Generic_List_string___ctor___68749864);
    if ( !v80 )
      goto LABEL_72;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v80,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_string__AddRange__);
    v107 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v80;
    size = v80->fields._size;
    if ( (int)size >= 1 )
    {
      v82 = 0LL;
      do
      {
        if ( v82 >= voiceIds->max_length )
        {
LABEL_64:
          v104 = sub_B5D6C8(Instance);
          sub_B5D668(v104, 0LL);
        }
        if ( !v78 )
          goto LABEL_72;
        v83 = voiceIds->m_Items[v82];
        Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v78, svtId, v83, 0LL, -1LL, -1, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v79 )
            goto LABEL_72;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v79,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        }
      }
      while ( (__int64)++v82 < size );
    }
    if ( !v79 )
      goto LABEL_72;
    v84 = v79->fields._size - 1;
    if ( v84 >= 0 )
    {
      v108 = 0;
      do
      {
        v85 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
        System_Random___ctor(v85, 0LL);
        if ( !v85 )
          goto LABEL_72;
        Instance = (DataManager_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v85->klass->vtable._7_Next.method)(
                                      v85,
                                      (unsigned int)v79->fields._size,
                                      v85->klass->vtable._8_NextDouble.methodPtr);
        if ( !this->fields.voiceListMission )
          goto LABEL_72;
        v86 = (unsigned int)Instance;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v109,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListMission,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v112 = v109;
        do
        {
          v87 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v112,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v87 )
            break;
          current = v112.fields.current;
          if ( !v112.fields.current )
            sub_B5D69C(v87, v88);
          monitor = (int)v112.fields.current[1].monitor;
          if ( monitor >= 1 )
          {
            v91 = 0;
            while ( 1 )
            {
              if ( v91 >= monitor )
              {
                v101 = sub_B5D6C8(v87);
                sub_B5D668(v101, 0LL);
              }
              v92 = *((_QWORD *)&current[2].klass + (int)v91);
              if ( !v92 )
                sub_B5D69C(v87, v88);
              if ( v79->fields._size <= v86 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v87 = System_String__op_Equality(
                      *(System_String_o **)(v92 + 16),
                      (System_String_o *)v79->fields._items->m_Items[v86],
                      0LL);
              if ( v87 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v91 >= monitor )
                goto LABEL_50;
            }
            p_randomVoiceList->klass = (BattleServantConfConponent_c *)current;
            sub_B5D560(p_randomVoiceList, (System_Int32_array **)current, v93, v94, v95, v96, v97, v98);
          }
LABEL_50:
          ;
        }
        while ( !p_randomVoiceList->klass );
        v110[v108] = 277;
        v99 = ++v111;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v112,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        v100 = v99;
        if ( v99 && v110[v99 - 1] == 277 )
        {
          v100 = v99 - 1;
          v111 = v99 - 1;
        }
        if ( p_randomVoiceList->klass )
          goto LABEL_67;
        v108 = v100;
        if ( v86 >= voiceIds->max_length )
          goto LABEL_64;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v107,
          (WarBoardManager_TaskList_o *)voiceIds->m_Items[v86],
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v84 >= 0 );
    }
  }
  else
  {
    Instance = (DataManager_o *)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_72;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v109,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v112 = v109;
    do
    {
      v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v112,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v60 )
        break;
      v62 = v112.fields.current;
      if ( !v112.fields.current )
        sub_B5D69C(v60, v61);
      v63 = (int)v112.fields.current[1].monitor;
      if ( v63 >= 1 )
      {
        v64 = 0;
        while ( 1 )
        {
          if ( v64 >= v63 )
          {
            v103 = sub_B5D6C8(v60);
            sub_B5D668(v103, 0LL);
          }
          v65 = *((_QWORD *)&v62[2].klass + (int)v64);
          if ( !v65 )
            sub_B5D69C(v60, v61);
          if ( !voiceIds->max_length )
          {
            v102 = sub_B5D6C8(v60);
            sub_B5D668(v102, 0LL);
          }
          v60 = System_String__op_Equality(*(System_String_o **)(v65 + 16), voiceIds->m_Items[0], 0LL);
          if ( v60 )
            break;
          v63 = (int)v62[1].monitor;
          if ( (int)++v64 >= v63 )
            goto LABEL_21;
        }
        p_randomVoiceList->klass = (BattleServantConfConponent_c *)v62;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
          (System_Int32_array **)v62,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71);
      }
LABEL_21:
      ;
    }
    while ( !p_randomVoiceList->klass );
    v110[0] = 427;
    v111 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v112,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v111 = 0;
  }
  if ( p_randomVoiceList->klass )
  {
LABEL_67:
    this->fields.callbakEndPlay = action;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
      (System_Int32_array **)action,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    randomVoiceList = this->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(this, v59);
      return;
    }
LABEL_72:
    sub_B5D69C(Instance, v59);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListShop; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v50; // x1
  VoicePlayCondMaster_o *v51; // x22
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v57; // x1
  System_Random_o *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int v65; // w21
  int32_t size; // w8
  struct ServantVoiceData_array *v67; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v69; // x0
  __int64 v70; // x0
  System_Exception_o *v71; // x19
  System_String_o *v72; // x0
  __int64 v73; // x0
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E845B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId, (_DWORD)callback, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Random_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    byte_42E845B = 1;
  }
  memset(&v75, 0, sizeof(v75));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v70 = sub_B5D5C8(&System_Exception_TypeInfo);
      v71 = (System_Exception_o *)sub_B5D694(v70);
      v72 = (System_String_o *)sub_B5D5C8(&StringLiteral_24125/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_16273052(v71, v72, 0LL);
      v73 = sub_B5D5C8(&Method_EventSvtControl_playPurchaseVoice__);
      sub_B5D668(v71, v73);
    }
    this->fields.callbackStopVoice = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v48,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_33;
    v51 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v74,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListShop,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v75 = v74;
    while ( 1 )
    {
      v52 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v75,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v52 )
        break;
      current = v75.fields.current;
      if ( !v75.fields.current )
        sub_B5D69C(v52, v53);
      if ( !LODWORD(v75.fields.current[1].monitor) )
      {
        v69 = sub_B5D6C8(v52);
        sub_B5D668(v69, 0LL);
      }
      klass = v75.fields.current[2].klass;
      if ( !klass )
        sub_B5D69C(v52, v53);
      if ( !v51 )
        sub_B5D69C(v52, v53);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(v51, svtId, (System_String_o *)klass->_1.name, 0LL, -1LL, -1, 0LL);
      if ( isVoicePlay )
      {
        if ( !v48 )
          sub_B5D69C(isVoicePlay, v57);
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v48,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__) )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v48,
            (EventMissionProgressRequest_Argument_ProgressData_o *)current,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v75,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v58 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
    System_Random___ctor(v58, 0LL);
    if ( !v48 || !v58 )
      goto LABEL_33;
    v65 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v58->klass->vtable._7_Next.method)(
            v58,
            (unsigned int)v48->fields._size,
            v58->klass->vtable._8_NextDouble.methodPtr);
    size = v48->fields._size;
    if ( this->fields.beforeVoiceIdx == v65 )
      v65 = (v65 + 1) % size;
    if ( size <= (unsigned int)v65 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v67 = (struct ServantVoiceData_array *)v48->fields._items->m_Items[v65];
    this->fields.randomVoiceList = v67;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v67,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v65;
    if ( !randomVoiceList )
LABEL_33:
      sub_B5D69C(Instance, v50);
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v50);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  const MethodInfo *v43; // x3
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *PlayableVoiceInfoList; // x0
  const MethodInfo *v45; // x1
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *v46; // x20
  int32_t size; // w8
  int32_t v48; // w21
  int32_t beforeVoiceIdx; // w0
  const MethodInfo_237D8C8 *v50; // x4
  int v51; // w20
  EventSvtControl___c_c *v52; // x0
  struct EventSvtControl___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_string__int___int__o *_9__37_0; // x21
  Il2CppObject *v55; // x22
  struct EventSvtControl___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  System_Int32_array *v64; // x0
  struct System_String_o *key; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_KeyValuePair_object__int__o v73; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *voiceInfoList; // [xsp+18h] [xbp-28h] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o v75; // 0:x0.16

  if ( (byte_42E845A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____,
      (_DWORD)callback,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_ServantVoiceData____int___int___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Key__, v25, v26, v27);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__,
      v28,
      v29,
      v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__, v34, v35, v36);
    sub_B5D5C4(&Method_EventSvtControl___c__playVoice_b__37_0__, v37, v38, v39);
    sub_B5D5C4(&EventSvtControl___c_TypeInfo, v40, v41, v42);
    byte_42E845A = 1;
  }
  voiceInfoList = 0LL;
  v73.fields.key = 0LL;
  *(_QWORD *)&v73.fields.value = 0LL;
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)callback);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    PlayableVoiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)EventSvtControl__TryGetPlayableVoiceInfoList(this, &voiceInfoList, this->fields.voiceListRand, v43);
    if ( ((unsigned __int8)PlayableVoiceInfoList & 1) != 0 )
    {
      v46 = voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_31;
      size = voiceInfoList->fields._size;
      if ( size == 1 )
      {
        v48 = 0;
      }
      else
      {
        beforeVoiceIdx = this->fields.beforeVoiceIdx;
        if ( (beforeVoiceIdx & 0x80000000) == 0 )
        {
          PlayableVoiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)UnityEngine_Mathf__Clamp_41572460(beforeVoiceIdx, 0, size - 1, 0LL);
          this->fields.beforeVoiceIdx = (int)PlayableVoiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_31;
          v51 = (int)PlayableVoiceInfoList;
          if ( voiceInfoList->fields._size <= (unsigned int)PlayableVoiceInfoList )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v75.fields.key = (struct System_String_o *)&v73;
          *(_QWORD *)&v75.fields.value = voiceInfoList->fields._items->m_Items[v51].fields.key;
          System_Collections_Generic_KeyValuePair_string__int____ctor(
            v75,
            0LL,
            Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
            v50);
          PlayableVoiceInfoList = voiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_31;
          System_Collections_Generic_List_KeyValuePair_object__int____set_Item(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            this->fields.beforeVoiceIdx,
            v73,
            (const MethodInfo_2FB0C74 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
          v46 = voiceInfoList;
        }
        v52 = EventSvtControl___c_TypeInfo;
        if ( (BYTE3(EventSvtControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSvtControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
          v52 = EventSvtControl___c_TypeInfo;
        }
        static_fields = v52->static_fields;
        _9__37_0 = (System_Func_KeyValuePair_string__int___int__o *)static_fields->__9__37_0;
        if ( !_9__37_0 )
        {
          if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v52);
            static_fields = EventSvtControl___c_TypeInfo->static_fields;
          }
          v55 = (Il2CppObject *)static_fields->__9;
          _9__37_0 = (System_Func_KeyValuePair_string__int___int__o *)sub_B5D694(System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
          System_Func_KeyValuePair_string__int___int____ctor(
            _9__37_0,
            v55,
            Method_EventSvtControl___c__playVoice_b__37_0__,
            (const MethodInfo_279569C *)Method_System_Func_KeyValuePair_ServantVoiceData____int___int___ctor__);
          v56 = EventSvtControl___c_TypeInfo->static_fields;
          v56->__9__37_0 = (struct System_Func_KeyValuePair_ServantVoiceData____int___int__o *)_9__37_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v56->__9__37_0,
            (System_Int32_array **)_9__37_0,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62);
        }
        v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_string__int___int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                                                     (System_Func_TSource__TResult__o *)_9__37_0,
                                                                     (const MethodInfo_1CB0534 *)Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
        v64 = System_Linq_Enumerable__ToArray_int_(
                v63,
                (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
        PlayableVoiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)RandomUtility__GetRandomRangeIndex(v64, 0, 0LL);
        v46 = voiceInfoList;
        if ( !voiceInfoList )
          goto LABEL_31;
        v48 = (int)PlayableVoiceInfoList;
      }
      if ( !v46->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      key = BasicHelper__IndexValue_KeyValuePair_string__int__(
              (System_Collections_Generic_List_T__o *)v46,
              v48,
              (System_Collections_Generic_KeyValuePair_string__int__o)v46->fields._items->m_Items[0],
              (const MethodInfo_1AD8E64 *)Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____).fields.key;
      this->fields.randomVoiceList = (struct ServantVoiceData_array *)key;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)key,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      randomVoiceList = this->fields.randomVoiceList;
      this->fields.beforeVoiceIdx = v48;
      if ( randomVoiceList )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
        EventSvtControl__setVoiceForm(this, v45);
        return;
      }
LABEL_31:
      sub_B5D69C(PlayableVoiceInfoList, v45);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)performanceRoot,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.performanceRoot = performanceRoot;
  sub_B5D560(
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
  sub_B5D560(p_voiceListBoxGacha, v24, v17, v18, v19, v20, v21, v22);
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
  sub_B5D560(
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
  sub_B5D560(v17, v18, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_42E8458 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantVoiceData____get_Count__,
      (_DWORD)listRand,
      (_DWORD)listMission,
      listShop);
    byte_42E8458 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)p_voiceListRand, v21, v14, v15, v16, v17, v18, v19);
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
  sub_B5D560(p_voiceListMission, v29, v22, v23, v24, v25, v26, v27);
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
  sub_B5D560(p_voiceListShop, v37, v30, v31, v32, v33, v34, v35);
  this->fields.voiceListOverwrite = 0LL;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_B5D560((BattleServantConfConponent_o *)p_voiceListOverwrite, 0LL, v39, v40, v41, v42, v43, v44);
  *((_DWORD *)p_voiceListOverwrite - 22) = -1;
}


void __fastcall EventSvtControl__setVoiceForm(EventSvtControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_List_int__o *v35; // x20
  _BOOL8 v36; // x0
  __int64 v37; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v39; // x25
  __int64 v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  __int64 v48; // x21
  System_Predicate_int__o *v49; // x23
  Il2CppClass *klass; // x19
  __int64 v51; // x8
  UIStandFigureR_o *v52; // x21
  System_Action_o *v53; // x22
  __int64 v54; // x0
  Il2CppObject *v55; // [xsp+8h] [xbp-58h]

  if ( (byte_42E8459 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventSvtControl_svtVoicePlay__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Exists__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_EventSvtControl___c__DisplayClass36_0__setVoiceForm_b__0__, v29, v30, v31);
    sub_B5D5C4(&EventSvtControl___c__DisplayClass36_0_TypeInfo, v32, v33, v34);
    byte_42E8459 = 1;
  }
  v35 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  randomVoiceList = this->fields.randomVoiceList;
  v55 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_19;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v39 = 0LL;
    while ( 1 )
    {
      v40 = sub_B5D694(EventSvtControl___c__DisplayClass36_0_TypeInfo);
      EventSvtControl___c__DisplayClass36_0___ctor((EventSvtControl___c__DisplayClass36_0_o *)v40, 0LL);
      if ( v39 >= randomVoiceList->max_length )
      {
        v54 = sub_B5D6C8(v36);
        sub_B5D668(v54, 0LL);
      }
      if ( !v40 )
        break;
      v47 = (System_Int32_array **)randomVoiceList->m_Items[v39];
      *(_QWORD *)(v40 + 16) = v47;
      v48 = v40 + 16;
      sub_B5D560((BattleServantConfConponent_o *)(v40 + 16), v47, v41, v42, v43, v44, v45, v46);
      v49 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v49,
        (Il2CppObject *)v40,
        Method_EventSvtControl___c__DisplayClass36_0__setVoiceForm_b__0__,
        (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
      if ( !v35 )
        break;
      v36 = System_Collections_Generic_List_int___Exists(
              v35,
              (System_Predicate_T__o *)v49,
              (const MethodInfo_3084C60 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( !v36 )
      {
        if ( !*(_QWORD *)v48 )
          break;
        System_Collections_Generic_List_int___Add(
          v35,
          *(_DWORD *)(*(_QWORD *)v48 + 56LL),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v39 >= (int)randomVoiceList->max_length )
        goto LABEL_13;
    }
LABEL_19:
    sub_B5D69C(v36, v37);
  }
LABEL_13:
  klass = v55[5].klass;
  if ( !klass )
    goto LABEL_19;
  if ( !LODWORD(klass->_1.namespaze) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v51 = *((_QWORD *)klass->_1.name + 4);
  if ( !v51 )
    goto LABEL_19;
  v52 = *(UIStandFigureR_o **)(v51 + 24);
  v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v53, v55, Method_EventSvtControl_svtVoicePlay__, 0LL);
  if ( !v52 )
    goto LABEL_19;
  UIStandFigureR__PreloadFormAssets(v52, v35, v53, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__shopIndividualPlayVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  DataManager_o *Instance; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v49; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x23
  __int64 v51; // x8
  unsigned __int64 v52; // x26
  signed __int64 v53; // x27
  System_String_o *v54; // x25
  __int64 v55; // x0
  int32_t v56; // w21
  System_String_o *v57; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v67; // w24
  __int64 v68; // x8
  _BOOL8 v69; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x0
  const MethodInfo *v78; // x1
  __int64 v79; // x0
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E8462 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId, (_DWORD)targetVoiceIds, callback);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    byte_42E8462 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !targetVoiceIds )
    goto LABEL_39;
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_18:
      v55 = sub_B5D6C8(Instance);
      sub_B5D668(v55, 0LL);
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_23;
  }
  v49 = (VoicePlayCondMaster_o *)Instance;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  v51 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v51 >= 1 )
  {
    v52 = 0LL;
    v53 = (int)v51;
    while ( v49 )
    {
      v54 = targetVoiceIds->m_Items[v52];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v49, svtId, v54, 0LL, -1LL, -1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v50 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v50,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v52 >= v53 )
        goto LABEL_19;
      if ( v52 >= targetVoiceIds->max_length )
        goto LABEL_18;
    }
LABEL_39:
    sub_B5D69C(Instance, v40);
  }
LABEL_19:
  if ( !v50 )
    goto LABEL_39;
  v56 = UnityEngine_Random__Range_35654020(0, v50->fields._size, 0LL);
  if ( v50->fields._size <= (unsigned int)v56 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  m_Items = (System_String_o **)&v50->fields._items->m_Items[v56];
LABEL_23:
  v57 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v59, v60, v61, v62, v63, v64);
  Instance = (DataManager_o *)this->fields.voiceIndividualShopList;
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v80,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v81 = v80;
LABEL_32:
  while ( 1 )
  {
    v69 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v81,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v69 )
      break;
    current = v81.fields.current;
    if ( !v81.fields.current )
      sub_B5D69C(v69, v70);
    monitor = (int)v81.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= monitor )
        {
          v79 = sub_B5D6C8(v69);
          sub_B5D668(v79, 0LL);
        }
        v68 = *((_QWORD *)&current[2].klass + (int)v67);
        if ( !v68 )
          sub_B5D69C(v69, v70);
        v69 = System_String__op_Equality(*(System_String_o **)(v68 + 16), v57, 0LL);
        if ( v69 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v67 >= monitor )
          goto LABEL_32;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      if ( !*p_randomVoiceList )
        sub_B5D69C(v77, v78);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v78);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v81,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E8461 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22778/*"svtVoicePlay"*/, v5, v6, v7);
    byte_42E8461 = 1;
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
      sub_B5D69C(0LL, v11);
    SePlayer__Destroy(*p_player, 0LL);
    this->fields.player = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.player, 0LL, v12, v13, v14, v15, v16, v17);
    this->fields.callbakEndPlay = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbakEndPlay, 0LL, v18, v19, v20, v21, v22, v23);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35614336(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22778/*"svtVoicePlay"*/,
    0LL);
}


void __fastcall EventSvtControl__svtVoicePlay(EventSvtControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventSvtControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v11; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x5
  __int64 v15; // x0

  v4 = this;
  if ( (byte_42E845D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (EventSvtControl_o *)sub_B5D5C4(&Method_EventSvtControl_SvtVoicePlayProc__, v5, v6, v7);
    byte_42E845D = 1;
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
      {
        v15 = sub_B5D6C8(this);
        sub_B5D668(v15, 0LL);
      }
      v11 = randomVoiceList->m_Items[playCnt];
      if ( v11 )
      {
        additionalPerformances = v11->fields.additionalPerformances;
        v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)v4, Method_EventSvtControl_SvtVoicePlayProc__, 0LL);
        EventSvtControl__PlayPerformance(v4, additionalPerformances, 0, 1, v13, v14);
        return;
      }
LABEL_13:
      sub_B5D69C(this, method);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v49; // x1
  System_String_array **v50; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListOverwrite; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x21
  VoicePlayCondMaster_o *v53; // x23
  _BOOL8 v54; // x0
  __int64 v55; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v59; // x1
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Random_o *v65; // x20
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  unsigned int v72; // w20
  struct ServantVoiceData_array *v73; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v75; // x0
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E8467 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, eventId, svtId, callback);
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v39, v40, v41);
    sub_B5D5C4(&System_Random_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    byte_42E8467 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                eventId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_33;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v52,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_33;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_33;
        v53 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v76,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v77 = v76;
        while ( 1 )
        {
          v54 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v77,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v54 )
            break;
          current = v77.fields.current;
          if ( !v77.fields.current )
            sub_B5D69C(v54, v55);
          if ( !LODWORD(v77.fields.current[1].monitor) )
          {
            v75 = sub_B5D6C8(v54);
            sub_B5D668(v75, 0LL);
          }
          klass = v77.fields.current[2].klass;
          if ( !klass )
            sub_B5D69C(v54, v55);
          if ( !v53 )
            sub_B5D69C(v54, v55);
          isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                          v53,
                          svtId,
                          (System_String_o *)klass->_1.name,
                          0LL,
                          -1LL,
                          -1,
                          0LL);
          if ( isVoicePlay )
          {
            if ( !v52 )
              sub_B5D69C(isVoicePlay, v59);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v52,
              (EventMissionProgressRequest_Argument_ProgressData_o *)current,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v77,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v52 )
        {
          if ( v52->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
              (System_Int32_array **)callback,
              v50,
              v60,
              v61,
              v62,
              v63,
              v64);
            v65 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
            System_Random___ctor(v65, 0LL);
            if ( v65 )
            {
              v72 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v65->klass->vtable._7_Next.method)(
                      v65,
                      (unsigned int)v52->fields._size,
                      v65->klass->vtable._8_NextDouble.methodPtr);
              if ( v52->fields._size <= v72 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v73 = (struct ServantVoiceData_array *)v52->fields._items->m_Items[v72];
              this->fields.randomVoiceList = v73;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
                (System_Int32_array **)v73,
                v66,
                v67,
                v68,
                v69,
                v70,
                v71);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v49);
                return;
              }
            }
LABEL_33:
            sub_B5D69C(Instance, v49);
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, (const MethodInfo *)v50);
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
  int v2; // w2
  __int64 v3; // x3
  EventSvtControl__PlayPerformanceProc_d__61_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t _1__state; // w8
  struct EventSvtControl_o *_4__this; // x21
  Il2CppObject *v22; // x20
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v24; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *playEndAction; // x0
  struct EventSvtControl___c__DisplayClass61_0_o *_8__1; // x8
  Il2CppObject *v28; // x20
  System_Func_bool__o *v29; // x21
  UnityEngine_WaitUntil_o *v30; // x20

  v4 = this;
  if ( (byte_42E5697 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventSvtControl___c__DisplayClass61_0__PlayPerformanceProc_b__0__, v8, v9, v10);
    sub_B5D5C4(&EventSvtControl___c__DisplayClass61_0_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v14, v15, v16);
    this = (EventSvtControl__PlayPerformanceProc_d__61_o *)sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v17, v18, v19);
    byte_42E5697 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
LABEL_18:
    playEndAction = v4->fields.playEndAction;
    if ( !playEndAction )
      return (char)playEndAction;
    System_Action__Invoke(playEndAction, 0LL);
LABEL_20:
    LOBYTE(playEndAction) = 0;
    return (char)playEndAction;
  }
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_11;
  }
  if ( _1__state )
    goto LABEL_20;
  v4->fields.__1__state = -1;
  v22 = (Il2CppObject *)sub_B5D694(EventSvtControl___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor(v22, 0LL);
  v4->fields.__8__1 = (struct EventSvtControl___c__DisplayClass61_0_o *)v22;
  sub_B5D560(&v4->fields.__8__1);
  this = (EventSvtControl__PlayPerformanceProc_d__61_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_22;
  *(_QWORD *)&this->fields.__1__state = v4->fields.__4__this;
  sub_B5D560(&this->fields);
  this = (EventSvtControl__PlayPerformanceProc_d__61_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_22;
  this->fields.__2__current = (Il2CppObject *)v4->fields.animName;
  sub_B5D560(&this->fields.__2__current);
  delay = v4->fields.delay;
  if ( delay <= 0.0 )
  {
LABEL_11:
    if ( _4__this )
    {
      this = (EventSvtControl__PlayPerformanceProc_d__61_o *)_4__this->fields.animationRef;
      if ( this )
      {
        UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
        _8__1 = v4->fields.__8__1;
        if ( _8__1 )
        {
          this = (EventSvtControl__PlayPerformanceProc_d__61_o *)_4__this->fields.animationRef;
          if ( this )
          {
            UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0LL);
            if ( v4->fields.isWaitPerformance )
            {
              v28 = (Il2CppObject *)v4->fields.__8__1;
              v29 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v29,
                v28,
                Method_EventSvtControl___c__DisplayClass61_0__PlayPerformanceProc_b__0__,
                (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
              v30 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v30, v29, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v30;
              sub_B5D560(&v4->fields.__2__current);
              v4->fields.__1__state = 2;
              LOBYTE(playEndAction) = 1;
              return (char)playEndAction;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_22:
    sub_B5D69C(this, method);
  }
  v24 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v24, delay, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v24;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventSvtControl__PlayPerformanceProc_d__61_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventSvtControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E5695 & 1) == 0 )
  {
    sub_B5D5C4(&EventSvtControl___c_TypeInfo, v1, v2, v3);
    byte_42E5695 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventSvtControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventSvtControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventSvtControl___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields.id;
}


int32_t __fastcall EventSvtControl___c___playVoice_b__37_0(
        EventSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_ServantVoiceData____int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_42E5696 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Value__,
      x.fields.key,
      x.fields.value,
      method);
    byte_42E5696 = 1;
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
    sub_B5D69C(this, a);
  return System_Int32__Equals_39741700((int32_t)&v5, voice->fields.form, 0LL);
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
  sub_B5D560(&this[1].fields.CS___8__locals1);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL);
}