void __fastcall EventSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BCBBDC & 1) == 0 )
  {
    sub_1C1ABD4(&EventSvtControl_TypeInfo, v1);
    byte_4BCBBDC = 1;
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Action_c *v23; // x1
  struct System_Action_o **p_performanceEndAction; // x20
  __int64 v25; // x1
  UnityEngine_GameObject_o *transform; // x0
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s10
  float v31; // s8
  float v32; // s9
  Il2CppObject *ComponentInChildren_object; // x21
  struct System_Action_o *v34; // x8
  UnityEngine_GameObject_o *v35; // x20
  EventSvtControl_c *v36; // x0
  float v37; // s10
  UnityEngine_GameObject_o *v38; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  EventSvtControl_o *v53; // x0
  const MethodInfo *v54; // x1
  UnityEngine_Vector3_o v55; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4BCBBDA & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, endAction);
    sub_1C1ABD4(&Method_EventSvtControl_ReleasePerformance__, v6);
    sub_1C1ABD4(&EventSvtControl_TypeInfo, v7);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_4052/*"CallPerformanceEndAction"*/, v10);
    byte_4BCBBDA = 1;
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
  v15 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0LL);
  v16 = (struct System_Action_o *)System_Delegate__Combine(
                                    (System_Delegate_o *)endAction,
                                    (System_Delegate_o *)v15,
                                    0LL);
  if ( v16 )
  {
    v23 = System_Action_TypeInfo;
    if ( v16->klass != System_Action_TypeInfo || (this->fields.performanceEndAction = v16, v16->klass != v23) )
    {
      sub_1C1B0F0(v16);
      EventSvtControl__CallPerformanceEndAction(v53, v54);
      return;
    }
    p_performanceEndAction = &this->fields.performanceEndAction;
  }
  else
  {
    p_performanceEndAction = &this->fields.performanceEndAction;
    this->fields.performanceEndAction = 0LL;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)p_performanceEndAction, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  transform = this->fields.objectRef;
  if ( !transform
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = this->fields.objectRef) == 0LL) )
  {
LABEL_28:
    sub_1C1AE30(transform, v25);
  }
  v30 = v27;
  v31 = v28;
  v32 = v29;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 transform,
                                 (const MethodInfo_2FEFE24 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
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
      v35 = this->fields.objectRef;
      v36 = EventSvtControl_TypeInfo;
      v37 = v30 - (float)SLODWORD(ComponentInChildren_object[10].monitor);
      if ( !EventSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo);
        v36 = EventSvtControl_TypeInfo;
      }
      v55.fields.x = v37;
      v55.fields.y = v31;
      v55.fields.z = v32;
      transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v35, v36->static_fields->BASE_MOVE_TIME, v55, 0LL);
      if ( transform )
      {
        v38 = transform;
        LODWORD(transform[1].monitor) = 3;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v38[3].monitor = gameObject;
        sub_1C1AB78((PartyOrganizationUtility_o *)&v38[3].monitor, (int64_t)gameObject, v40, v41, v42, v43, v44, v45);
        v46 = StringLiteral_4052/*"CallPerformanceEndAction"*/;
        *(_QWORD *)&v38[3].fields.m_CachedPtr = StringLiteral_4052/*"CallPerformanceEndAction"*/;
        sub_1C1AB78((PartyOrganizationUtility_o *)&v38[3].fields, v46, v47, v48, v49, v50, v51, v52);
        return;
      }
    }
    goto LABEL_28;
  }
  v34 = *p_performanceEndAction;
  if ( *p_performanceEndAction )
  {
    m_target = v34->fields.m_target;
    original_method_info = v34->fields.original_method_info;
    v14 = *(_QWORD *)&v34->fields.extra_arg;
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
  if ( (byte_4BCBBCB & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    this = (EventSvtControl_o *)sub_1C1ABD4(&Method_EventSvtControl_EndPlayProc__, v3);
    byte_4BCBBCB = 1;
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
        sub_1C1AE38(this, method);
      v6 = randomVoiceList->m_Items[v5];
      if ( !v6 )
LABEL_10:
        sub_1C1AE30(this, method);
      additionalPerformances = v6->fields.additionalPerformances;
      v8 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)v2, Method_EventSvtControl_EndPlayProc__, 0LL);
      EventSvtControl__PlayPerformance(v2, additionalPerformances, 2, 1, v8, v9);
    }
  }
}


void __fastcall EventSvtControl__EndPlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventSvtControl_o *v8; // x19
  __int64 v9; // x1
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v12; // x8
  PartyOrganizationUtility_o *p_player; // x0
  PartyOrganizationUtility_o *p_callbakEndPlay; // x0
  System_Action_o *callbakEndPlay; // x20
  PartyOrganizationUtility_o *p_callbackStopVoice; // x0
  struct System_Action_o *callbackStopVoice; // x20

  v8 = this;
  if ( (byte_4BCBBCC & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_24123/*"svtVoicePlay"*/, method);
    this = (EventSvtControl_o *)sub_1C1ABD4(&StringLiteral_5592/*"END_PLAY"*/, v9);
    byte_4BCBBCC = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= randomVoiceList->max_length )
        sub_1C1AE38(this, method);
      v12 = randomVoiceList->m_Items[playCnt];
      if ( v12 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_24123/*"svtVoicePlay"*/,
          v12->fields.delay,
          0LL);
        return;
      }
    }
LABEL_16:
    sub_1C1AE30(this, method);
  }
  p_player = (PartyOrganizationUtility_o *)&v8->fields.player;
  if ( v8->fields.player )
  {
    p_player->klass = 0LL;
    sub_1C1AB78(p_player, 0LL, v2, v3, v4, v5, v6, v7);
  }
  p_callbakEndPlay = (PartyOrganizationUtility_o *)&v8->fields.callbakEndPlay;
  callbakEndPlay = v8->fields.callbakEndPlay;
  v8->fields.playCnt = 0;
  *(_WORD *)&v8->fields.isUnSkippable = 0;
  v8->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    p_callbakEndPlay->klass = 0LL;
    sub_1C1AB78(p_callbakEndPlay, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(callbakEndPlay, 0LL);
  }
  else
  {
    p_callbackStopVoice = (PartyOrganizationUtility_o *)&v8->fields.callbackStopVoice;
    callbackStopVoice = v8->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      p_callbackStopVoice->klass = 0LL;
      sub_1C1AB78(p_callbackStopVoice, 0LL, v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackStopVoice->fields.m_target)(
        callbackStopVoice->fields.original_method_info,
        *(_QWORD *)&callbackStopVoice->fields.extra_arg);
    }
    else
    {
      this = (EventSvtControl_o *)v8->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5592/*"END_PLAY"*/, 0LL);
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

  if ( (byte_4BCBBD6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, voiceId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_4BCBBD6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_1C1AE30(0LL, voiceId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v19 = v18;
  do
  {
LABEL_5:
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v9 )
    {
      v16 = 0;
      v15 = 8;
      goto LABEL_15;
    }
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1C1AE30(v9, v10);
    monitor = (int)v19.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= monitor )
      sub_1C1AE38(v9, v10);
    v14 = *((_QWORD *)&current[2].klass + (int)v13);
    if ( !v14 )
      sub_1C1AE30(v9, v10);
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
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v16 && v15 == 7;
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
  VoicePlayCondMaster_o *Master_object; // x0
  System_String_o *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v33; // x23
  unsigned __int64 v34; // x29
  __int64 v35; // x28
  System_String_o **m_Items; // x20
  __int64 v37; // x26
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  System_String_o **v45; // x25
  System_String_o **v46; // x23
  System_String_array *v47; // x20
  int32_t v48; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListCraft; // x22
  __int64 v50; // x19
  System_Func_object__bool__o *v51; // x28
  System_Collections_Generic_List_T__o *v52; // x0
  System_Func_T__bool__o *v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  int32_t v64; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  _BOOL8 v72; // x0
  __int64 v73; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v76; // w23
  __int64 v77; // x8
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x0
  const MethodInfo *v85; // x1
  System_Action_o *v86; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v87; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v88; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+40h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4BCBBD4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_ServantVoiceData_____, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v9);
    sub_1C1ABD4(&DataManager_TypeInfo, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_1C1ABD4(&System_Func_ServantVoiceData____bool__TypeInfo, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_1C1ABD4(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__0__, v21);
    sub_1C1ABD4(&EventSvtControl___c__DisplayClass61_0_TypeInfo, v22);
    byte_4BCBBD4 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1C1AE38(Master_object, v24);
  }
  v86 = callback;
  v33 = Master_object;
  v87 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v87,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v34 = 0LL;
    v35 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v88 = v33;
    do
    {
      v37 = sub_1C1AE20(EventSvtControl___c__DisplayClass61_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v37, 0LL);
      if ( v34 >= targetVoiceIds->max_length )
        goto LABEL_45;
      if ( !v37 )
        goto LABEL_44;
      v44 = (int64_t)m_Items[v34];
      *(_QWORD *)(v37 + 16) = v44;
      v45 = (System_String_o **)(v37 + 16);
      sub_1C1AB78((PartyOrganizationUtility_o *)(v37 + 16), v44, v38, v39, v40, v41, v42, v43);
      if ( !v33 )
        goto LABEL_44;
      Master_object = (VoicePlayCondMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                 v33,
                                                 v7,
                                                 *v45,
                                                 0LL,
                                                 -1LL,
                                                 -1,
                                                 0LL,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v46 = m_Items;
        v47 = targetVoiceIds;
        v48 = v7;
        voiceListCraft = this->fields.voiceListCraft;
        v50 = v35;
        v51 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v51,
          (Il2CppObject *)v37,
          Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__0__,
          0LL);
        v52 = (System_Collections_Generic_List_T__o *)voiceListCraft;
        v7 = v48;
        targetVoiceIds = v47;
        m_Items = v46;
        v33 = v88;
        v53 = (System_Func_T__bool__o *)v51;
        v35 = v50;
        Master_object = (VoicePlayCondMaster_o *)BasicHelper__Any_object_(
                                                   v52,
                                                   v53,
                                                   (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v87 )
            goto LABEL_44;
          v24 = *v45;
          items = v87->fields._items;
          v61 = Method_System_Collections_Generic_List_string__Add__;
          ++v87->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v87->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v87,
              (Il2CppObject *)v24,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &items->obj.klass + size;
            v87->fields._size = size + 1;
            v63[4] = (Il2CppClass *)v24;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v63 + 4), (int64_t)v24, v54, v55, v56, v57, v58, v59);
          }
        }
      }
    }
    while ( v35 != ++v34 );
  }
  if ( !v87 )
    goto LABEL_44;
  v64 = UnityEngine_Random__Range_70754152(0, v87->fields._size, 0LL);
  callback = v86;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v87,
                              v64,
                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v66, v67, v68, v69, v70, v71);
  Master_object = (VoicePlayCondMaster_o *)this->fields.voiceListCraft;
  if ( !Master_object )
LABEL_44:
    sub_1C1AE30(Master_object, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v90 = v89;
LABEL_29:
  while ( 1 )
  {
    v72 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v72 )
      break;
    current = v90.fields._current;
    if ( !v90.fields._current )
      sub_1C1AE30(v72, v73);
    monitor = (int)v90.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v76 = 0;
      while ( 1 )
      {
        if ( v76 >= monitor )
          sub_1C1AE38(v72, v73);
        v77 = *((_QWORD *)&current[2].klass + (int)v76);
        if ( !v77 )
          sub_1C1AE30(v72, v73);
        v72 = System_String__op_Equality(*(System_String_o **)(v77 + 16), Item, 0LL);
        if ( v72 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v76 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83);
      if ( !*p_randomVoiceList )
        sub_1C1AE30(v84, v85);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v85);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v29; // x24
  System_Collections_Generic_List_object__o *v30; // x23
  __int64 v31; // x26
  __int64 v32; // x27
  System_String_o *v33; // x25
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int32_t v44; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v56; // w24
  __int64 v57; // x8
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x0
  const MethodInfo *v65; // x1
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BCBBD2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4BCBBD2 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1C1AE30(Instance, v20);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1C1AE38(Instance, v20);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v29 = (VoicePlayCondMaster_o *)Instance;
  v30 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v31 = 0LL;
    v32 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v29 )
    {
      v33 = targetVoiceIds->m_Items[v31];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v29, svtId, v33, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_42;
        items = v30->fields._items;
        v41 = Method_System_Collections_Generic_List_string__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v30->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)v33,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v33;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v33, v34, v35, v36, v37, v38, v39);
        }
      }
      if ( v32 == v31 )
        goto LABEL_23;
      if ( ++v31 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v30 )
    goto LABEL_42;
  v44 = UnityEngine_Random__Range_70754152(0, v30->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v30,
                              v44,
                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v46, v47, v48, v49, v50, v51);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v67 = v66;
LABEL_27:
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v52 )
      break;
    current = v67.fields._current;
    if ( !v67.fields._current )
      sub_1C1AE30(v52, v53);
    monitor = (int)v67.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v56 = 0;
      while ( 1 )
      {
        if ( v56 >= monitor )
          sub_1C1AE38(v52, v53);
        v57 = *((_QWORD *)&current[2].klass + (int)v56);
        if ( !v57 )
          sub_1C1AE30(v52, v53);
        v52 = System_String__op_Equality(*(System_String_o **)(v57 + 16), Item, 0LL);
        if ( v52 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v56 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      if ( !*p_randomVoiceList )
        sub_1C1AE30(v64, v65);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v65);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v33; // x23
  unsigned __int64 v34; // x29
  __int64 v35; // x28
  System_String_o **m_Items; // x20
  __int64 v37; // x26
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  System_String_o **v45; // x25
  System_String_o **v46; // x23
  System_String_array *v47; // x20
  int32_t v48; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListTrade; // x22
  __int64 v50; // x19
  System_Func_object__bool__o *v51; // x28
  System_Collections_Generic_List_T__o *v52; // x0
  System_Func_T__bool__o *v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  int32_t v64; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  _BOOL8 v72; // x0
  __int64 v73; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v76; // w23
  __int64 v77; // x8
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x0
  const MethodInfo *v85; // x1
  System_Action_o *v86; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v87; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v88; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+40h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4BCBBD3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_ServantVoiceData_____, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v9);
    sub_1C1ABD4(&DataManager_TypeInfo, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_1C1ABD4(&System_Func_ServantVoiceData____bool__TypeInfo, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_1C1ABD4(&Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__0__, v21);
    sub_1C1ABD4(&EventSvtControl___c__DisplayClass60_0_TypeInfo, v22);
    byte_4BCBBD3 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1C1AE38(Master_object, v24);
  }
  v86 = callback;
  v33 = Master_object;
  v87 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v87,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v34 = 0LL;
    v35 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v88 = v33;
    do
    {
      v37 = sub_1C1AE20(EventSvtControl___c__DisplayClass60_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v37, 0LL);
      if ( v34 >= targetVoiceIds->max_length )
        goto LABEL_45;
      if ( !v37 )
        goto LABEL_44;
      v44 = (int64_t)m_Items[v34];
      *(_QWORD *)(v37 + 16) = v44;
      v45 = (System_String_o **)(v37 + 16);
      sub_1C1AB78((PartyOrganizationUtility_o *)(v37 + 16), v44, v38, v39, v40, v41, v42, v43);
      if ( !v33 )
        goto LABEL_44;
      Master_object = (VoicePlayCondMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                 v33,
                                                 v7,
                                                 *v45,
                                                 0LL,
                                                 -1LL,
                                                 -1,
                                                 0LL,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v46 = m_Items;
        v47 = targetVoiceIds;
        v48 = v7;
        voiceListTrade = this->fields.voiceListTrade;
        v50 = v35;
        v51 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v51,
          (Il2CppObject *)v37,
          Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__0__,
          0LL);
        v52 = (System_Collections_Generic_List_T__o *)voiceListTrade;
        v7 = v48;
        targetVoiceIds = v47;
        m_Items = v46;
        v33 = v88;
        v53 = (System_Func_T__bool__o *)v51;
        v35 = v50;
        Master_object = (VoicePlayCondMaster_o *)BasicHelper__Any_object_(
                                                   v52,
                                                   v53,
                                                   (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v87 )
            goto LABEL_44;
          v24 = *v45;
          items = v87->fields._items;
          v61 = Method_System_Collections_Generic_List_string__Add__;
          ++v87->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v87->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v87,
              (Il2CppObject *)v24,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &items->obj.klass + size;
            v87->fields._size = size + 1;
            v63[4] = (Il2CppClass *)v24;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v63 + 4), (int64_t)v24, v54, v55, v56, v57, v58, v59);
          }
        }
      }
    }
    while ( v35 != ++v34 );
  }
  if ( !v87 )
    goto LABEL_44;
  v64 = UnityEngine_Random__Range_70754152(0, v87->fields._size, 0LL);
  callback = v86;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v87,
                              v64,
                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v66, v67, v68, v69, v70, v71);
  Master_object = (VoicePlayCondMaster_o *)this->fields.voiceListTrade;
  if ( !Master_object )
LABEL_44:
    sub_1C1AE30(Master_object, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v90 = v89;
LABEL_29:
  while ( 1 )
  {
    v72 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v72 )
      break;
    current = v90.fields._current;
    if ( !v90.fields._current )
      sub_1C1AE30(v72, v73);
    monitor = (int)v90.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v76 = 0;
      while ( 1 )
      {
        if ( v76 >= monitor )
          sub_1C1AE38(v72, v73);
        v77 = *((_QWORD *)&current[2].klass + (int)v76);
        if ( !v77 )
          sub_1C1AE30(v72, v73);
        v72 = System_String__op_Equality(*(System_String_o **)(v77 + 16), Item, 0LL);
        if ( v72 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v76 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83);
      if ( !*p_randomVoiceList )
        sub_1C1AE30(v84, v85);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v85);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Object_o *v25; // x25
  UnityEngine_Object_o *animationRef; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Object_o *v34; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v36; // x22
  const MethodInfo *v37; // x4
  System_Collections_IEnumerator_o *v38; // x1

  if ( (byte_4BCBBD8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, performances);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    byte_4BCBBD8 = 1;
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
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.objectRef, (int64_t)Effect, v19, v20, v21, v22, v23, v24);
    v25 = (UnityEngine_Object_o *)*p_objectRef;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Implicit(v25, 0LL) )
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
    sub_1C1AE30(performanceRoot, v14);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 performanceRoot,
                                 (const MethodInfo_2FEFE24 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  this->fields.animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.animationRef,
    (int64_t)ComponentInChildren_object,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v34, 0LL) )
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
    UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, v38, 0LL);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BCBBD9 & 1) == 0 )
  {
    sub_1C1ABD4(&EventSvtControl__PlayPerformanceProc_d__71_TypeInfo, animName);
    byte_4BCBBD9 = 1;
  }
  v11 = isWaitPerformance;
  v12 = sub_1C1AE20(EventSvtControl__PlayPerformanceProc_d__71_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 40) = animName;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 40), (int64_t)animName, v19, v20, v21, v22, v23, v24);
  *(float *)(v12 + 48) = delay;
  *(_BYTE *)(v12 + 64) = v11;
  *(_QWORD *)(v12 + 72) = playEndAction;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 72), (int64_t)playEndAction, v25, v26, v27, v28, v29, v30);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v29; // x24
  System_Collections_Generic_List_object__o *v30; // x23
  __int64 v31; // x26
  __int64 v32; // x27
  System_String_o *v33; // x25
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int32_t v44; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v56; // w24
  __int64 v57; // x8
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x0
  const MethodInfo *v65; // x1
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BCBBD1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4BCBBD1 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1C1AE30(Instance, v20);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1C1AE38(Instance, v20);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v29 = (VoicePlayCondMaster_o *)Instance;
  v30 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v31 = 0LL;
    v32 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v29 )
    {
      v33 = targetVoiceIds->m_Items[v31];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v29, svtId, v33, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_42;
        items = v30->fields._items;
        v41 = Method_System_Collections_Generic_List_string__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v30->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)v33,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v33;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v33, v34, v35, v36, v37, v38, v39);
        }
      }
      if ( v32 == v31 )
        goto LABEL_23;
      if ( ++v31 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v30 )
    goto LABEL_42;
  v44 = UnityEngine_Random__Range_70754152(0, v30->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v30,
                              v44,
                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v46, v47, v48, v49, v50, v51);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v67 = v66;
LABEL_27:
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v52 )
      break;
    current = v67.fields._current;
    if ( !v67.fields._current )
      sub_1C1AE30(v52, v53);
    monitor = (int)v67.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v56 = 0;
      while ( 1 )
      {
        if ( v56 >= monitor )
          sub_1C1AE38(v52, v53);
        v57 = *((_QWORD *)&current[2].klass + (int)v56);
        if ( !v57 )
          sub_1C1AE30(v52, v53);
        v52 = System_String__op_Equality(*(System_String_o **)(v57 + 16), Item, 0LL);
        if ( v52 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v56 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      if ( !*p_randomVoiceList )
        sub_1C1AE30(v64, v65);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v65);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__ReleasePerformance(EventSvtControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_Object_o *objectRef; // x19

  if ( (byte_4BCBBDB & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCBBDB = 1;
  }
  this->fields.animationRef = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.animationRef, 0LL, v2, v3, v4, v5, v6, v7);
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70794412(objectRef, 0LL);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_int__o *v30; // x21
  struct System_String_array *befVoiceIds; // x9
  unsigned __int64 v32; // x24
  System_String_o *v33; // x25
  _BOOL8 isVoicePlay; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x20
  int monitor; // w8
  int i; // w27
  __int64 v39; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  unsigned __int64 v43; // x25
  int32_t v44; // w22
  System_String_o *v45; // x23
  __int64 Item; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x20
  void *v49; // x8
  int v50; // w27
  __int64 v51; // x24
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  __int64 v54; // [xsp+10h] [xbp-C0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-B8h]
  struct System_String_array *v56; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4BCBBD0 & 1) == 0 )
  {
    sub_1C1ABD4(&BoxGachaTalkInfo_TypeInfo, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4BCBBD0 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v20 = (BoxGachaTalkInfo_o *)sub_1C1AE20(BoxGachaTalkInfo_TypeInfo);
  BoxGachaTalkInfo___ctor(v20, 0LL);
  *info = v20;
  sub_1C1AB78((PartyOrganizationUtility_o *)info, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v30 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_70;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_70;
  v54 = *(_QWORD *)&befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  if ( (int)v54 >= 1 )
  {
    if ( (unsigned int)*(_QWORD *)&befVoiceIds->max_length )
    {
      v32 = 0LL;
      v56 = befVoiceIds;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          break;
        v33 = befVoiceIds->m_Items[v32];
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v58,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v59 = v58;
        while ( 1 )
        {
          isVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v59,
                          (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !isVoicePlay )
            break;
          current = v59.fields._current;
          if ( !v59.fields._current )
            sub_1C1AE30(isVoicePlay, v35);
          monitor = (int)v59.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            for ( i = 0; i < monitor; ++i )
            {
              if ( i >= (unsigned int)monitor )
                sub_1C1AE38(isVoicePlay, v35);
              v39 = *((_QWORD *)&current[2].klass + i);
              if ( !v39 )
                sub_1C1AE30(isVoicePlay, v35);
              isVoicePlay = System_String__op_Equality(*(System_String_o **)(v39 + 16), v33, 0LL);
              if ( isVoicePlay )
              {
                if ( !MasterData_object )
                  sub_1C1AE30(isVoicePlay, v35);
                isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                                (VoicePlayCondMaster_o *)MasterData_object,
                                svtId,
                                v33,
                                0LL,
                                -1LL,
                                -1,
                                0LL,
                                0LL,
                                0LL);
                if ( isVoicePlay )
                {
                  if ( !*info )
                    sub_1C1AE30(0LL, v35);
                  BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v39 + 16),
                    *(System_String_o **)(v39 + 48),
                    0LL);
                  if ( !v30 )
                    sub_1C1AE30(isVoicePlay, v35);
                  items = v30->fields._items;
                  v41 = Method_System_Collections_Generic_List_int__Add__;
                  ++v30->fields._version;
                  if ( !items )
                    sub_1C1AE30(isVoicePlay, v35);
                  size = v30->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v30,
                      v32,
                      *(const MethodInfo_361F86C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v30->fields._size = size + 1;
                    items->m_Items[size + 1] = v32;
                  }
                }
              }
              monitor = (int)current[1].monitor;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v59,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        befVoiceIds = v56;
        if ( ++v32 == (unsigned int)v54 )
          goto LABEL_39;
        if ( v32 >= v56->max_length )
          goto LABEL_71;
      }
LABEL_70:
      sub_1C1AE30(Instance, v28);
    }
LABEL_71:
    sub_1C1AE38(Instance, v28);
  }
LABEL_39:
  if ( !v30 || !v30->fields._size )
    return 0;
  if ( (int)v54 >= 1 )
  {
    if ( !aftVoiceIds )
      goto LABEL_70;
    v43 = 0LL;
    v44 = 0;
    while ( v43 < aftVoiceIds->max_length )
    {
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_70;
      v45 = aftVoiceIds->m_Items[v43];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v58,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v59 = v58;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v59,
                 (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( (Item & 1) == 0 )
          break;
        v48 = v59.fields._current;
        if ( !v59.fields._current )
          sub_1C1AE30(Item, v47);
        v49 = v59.fields._current[1].monitor;
        if ( (int)v49 >= 1 )
        {
          v50 = 0;
          do
          {
            if ( v50 >= (unsigned int)v49 )
              sub_1C1AE38(Item, v47);
            v51 = *((_QWORD *)&v48[2].klass + v50);
            if ( !v51 )
              sub_1C1AE30(Item, v47);
            Item = System_String__op_Equality(*(System_String_o **)(v51 + 16), v45, 0LL);
            if ( (Item & 1) != 0 )
            {
              Item = System_Collections_Generic_List_int___get_Item(
                       v30,
                       v44,
                       (const MethodInfo_361F57C *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( v43 == (unsigned int)Item )
              {
                if ( !*info )
                  sub_1C1AE30(0LL, v47);
                BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v51 + 16),
                  *(System_String_o **)(v51 + 48),
                  0LL);
                ++v44;
              }
            }
            LODWORD(v49) = v48[1].monitor;
            ++v50;
          }
          while ( v50 < (int)v49 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v59,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      if ( ++v43 == (unsigned int)v54 )
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 17);
  if ( listCraft )
  {
    v17->klass = (PartyOrganizationUtility_c *)listCraft;
    v18 = listCraft;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1C1AB78(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetDiggingSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listDigging,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 14);
  if ( listDigging )
  {
    v17->klass = (PartyOrganizationUtility_c *)listDigging;
    v18 = listDigging;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1C1AB78(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetOverwriteSpecialSvtVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.specialSvtVoice = voiceId;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.specialSvtVoice,
    (int64_t)voiceId,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventSvtControl__SetOverwriteSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listOverwrite,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventSvtControl_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v9 = this;
  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v9->fields.voiceListOverwrite = listOverwrite;
  v9 = (EventSvtControl_o *)((char *)v9 + 200);
  sub_1C1AB78((PartyOrganizationUtility_o *)v9, (int64_t)listOverwrite, v10, v11, v12, v13, v14, v15);
  LODWORD(v9[-1].fields.voiceListDigging) = -1;
}


void __fastcall EventSvtControl__SetRecipeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listRecipe,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 15);
  if ( listRecipe )
  {
    v17->klass = (PartyOrganizationUtility_c *)listRecipe;
    v18 = listRecipe;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1C1AB78(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetSvtFigureCollect(
        EventSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.standFigureCollectList = collects;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.standFigureCollectList,
    (int64_t)collects,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventSvtControl__SetTradeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTrade,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 16);
  if ( listTrade )
  {
    v17->klass = (PartyOrganizationUtility_c *)listTrade;
    v18 = listTrade;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1C1AB78(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetTreasureBoxSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTreasureBox,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 13);
  if ( listTreasureBox )
  {
    v17->klass = (PartyOrganizationUtility_c *)listTreasureBox;
    v18 = listTreasureBox;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1C1AB78(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SvtVoicePlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventSvtControl_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v15; // x8
  int64_t id; // x1
  struct ServantVoiceData_array *v17; // x8
  __int64 v18; // x9
  int32_t asstName; // w20
  float FadeTime; // s0
  float v21; // s8
  struct ServantVoiceData_array *v22; // x8
  __int64 v23; // x9
  ServantVoiceData_o *v24; // x8
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  int32_t face; // w20
  struct ServantVoiceData_array *v27; // x8
  __int64 v28; // x9
  ServantVoiceData_o *v29; // x8
  System_String_o *v30; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v33; // x22
  SePlayer_o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x5
  struct ServantVoiceData_array *v42; // x8
  __int64 v43; // x9
  ServantVoiceData_o *v44; // x8
  struct ServantVoiceData_array *v45; // x8
  __int64 v46; // x9
  ServantVoiceData_o *v47; // x8
  struct System_Int32_array *multiFace; // x23
  unsigned __int64 v49; // x21
  int32_t v50; // w22

  v8 = this;
  if ( (byte_4BCBBCA & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_1C1ABD4(&Method_EventSvtControl_EndPlay__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v11);
    this = (EventSvtControl_o *)sub_1C1ABD4(&SoundManager_TypeInfo, v12);
    byte_4BCBBCA = 1;
  }
  randomVoiceList = v8->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_43;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= randomVoiceList->max_length )
    goto LABEL_44;
  v15 = randomVoiceList->m_Items[playCnt];
  if ( !v15 )
    goto LABEL_43;
  id = (int64_t)v15->fields.id;
  v8->fields.vcName = (struct System_String_o *)id;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
  v17 = v8->fields.randomVoiceList;
  if ( !v17 )
    goto LABEL_43;
  v18 = v8->fields.playCnt;
  if ( (unsigned int)v18 >= v17->max_length )
    goto LABEL_44;
  this = (EventSvtControl_o *)v17->m_Items[v18];
  if ( !this )
    goto LABEL_43;
  v8->fields.isUnSkippable = BYTE4(this->fields.vcName);
  asstName = (int32_t)this->fields.asstName;
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
  this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
  v21 = FadeTime;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_2FBA498 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v22 = v8->fields.randomVoiceList;
    if ( !v22 )
      goto LABEL_43;
    v23 = v8->fields.playCnt;
    if ( (unsigned int)v23 >= v22->max_length )
      goto LABEL_44;
    v24 = v22->m_Items[v23];
    if ( !v24 )
      goto LABEL_43;
    standFigureCollectList = (System_Collections_Generic_List_object__o *)v8->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v24->fields.face;
      this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    0,
                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !this )
        goto LABEL_43;
      v27 = v8->fields.randomVoiceList;
      if ( !v27 )
        goto LABEL_43;
      v28 = v8->fields.playCnt;
      if ( (unsigned int)v28 >= v27->max_length )
        goto LABEL_44;
      v29 = v27->m_Items[v28];
      if ( !v29 )
        goto LABEL_43;
      this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
      if ( !this )
        goto LABEL_43;
      UIStandFigureR__SetFace_42273324((UIStandFigureR_o *)this, face, v29->fields.form, 0LL, v21, 0LL);
    }
    goto LABEL_21;
  }
  v45 = v8->fields.randomVoiceList;
  if ( !v45 )
    goto LABEL_43;
  v46 = v8->fields.playCnt;
  if ( (unsigned int)v46 >= v45->max_length )
    goto LABEL_44;
  v47 = v45->m_Items[v46];
  if ( !v47 )
    goto LABEL_43;
  multiFace = v47->fields.multiFace;
  if ( multiFace )
  {
    this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                  (const MethodInfo_2FBA498 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( (_DWORD)this == multiFace->max_length )
    {
      if ( (int)this >= 1 )
      {
        v49 = 0LL;
        while ( v49 < (unsigned int)this )
        {
          this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
          if ( !this )
            goto LABEL_43;
          v50 = multiFace->m_Items[v49 + 1];
          this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v49,
                                        (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !this )
            goto LABEL_43;
          this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
          if ( !this )
            goto LABEL_43;
          UIStandFigureR__SetFace_42273324((UIStandFigureR_o *)this, v50, asstName, 0LL, v21, 0LL);
          this = *(EventSvtControl_o **)&multiFace->max_length;
          if ( (__int64)++v49 >= (int)this )
            goto LABEL_21;
        }
        goto LABEL_44;
      }
LABEL_21:
      v30 = v8->fields.asstName;
      vcName = v8->fields.vcName;
      volume = v8->fields.volume;
      v33 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)v8, Method_EventSvtControl_EndPlay__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v34 = SoundManager__playVoice_39911060(v30, vcName, volume, v33, 0, 0LL);
      v8->fields.player = v34;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields.player, (int64_t)v34, v35, v36, v37, v38, v39, v40);
      if ( v8->fields.isSkipPerformance )
        goto LABEL_28;
      v42 = v8->fields.randomVoiceList;
      if ( !v42 )
LABEL_43:
        sub_1C1AE30(this, method);
      v43 = v8->fields.playCnt;
      if ( (unsigned int)v43 < v42->max_length )
      {
        v44 = v42->m_Items[v43];
        if ( v44 )
        {
          EventSvtControl__PlayPerformance(v8, v44->fields.additionalPerformances, 1, 0, 0LL, v41);
LABEL_28:
          ++v8->fields.playCnt;
          return;
        }
        goto LABEL_43;
      }
LABEL_44:
      sub_1C1AE38(this, method);
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
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x0
  System_Collections_Generic_List_int__o *v43; // x1
  System_Collections_Generic_HashSet_T__o *v44; // x24
  _BOOL8 v45; // x0
  __int64 v46; // x1
  Il2CppObject *current; // x25
  Il2CppClass *klass; // x8
  EventSvtControl___c_c *v49; // x0
  System_String_o *v50; // x26
  System_Func_object__object__o *_9__64_0; // x27
  Il2CppObject *v52; // x28
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_IEnumerable_string__o *v60; // x1
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x26
  Il2CppObject *Weight; // x2
  const MethodInfo_3573E44 *v65; // x4
  __int64 v66; // x1
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x26
  Il2CppObject *v76; // x0
  __int64 v77; // x1
  __int64 Item; // x0
  __int64 v79; // x1
  int32_t v80; // w25
  int32_t monitor; // w26
  _BOOL8 IsVoicePlayFlag; // x0
  System_Collections_Generic_List_T__o *v83; // x0
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  PartyOrganizationUtility_o *v87; // x8
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  PartyOrganizationUtility_o *v91; // x0
  __int64 v92; // x0
  __int64 v93; // x1
  struct System_Collections_Generic_List_int__o *voicePlayedValueList; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  System_Collections_Generic_List_T__o *v112; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_int__o *OriginalSvtId; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+38h] [xbp-B8h] BYREF
  Il2CppObject *entity; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v117; // [xsp+58h] [xbp-98h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v119; // [xsp+70h] [xbp-80h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v120; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o v121; // 0:x1.16
  System_Collections_Generic_KeyValuePair_object__int__o v122; // 0:x1.16

  if ( (byte_4BCBBD7 & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_TypeInfo, voiceInfoList);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantVoiceRelationMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMaster_VoiceMaster___, v7);
    sub_1C1ABD4(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v8);
    sub_1C1ABD4(&DataManager_TypeInfo, v9);
    sub_1C1ABD4(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__, v10);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v14);
    sub_1C1ABD4(&System_Func_ServantVoiceData__string__TypeInfo, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_string__Add__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_string__Contains__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_string___ctor__, v18);
    sub_1C1ABD4(&System_Collections_Generic_HashSet_string__TypeInfo, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__, v22);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v23);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__, v24);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__, v25);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Item__, v26);
    sub_1C1ABD4(&System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo, v27);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v28);
    sub_1C1ABD4(&Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__64_0__, v29);
    sub_1C1ABD4(&EventSvtControl___c_TypeInfo, v30);
    sub_1C1ABD4(&StringLiteral_866/*","*/, v31);
    sub_1C1ABD4(&StringLiteral_19855/*"forcePlayFirst"*/, v32);
    byte_4BCBBD7 = 1;
  }
  memset(&v119, 0, sizeof(v119));
  condEntity = 0LL;
  v117.fields.key = 0LL;
  *(_QWORD *)&v117.fields.value = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v34 = (System_Collections_Generic_List_T__o *)sub_1C1AE20(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v34,
    (const MethodInfo_3591A64 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  v35 = (System_Collections_Generic_List_T__o *)sub_1C1AE20(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v35,
    (const MethodInfo_3591A64 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v35;
  sub_1C1AB78((PartyOrganizationUtility_o *)voiceInfoList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
  if ( !v42 )
    goto LABEL_65;
  v112 = v34;
  OriginalSvtId = ServantVoiceRelationMaster__GetOriginalSvtId(
                    (ServantVoiceRelationMaster_o *)v42,
                    this->fields.svtId,
                    0LL);
  v44 = (System_Collections_Generic_HashSet_T__o *)sub_1C1AE20(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v44,
    (const MethodInfo_34F5F18 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  if ( !servantVoiceGroupData )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v115,
    (System_Collections_Generic_List_object__o *)servantVoiceGroupData,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v119 = v115;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v119,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v45 )
      break;
    current = v119.fields._current;
    if ( !v119.fields._current )
      sub_1C1AE30(v45, v46);
    if ( !LODWORD(v119.fields._current[1].monitor) )
      sub_1C1AE38(v45, v46);
    klass = v119.fields._current[2].klass;
    if ( !klass )
      sub_1C1AE30(v45, v46);
    if ( !Master_object )
      sub_1C1AE30(v45, v46);
    if ( VoicePlayCondMaster__isVoicePlay_41533288(
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
      v49 = EventSvtControl___c_TypeInfo;
      if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
        v49 = EventSvtControl___c_TypeInfo;
      }
      v50 = (System_String_o *)StringLiteral_866/*","*/;
      _9__64_0 = (System_Func_object__object__o *)v49->static_fields->__9__64_0;
      if ( !_9__64_0 )
      {
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v49 = EventSvtControl___c_TypeInfo;
        }
        v52 = (Il2CppObject *)v49->static_fields->__9;
        _9__64_0 = (System_Func_object__object__o *)sub_1C1AE20(System_Func_ServantVoiceData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__64_0,
          v52,
          Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__64_0__,
          0LL);
        static_fields = EventSvtControl___c_TypeInfo->static_fields;
        static_fields->__9__64_0 = (struct System_Func_ServantVoiceData__string__o *)_9__64_0;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&static_fields->__9__64_0,
          (int64_t)_9__64_0,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      v60 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                                  (System_Func_TSource__TResult__o *)_9__64_0,
                                                                  (const MethodInfo_2FD0C44 *)Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
      v61 = (Il2CppObject *)System_String__Join_63056024(v50, v60, 0LL);
      if ( !v44 )
        sub_1C1AE30(v61, v62);
      v63 = v61;
      if ( !System_Collections_Generic_HashSet_object___Contains(
              v44,
              v61,
              (const MethodInfo_34F660C *)Method_System_Collections_Generic_HashSet_string__Contains__) )
      {
        System_Collections_Generic_HashSet_object___Add(
          v44,
          v63,
          (const MethodInfo_34F70FC *)Method_System_Collections_Generic_HashSet_string__Add__);
        Weight = (Il2CppObject *)(unsigned int)VoicePlayCondMaster__GetWeight(
                                                 (VoicePlayCondMaster_o *)Master_object,
                                                 condEntity,
                                                 10,
                                                 0LL);
        v120.fields.key = (Il2CppObject *)&v117;
        *(_QWORD *)&v120.fields.value = current;
        System_Collections_Generic_KeyValuePair_object__int____ctor(
          v120,
          Weight,
          Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
          v65);
        if ( !condEntity
          || VoicePlayCondEntity__GetScriptIntParam(condEntity, (System_String_o *)StringLiteral_19855/*"forcePlayFirst"*/, -1, 0LL) != 1 )
        {
          goto LABEL_36;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v72 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_VoiceMaster___);
        if ( !condEntity )
          sub_1C1AE30(v72, v73);
        v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)v72;
        voiceId = condEntity->fields.voiceId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v76 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47591972(voiceId, 0LL);
        if ( !v74 )
          sub_1C1AE30(v76, v77);
        if ( !DataMasterBase_object__object__object___TryGetEntity(
                v74,
                &entity,
                v76,
                (const MethodInfo_324D17C *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__) )
          goto LABEL_36;
        if ( !OriginalSvtId )
          sub_1C1AE30(0LL, v66);
        Item = System_Collections_Generic_List_int___get_Item(
                 OriginalSvtId,
                 0,
                 (const MethodInfo_361F57C *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !entity )
          sub_1C1AE30(Item, v79);
        v80 = Item;
        monitor = (int32_t)entity[3].monitor;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsVoicePlayFlag = CondType__IsVoicePlayFlag(v80, monitor, 0LL);
        if ( !IsVoicePlayFlag )
        {
          if ( !v112 )
            sub_1C1AE30(IsVoicePlayFlag, v66);
          v122 = v117;
          items = v112->fields._items;
          v89 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v112->fields._version;
          if ( !items )
            sub_1C1AE30(IsVoicePlayFlag, v122.fields.key);
          size = v112->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v112,
              v122,
              *(const MethodInfo_35922E4 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
          }
          else
          {
            v91 = (PartyOrganizationUtility_o *)(&items->obj + size);
            v112->fields._size = size + 1;
            *(_QWORD *)&v91->fields._SelectedNormalFollowerClassId_k__BackingField = v122.fields.key;
            v91 = (PartyOrganizationUtility_o *)((char *)v91 + 32);
            v91->monitor = *(void **)&v122.fields.value;
            sub_1C1AB78(v91, 0LL, *(int64_t *)&v122.fields.value, v67, v68, v69, v70, v71);
          }
          if ( !entity )
            sub_1C1AE30(v92, v93);
          voicePlayedValueList = this->fields.voicePlayedValueList;
          if ( !voicePlayedValueList )
            sub_1C1AE30(0LL, v93);
          monitor_low = LODWORD(entity[3].monitor);
          v96 = voicePlayedValueList->fields._items;
          v97 = Method_System_Collections_Generic_List_int__Add__;
          ++voicePlayedValueList->fields._version;
          if ( !v96 )
            sub_1C1AE30(voicePlayedValueList, monitor_low);
          v98 = voicePlayedValueList->fields._size;
          if ( (unsigned int)v98 >= v96->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              voicePlayedValueList,
              monitor_low,
              *(const MethodInfo_361F86C **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
          }
          else
          {
            voicePlayedValueList->fields._size = v98 + 1;
            v96->m_Items[v98 + 1] = monitor_low;
          }
        }
        else
        {
LABEL_36:
          v83 = (System_Collections_Generic_List_T__o *)*voiceInfoList;
          if ( !*voiceInfoList )
            sub_1C1AE30(0LL, v66);
          v121 = v117;
          v84 = v83->fields._items;
          v85 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v83->fields._version;
          if ( !v84 )
            sub_1C1AE30(v83, v121.fields.key);
          v86 = v83->fields._size;
          if ( (unsigned int)v86 >= v84->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v83,
              v121,
              *(const MethodInfo_35922E4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v87 = (PartyOrganizationUtility_o *)(&v84->obj + v86);
            v83->fields._size = v86 + 1;
            *(_QWORD *)&v87->fields._SelectedNormalFollowerClassId_k__BackingField = v121.fields.key;
            v87 = (PartyOrganizationUtility_o *)((char *)v87 + 32);
            v87->monitor = *(void **)&v121.fields.value;
            sub_1C1AB78(v87, 0LL, *(int64_t *)&v121.fields.value, v67, v68, v69, v70, v71);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v119,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( !v112 )
    goto LABEL_65;
  v43 = OriginalSvtId;
  if ( v112->fields._size >= 1 )
  {
    this->fields.forcePlayVoiceSvtIdList = OriginalSvtId;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.forcePlayVoiceSvtIdList,
      (int64_t)OriginalSvtId,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
    *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v112;
    sub_1C1AB78((PartyOrganizationUtility_o *)voiceInfoList, (int64_t)v112, v105, v106, v107, v108, v109, v110);
    return 1;
  }
  if ( !*voiceInfoList )
LABEL_65:
    sub_1C1AE30(v42, v43);
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
  int64_t v14; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int128 v23; // q1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x1
  struct System_Action_o *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x22
  __int64 v46; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x23
  Il2CppObject *current; // x1
  int64_t *v56; // x24
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  _BOOL8 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x28
  int v66; // w8
  unsigned int v67; // w25
  __int64 v68; // x29
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x1
  __int64 v76; // x0
  const MethodInfo *v77; // x1
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x8
  Il2CppObject *Instance; // x0
  __int64 v82; // x1
  System_String_o *v83; // x20
  System_Action_o *v84; // x23
  CommonUI_o *v85; // x19
  System_String_o *v86; // x21
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4BCBBCF & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, arg);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C1ABD4(&EventSvtControl___c__DisplayClass56_0_TypeInfo, v10);
    sub_1C1ABD4(&Method_EventSvtControl___c__DisplayClass56_1__boxGachaPlayVoice_b__0__, v11);
    sub_1C1ABD4(&EventSvtControl___c__DisplayClass56_1_TypeInfo, v12);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v13);
    byte_4BCBBCF = 1;
  }
  memset(&v94, 0, sizeof(v94));
  v14 = sub_1C1AE20(EventSvtControl___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_35;
  *(_QWORD *)(v14 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  v23 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v14 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v14 + 24) = v23;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 24), 0LL, v24, v25, v26, v27, v28, v29);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v30);
  System_String__IsNullOrEmpty(*(System_String_o **)(v14 + 24), 0LL);
  v31 = *(struct System_Action_o **)(v14 + 48);
  this->fields.callbakEndPlay = v31;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbakEndPlay, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v39, v40, v41, v42, v43, v44);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_1C1AE30(voiceListBoxGacha, v16);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v94 = v93;
LABEL_8:
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v94,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v45 = sub_1C1AE20(EventSvtControl___c__DisplayClass56_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v45, 0LL);
    if ( !v45 )
      sub_1C1AE30(v46, v47);
    *(_QWORD *)(v45 + 24) = v14;
    v54 = v45 + 24;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v45 + 24), v14, v48, v49, v50, v51, v52, v53);
    current = v94.fields._current;
    *(_QWORD *)(v45 + 16) = v94.fields._current;
    v56 = (int64_t *)(v45 + 16);
    sub_1C1AB78((PartyOrganizationUtility_o *)(v45 + 16), (int64_t)current, v57, v58, v59, v60, v61, v62);
    v65 = *(_QWORD *)(v45 + 16);
    if ( !v65 )
      sub_1C1AE30(v63, v64);
    v66 = *(_DWORD *)(v65 + 24);
    if ( v66 >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= v66 )
          sub_1C1AE38(v63, v64);
        v68 = *(_QWORD *)(v65 + 8LL * (int)v67 + 32);
        if ( !v68 )
          sub_1C1AE30(v63, v64);
        if ( !*(_QWORD *)v54 )
          sub_1C1AE30(v63, v64);
        v63 = System_String__op_Equality(
                *(System_String_o **)(v68 + 16),
                *(System_String_o **)(*(_QWORD *)v54 + 24LL),
                0LL);
        if ( v63 )
          break;
        v66 = *(_DWORD *)(v65 + 24);
        if ( (int)++v67 >= v66 )
          goto LABEL_8;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(*(System_String_o **)(v68 + 72), 0LL) )
      {
        v75 = *v56;
        *p_randomVoiceList = (struct ServantVoiceData_array *)*v56;
        sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, v75, v69, v70, v71, v72, v73, v74);
        if ( !*p_randomVoiceList )
          sub_1C1AE30(v76, v77);
        this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
        if ( !*(_QWORD *)v54 )
          sub_1C1AE30(v76, v77);
        this->fields.isSkipPerformance = *(_BYTE *)(*(_QWORD *)v54 + 32LL);
        EventSvtControl__svtVoicePlay(this, v77);
        if ( !*(_QWORD *)v54 )
          sub_1C1AE30(v78, v79);
        v80 = *(_QWORD *)(*(_QWORD *)v54 + 40LL);
        if ( v80 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(v80 + 24))(*(_QWORD *)(v80 + 64), *(_QWORD *)(v80 + 40));
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v83 = *(System_String_o **)(v68 + 72);
        v84 = *(System_Action_o **)(v45 + 32);
        v85 = (CommonUI_o *)Instance;
        v86 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v84 )
        {
          v84 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            v84,
            (Il2CppObject *)v45,
            Method_EventSvtControl___c__DisplayClass56_1__boxGachaPlayVoice_b__0__,
            0LL);
          *(_QWORD *)(v45 + 32) = v84;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v45 + 32), (int64_t)v84, v87, v88, v89, v90, v91, v92);
        }
        if ( !v85 )
          sub_1C1AE30(Instance, v82);
        CommonUI__OpenNotificationDialog(v85, v86, v83, v84, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v94,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  PartyOrganizationUtility_o *p_randomVoiceList; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v30; // x1
  System_String_o **p_specialSvtVoice; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x24
  int v35; // w8
  unsigned int v36; // w27
  __int64 v37; // x28
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_String_o *v44; // x0
  System_String_array *v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  void *v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  VoicePlayCondMaster_o *v67; // x26
  System_Collections_Generic_List_object__o *v68; // x23
  System_Collections_Generic_List_object__o *v69; // x24
  __int64 size; // x20
  unsigned __int64 v71; // x28
  System_String_o *v72; // x27
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  int v77; // w29
  System_Random_o *v78; // x25
  il2cpp_array_size_t v79; // w25
  _BOOL8 v80; // x0
  __int64 v81; // x1
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v84; // w19
  __int64 v85; // x8
  System_String_o *v86; // x27
  Il2CppObject *Item; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  EventSvtControl_o *v96; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BCBBC8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, voiceIds);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__AddRange__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Remove__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor___77505144, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v21);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v22);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v23);
    sub_1C1ABD4(&System_Random_TypeInfo, v24);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1C1ABD4(&StringLiteral_16388/*"_"*/, v26);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v27);
    byte_4BCBBC8 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = (PartyOrganizationUtility_o *)&this->fields.randomVoiceList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
    0LL,
    *(int64_t *)&svtId,
    (int32_t)callbackEnds,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_79;
  v96 = this;
  if ( (int)voiceIds->max_length >= 2 )
  {
    v67 = (VoicePlayCondMaster_o *)Instance;
    v68 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v68,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
    v69 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_56869068(
      v69,
      voiceIds->max_length,
      (const MethodInfo_363C0CC *)Method_System_Collections_Generic_List_string___ctor___77505144);
    if ( !v69 )
      goto LABEL_79;
    System_Collections_Generic_List_object___AddRange(
      v69,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_string__AddRange__);
    size = (unsigned int)v69->fields._size;
    if ( (int)size >= 1 )
    {
      v71 = 0LL;
      do
      {
        if ( v71 >= voiceIds->max_length )
LABEL_71:
          sub_1C1AE38(Instance, v30);
        if ( !v67 )
          goto LABEL_79;
        v72 = voiceIds->m_Items[v71];
        Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v67, svtId, v72, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v68 )
            goto LABEL_79;
          items = v68->fields._items;
          v74 = Method_System_Collections_Generic_List_string__Add__;
          ++v68->fields._version;
          if ( !items )
            goto LABEL_79;
          v75 = v68->fields._size;
          if ( (unsigned int)v75 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v68,
              (Il2CppObject *)v72,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = &items->obj.klass + v75;
            v68->fields._size = v75 + 1;
            v76[4] = (Il2CppClass *)v72;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v76 + 4), (int64_t)v72, v61, v62, v63, v64, v65, v66);
          }
        }
      }
      while ( size != ++v71 );
    }
    if ( !v68 )
      goto LABEL_79;
    v77 = v68->fields._size - 1;
    if ( v77 >= 0 )
    {
      do
      {
        v78 = (System_Random_o *)sub_1C1AE20(System_Random_TypeInfo);
        System_Random___ctor(v78, 0LL);
        if ( !v78 )
          goto LABEL_79;
        Instance = (DataManager_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v78->klass->vtable._7_Next.method)(
                                      v78,
                                      (unsigned int)v68->fields._size,
                                      v78->klass->vtable._8_NextDouble.methodPtr);
        if ( !v96->fields.voiceListMission )
          goto LABEL_79;
        v79 = (unsigned int)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v97,
          (System_Collections_Generic_List_object__o *)v96->fields.voiceListMission,
          (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v98 = v97;
        do
        {
          v80 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v98,
                  (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v80 )
            break;
          current = v98.fields._current;
          if ( !v98.fields._current )
            sub_1C1AE30(v80, v81);
          monitor = (int)v98.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            v84 = 0;
            while ( 1 )
            {
              if ( v84 >= monitor )
                sub_1C1AE38(v80, v81);
              v85 = *((_QWORD *)&current[2].klass + (int)v84);
              if ( !v85 )
                sub_1C1AE30(v80, v81);
              v86 = *(System_String_o **)(v85 + 16);
              Item = System_Collections_Generic_List_object___get_Item(
                       v68,
                       v79,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
              v80 = System_String__op_Equality(v86, (System_String_o *)Item, 0LL);
              if ( v80 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v84 >= monitor )
                goto LABEL_57;
            }
            p_randomVoiceList->klass = (PartyOrganizationUtility_c *)current;
            sub_1C1AB78(p_randomVoiceList, (int64_t)current, v88, v89, v90, v91, v92, v93);
          }
LABEL_57:
          ;
        }
        while ( !p_randomVoiceList->klass );
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v98,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( p_randomVoiceList->klass )
          goto LABEL_74;
        if ( v79 >= voiceIds->max_length )
          goto LABEL_71;
        System_Collections_Generic_List_object___Remove(
          v69,
          (Il2CppObject *)voiceIds->m_Items[v79],
          (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v77 >= 0 );
    }
  }
  else
  {
    Instance = (DataManager_o *)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_79;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v97,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v98 = v97;
    p_specialSvtVoice = &this->fields.specialSvtVoice;
    do
    {
      IsNullOrEmpty = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v98,
                        (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !IsNullOrEmpty )
        break;
      v34 = v98.fields._current;
      if ( !v98.fields._current )
        sub_1C1AE30(IsNullOrEmpty, v33);
      v35 = (int)v98.fields._current[1].monitor;
      if ( v35 >= 1 )
      {
        v36 = 0;
        while ( 1 )
        {
          if ( v36 >= v35 )
            sub_1C1AE38(IsNullOrEmpty, v33);
          v37 = *((_QWORD *)&v34[2].klass + (int)v36);
          if ( !v37 )
            sub_1C1AE30(IsNullOrEmpty, v33);
          if ( !voiceIds->max_length )
            sub_1C1AE38(IsNullOrEmpty, v33);
          if ( System_String__op_Equality(*(System_String_o **)(v37 + 16), voiceIds->m_Items[0], 0LL)
            && System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL) )
          {
            p_randomVoiceList->klass = (PartyOrganizationUtility_c *)v34;
            sub_1C1AB78(p_randomVoiceList, (int64_t)v34, v38, v39, v40, v41, v42, v43);
            goto LABEL_28;
          }
          IsNullOrEmpty = System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL);
          if ( !IsNullOrEmpty )
          {
            v44 = *(System_String_o **)(v37 + 16);
            if ( !v44 )
              sub_1C1AE30(0LL, v33);
            v45 = System_String__Split(v44, 0x5Fu, 0, 0LL);
            if ( !v45 )
              sub_1C1AE30(0LL, v46);
            if ( !v45->max_length )
              sub_1C1AE38(v45, v46);
            v47 = System_String__Concat_63051628(
                    v45->m_Items[0],
                    (System_String_o *)StringLiteral_16388/*"_"*/,
                    *p_specialSvtVoice,
                    0LL);
            IsNullOrEmpty = System_String__op_Equality(*(System_String_o **)(v37 + 16), v47, 0LL);
            if ( IsNullOrEmpty )
              break;
          }
          v35 = (int)v34[1].monitor;
          if ( (int)++v36 >= v35 )
            goto LABEL_28;
        }
        p_randomVoiceList->klass = (PartyOrganizationUtility_c *)v34;
        sub_1C1AB78(p_randomVoiceList, (int64_t)v34, v48, v49, v50, v51, v52, v53);
        v54 = StringLiteral_1/*""*/;
        *p_specialSvtVoice = (System_String_o *)StringLiteral_1/*""*/;
        sub_1C1AB78((PartyOrganizationUtility_o *)p_specialSvtVoice, (int64_t)v54, v55, v56, v57, v58, v59, v60);
      }
LABEL_28:
      ;
    }
    while ( !p_randomVoiceList->klass );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v98,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  if ( p_randomVoiceList->klass )
  {
LABEL_74:
    v96->fields.callbakEndPlay = callbackEnds;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&v96->fields.callbakEndPlay,
      (int64_t)callbackEnds,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    randomVoiceList = v96->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      v96->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(v96, v30);
      return;
    }
LABEL_79:
    sub_1C1AE30(Instance, v30);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  System_Collections_Generic_List_object__o *v24; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v26; // x1
  VoicePlayCondMaster_o *v27; // x22
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v33; // x1
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Random_o *v46; // x21
  int v47; // w21
  struct ServantVoiceData_array *Item; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v56; // x0
  System_Exception_o *v57; // x19
  System_String_o *v58; // x0
  __int64 v59; // x0
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BCBBC7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v19);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v20);
    sub_1C1ABD4(&System_Random_TypeInfo, v21);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4BCBBC7 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v56 = sub_1C1ABE8(&System_Exception_TypeInfo);
      v57 = (System_Exception_o *)sub_1C1AE20(v56);
      v58 = (System_String_o *)sub_1C1ABE8(&StringLiteral_25717/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_64081644(v57, v58, 0LL);
      v59 = sub_1C1ABE8(&Method_EventSvtControl_playPurchaseVoice__);
      sub_1C1ACFC(v57, v59);
    }
    this->fields.callbackStopVoice = callback;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.callbackStopVoice,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    v24 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_35;
    v27 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v60,
      (System_Collections_Generic_List_object__o *)this->fields.voiceListShop,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v61 = v60;
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v61,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v28 )
        break;
      current = v61.fields._current;
      if ( !v61.fields._current )
        sub_1C1AE30(v28, v29);
      if ( !LODWORD(v61.fields._current[1].monitor) )
        sub_1C1AE38(v28, v29);
      klass = v61.fields._current[2].klass;
      if ( !klass )
        sub_1C1AE30(v28, v29);
      if ( !v27 )
        sub_1C1AE30(v28, v29);
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
        if ( !v24 )
          sub_1C1AE30(isVoicePlay, v33);
        v34 = System_Collections_Generic_List_object___Contains(
                v24,
                current,
                (const MethodInfo_363CC20 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
        if ( !v34 )
        {
          items = v24->fields._items;
          v43 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++v24->fields._version;
          if ( !items )
            sub_1C1AE30(v34, v35);
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              current,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v45[4] = (Il2CppClass *)current;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)current, v36, v37, v38, v39, v40, v41);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v61,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v46 = (System_Random_o *)sub_1C1AE20(System_Random_TypeInfo);
    System_Random___ctor(v46, 0LL);
    if ( !v24 || !v46 )
      goto LABEL_35;
    v47 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v46->klass->vtable._7_Next.method)(
            v46,
            (unsigned int)v24->fields._size,
            v46->klass->vtable._8_NextDouble.methodPtr);
    if ( this->fields.beforeVoiceIdx == v47 )
      v47 = (v47 + 1) % v24->fields._size;
    Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                              v24,
                                              v47,
                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = Item;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
      (int64_t)Item,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v47;
    if ( !randomVoiceList )
LABEL_35:
      sub_1C1AE30(Instance, v26);
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v26);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x23
  struct System_Collections_Generic_List_int__o **p_voicePlayedValueList; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  const MethodInfo *v46; // x3
  __int64 PlayableVoiceInfoList; // x0
  const MethodInfo *v48; // x1
  System_Collections_Generic_List_T__o *v49; // x23
  int32_t v50; // w22
  int32_t beforeVoiceIdx; // w9
  int v52; // w1
  const MethodInfo_3573E44 *v53; // x4
  EventSvtControl___c_c *v54; // x0
  System_Func_T__TResult__o *_9__45_0; // x22
  Il2CppObject *v56; // x24
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Int32_array *v65; // x0
  struct ServantVoiceData_array *key; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Collections_Generic_List_int__o *forcePlayVoiceSvtIdList; // x8
  __int64 size; // x23
  System_Int32_array_array *v76; // x19
  unsigned __int64 v77; // x24
  PartyOrganizationUtility_o *m_Items; // x25
  PartyOrganizationUtility_c *v79; // x26
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_KeyValuePair_object__int__o v86; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *voiceInfoList; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v88; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16

  if ( (byte_4BCBBC6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____, callback);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1C1ABD4(&System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo, v7);
    sub_1C1ABD4(&int_____TypeInfo, v8);
    sub_1C1ABD4(&int___TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Key__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__, v17);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v19);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v20);
    sub_1C1ABD4(&Method_EventSvtControl___c__playVoice_b__45_0__, v21);
    sub_1C1ABD4(&EventSvtControl___c_TypeInfo, v22);
    byte_4BCBBC6 = 1;
  }
  *(_QWORD *)&v86.fields.value = 0LL;
  voiceInfoList = 0LL;
  v86.fields.key = 0LL;
  v23 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.forcePlayVoiceSvtIdList = v23;
  p_forcePlayVoiceSvtIdList = &this->fields.forcePlayVoiceSvtIdList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.forcePlayVoiceSvtIdList,
    (int64_t)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.voicePlayedValueList = v31;
  p_voicePlayedValueList = &this->fields.voicePlayedValueList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.voicePlayedValueList,
    (int64_t)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v39);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.callbackStopVoice,
      (int64_t)callback,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    PlayableVoiceInfoList = EventSvtControl__TryGetPlayableVoiceInfoList(
                              this,
                              &voiceInfoList,
                              this->fields.voiceListRand,
                              v46);
    if ( (PlayableVoiceInfoList & 1) != 0 )
    {
      v49 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_43;
      if ( voiceInfoList->fields._size == 1 )
      {
        v50 = 0;
      }
      else
      {
        beforeVoiceIdx = this->fields.beforeVoiceIdx;
        if ( (beforeVoiceIdx & 0x80000000) == 0 )
        {
          if ( beforeVoiceIdx <= voiceInfoList->fields._size - 1 )
            v52 = this->fields.beforeVoiceIdx;
          else
            v52 = voiceInfoList->fields._size - 1;
          this->fields.beforeVoiceIdx = v52;
          *(_QWORD *)&v88.fields.value = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
                                           v49,
                                           v52,
                                           (const MethodInfo_3591FC8 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__).fields.key;
          v88.fields.key = (Il2CppObject *)&v86;
          System_Collections_Generic_KeyValuePair_object__int____ctor(
            v88,
            0LL,
            Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
            v53);
          PlayableVoiceInfoList = (__int64)voiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_43;
          System_Collections_Generic_List_KeyValuePair_object__int____set_Item(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            this->fields.beforeVoiceIdx,
            v86,
            (const MethodInfo_3592020 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
          v49 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        }
        v54 = EventSvtControl___c_TypeInfo;
        if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
          v54 = EventSvtControl___c_TypeInfo;
        }
        _9__45_0 = (System_Func_T__TResult__o *)v54->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v54->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v54);
            v54 = EventSvtControl___c_TypeInfo;
          }
          v56 = (Il2CppObject *)v54->static_fields->__9;
          _9__45_0 = (System_Func_T__TResult__o *)sub_1C1AE20(System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
          System_Func_KeyValuePair_object__int___int____ctor(
            _9__45_0,
            v56,
            Method_EventSvtControl___c__playVoice_b__45_0__,
            0LL);
          static_fields = EventSvtControl___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_KeyValuePair_ServantVoiceData____int___int__o *)_9__45_0;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
            (int64_t)_9__45_0,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63);
        }
        v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v49,
                                                                     (System_Func_TSource__TResult__o *)_9__45_0,
                                                                     (const MethodInfo_2FCA3F4 *)Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
        v65 = System_Linq_Enumerable__ToArray_int_(
                v64,
                (const MethodInfo_2FD8CD8 *)Method_System_Linq_Enumerable_ToArray_int___);
        PlayableVoiceInfoList = RandomUtility__GetRandomRangeIndex(v65, 0, 0LL);
        v49 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        if ( !voiceInfoList )
LABEL_43:
          sub_1C1AE30(PlayableVoiceInfoList, v48);
        v50 = PlayableVoiceInfoList;
      }
      Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
               v49,
               0,
               (const MethodInfo_3591FC8 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
      key = (struct ServantVoiceData_array *)BasicHelper__IndexValue_KeyValuePair_object__int__(
                                               v49,
                                               v50,
                                               Item,
                                               (const MethodInfo_2F8DE00 *)Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____).fields.key;
      this->fields.randomVoiceList = key;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)key,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      randomVoiceList = this->fields.randomVoiceList;
      this->fields.beforeVoiceIdx = v50;
      if ( randomVoiceList )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
        EventSvtControl__setVoiceForm(this, v48);
        forcePlayVoiceSvtIdList = this->fields.forcePlayVoiceSvtIdList;
        if ( forcePlayVoiceSvtIdList )
        {
          size = (unsigned int)forcePlayVoiceSvtIdList->fields._size;
          if ( (int)size < 1 )
            return;
          if ( *p_voicePlayedValueList )
          {
            if ( (*p_voicePlayedValueList)->fields._size <= v50 )
              return;
            v76 = (System_Int32_array_array *)sub_1C1AC7C(int_____TypeInfo, (unsigned int)size);
            v77 = 0LL;
            m_Items = (PartyOrganizationUtility_o *)v76->m_Items;
            do
            {
              PlayableVoiceInfoList = sub_1C1AC7C(int___TypeInfo, 2LL);
              if ( !*p_forcePlayVoiceSvtIdList )
                goto LABEL_43;
              v79 = (PartyOrganizationUtility_c *)PlayableVoiceInfoList;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        *p_forcePlayVoiceSvtIdList,
                                        v77,
                                        (const MethodInfo_361F57C *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !v79 )
                goto LABEL_43;
              if ( !LODWORD(v79->_1.namespaze) )
                goto LABEL_44;
              LODWORD(v79->_1.byval_arg.data) = PlayableVoiceInfoList;
              PlayableVoiceInfoList = (__int64)*p_voicePlayedValueList;
              if ( !*p_voicePlayedValueList )
                goto LABEL_43;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        (System_Collections_Generic_List_int__o *)PlayableVoiceInfoList,
                                        v50,
                                        (const MethodInfo_361F57C *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( LODWORD(v79->_1.namespaze) <= 1 )
                goto LABEL_44;
              HIDWORD(v79->_1.byval_arg.data) = PlayableVoiceInfoList;
              if ( !v76 )
                goto LABEL_43;
              if ( v77 >= v76->max_length )
LABEL_44:
                sub_1C1AE38(PlayableVoiceInfoList, v48);
              m_Items->klass = v79;
              sub_1C1AB78(m_Items, (int64_t)v79, v80, v81, v82, v83, v84, v85);
              ++v77;
              m_Items = (PartyOrganizationUtility_o *)((char *)m_Items + 8);
            }
            while ( size != v77 );
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            PlayableVoiceInfoList = (__int64)NetworkManager__getRequest_object_(
                                               0LL,
                                               (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
            if ( PlayableVoiceInfoList )
            {
              TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)PlayableVoiceInfoList, v76, 0LL);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  PartyOrganizationUtility_o *p_voiceListBoxGacha; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v24; // x1

  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)performanceRoot,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.performanceRoot = performanceRoot;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.performanceRoot,
    (int64_t)performanceRoot,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  p_voiceListBoxGacha = (PartyOrganizationUtility_o *)&this->fields.voiceListBoxGacha;
  if ( listBoxGacha )
  {
    p_voiceListBoxGacha->klass = (PartyOrganizationUtility_c *)listBoxGacha;
    v24 = listBoxGacha;
  }
  else
  {
    v24 = 0LL;
    p_voiceListBoxGacha->klass = 0LL;
  }
  sub_1C1AB78(p_voiceListBoxGacha, (int64_t)v24, v17, v18, v19, v20, v21, v22);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__setIndividualShopSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listIndividualShop,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 11);
  if ( listIndividualShop )
  {
    v17->klass = (PartyOrganizationUtility_c *)listIndividualShop;
    v18 = listIndividualShop;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1C1AB78(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
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
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  PartyOrganizationUtility_o *p_voiceListMission; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  PartyOrganizationUtility_o *p_voiceListShop; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v37; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListOverwrite; // x19
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4BCBBC4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, listRand);
    byte_4BCBBC4 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)listMission,
    (int32_t)listShop,
    assetName,
    *(BattleSetupInfo_o **)&svtId,
    (FollowerInfo_o *)method,
    v7);
  if ( listRand && listRand->fields._size >= 1 )
  {
    this->fields.voiceListRand = listRand;
    p_voiceListRand = &this->fields.voiceListRand;
    v21 = listRand;
  }
  else
  {
    this->fields.voiceListRand = 0LL;
    p_voiceListRand = &this->fields.voiceListRand;
    v21 = 0LL;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)p_voiceListRand, (int64_t)v21, v14, v15, v16, v17, v18, v19);
  p_voiceListMission = (PartyOrganizationUtility_o *)&this->fields.voiceListMission;
  if ( listMission )
  {
    p_voiceListMission->klass = (PartyOrganizationUtility_c *)listMission;
    v29 = listMission;
  }
  else
  {
    v29 = 0LL;
    p_voiceListMission->klass = 0LL;
  }
  sub_1C1AB78(p_voiceListMission, (int64_t)v29, v22, v23, v24, v25, v26, v27);
  p_voiceListShop = (PartyOrganizationUtility_o *)&this->fields.voiceListShop;
  if ( listShop )
  {
    p_voiceListShop->klass = (PartyOrganizationUtility_c *)listShop;
    v37 = listShop;
  }
  else
  {
    v37 = 0LL;
    p_voiceListShop->klass = 0LL;
  }
  sub_1C1AB78(p_voiceListShop, (int64_t)v37, v30, v31, v32, v33, v34, v35);
  this->fields.voiceListOverwrite = 0LL;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_voiceListOverwrite, 0LL, v39, v40, v41, v42, v43, v44);
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
  __int64 v14; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v16; // x25
  __int64 v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  __int64 v25; // x21
  System_Predicate_int__o *v26; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  UIStandFigureR_o *v30; // x21
  System_Action_o *v31; // x22
  Il2CppObject *v32; // [xsp+8h] [xbp-68h]

  if ( (byte_4BCBBC5 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_EventSvtControl_svtVoicePlay__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Exists__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1C1ABD4(&System_Predicate_int__TypeInfo, v9);
    sub_1C1ABD4(&Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__, v10);
    sub_1C1ABD4(&EventSvtControl___c__DisplayClass44_0_TypeInfo, v11);
    byte_4BCBBC5 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v32 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_20;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = sub_1C1AE20(EventSvtControl___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0LL);
      if ( v16 >= randomVoiceList->max_length )
        sub_1C1AE38(monitor, v14);
      if ( !v17 )
        break;
      v24 = (int64_t)randomVoiceList->m_Items[v16];
      *(_QWORD *)(v17 + 16) = v24;
      v25 = v17 + 16;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 16), v24, v18, v19, v20, v21, v22, v23);
      v26 = (System_Predicate_int__o *)sub_1C1AE20(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v26,
        (Il2CppObject *)v17,
        Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__,
        0LL);
      if ( !v12 )
        break;
      monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                               v12,
                                                               (System_Predicate_T__o *)v26,
                                                               (const MethodInfo_361FE78 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        if ( !*(_QWORD *)v25 )
          break;
        v14 = *(unsigned int *)(*(_QWORD *)v25 + 56LL);
        items = v12->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v14,
            *(const MethodInfo_361F86C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
    sub_1C1AE30(monitor, v14);
  }
LABEL_16:
  monitor = (System_Collections_Generic_List_object__o *)v32[5].monitor;
  if ( !monitor )
    goto LABEL_20;
  monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           monitor,
                                                           0,
                                                           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
  if ( !monitor )
    goto LABEL_20;
  v30 = *(UIStandFigureR_o **)&monitor->fields._size;
  v31 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v31, v32, Method_EventSvtControl_svtVoicePlay__, 0LL);
  if ( !v30 )
    goto LABEL_20;
  UIStandFigureR__PreloadFormAssets(v30, v12, v31, 0LL);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v29; // x23
  System_Collections_Generic_List_object__o *v30; // x24
  __int64 v31; // x26
  __int64 v32; // x27
  System_String_o *v33; // x25
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int32_t v44; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v56; // w25
  __int64 v57; // x8
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x0
  const MethodInfo *v65; // x1
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BCBBCE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4BCBBCE = 1;
  }
  memset(&v67, 0, sizeof(v67));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !targetVoiceIds )
    goto LABEL_40;
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_21:
      sub_1C1AE38(Instance, v20);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_24;
  }
  v29 = (VoicePlayCondMaster_o *)Instance;
  v30 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v31 = 0LL;
    v32 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v29 )
    {
      v33 = targetVoiceIds->m_Items[v31];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v29, svtId, v33, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v30 )
          break;
        items = v30->fields._items;
        v41 = Method_System_Collections_Generic_List_string__Add__;
        ++v30->fields._version;
        if ( !items )
          break;
        size = v30->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)v33,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v33;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v33, v34, v35, v36, v37, v38, v39);
        }
      }
      if ( v32 == v31 )
        goto LABEL_22;
      if ( ++v31 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_21;
    }
LABEL_40:
    sub_1C1AE30(Instance, v20);
  }
LABEL_22:
  if ( !v30 )
    goto LABEL_40;
  v44 = UnityEngine_Random__Range_70754152(0, v30->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v30,
                              v44,
                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_24:
  this->fields.callbakEndPlay = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v46, v47, v48, v49, v50, v51);
  Instance = (DataManager_o *)this->fields.voiceIndividualShopList;
  if ( !Instance )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v67 = v66;
LABEL_26:
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v52 )
      break;
    current = v67.fields._current;
    if ( !v67.fields._current )
      sub_1C1AE30(v52, v53);
    monitor = (int)v67.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v56 = 0;
      while ( 1 )
      {
        if ( v56 >= monitor )
          sub_1C1AE38(v52, v53);
        v57 = *((_QWORD *)&current[2].klass + (int)v56);
        if ( !v57 )
          sub_1C1AE30(v52, v53);
        v52 = System_String__op_Equality(*(System_String_o **)(v57 + 16), Item, 0LL);
        if ( v52 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v56 >= monitor )
          goto LABEL_26;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      if ( !*p_randomVoiceList )
        sub_1C1AE30(v64, v65);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v65);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BCBBCD & 1) == 0 )
  {
    sub_1C1ABD4(&SoundManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_24123/*"svtVoicePlay"*/, v3);
    byte_4BCBBCD = 1;
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
      sub_1C1AE30(0LL, v7);
    SePlayer__Destroy(*p_player, 0LL);
    this->fields.player = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.player, 0LL, v8, v9, v10, v11, v12, v13);
    this->fields.callbakEndPlay = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbakEndPlay, 0LL, v14, v15, v16, v17, v18, v19);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70778992(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_24123/*"svtVoicePlay"*/,
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
  if ( (byte_4BCBBC9 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    this = (EventSvtControl_o *)sub_1C1ABD4(&Method_EventSvtControl_SvtVoicePlayProc__, v3);
    byte_4BCBBC9 = 1;
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
        sub_1C1AE38(this, method);
      v7 = randomVoiceList->m_Items[playCnt];
      if ( v7 )
      {
        additionalPerformances = v7->fields.additionalPerformances;
        v9 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
        System_Action___ctor(v9, (Il2CppObject *)v2, Method_EventSvtControl_SvtVoicePlayProc__, 0LL);
        EventSvtControl__PlayPerformance(v2, additionalPerformances, 0, 1, v9, v10);
        return;
      }
LABEL_13:
      sub_1C1AE30(this, method);
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
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Random_o *v49; // x20
  int32_t v50; // w0
  struct ServantVoiceData_array *Item; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BCBBD5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v9);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_1C1ABD4(&System_Random_TypeInfo, v20);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4BCBBD5 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               eventId,
               (const MethodInfo_3248678 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v26 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_34;
        v27 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v59,
          (System_Collections_Generic_List_object__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v60 = v59;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v60,
                  (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v28 )
            break;
          current = v60.fields._current;
          if ( !v60.fields._current )
            sub_1C1AE30(v28, v29);
          if ( !LODWORD(v60.fields._current[1].monitor) )
            sub_1C1AE38(v28, v29);
          klass = v60.fields._current[2].klass;
          if ( !klass )
            sub_1C1AE30(v28, v29);
          if ( !v27 )
            sub_1C1AE30(v28, v29);
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
              sub_1C1AE30(isVoicePlay, v33);
            items = v26->fields._items;
            v41 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v26->fields._version;
            if ( !items )
              sub_1C1AE30(isVoicePlay, v33);
            size = v26->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                current,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v43[4] = (Il2CppClass *)current;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)current, v34, v35, v36, v37, v38, v39);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v60,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v26 )
        {
          if ( v26->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&this->fields.callbackStopVoice,
              (int64_t)callback,
              (int64_t)v24,
              v44,
              v45,
              v46,
              v47,
              v48);
            v49 = (System_Random_o *)sub_1C1AE20(System_Random_TypeInfo);
            System_Random___ctor(v49, 0LL);
            if ( v49 )
            {
              v50 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v49->klass->vtable._7_Next.method)(
                      v49,
                      (unsigned int)v26->fields._size,
                      v49->klass->vtable._8_NextDouble.methodPtr);
              Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                        v26,
                                                        v50,
                                                        (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
              this->fields.randomVoiceList = Item;
              sub_1C1AB78(
                (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
                (int64_t)Item,
                v52,
                v53,
                v54,
                v55,
                v56,
                v57);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v23);
                return;
              }
            }
LABEL_34:
            sub_1C1AE30(Instance, v23);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *animName; // x1
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v31; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  bool result; // w0
  struct EventSvtControl___c__DisplayClass71_0_o *_8__1; // x8
  Il2CppObject *v41; // x20
  System_Func_bool__o *v42; // x21
  UnityEngine_WaitUntil_o *v43; // x20
  PartyOrganizationUtility_o *v44; // x19
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Action_o *playEndAction; // x8

  v2 = this;
  if ( (byte_4BCBBE2 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Func_bool__TypeInfo, method);
    sub_1C1ABD4(&Method_EventSvtControl___c__DisplayClass71_0__PlayPerformanceProc_b__0__, v3);
    sub_1C1ABD4(&EventSvtControl___c__DisplayClass71_0_TypeInfo, v4);
    sub_1C1ABD4(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)sub_1C1ABD4(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4BCBBE2 = 1;
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
    v9 = (Il2CppObject *)sub_1C1AE20(EventSvtControl___c__DisplayClass71_0_TypeInfo);
    System_Object___ctor(v9, 0LL);
    v2->fields.__8__1 = (struct EventSvtControl___c__DisplayClass71_0_o *)v9;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    v22 = (int64_t)v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v22;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, v22, v16, v17, v18, v19, v20, v21);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    animName = (Il2CppObject *)v2->fields.animName;
    this->fields.__2__current = animName;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.__2__current,
      (int64_t)animName,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    delay = v2->fields.delay;
    if ( delay > 0.0 )
    {
      v31 = (UnityEngine_WaitForSeconds_o *)sub_1C1AE20(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v31, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v31;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C1AB78(p__2__current, (int64_t)v31, v33, v34, v35, v36, v37, v38);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
            UnityEngine_Animation__Play_70538820((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0LL);
            if ( v2->fields.isWaitPerformance )
            {
              v41 = (Il2CppObject *)v2->fields.__8__1;
              v42 = (System_Func_bool__o *)sub_1C1AE20(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v42,
                v41,
                Method_EventSvtControl___c__DisplayClass71_0__PlayPerformanceProc_b__0__,
                0LL);
              v43 = (UnityEngine_WaitUntil_o *)sub_1C1AE20(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v43, v42, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v43;
              v44 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1C1AB78(v44, (int64_t)v43, v45, v46, v47, v48, v49, v50);
              *(_DWORD *)&v44[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
              return 1;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_21:
    sub_1C1AE30(this, method);
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_EventSvtControl__PlayPerformanceProc_d__71_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCBBDE & 1) == 0 )
  {
    sub_1C1ABD4(&EventSvtControl___c_TypeInfo, v1);
    byte_4BCBBDE = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(EventSvtControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventSvtControl___c_TypeInfo->static_fields->__9 = (struct EventSvtControl___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)EventSvtControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, 0LL);
  return x->fields.id;
}


int32_t __fastcall EventSvtControl___c___playVoice_b__45_0(
        EventSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_ServantVoiceData____int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4BCBBDF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Value__, x.fields.key);
    byte_4BCBBDF = 1;
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
    sub_1C1AE30(this, a);
  return System_Int32__Equals_63845804((int32_t)&v5, voice->fields.form, 0LL);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventSvtControl___c__DisplayClass56_0_o *CS___8__locals1; // x8
  EventSvtControl___c__DisplayClass56_1_o *v9; // x19
  struct System_Action_o *vdArray; // x1
  struct EventSvtControl___c__DisplayClass56_0_o *v11; // x8
  struct System_Action_o *_9__0; // x9
  struct EventSvtControl___c__DisplayClass56_0_o *v13; // x8
  struct System_Action_o *callBackStartPlay; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  v9 = this;
  this = (EventSvtControl___c__DisplayClass56_1_o *)CS___8__locals1->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  vdArray = (struct System_Action_o *)v9->fields.vdArray;
  this[1].fields.__9__0 = vdArray;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this[1].fields.__9__0, (int64_t)vdArray, v2, v3, v4, v5, v6, v7);
  v11 = v9->fields.CS___8__locals1;
  if ( !v11
    || (this = (EventSvtControl___c__DisplayClass56_1_o *)v11->fields.__4__this) == 0LL
    || (_9__0 = this[1].fields.__9__0) == 0LL
    || (LODWORD(this[2].klass) = _9__0->fields.m_target,
        BYTE2(this[5].fields.vdArray) = v11->fields.arg.fields.skipPerformance,
        EventSvtControl__svtVoicePlay((EventSvtControl_o *)this, method),
        (v13 = v9->fields.CS___8__locals1) == 0LL) )
  {
LABEL_10:
    sub_1C1AE30(this, method);
  }
  callBackStartPlay = v13->fields.arg.fields.callBackStartPlay;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BCBBE0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_ServantVoiceData___, dataList);
    sub_1C1ABD4(&System_Func_ServantVoiceData__bool__TypeInfo, v5);
    sub_1C1ABD4(&Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__1__, v6);
    byte_4BCBBE0 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1C1AE20(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_object__49849512(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2F8A4A8 *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool __fastcall EventSvtControl___c__DisplayClass60_0___PlayEventTradeVoice_b__1(
        EventSvtControl___c__DisplayClass60_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C1AE30(this, 0LL);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BCBBE1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_ServantVoiceData___, dataList);
    sub_1C1ABD4(&System_Func_ServantVoiceData__bool__TypeInfo, v5);
    sub_1C1ABD4(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__1__, v6);
    byte_4BCBBE1 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1C1AE20(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_object__49849512(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2F8A4A8 *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool __fastcall EventSvtControl___c__DisplayClass61_0___PlayEventCraftVoice_b__1(
        EventSvtControl___c__DisplayClass61_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL);
}