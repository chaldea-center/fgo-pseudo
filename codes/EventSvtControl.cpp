void __fastcall EventSvtControl___ctor(EventSvtControl_o *this, const MethodInfo *method)
{
  this->fields.volume = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventSvtControl__EndPlay(EventSvtControl_o *this, const MethodInfo *method)
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
  PlayMakerFSM_o *fsm; // x0

  v8 = this;
  if ( (byte_40F9BA7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22380, method);
    this = (EventSvtControl_o *)sub_B16FFC(&StringLiteral_5479, v9);
    byte_40F9BA7 = 1;
  }
  if ( !v8->fields.isDead )
  {
    playCnt = v8->fields.playCnt;
    if ( (int)playCnt < v8->fields.maxPlayCnt )
    {
      randomVoiceList = v8->fields.randomVoiceList;
      if ( randomVoiceList )
      {
        if ( (unsigned int)playCnt >= randomVoiceList->max_length )
        {
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v12 = randomVoiceList->m_Items[playCnt];
        if ( v12 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)v8,
            (System_String_o *)StringLiteral_22380,
            v12->fields.delay,
            0LL);
          return;
        }
      }
LABEL_17:
      sub_B170D4();
    }
    p_player = (BattleServantConfConponent_o *)&v8->fields.player;
    if ( v8->fields.player )
    {
      p_player->klass = 0LL;
      sub_B16F98(p_player, 0LL, v2, v3, v4, v5, v6, v7);
    }
    p_callbakEndPlay = (BattleServantConfConponent_o *)&v8->fields.callbakEndPlay;
    callbakEndPlay = v8->fields.callbakEndPlay;
    v8->fields.playCnt = 0;
    if ( callbakEndPlay )
    {
      p_callbakEndPlay->klass = 0LL;
      sub_B16F98(p_callbakEndPlay, 0LL, v2, v3, v4, v5, v6, v7);
      ActionExtensions__Call(callbakEndPlay, 0LL);
    }
    else
    {
      p_callbackStopVoice = (BattleServantConfConponent_o *)&v8->fields.callbackStopVoice;
      callbackStopVoice = v8->fields.callbackStopVoice;
      if ( callbackStopVoice )
      {
        p_callbackStopVoice->klass = 0LL;
        sub_B16F98(p_callbackStopVoice, 0LL, v2, v3, v4, v5, v6, v7);
        System_Action__Invoke(callbackStopVoice, 0LL);
      }
      else
      {
        fsm = v8->fields.fsm;
        if ( !fsm )
          goto LABEL_17;
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5479, 0LL);
      }
    }
  }
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v30; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x23
  __int64 v32; // x8
  unsigned __int64 v33; // x26
  signed __int64 v34; // x27
  System_String_o *v35; // x25
  int32_t v36; // w21
  System_String_o *v37; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListRecipe; // x0
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v48; // w24
  __int64 v49; // x8
  _BOOL8 v50; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // x1
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F9BAD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40F9BAD = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_19:
      sub_B17100(MasterData_WarQuestSelectionMaster, v21, v22);
      sub_B170A0();
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_24;
  }
  v30 = (VoicePlayCondMaster_o *)MasterData_WarQuestSelectionMaster;
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  v32 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    v34 = (int)v32;
    while ( v30 )
    {
      v35 = targetVoiceIds->m_Items[v33];
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                                          v30,
                                                                          svtId,
                                                                          v35,
                                                                          0LL,
                                                                          -1LL,
                                                                          -1,
                                                                          0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_41;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v31,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v33 >= v34 )
        goto LABEL_20;
      if ( v33 >= targetVoiceIds->max_length )
        goto LABEL_19;
    }
    goto LABEL_41;
  }
LABEL_20:
  if ( !v31 )
    goto LABEL_41;
  v36 = UnityEngine_Random__Range_34843248(0, v31->fields._size, 0LL);
  if ( v31->fields._size <= (unsigned int)v36 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  m_Items = (System_String_o **)&v31->fields._items->m_Items[v36];
LABEL_24:
  v37 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v39, v40, v41, v42, v43, v44);
  voiceListRecipe = this->fields.voiceListRecipe;
  if ( !voiceListRecipe )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListRecipe,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v60 = v59;
LABEL_33:
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v50 )
      break;
    current = v60.fields.current;
    if ( !v60.fields.current )
      sub_B170D4();
    monitor = (int)v60.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v48 = 0;
      while ( 1 )
      {
        if ( v48 >= monitor )
        {
          sub_B17100(v50, v51, v52);
          sub_B170A0();
        }
        v49 = *((_QWORD *)&current[2].klass + (int)v48);
        if ( !v49 )
          sub_B170D4();
        v50 = System_String__op_Equality(*(System_String_o **)(v49 + 16), v37, 0LL);
        if ( v50 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v48 >= monitor )
          goto LABEL_33;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      if ( !*p_randomVoiceList )
        sub_B170D4();
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v58);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v30; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x23
  __int64 v32; // x8
  unsigned __int64 v33; // x26
  signed __int64 v34; // x27
  System_String_o *v35; // x25
  int32_t v36; // w21
  System_String_o *v37; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListTreasureBox; // x0
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v48; // w24
  __int64 v49; // x8
  _BOOL8 v50; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // x1
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F9BAC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40F9BAC = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_19:
      sub_B17100(MasterData_WarQuestSelectionMaster, v21, v22);
      sub_B170A0();
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_24;
  }
  v30 = (VoicePlayCondMaster_o *)MasterData_WarQuestSelectionMaster;
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  v32 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    v34 = (int)v32;
    while ( v30 )
    {
      v35 = targetVoiceIds->m_Items[v33];
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                                          v30,
                                                                          svtId,
                                                                          v35,
                                                                          0LL,
                                                                          -1LL,
                                                                          -1,
                                                                          0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_41;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v31,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v33 >= v34 )
        goto LABEL_20;
      if ( v33 >= targetVoiceIds->max_length )
        goto LABEL_19;
    }
    goto LABEL_41;
  }
LABEL_20:
  if ( !v31 )
    goto LABEL_41;
  v36 = UnityEngine_Random__Range_34843248(0, v31->fields._size, 0LL);
  if ( v31->fields._size <= (unsigned int)v36 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  m_Items = (System_String_o **)&v31->fields._items->m_Items[v36];
LABEL_24:
  v37 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v39, v40, v41, v42, v43, v44);
  voiceListTreasureBox = this->fields.voiceListTreasureBox;
  if ( !voiceListTreasureBox )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListTreasureBox,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v60 = v59;
LABEL_33:
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v50 )
      break;
    current = v60.fields.current;
    if ( !v60.fields.current )
      sub_B170D4();
    monitor = (int)v60.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v48 = 0;
      while ( 1 )
      {
        if ( v48 >= monitor )
        {
          sub_B17100(v50, v51, v52);
          sub_B170A0();
        }
        v49 = *((_QWORD *)&current[2].klass + (int)v48);
        if ( !v49 )
          sub_B170D4();
        v50 = System_String__op_Equality(*(System_String_o **)(v49 + 16), v37, 0LL);
        if ( v50 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v48 >= monitor )
          goto LABEL_33;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      if ( !*p_randomVoiceList )
        sub_B170D4();
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v58);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  WebViewManager_o *Instance; // x0
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_int__o *v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  struct System_String_array *befVoiceIds; // x10
  __int64 v38; // x9
  unsigned __int64 v39; // x24
  int v40; // w20
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  System_String_o *v42; // x25
  int monitor; // w8
  int i; // w27
  __int64 v45; // x20
  _BOOL8 isVoicePlay; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  Il2CppObject *current; // x28
  int v50; // w27
  int v51; // w8
  unsigned __int64 v52; // x20
  unsigned int v53; // w23
  struct System_Collections_Generic_List_ServantVoiceData____o *v54; // x0
  int v55; // w24
  System_String_o *v56; // x22
  void *v57; // x8
  int v58; // w25
  __int64 v59; // x27
  _BOOL8 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  Il2CppObject *v63; // x28
  int v64; // w8
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  __int64 v67; // [xsp+8h] [xbp-D8h]
  int v68; // [xsp+10h] [xbp-D0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-C8h]
  struct System_String_array *v70; // [xsp+30h] [xbp-B0h]
  int v72; // [xsp+40h] [xbp-A0h]
  _BYTE v73[32]; // [xsp+48h] [xbp-98h] BYREF
  int v74; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_40F9BAB & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaTalkInfo_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40F9BAB = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v74 = 0;
  v20 = (BoxGachaTalkInfo_o *)sub_B170CC(BoxGachaTalkInfo_TypeInfo, *(_QWORD *)&svtId, talkEntity, info, method);
  BoxGachaTalkInfo___ctor(v20, 0LL);
  *info = v20;
  sub_B16F98((BattleServantConfConponent_o *)info, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v33 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31,
                                                    v32);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_73;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_73;
  v38 = *(_QWORD *)&befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  v68 = v38;
  if ( (int)v38 < 1 )
  {
    v50 = 0;
    if ( !v33 )
      return 0;
  }
  else
  {
    v67 = *(_QWORD *)&befVoiceIds->max_length;
    if ( !(_DWORD)v67 )
      goto LABEL_74;
    v39 = 0LL;
    v40 = 0;
    v70 = befVoiceIds;
    while ( 1 )
    {
      v72 = v40;
      voiceListBoxGacha = this->fields.voiceListBoxGacha;
      if ( !voiceListBoxGacha )
        goto LABEL_73;
      v42 = befVoiceIds->m_Items[v39];
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v73,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListBoxGacha,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v75 = *(System_Collections_Generic_List_Enumerator_T__o *)v73;
      while ( 1 )
      {
        isVoicePlay = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v75,
                        (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( !isVoicePlay )
          break;
        current = v75.fields.current;
        if ( !v75.fields.current )
          sub_B170D4();
        monitor = (int)v75.fields.current[1].monitor;
        if ( monitor >= 1 )
        {
          for ( i = 0; i < monitor; ++i )
          {
            if ( i >= (unsigned int)monitor )
            {
              sub_B17100(isVoicePlay, v47, v48);
              sub_B170A0();
            }
            v45 = *((_QWORD *)&current[2].klass + i);
            if ( !v45 )
              sub_B170D4();
            isVoicePlay = System_String__op_Equality(*(System_String_o **)(v45 + 16), v42, 0LL);
            if ( isVoicePlay )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                sub_B170D4();
              isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                              MasterData_WarQuestSelectionMaster,
                              svtId,
                              v42,
                              0LL,
                              -1LL,
                              -1,
                              0LL);
              if ( isVoicePlay )
              {
                if ( !*info )
                  sub_B170D4();
                BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v45 + 16),
                  *(System_String_o **)(v45 + 48),
                  0LL);
                if ( !v33 )
                  sub_B170D4();
                System_Collections_Generic_List_int___Add(
                  v33,
                  v39,
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            monitor = (int)current[1].monitor;
          }
        }
      }
      *(_DWORD *)&v73[4 * v72 + 24] = 202;
      v40 = ++v74;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v75,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      v50 = v40;
      befVoiceIds = v70;
      if ( v40 )
      {
        v51 = v40 - 1;
        if ( *(_DWORD *)&v73[4 * v40 + 20] == 202 )
        {
          v50 = --v40;
          v74 = v51;
        }
      }
      if ( (__int64)++v39 >= v68 )
        break;
      if ( v39 >= v70->max_length )
        goto LABEL_74;
    }
    LODWORD(v38) = v67;
    if ( !v33 )
      return 0;
  }
  if ( !v33->fields._size )
    return 0;
  if ( (int)v38 >= 1 )
  {
    if ( aftVoiceIds )
    {
      v52 = 0LL;
      v53 = 0;
      while ( v52 < aftVoiceIds->max_length )
      {
        v54 = this->fields.voiceListBoxGacha;
        if ( !v54 )
          goto LABEL_73;
        v55 = v50;
        v56 = aftVoiceIds->m_Items[v52];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v73,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v54,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v75 = *(System_Collections_Generic_List_Enumerator_T__o *)v73;
        while ( 1 )
        {
          v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v75,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v60 )
            break;
          v63 = v75.fields.current;
          if ( !v75.fields.current )
            sub_B170D4();
          v57 = v75.fields.current[1].monitor;
          if ( (int)v57 >= 1 )
          {
            v58 = 0;
            do
            {
              if ( v58 >= (unsigned int)v57 )
              {
                sub_B17100(v60, v61, v62);
                sub_B170A0();
              }
              v59 = *((_QWORD *)&v63[2].klass + v58);
              if ( !v59 )
                sub_B170D4();
              v60 = System_String__op_Equality(*(System_String_o **)(v59 + 16), v56, 0LL);
              if ( v60 )
              {
                if ( v33->fields._size <= v53 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                if ( v52 == v33->fields._items->m_Items[v53 + 1] )
                {
                  if ( !*info )
                    sub_B170D4();
                  BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v59 + 16),
                    *(System_String_o **)(v59 + 48),
                    0LL);
                  ++v53;
                }
              }
              LODWORD(v57) = v63[1].monitor;
              ++v58;
            }
            while ( v58 < (int)v57 );
          }
        }
        *(_DWORD *)&v73[4 * v55 + 24] = 377;
        v50 = ++v74;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v75,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v50 )
        {
          v64 = v50 - 1;
          if ( *(_DWORD *)&v73[4 * v50 + 20] == 377 )
          {
            --v50;
            v74 = v64;
          }
        }
        if ( (__int64)++v52 >= v68 )
          goto LABEL_70;
      }
LABEL_74:
      sub_B17100(v34, v35, v36);
      sub_B170A0();
    }
LABEL_73:
    sub_B170D4();
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
  sub_B16F98(
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
  sub_B16F98(v17, v18, v11, v12, v13, v14, v15, v16);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v9->fields.facetex = (struct UITexture_o *)listOverwrite;
  v9 = (BattleServantConfConponent_o *)((char *)v9 + 176);
  sub_B16F98(v9, (System_Int32_array **)listOverwrite, v10, v11, v12, v13, v14, v15);
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
  sub_B16F98(
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
  sub_B16F98(v17, v18, v11, v12, v13, v14, v15, v16);
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(v17, v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__boxGachaPlayVoice(
        EventSvtControl_o *this,
        System_String_o *targetVoiceId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v26; // w24
  __int64 v27; // x8
  _BOOL8 v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F9BAA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, targetVoiceId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v9);
    byte_40F9BAA = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)targetVoiceId);
  System_String__IsNullOrEmpty(targetVoiceId, 0LL);
  this->fields.callbakEndPlay = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v17, v18, v19, v20, v21, v22);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListBoxGacha,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v38 = v37;
LABEL_14:
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v28 )
      break;
    current = v38.fields.current;
    if ( !v38.fields.current )
      sub_B170D4();
    monitor = (int)v38.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= monitor )
        {
          sub_B17100(v28, v29, v30);
          sub_B170A0();
        }
        v27 = *((_QWORD *)&current[2].klass + (int)v26);
        if ( !v27 )
          sub_B170D4();
        v28 = System_String__op_Equality(*(System_String_o **)(v27 + 16), targetVoiceId, 0LL);
        if ( v28 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v26 >= monitor )
          goto LABEL_14;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      if ( !*p_randomVoiceList )
        sub_B170D4();
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v36);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  Il2CppObject *v38; // x23
  int v39; // w8
  unsigned int v40; // w20
  __int64 v41; // x8
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  VoicePlayCondMaster_o *v53; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x23
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v59; // x19
  _BOOL8 isVoicePlay; // x0
  __int64 v61; // x1
  signed __int64 size; // x19
  unsigned __int64 v63; // x20
  System_String_o *v64; // x27
  int v65; // w28
  System_Random_o *v66; // x25
  il2cpp_array_size_t v67; // w0
  il2cpp_array_size_t v68; // w25
  _BOOL8 v69; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v74; // w19
  __int64 v75; // x8
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  int v81; // w19
  int v82; // w10
  const MethodInfo *v83; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Action_o *action; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v86; // [xsp+8h] [xbp-B8h]
  int v87; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+20h] [xbp-A0h] BYREF
  int v89[4]; // [xsp+38h] [xbp-88h]
  int v90; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40F9BA5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, voiceIds);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__AddRange__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor___66746728, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v23);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v24);
    sub_B16FFC(&System_Random_TypeInfo, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_40F9BA5 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  v90 = 0;
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = (BattleServantConfConponent_o *)&this->fields.randomVoiceList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
    0LL,
    *(System_String_array ***)&svtId,
    (System_String_array **)callbackEnds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_72;
  action = callbackEnds;
  if ( (int)voiceIds->max_length >= 2 )
  {
    v53 = (VoicePlayCondMaster_o *)MasterData_WarQuestSelectionMaster;
    v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_string__TypeInfo,
                                                                                                    v30,
                                                                                                    v31,
                                                                                                    v32,
                                                                                                    v33);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v54,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
    v59 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B170CC(
                                                                             System_Collections_Generic_List_string__TypeInfo,
                                                                             v55,
                                                                             v56,
                                                                             v57,
                                                                             v58);
    System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
      v59,
      voiceIds->max_length,
      (const MethodInfo_2F250E4 *)Method_System_Collections_Generic_List_string___ctor___66746728);
    if ( !v59 )
      goto LABEL_72;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v59,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_string__AddRange__);
    v86 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v59;
    size = v59->fields._size;
    if ( (int)size >= 1 )
    {
      v63 = 0LL;
      do
      {
        if ( v63 >= voiceIds->max_length )
        {
LABEL_64:
          sub_B17100(isVoicePlay, v61, v47);
          sub_B170A0();
        }
        if ( !v53 )
          goto LABEL_72;
        v64 = voiceIds->m_Items[v63];
        isVoicePlay = VoicePlayCondMaster__isVoicePlay(v53, svtId, v64, 0LL, -1LL, -1, 0LL);
        if ( isVoicePlay )
        {
          if ( !v54 )
            goto LABEL_72;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v54,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
        }
      }
      while ( (__int64)++v63 < size );
    }
    if ( !v54 )
      goto LABEL_72;
    v65 = v54->fields._size - 1;
    if ( v65 >= 0 )
    {
      v87 = 0;
      do
      {
        v66 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, v61, v47, v48, v49);
        System_Random___ctor(v66, 0LL);
        if ( !v66 )
          goto LABEL_72;
        v67 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v66->klass->vtable._7_Next.method)(
                v66,
                (unsigned int)v54->fields._size,
                v66->klass->vtable._8_NextDouble.methodPtr);
        if ( !this->fields.voiceListMission )
          goto LABEL_72;
        v68 = v67;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v88,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListMission,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v91 = v88;
        do
        {
          v69 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v91,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v69 )
            break;
          current = v91.fields.current;
          if ( !v91.fields.current )
            sub_B170D4();
          monitor = (int)v91.fields.current[1].monitor;
          if ( monitor >= 1 )
          {
            v74 = 0;
            while ( 1 )
            {
              if ( v74 >= monitor )
              {
                sub_B17100(v69, v70, v71);
                sub_B170A0();
              }
              v75 = *((_QWORD *)&current[2].klass + (int)v74);
              if ( !v75 )
                sub_B170D4();
              if ( v54->fields._size <= v68 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v69 = System_String__op_Equality(
                      *(System_String_o **)(v75 + 16),
                      (System_String_o *)v54->fields._items->m_Items[v68],
                      0LL);
              if ( v69 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v74 >= monitor )
                goto LABEL_50;
            }
            p_randomVoiceList->klass = (BattleServantConfConponent_c *)current;
            sub_B16F98(p_randomVoiceList, (System_Int32_array **)current, v71, v76, v77, v78, v79, v80);
          }
LABEL_50:
          ;
        }
        while ( !p_randomVoiceList->klass );
        v89[v87] = 277;
        v81 = ++v90;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v91,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        v82 = v81;
        if ( v81 && v89[v81 - 1] == 277 )
        {
          v82 = v81 - 1;
          v90 = v81 - 1;
        }
        if ( p_randomVoiceList->klass )
          goto LABEL_67;
        v87 = v82;
        if ( v68 >= voiceIds->max_length )
          goto LABEL_64;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v86,
          (WarBoardManager_TaskList_o *)voiceIds->m_Items[v68],
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v65 >= 0 );
    }
  }
  else
  {
    voiceListMission = this->fields.voiceListMission;
    if ( !voiceListMission )
      goto LABEL_72;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v88,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceListMission,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v91 = v88;
    do
    {
      v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v91,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v35 )
        break;
      v38 = v91.fields.current;
      if ( !v91.fields.current )
        sub_B170D4();
      v39 = (int)v91.fields.current[1].monitor;
      if ( v39 >= 1 )
      {
        v40 = 0;
        while ( 1 )
        {
          if ( v40 >= v39 )
          {
            sub_B17100(v35, v36, v37);
            sub_B170A0();
          }
          v41 = *((_QWORD *)&v38[2].klass + (int)v40);
          if ( !v41 )
            sub_B170D4();
          if ( !voiceIds->max_length )
          {
            sub_B17100(v35, v36, v37);
            sub_B170A0();
          }
          v35 = System_String__op_Equality(*(System_String_o **)(v41 + 16), voiceIds->m_Items[0], 0LL);
          if ( v35 )
            break;
          v39 = (int)v38[1].monitor;
          if ( (int)++v40 >= v39 )
            goto LABEL_21;
        }
        p_randomVoiceList->klass = (BattleServantConfConponent_c *)v38;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
          (System_Int32_array **)v38,
          v37,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
LABEL_21:
      ;
    }
    while ( !p_randomVoiceList->klass );
    v89[0] = 427;
    v90 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v91,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v90 = 0;
  }
  if ( p_randomVoiceList->klass )
  {
LABEL_67:
    this->fields.callbakEndPlay = action;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
      (System_Int32_array **)action,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    randomVoiceList = this->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(this, v83);
      return;
    }
LABEL_72:
    sub_B170D4();
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
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  VoicePlayCondMaster_o *v31; // x22
  _BOOL8 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Random_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int v48; // w21
  int32_t size; // w8
  struct ServantVoiceData_array *v50; // x1
  const MethodInfo *v51; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Exception_o *v58; // x19
  __int64 v59; // x1
  System_String_o *v60; // x0
  __int64 v61; // x1
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F9BA4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v19);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v20);
    sub_B16FFC(&System_Random_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_40F9BA4 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v53 = sub_B17000(&System_Exception_TypeInfo, *(_QWORD *)&svtId);
      v58 = (System_Exception_o *)sub_B170CC(v53, v54, v55, v56, v57);
      v60 = (System_String_o *)sub_B17000(&StringLiteral_23715, v59);
      System_Exception___ctor_15880420(v58, v60, 0LL);
      sub_B17000(&Method_EventSvtControl_playPurchaseVoice__, v61);
      sub_B170A0();
    }
    this->fields.callbackStopVoice = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                    v24,
                                                                                                    v25,
                                                                                                    v26,
                                                                                                    v27);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v28,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_33;
    v31 = (VoicePlayCondMaster_o *)MasterData_WarQuestSelectionMaster;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v62,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListShop,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v63 = v62;
    while ( 1 )
    {
      v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v63,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v32 )
        break;
      current = v63.fields.current;
      if ( !v63.fields.current )
        sub_B170D4();
      if ( !LODWORD(v63.fields.current[1].monitor) )
      {
        sub_B17100(v32, v33, v34);
        sub_B170A0();
      }
      klass = v63.fields.current[2].klass;
      if ( !klass )
        sub_B170D4();
      if ( !v31 )
        sub_B170D4();
      if ( VoicePlayCondMaster__isVoicePlay(v31, svtId, (System_String_o *)klass->_1.name, 0LL, -1LL, -1, 0LL) )
      {
        if ( !v28 )
          sub_B170D4();
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v28,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__) )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v28,
            (EventMissionProgressRequest_Argument_ProgressData_o *)current,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v63,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v41 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, v37, v38, v39, v40);
    System_Random___ctor(v41, 0LL);
    if ( !v28 || !v41 )
      goto LABEL_33;
    v48 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v41->klass->vtable._7_Next.method)(
            v41,
            (unsigned int)v28->fields._size,
            v41->klass->vtable._8_NextDouble.methodPtr);
    size = v28->fields._size;
    if ( this->fields.beforeVoiceIdx == v48 )
      v48 = (v48 + 1) % size;
    if ( size <= (unsigned int)v48 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v50 = (struct ServantVoiceData_array *)v28->fields._items->m_Items[v48];
    this->fields.randomVoiceList = v50;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v50,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v48;
    if ( !randomVoiceList )
LABEL_33:
      sub_B170D4();
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v51);
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
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  VoicePlayCondMaster_o *v29; // x21
  _BOOL8 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Random_o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int v46; // w21
  int32_t size; // w8
  struct ServantVoiceData_array *v48; // x1
  const MethodInfo *v49; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F9BA3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, callback);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_B16FFC(&System_Random_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_40F9BA3 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)callback);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                    v22,
                                                                                                    v23,
                                                                                                    v24,
                                                                                                    v25);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v26,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListRand )
      goto LABEL_33;
    v29 = (VoicePlayCondMaster_o *)MasterData_WarQuestSelectionMaster;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v51,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListRand,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v52 = v51;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v52,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v30 )
        break;
      current = v52.fields.current;
      if ( !v52.fields.current )
        sub_B170D4();
      if ( !LODWORD(v52.fields.current[1].monitor) )
      {
        sub_B17100(v30, v31, v32);
        sub_B170A0();
      }
      klass = v52.fields.current[2].klass;
      if ( !klass )
        sub_B170D4();
      if ( !v29 )
        sub_B170D4();
      if ( VoicePlayCondMaster__isVoicePlay(
             v29,
             this->fields.svtId,
             (System_String_o *)klass->_1.name,
             0LL,
             -1LL,
             -1,
             0LL) )
      {
        if ( !v26 )
          sub_B170D4();
        if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v26,
                (WarBoardManager_TaskList_o *)current,
                (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__) )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)current,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v52,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    if ( !v26 )
      goto LABEL_33;
    if ( !v26->fields._size )
      return;
    v39 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, v35, v36, v37, v38);
    System_Random___ctor(v39, 0LL);
    if ( !v39 )
      goto LABEL_33;
    v46 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v39->klass->vtable._7_Next.method)(
            v39,
            (unsigned int)v26->fields._size,
            v39->klass->vtable._8_NextDouble.methodPtr);
    size = v26->fields._size;
    if ( this->fields.beforeVoiceIdx == v46 )
      v46 = (v46 + 1) % size;
    if ( size <= (unsigned int)v46 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v48 = (struct ServantVoiceData_array *)v26->fields._items->m_Items[v46];
    this->fields.randomVoiceList = v48;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v48,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v46;
    if ( !randomVoiceList )
LABEL_33:
      sub_B170D4();
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v49);
  }
}


void __fastcall EventSvtControl__setBoxGachaSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listBoxGacha,
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (BattleServantConfConponent_o *)(p_asstName + 12);
  if ( listBoxGacha )
  {
    v17->klass = (BattleServantConfConponent_c *)listBoxGacha;
    v18 = (System_Int32_array **)listBoxGacha;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_B16F98(v17, v18, v11, v12, v13, v14, v15, v16);
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
  sub_B16F98(
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
  sub_B16F98(v17, v18, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_40F9BA1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, listRand);
    byte_40F9BA1 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)p_voiceListRand, v21, v14, v15, v16, v17, v18, v19);
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
  sub_B16F98(p_voiceListMission, v29, v22, v23, v24, v25, v26, v27);
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
  sub_B16F98(p_voiceListShop, v37, v30, v31, v32, v33, v34, v35);
  this->fields.voiceListOverwrite = 0LL;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_B16F98((BattleServantConfConponent_o *)p_voiceListOverwrite, 0LL, v39, v40, v41, v42, v43, v44);
  *((_DWORD *)p_voiceListOverwrite - 22) = -1;
}


void __fastcall EventSvtControl__setVoiceForm(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_int__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v22; // x25
  __int64 v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  __int64 v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Predicate_int__o *v38; // x23
  Il2CppClass *klass; // x19
  __int64 v40; // x8
  UIStandFigureR_o *v41; // x21
  System_Action_o *v42; // x22
  Il2CppObject *v43; // [xsp+8h] [xbp-58h]

  if ( (byte_40F9BA2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventSvtControl_svtVoicePlay__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Exists__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v12);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v13);
    sub_B16FFC(&Method_EventSvtControl___c__DisplayClass32_0__setVoiceForm_b__0__, v14);
    sub_B16FFC(&EventSvtControl___c__DisplayClass32_0_TypeInfo, v15);
    byte_40F9BA2 = 1;
  }
  v16 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v43 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_19;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      v23 = sub_B170CC(EventSvtControl___c__DisplayClass32_0_TypeInfo, v17, v18, v19, v20);
      EventSvtControl___c__DisplayClass32_0___ctor((EventSvtControl___c__DisplayClass32_0_o *)v23, 0LL);
      if ( v22 >= randomVoiceList->max_length )
      {
        sub_B17100(v24, v25, v26);
        sub_B170A0();
      }
      if ( !v23 )
        break;
      v32 = (System_Int32_array **)randomVoiceList->m_Items[v22];
      *(_QWORD *)(v23 + 16) = v32;
      v33 = v23 + 16;
      sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), v32, v26, v27, v28, v29, v30, v31);
      v38 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v34, v35, v36, v37);
      System_Predicate_int____ctor(
        v38,
        (Il2CppObject *)v23,
        Method_EventSvtControl___c__DisplayClass32_0__setVoiceForm_b__0__,
        (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
      if ( !v16 )
        break;
      if ( !System_Collections_Generic_List_int___Exists(
              v16,
              (System_Predicate_T__o *)v38,
              (const MethodInfo_2F10D44 *)Method_System_Collections_Generic_List_int__Exists__) )
      {
        if ( !*(_QWORD *)v33 )
          break;
        System_Collections_Generic_List_int___Add(
          v16,
          *(_DWORD *)(*(_QWORD *)v33 + 56LL),
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v22 >= (int)randomVoiceList->max_length )
        goto LABEL_13;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_13:
  klass = v43[5].klass;
  if ( !klass )
    goto LABEL_19;
  if ( !LODWORD(klass->_1.namespaze) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v40 = *((_QWORD *)klass->_1.name + 4);
  if ( !v40 )
    goto LABEL_19;
  v41 = *(UIStandFigureR_o **)(v40 + 24);
  v42 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(v42, v43, Method_EventSvtControl_svtVoicePlay__, 0LL);
  if ( !v41 )
    goto LABEL_19;
  UIStandFigureR__PreloadFormAssets(v41, v16, v42, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  signed int max_length; // w8
  System_String_o **m_Items; // x8
  VoicePlayCondMaster_o *v30; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x23
  __int64 v32; // x8
  unsigned __int64 v33; // x26
  signed __int64 v34; // x27
  System_String_o *v35; // x25
  int32_t v36; // w21
  System_String_o *v37; // x21
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceIndividualShopList; // x0
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v48; // w24
  __int64 v49; // x8
  _BOOL8 v50; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // x1
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F9BA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40F9BA9 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !targetVoiceIds )
    goto LABEL_39;
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_18:
      sub_B17100(MasterData_WarQuestSelectionMaster, v21, v22);
      sub_B170A0();
    }
    m_Items = targetVoiceIds->m_Items;
    goto LABEL_23;
  }
  v30 = (VoicePlayCondMaster_o *)MasterData_WarQuestSelectionMaster;
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  v32 = *(_QWORD *)&targetVoiceIds->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    v34 = (int)v32;
    while ( v30 )
    {
      v35 = targetVoiceIds->m_Items[v33];
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                                          v30,
                                                                          svtId,
                                                                          v35,
                                                                          0LL,
                                                                          -1LL,
                                                                          -1,
                                                                          0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !v31 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v31,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (__int64)++v33 >= v34 )
        goto LABEL_19;
      if ( v33 >= targetVoiceIds->max_length )
        goto LABEL_18;
    }
LABEL_39:
    sub_B170D4();
  }
LABEL_19:
  if ( !v31 )
    goto LABEL_39;
  v36 = UnityEngine_Random__Range_34843248(0, v31->fields._size, 0LL);
  if ( v31->fields._size <= (unsigned int)v36 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  m_Items = (System_String_o **)&v31->fields._items->m_Items[v36];
LABEL_23:
  v37 = *m_Items;
  this->fields.callbakEndPlay = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbakEndPlay,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.randomVoiceList, 0LL, v39, v40, v41, v42, v43, v44);
  voiceIndividualShopList = this->fields.voiceIndividualShopList;
  if ( !voiceIndividualShopList )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceIndividualShopList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v60 = v59;
LABEL_32:
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v50 )
      break;
    current = v60.fields.current;
    if ( !v60.fields.current )
      sub_B170D4();
    monitor = (int)v60.fields.current[1].monitor;
    if ( monitor >= 1 )
    {
      v48 = 0;
      while ( 1 )
      {
        if ( v48 >= monitor )
        {
          sub_B17100(v50, v51, v52);
          sub_B170A0();
        }
        v49 = *((_QWORD *)&current[2].klass + (int)v48);
        if ( !v49 )
          sub_B170D4();
        v50 = System_String__op_Equality(*(System_String_o **)(v49 + 16), v37, 0LL);
        if ( v50 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v48 >= monitor )
          goto LABEL_32;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
        (System_Int32_array **)current,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      if ( !*p_randomVoiceList )
        sub_B170D4();
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v58);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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

  if ( (byte_40F9BA8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_22380, v3);
    byte_40F9BA8 = 1;
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
      sub_B170D4();
    SePlayer__Destroy(*p_player, 0LL);
    this->fields.player = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.player, 0LL, v7, v8, v9, v10, v11, v12);
    this->fields.callbakEndPlay = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbakEndPlay, 0LL, v13, v14, v15, v16, v17, v18);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34803564(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22380,
    0LL);
}


void __fastcall EventSvtControl__svtVoicePlay(EventSvtControl_o *this, const MethodInfo *method)
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
  int max_length; // w10
  ServantVoiceData_o *v16; // x8
  System_Int32_array **id; // x1
  struct ServantVoiceData_array *v18; // x8
  __int64 v19; // x9
  ServantVoiceData_o *v20; // x0
  int32_t form; // w20
  __int64 v22; // x3
  __int64 v23; // x4
  float FadeTime; // s0
  float v25; // s8
  struct ServantVoiceData_array *v26; // x8
  __int64 v27; // x9
  ServantVoiceData_o *v28; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *v29; // x21
  int32_t face; // w20
  StandFigureCollect_o *v31; // x8
  struct ServantVoiceData_array *v32; // x9
  __int64 v33; // x10
  ServantVoiceData_o *v34; // x9
  UIStandFigureR_o *v35; // x0
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v39; // x22
  System_Int32_array **v40; // x0
  struct SePlayer_o **p_player; // x19
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct ServantVoiceData_array *v48; // x8
  __int64 v49; // x9
  ServantVoiceData_o *v50; // x8
  struct System_Int32_array *multiFace; // x22
  __int64 v52; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x25
  StandFigureCollect_o *v54; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x0

  v8 = this;
  if ( (byte_40F9BA6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_B16FFC(&Method_EventSvtControl_EndPlay__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v11);
    this = (EventSvtControl_o *)sub_B16FFC(&SoundManager_TypeInfo, v12);
    byte_40F9BA6 = 1;
  }
  if ( v8->fields.asstName && v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( !randomVoiceList )
      goto LABEL_46;
    playCnt = v8->fields.playCnt;
    max_length = randomVoiceList->max_length;
    if ( (int)playCnt >= max_length )
      return;
    if ( (unsigned int)playCnt < max_length )
    {
      v16 = randomVoiceList->m_Items[playCnt];
      if ( !v16 )
        goto LABEL_46;
      id = (System_Int32_array **)v16->fields.id;
      v8->fields.vcName = (struct System_String_o *)id;
      sub_B16F98((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      v18 = v8->fields.randomVoiceList;
      if ( !v18 )
        goto LABEL_46;
      v19 = v8->fields.playCnt;
      if ( (unsigned int)v19 < v18->max_length )
      {
        v20 = v18->m_Items[v19];
        if ( !v20 )
          goto LABEL_46;
        form = v20->fields.form;
        FadeTime = ServantVoiceData__GetFadeTime(v20, 0LL);
        this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
        v25 = FadeTime;
        if ( this
          && (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                            (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
              (int)this >= 2) )
        {
          v48 = v8->fields.randomVoiceList;
          if ( !v48 )
            goto LABEL_46;
          v49 = v8->fields.playCnt;
          if ( (unsigned int)v49 < v48->max_length )
          {
            v50 = v48->m_Items[v49];
            if ( !v50 )
              goto LABEL_46;
            multiFace = v50->fields.multiFace;
            if ( !multiFace )
              return;
            this = (EventSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                          (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
            if ( (_DWORD)this != multiFace->max_length )
              return;
            if ( (int)this < 1 )
              goto LABEL_26;
            v52 = 0LL;
            while ( (unsigned int)v52 < (unsigned int)this )
            {
              standFigureCollectList = v8->fields.standFigureCollectList;
              if ( !standFigureCollectList )
                goto LABEL_46;
              if ( standFigureCollectList->fields._size <= (unsigned int)v52 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v54 = standFigureCollectList->fields._items->m_Items[v52];
              if ( !v54 )
                goto LABEL_46;
              standFigure_k__BackingField = v54->fields._standFigure_k__BackingField;
              if ( !standFigure_k__BackingField )
                goto LABEL_46;
              UIStandFigureR__SetFace_40887852(
                standFigure_k__BackingField,
                multiFace->m_Items[v52 + 1],
                form,
                0LL,
                v25,
                0LL);
              this = (EventSvtControl_o *)multiFace->max_length;
              if ( (int)++v52 >= (int)this )
                goto LABEL_26;
            }
          }
        }
        else
        {
          v26 = v8->fields.randomVoiceList;
          if ( !v26 )
            goto LABEL_46;
          v27 = v8->fields.playCnt;
          if ( (unsigned int)v27 < v26->max_length )
          {
            v28 = v26->m_Items[v27];
            if ( !v28 )
              goto LABEL_46;
            v29 = v8->fields.standFigureCollectList;
            if ( !v29 )
            {
LABEL_26:
              asstName = v8->fields.asstName;
              vcName = v8->fields.vcName;
              volume = v8->fields.volume;
              v39 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v22, v23);
              System_Action___ctor(v39, (Il2CppObject *)v8, Method_EventSvtControl_EndPlay__, 0LL);
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SoundManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              }
              v40 = (System_Int32_array **)SoundManager__playVoice_24824004(asstName, vcName, volume, v39, 0LL);
              v8->fields.player = (struct SePlayer_o *)v40;
              p_player = &v8->fields.player;
              sub_B16F98((BattleServantConfConponent_o *)p_player, v40, v42, v43, v44, v45, v46, v47);
              ++*((_DWORD *)p_player + 11);
              return;
            }
            face = v28->fields.face;
            if ( !v29->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v31 = v29->fields._items->m_Items[0];
            if ( !v31 || (v32 = v8->fields.randomVoiceList) == 0LL )
LABEL_46:
              sub_B170D4();
            v33 = v8->fields.playCnt;
            if ( (unsigned int)v33 < v32->max_length )
            {
              v34 = v32->m_Items[v33];
              if ( v34 )
              {
                v35 = v31->fields._standFigure_k__BackingField;
                if ( v35 )
                {
                  UIStandFigureR__SetFace_40887852(v35, face, v34->fields.form, 0LL, v25, 0LL);
                  goto LABEL_26;
                }
              }
              goto LABEL_46;
            }
          }
        }
      }
    }
    sub_B17100(this, method, v2);
    sub_B170A0();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventEntity_o *Entity; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListOverwrite; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  WebViewManager_o *v31; // x0
  WarQuestSelectionMaster_o *v32; // x0
  VoicePlayCondMaster_o *v33; // x23
  _BOOL8 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Random_o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  unsigned int v55; // w20
  struct ServantVoiceData_array *v56; // x1
  const MethodInfo *v57; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F9BAE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_B16FFC(&System_Random_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_40F9BAE = 1;
  }
  memset(&v60, 0, sizeof(v60));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              eventId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_33;
  if ( EventEntity__IsOpen(Entity, 0, 0LL) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ServantVoiceData____TypeInfo, v25, v26, v27, v28);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v30,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v31 )
          goto LABEL_33;
        v32 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v31,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_33;
        v33 = (VoicePlayCondMaster_o *)v32;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v59,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v60 = v59;
        while ( 1 )
        {
          v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v60,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v34 )
            break;
          current = v60.fields.current;
          if ( !v60.fields.current )
            sub_B170D4();
          if ( !LODWORD(v60.fields.current[1].monitor) )
          {
            sub_B17100(v34, v35, v36);
            sub_B170A0();
          }
          klass = v60.fields.current[2].klass;
          if ( !klass )
            sub_B170D4();
          if ( !v33 )
            sub_B170D4();
          if ( VoicePlayCondMaster__isVoicePlay(v33, svtId, (System_String_o *)klass->_1.name, 0LL, -1LL, -1, 0LL) )
          {
            if ( !v30 )
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v30,
              (EventMissionProgressRequest_Argument_ProgressData_o *)current,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v60,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v30 )
        {
          if ( v30->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.callbackStopVoice,
              (System_Int32_array **)callback,
              v26,
              v39,
              v40,
              v41,
              v42,
              v43);
            v48 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, v44, v45, v46, v47);
            System_Random___ctor(v48, 0LL);
            if ( v48 )
            {
              v55 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v48->klass->vtable._7_Next.method)(
                      v48,
                      (unsigned int)v30->fields._size,
                      v48->klass->vtable._8_NextDouble.methodPtr);
              if ( v30->fields._size <= v55 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v56 = (struct ServantVoiceData_array *)v30->fields._items->m_Items[v55];
              this->fields.randomVoiceList = v56;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
                (System_Int32_array **)v56,
                v49,
                v50,
                v51,
                v52,
                v53,
                v54);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v57);
                return;
              }
            }
LABEL_33:
            sub_B170D4();
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, (const MethodInfo *)v26);
}


void __fastcall EventSvtControl___c__DisplayClass32_0___ctor(
        EventSvtControl___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventSvtControl___c__DisplayClass32_0___setVoiceForm_b__0(
        EventSvtControl___c__DisplayClass32_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = a;
  voice = this->fields.voice;
  if ( !voice )
    sub_B170D4();
  return System_Int32__Equals_38275732((int32_t)&v5, voice->fields.form, 0LL);
}