void __fastcall MyRoomSvtControl___cctor(const MethodInfo *method)
{
  if ( (byte_43942D3 & 1) == 0 )
  {
    sub_B775C4(&MyRoomSvtControl_TypeInfo);
    byte_43942D3 = 1;
  }
  MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = 3;
}


void __fastcall MyRoomSvtControl___ctor(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_int__int__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_43942D2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_43942D2 = 1;
  }
  this->fields.volume = 1.0;
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields.canPlayVoiceIdxList = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.canPlayVoiceIdxList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.firstPlayVoiceList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_2FE81CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.canFirstPlayVoiceIdxDic,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v13; // x8
  BattleServantConfConponent_o *p_player; // x0
  UnityEngine_Object_o *fsm; // x20
  __int64 v16; // x0

  if ( (byte_43942CF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_22950/*"svtVoicePlay"*/);
    sub_B775C4(&StringLiteral_5637/*"END_PLAY"*/);
    byte_43942CF = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v3 = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0LL, 0LL);
  if ( ((unsigned __int8)v3 & 1) == 0 )
  {
    playCnt = this->fields.playCnt;
    if ( (int)playCnt >= this->fields.maxPlayCnt )
    {
      p_player = (BattleServantConfConponent_o *)&this->fields.player;
      if ( this->fields.player )
      {
        p_player->klass = 0LL;
        sub_B77560(p_player, 0LL, v5, v6, v7, v8, v9, v10);
      }
      this->fields.playCnt = 0;
      this->fields.isValidVoice = 0;
      fsm = (UnityEngine_Object_o *)this->fields.fsm;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(fsm, 0LL, 0LL) )
        return;
      v3 = this->fields.fsm;
      if ( v3 )
      {
        PlayMakerFSM__SendEvent(v3, (System_String_o *)StringLiteral_5637/*"END_PLAY"*/, 0LL);
        return;
      }
    }
    else
    {
      randomVoiceList = this->fields.randomVoiceList;
      if ( randomVoiceList )
      {
        if ( (unsigned int)playCnt >= randomVoiceList->max_length )
        {
          v16 = sub_B776C8(v3);
          sub_B77668(v16, 0LL);
        }
        v13 = randomVoiceList->m_Items[playCnt];
        if ( v13 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_22950/*"svtVoicePlay"*/,
            v13->fields.delay,
            0LL);
          return;
        }
      }
    }
    sub_B7769C(v3, v4);
  }
}


void __fastcall MyRoomSvtControl__EndSetFace(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v6; // x22
  struct SePlayer_o *v7; // x0
  struct SePlayer_o **p_player; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_43942CE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_MyRoomSvtControl_EndPlay__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43942CE = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v7 = SoundManager__playVoice_23512556(asstName, vcName, volume, v6, 0LL);
  this->fields.player = v7;
  p_player = &this->fields.player;
  sub_B77560((BattleServantConfConponent_o *)p_player, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  ++*((_DWORD *)p_player + 11);
}


ServantVoiceData_o *__fastcall MyRoomSvtControl__GetFirstServantVoiceData(
        MyRoomSvtControl_o *this,
        const MethodInfo *method)
{
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    return 0LL;
  v3 = *(_QWORD *)&randomVoiceList->max_length;
  if ( !v3 )
    return 0LL;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B776C8(this);
    sub_B77668(v5, 0LL);
  }
  return randomVoiceList->m_Items[0];
}


int32_t __fastcall MyRoomSvtControl__GetFormId(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *v2; // x19
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x19
  StandFigureCollect_o *v4; // x8
  struct UIStandFigureR_o *standFigure_k__BackingField; // x8

  v2 = this;
  if ( (byte_43942D1 & 1) == 0 )
  {
    this = (MyRoomSvtControl_o *)sub_B775C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_43942D1 = 1;
  }
  standFigureCollectList = v2->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( !standFigureCollectList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v4 = standFigureCollectList->fields._items->m_Items[0];
  if ( !v4 || (standFigure_k__BackingField = v4->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_B7769C(this, method);
  return standFigure_k__BackingField->fields.formId;
}


void __fastcall MyRoomSvtControl__PreloadFormAssets(
        MyRoomSvtControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
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
  System_Collections_Generic_List_int__o *v20; // x20
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v22; // x26
  __int64 v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  __int64 v31; // x22
  System_Predicate_int__o *v32; // x24
  __int64 v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **current; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x8
  UIStandFigureR_o *v52; // x22
  System_Action_o *v53; // x23
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x0
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_43942CB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Exists__);
    sub_B775C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&Method_System_Predicate_int___ctor__);
    sub_B775C4(&System_Predicate_int__TypeInfo);
    sub_B775C4(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
    sub_B775C4(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__);
    sub_B775C4(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
    sub_B775C4(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__);
    sub_B775C4(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    byte_43942CB = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v5 = sub_B77694(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
  MyRoomSvtControl___c__DisplayClass22_0___ctor((MyRoomSvtControl___c__DisplayClass22_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_22;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      v23 = sub_B77694(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
      MyRoomSvtControl___c__DisplayClass22_1___ctor((MyRoomSvtControl___c__DisplayClass22_1_o *)v23, 0LL);
      if ( v22 >= randomVoiceList->max_length )
      {
        v56 = sub_B776C8(standFigureCollectList);
        sub_B77668(v56, 0LL);
      }
      if ( !v23 )
        break;
      v30 = (System_Int32_array **)randomVoiceList->m_Items[v22];
      *(_QWORD *)(v23 + 16) = v30;
      v31 = v23 + 16;
      sub_B77560((BattleServantConfConponent_o *)(v23 + 16), v30, v24, v25, v26, v27, v28, v29);
      v32 = (System_Predicate_int__o *)sub_B77694(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v32,
        (Il2CppObject *)v23,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        (const MethodInfo_2C30DC8 *)Method_System_Predicate_int___ctor__);
      if ( !v20 )
        break;
      standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)System_Collections_Generic_List_int___Exists(
                                                                                                 v20,
                                                                                                 (System_Predicate_T__o *)v32,
                                                                                                 (const MethodInfo_30E663C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !*(_QWORD *)v31 )
          break;
        System_Collections_Generic_List_int___Add(
          v20,
          *(_DWORD *)(*(_QWORD *)v31 + 56LL),
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v22 >= (int)randomVoiceList->max_length )
        goto LABEL_14;
    }
LABEL_22:
    sub_B7769C(standFigureCollectList, v7);
  }
LABEL_14:
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v58 = v57;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v58,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v33 = sub_B77694(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    MyRoomSvtControl___c__DisplayClass22_2___ctor((MyRoomSvtControl___c__DisplayClass22_2_o *)v33, 0LL);
    if ( !v33 )
      sub_B7769C(v34, v35);
    *(_QWORD *)(v33 + 24) = v5;
    sub_B77560((BattleServantConfConponent_o *)(v33 + 24), (System_Int32_array **)v5, v36, v37, v38, v39, v40, v41);
    current = (System_Int32_array **)v58.fields.current;
    *(_QWORD *)(v33 + 16) = v58.fields.current;
    sub_B77560((BattleServantConfConponent_o *)(v33 + 16), current, v43, v44, v45, v46, v47, v48);
    v51 = *(_QWORD *)(v33 + 16);
    if ( !v51 )
      sub_B7769C(v49, v50);
    v52 = *(UIStandFigureR_o **)(v51 + 24);
    v53 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v53,
      (Il2CppObject *)v33,
      Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__,
      0LL);
    if ( !v52 )
      sub_B7769C(v54, v55);
    UIStandFigureR__PreloadFormAssets(v52, v20, v53, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v58,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void __fastcall MyRoomSvtControl__SetSvtFigureCollect(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.standFigureCollectList = collects;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.standFigureCollectList,
    (System_Int32_array **)collects,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall MyRoomSvtControl__SetVoiceData(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v5; // x20
  System_Collections_Generic_IEnumerable_T__o *v6; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *v7; // x21
  __int64 Count; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v16; // x21
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x8
  System_Comparison_KeyValuePair_int__int___o *_9__21_0; // x22
  Il2CppObject *v19; // x23
  struct MyRoomSvtControl___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v27; // x21
  System_Predicate_KeyValuePair_int__int___o *v28; // x22
  System_Collections_Generic_List_T__o *All; // x21
  System_Random_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x20
  unsigned int v38; // w22
  Il2CppObject *v39; // x23
  struct ServantVoiceData_array *v40; // x1
  WarBoardManager_TaskList_o **p_randomVoiceList; // x20
  System_Random_o *v43; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct System_Collections_Generic_List_int__o *v51; // x22
  int32_t v52; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *v53; // x20
  __int64 v54; // x22
  struct ServantVoiceData_array *v55; // x1
  struct System_Collections_Generic_List_int__o *v56; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v57; // x8
  int32_t v58; // w21
  int size; // w9
  System_String_o *asstName; // x0

  if ( (byte_43942CA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_KeyValuePair_int__int____ctor__);
    sub_B775C4(&System_Comparison_KeyValuePair_int__int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___69383584);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    sub_B775C4(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    sub_B775C4(&Method_System_Predicate_KeyValuePair_int__int____ctor__);
    sub_B775C4(&System_Predicate_KeyValuePair_int__int___TypeInfo);
    sub_B775C4(&System_Random_TypeInfo);
    sub_B775C4(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__);
    sub_B775C4(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__);
    sub_B775C4(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    sub_B775C4(&MyRoomSvtControl___c_TypeInfo);
    byte_43942CA = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_2FE8970 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v5 = sub_B77694(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    MyRoomSvtControl___c__DisplayClass21_0___ctor((MyRoomSvtControl___c__DisplayClass21_0_o *)v5, 0LL);
    v6 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v7 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_B77694(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_49235424(
      v7,
      v6,
      (const MethodInfo_2EF45E0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___69383584);
    if ( !v5 )
      goto LABEL_64;
    *(_QWORD *)(v5 + 16) = v7;
    sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)v7, v10, v11, v12, v13, v14, v15);
    v16 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v5 + 16);
    Count = (__int64)MyRoomSvtControl___c_TypeInfo;
    if ( (BYTE3(MyRoomSvtControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomSvtControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomSvtControl___c_TypeInfo);
      Count = (__int64)MyRoomSvtControl___c_TypeInfo;
    }
    static_fields = *(struct MyRoomSvtControl___c_StaticFields **)(Count + 184);
    _9__21_0 = static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( (*(_BYTE *)(Count + 307) & 4) != 0 && !*(_DWORD *)(Count + 224) )
      {
        j_il2cpp_runtime_class_init_0(Count);
        static_fields = MyRoomSvtControl___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__21_0 = (System_Comparison_KeyValuePair_int__int___o *)sub_B77694(System_Comparison_KeyValuePair_int__int___TypeInfo);
      System_Comparison_KeyValuePair_int__int_____ctor(
        _9__21_0,
        v19,
        Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__,
        (const MethodInfo_2B3B3D8 *)Method_System_Comparison_KeyValuePair_int__int____ctor__);
      v20 = MyRoomSvtControl___c_TypeInfo->static_fields;
      v20->__9__21_0 = _9__21_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v20->__9__21_0,
        (System_Int32_array **)_9__21_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    if ( !v16 )
      goto LABEL_64;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_49246696(
      v16,
      (System_Comparison_T__o *)_9__21_0,
      (const MethodInfo_2EF71E8 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v27 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v5 + 16);
    v28 = (System_Predicate_KeyValuePair_int__int___o *)sub_B77694(System_Predicate_KeyValuePair_int__int___TypeInfo);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v28,
      (Il2CppObject *)v5,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      (const MethodInfo_2C2B708 *)Method_System_Predicate_KeyValuePair_int__int____ctor__);
    if ( !v27 )
      goto LABEL_64;
    All = System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
            v27,
            (System_Predicate_T__o *)v28,
            (const MethodInfo_2EF5A98 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v30 = (System_Random_o *)sub_B77694(System_Random_TypeInfo);
    System_Random___ctor(v30, 0LL);
    if ( !All || !v30 )
      goto LABEL_64;
    Count = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v30->klass->vtable._7_Next.method)(
              v30,
              (unsigned int)All->fields._size,
              v30->klass->vtable._8_NextDouble.methodPtr);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v38 = Count;
    if ( All->fields._size <= (unsigned int)Count )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    if ( !firstPlayVoiceList )
      goto LABEL_64;
    v39 = All->fields._items->m_Items[(int)Count];
    if ( firstPlayVoiceList->fields._size <= (unsigned int)v39 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v40 = firstPlayVoiceList->fields._items->m_Items[(int)v39];
    this->fields.randomVoiceList = v40;
    p_randomVoiceList = (WarBoardManager_TaskList_o **)&this->fields.randomVoiceList;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v40,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    if ( All->fields._size <= v38 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    if ( !this->fields.canFirstPlayVoiceIdxDic )
      goto LABEL_64;
    System_Collections_Generic_Dictionary_int__int___Remove(
      this->fields.canFirstPlayVoiceIdxDic,
      (int32_t)All->fields._items->m_Items[v38],
      (const MethodInfo_2FEA668 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Count = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Count )
      goto LABEL_64;
    Count = System_Collections_Generic_Dictionary_int__int___get_Count(
              (System_Collections_Generic_Dictionary_int__int__o *)Count,
              (const MethodInfo_2FE8970 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    if ( !(_DWORD)Count )
    {
      Count = (__int64)this->fields.voiceList;
      if ( !Count )
        goto LABEL_64;
      if ( *(int *)(Count + 24) >= 2 )
      {
        Count = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Count,
                  *p_randomVoiceList,
                  (const MethodInfo_3054348 *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Count != -1 )
        {
          v9 = (unsigned int)Count;
          Count = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Count )
            goto LABEL_64;
          Count = System_Collections_Generic_List_int___Remove(
                    (System_Collections_Generic_List_int__o *)Count,
                    v9,
                    (const MethodInfo_30E7764 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v43 = (System_Random_o *)sub_B77694(System_Random_TypeInfo);
    System_Random___ctor(v43, 0LL);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_64;
    if ( !v43 )
      goto LABEL_64;
    Count = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v43->klass->vtable._7_Next.method)(
              v43,
              (unsigned int)canPlayVoiceIdxList->fields._size,
              v43->klass->vtable._8_NextDouble.methodPtr);
    v51 = this->fields.canPlayVoiceIdxList;
    if ( !v51 )
      goto LABEL_64;
    v52 = Count;
    if ( v51->fields._size <= (unsigned int)Count )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v53 = this->fields.voiceList;
    if ( !v53 )
      goto LABEL_64;
    v54 = v51->fields._items->m_Items[(int)Count + 1];
    if ( v53->fields._size <= (unsigned int)v54 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v55 = v53->fields._items->m_Items[v54];
    this->fields.randomVoiceList = v55;
    p_randomVoiceList = (WarBoardManager_TaskList_o **)&this->fields.randomVoiceList;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v55,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    Count = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Count )
      goto LABEL_64;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Count,
      v52,
      (const MethodInfo_30E7AA0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v56 = this->fields.canPlayVoiceIdxList;
    if ( !v56 )
      goto LABEL_64;
    if ( !v56->fields._size )
    {
      v57 = this->fields.voiceList;
      if ( !v57 )
        goto LABEL_64;
      v58 = 0;
      while ( 1 )
      {
        size = v57->fields._size;
        if ( v58 >= size )
          break;
        if ( (_DWORD)v54 != v58 || size <= 1 )
        {
          Count = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Count )
            goto LABEL_64;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Count,
            v58,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          v57 = this->fields.voiceList;
        }
        ++v58;
        if ( !v57 )
          goto LABEL_64;
      }
    }
  }
  if ( !*p_randomVoiceList )
    goto LABEL_64;
  asstName = this->fields.asstName;
  this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->fields._size;
  Count = System_String__IsNullOrEmpty(asstName, 0LL);
  if ( (Count & 1) == 0 && this->fields.maxPlayCnt >= 1 )
  {
    if ( !*p_randomVoiceList )
      goto LABEL_64;
    if ( this->fields.playCnt < (*p_randomVoiceList)->fields._size )
      this->fields.isValidVoice = 1;
  }
  if ( !*p_randomVoiceList )
LABEL_64:
    sub_B7769C(Count, v9);
  return this->fields.playCnt < (*p_randomVoiceList)->fields._size;
}


void __fastcall MyRoomSvtControl__initFirstPlayVoiceList(
        MyRoomSvtControl_o *this,
        ServantVoiceEntity_o *svtVoiceEnt,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  UserServantEntity_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x9
  const MethodInfo *v13; // x2
  int32_t v14; // w0
  int32_t v15; // w22
  int v16; // w27
  int32_t j; // w23
  BalanceConfig_c *v18; // x0
  int32_t svtId; // w24
  int32_t FriendshipRank; // w24
  MyRoomSvtControl_c *v21; // x8
  int32_t SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP; // w9
  System_Collections_Generic_List_ServantVoiceData____o *MyRoomFriendShipVoiceList; // x0
  const MethodInfo *v24; // x2
  int v25; // w26
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-98h] BYREF
  int v27[2]; // [xsp+20h] [xbp-80h]
  int v28; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_43942C7 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_B775C4(&MyRoomSvtControl_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43942C7 = 1;
  }
  memset(&i, 0, sizeof(i));
  v28 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_41;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               *((_QWORD *)Instance + 14),
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_41;
  v8 = (UserServantEntity_o *)Instance;
  v10 = *((_QWORD *)Instance + 10);
  v9 = *((_QWORD *)Instance + 11);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v10;
  *(_QWORD *)&v30.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v30, 0LL);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v11;
  if ( voiceList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v26;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields.current, v13) )
    {
      ;
    }
    v27[0] = 105;
    v28 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v28 = 0;
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v8, 0LL);
  if ( !svtVoiceEnt )
LABEL_41:
    sub_B7769C(Instance, v6);
  v14 = ServantVoiceEntity__FriendShipRankWithVoice(svtVoiceEnt, (int32_t)Instance, 0LL);
  if ( v14 >= 2 )
  {
    v15 = v14;
    v16 = 0;
    for ( j = 1; j < v15; ++j )
    {
      v18 = BalanceConfig_TypeInfo;
      svtId = this->fields.svtId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      if ( svtId != v18->static_fields->ServantIdSwimsuitMelt )
        goto LABEL_30;
      FriendshipRank = UserServantEntity__getFriendshipRank(v8, 0LL);
      v21 = MyRoomSvtControl_TypeInfo;
      if ( (BYTE3(MyRoomSvtControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomSvtControl_TypeInfo);
        v21 = MyRoomSvtControl_TypeInfo;
      }
      SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = v21->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      if ( FriendshipRank < SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
        goto LABEL_30;
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      }
      if ( j >= SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
      {
LABEL_30:
        MyRoomFriendShipVoiceList = ServantVoiceEntity__getMyRoomFriendShipVoiceList(svtVoiceEnt, j, 0LL);
        if ( MyRoomFriendShipVoiceList )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v26,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MyRoomFriendShipVoiceList,
            (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v26;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &i,
                    (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields.current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields.current, v24);
          }
          v27[v16] = 228;
          v25 = ++v28;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &i,
            (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
          if ( v25 )
          {
            v16 = v25;
            if ( v27[v25 - 1] == 228 )
            {
              v16 = v25 - 1;
              v28 = v25 - 1;
            }
          }
          else
          {
            v16 = 0;
          }
        }
      }
    }
  }
}


bool __fastcall MyRoomSvtControl__isPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  return this->fields.player || this->fields.isValidVoice;
}


System_String_o *__fastcall MyRoomSvtControl__playVoice(MyRoomSvtControl_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x19
  StandFigureCollect_o *v19; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x21
  System_Action_o *v21; // x22
  struct ServantVoiceData_array *v22; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v25; // x8
  struct System_String_StaticFields *static_fields; // x8
  __int64 v28; // x0
  MyRoomSvtControl_o *v29; // [xsp+8h] [xbp-58h]

  if ( (byte_43942CC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Exists__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&Method_MyRoomSvtControl_svtVoicePlay__);
    sub_B775C4(&Method_System_Predicate_int___ctor__);
    sub_B775C4(&System_Predicate_int__TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__);
    sub_B775C4(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
    byte_43942CC = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_23;
  v29 = this;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = sub_B77694(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
      MyRoomSvtControl___c__DisplayClass23_0___ctor((MyRoomSvtControl___c__DisplayClass23_0_o *)v8, 0LL);
      if ( v7 >= randomVoiceList->max_length )
        break;
      if ( !v8 )
        goto LABEL_25;
      v15 = (System_Int32_array **)randomVoiceList->m_Items[v7];
      *(_QWORD *)(v8 + 16) = v15;
      v16 = v8 + 16;
      sub_B77560((BattleServantConfConponent_o *)(v8 + 16), v15, v9, v10, v11, v12, v13, v14);
      v17 = (System_Predicate_int__o *)sub_B77694(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v17,
        (Il2CppObject *)v8,
        Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__,
        (const MethodInfo_2C30DC8 *)Method_System_Predicate_int___ctor__);
      if ( !v3 )
        goto LABEL_25;
      v4 = System_Collections_Generic_List_int___Exists(
             v3,
             (System_Predicate_T__o *)v17,
             (const MethodInfo_30E663C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( !v4 )
      {
        if ( !*(_QWORD *)v16 )
          goto LABEL_25;
        System_Collections_Generic_List_int___Add(
          v3,
          *(_DWORD *)(*(_QWORD *)v16 + 56LL),
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v7 >= (int)randomVoiceList->max_length )
        goto LABEL_13;
    }
LABEL_26:
    v28 = sub_B776C8(v4);
    sub_B77668(v28, 0LL);
  }
LABEL_13:
  standFigureCollectList = v29->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  if ( !standFigureCollectList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v19 = standFigureCollectList->fields._items->m_Items[0];
  if ( !v19
    || (standFigure_k__BackingField = v19->fields._standFigure_k__BackingField,
        v21 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(v21, (Il2CppObject *)v29, Method_MyRoomSvtControl_svtVoicePlay__, 0LL),
        !standFigure_k__BackingField)
    || (UIStandFigureR__PreloadFormAssets(standFigure_k__BackingField, v3, v21, 0LL),
        (v22 = v29->fields.randomVoiceList) == 0LL) )
  {
LABEL_25:
    sub_B7769C(v4, v5);
  }
  playCnt = v29->fields.playCnt;
  max_length = v22->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_23:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_26;
  v25 = (struct System_String_StaticFields *)v22->m_Items[playCnt];
  if ( !v25 )
    goto LABEL_25;
  static_fields = v25 + 2;
  return static_fields->Empty;
}


void __fastcall MyRoomSvtControl__setFirstPlayVoice(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *voice,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ServantVoiceData_o *v7; // x8
  VoiceMaster_o *v8; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  ServantVoiceData_o *v10; // x9
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x22
  int32_t size; // w23
  __int64 v13; // x0

  if ( (byte_43942C8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43942C8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !voice )
    goto LABEL_16;
  if ( !voice->max_length )
  {
LABEL_17:
    v13 = sub_B776C8(Instance);
    sub_B77668(v13, 0LL);
  }
  v7 = voice->m_Items[0];
  if ( !v7 )
    goto LABEL_16;
  v8 = (VoiceMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)VoiceMaster__getFlagRequestNumber(
                                (VoiceMaster_o *)Instance,
                                this->fields.svtId,
                                v7->fields.id,
                                0,
                                0LL);
  if ( (_DWORD)Instance )
  {
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_16;
    if ( voice->max_length )
    {
      v10 = voice->m_Items[0];
      if ( v10 )
      {
        canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
        size = firstPlayVoiceList->fields._size;
        Instance = (DataManager_o *)VoiceMaster__getFirstPlayPriority(v8, this->fields.svtId, v10->fields.id, 0LL);
        if ( canFirstPlayVoiceIdxDic )
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            canFirstPlayVoiceIdxDic,
            size,
            (int32_t)Instance,
            (const MethodInfo_2FE8D70 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          Instance = (DataManager_o *)this->fields.firstPlayVoiceList;
          if ( Instance )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              (EventMissionProgressRequest_Argument_ProgressData_o *)voice,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
            return;
          }
        }
      }
LABEL_16:
      sub_B7769C(Instance, v6);
    }
    goto LABEL_17;
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *list,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceList; // x20
  __int64 v18; // x1
  System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x0
  struct System_Collections_Generic_List_ServantVoiceData____o *v20; // x8
  int32_t v21; // w21

  if ( (byte_43942C6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_43942C6 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.playCnt = 0;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    (System_Int32_array **)assetName,
    (System_String_array **)assetName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.voiceList,
      (System_Int32_array **)list,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_15;
    System_Collections_Generic_List_int___Clear(
      canPlayVoiceIdxList,
      (const MethodInfo_30E61F4 *)Method_System_Collections_Generic_List_int__Clear__);
    v20 = *p_voiceList;
    if ( *p_voiceList )
    {
      v21 = 0;
      while ( v21 < v20->fields._size )
      {
        canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
        if ( canPlayVoiceIdxList )
        {
          System_Collections_Generic_List_int___Add(
            canPlayVoiceIdxList,
            v21,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          v20 = *p_voiceList;
          ++v21;
          if ( *p_voiceList )
            continue;
        }
        goto LABEL_15;
      }
    }
    canPlayVoiceIdxList = (System_Collections_Generic_List_int__o *)this->fields.firstPlayVoiceList;
    if ( !canPlayVoiceIdxList
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)canPlayVoiceIdxList,
            (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ServantVoiceData____Clear__),
          (canPlayVoiceIdxList = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic) == 0LL) )
    {
LABEL_15:
      sub_B7769C(canPlayVoiceIdxList, v18);
    }
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canPlayVoiceIdxList,
      (const MethodInfo_2FE8F3C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice_39711076(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_43942C9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___69384384);
    sub_B775C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_43942C9 = 1;
  }
  v7 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B77694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v7,
    1,
    (const MethodInfo_30526A4 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___69384384);
  if ( !v7 )
    sub_B7769C(v8, v9);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v7,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v7, assetName, v10);
}


void __fastcall MyRoomSvtControl__stopVoice(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UIStandFigureR_o *v8; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_43942D0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_B775C4(&Method_MyRoomSvtControl_EndSetFace__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43942D0 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v21,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v21.fields.current;
    if ( !v21.fields.current )
      sub_B7769C(v4, v5);
    monitor = (UIStandFigureR_o *)v21.fields.current[1].monitor;
    if ( !monitor )
      sub_B7769C(0LL, v5);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0LL);
    v8 = (UIStandFigureR_o *)current[1].monitor;
    v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0LL);
    if ( !v8 )
      sub_B7769C(v10, v11);
    UIStandFigureR__RemoveCallback(v8, v9, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    this->fields.player = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.player, 0LL, v14, v15, v16, v17, v18, v19);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
}


void __fastcall MyRoomSvtControl__svtVoicePlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MyRoomSvtControl_o *v8; // x19
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v12; // x8
  System_Int32_array **id; // x1
  struct ServantVoiceData_array *v14; // x8
  __int64 v15; // x9
  int32_t fsm_high; // w20
  int32_t vcName; // w21
  float FadeTime; // s0
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x22
  float v20; // s8
  StandFigureCollect_o *v21; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x22
  System_Action_o *v23; // x23
  struct ServantVoiceData_array *v24; // x8
  __int64 v25; // x9
  struct SePlayer_o *player; // x25
  __int64 v27; // x26
  float v28; // s0
  float v29; // s8
  struct System_String_o *cueSheetName; // x8
  int v31; // w20
  __int64 v32; // x27
  struct System_String_o **p_objName; // x24
  __int64 v34; // x28
  struct System_Collections_Generic_List_StandFigureCollect__o *v35; // x23
  int32_t v36; // w22
  int32_t v37; // w21
  StandFigureCollect_o *v38; // x8
  UIStandFigureR_o *v39; // x23
  int v40; // w25
  __int64 v41; // x20
  __int64 v42; // x26
  struct System_String_o **v43; // x28
  System_Action_o *v44; // x24
  __int64 v45; // x0
  struct SePlayer_o *v46; // [xsp+8h] [xbp-58h]

  v8 = this;
  if ( (byte_43942CD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_B775C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    this = (MyRoomSvtControl_o *)sub_B775C4(&Method_MyRoomSvtControl_EndSetFace__);
    byte_43942CD = 1;
  }
  if ( v8->fields.asstName && v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( !randomVoiceList )
      goto LABEL_44;
    playCnt = v8->fields.playCnt;
    max_length = randomVoiceList->max_length;
    if ( (int)playCnt < max_length )
    {
      if ( (unsigned int)playCnt >= max_length )
        goto LABEL_42;
      v12 = randomVoiceList->m_Items[playCnt];
      if ( !v12 )
        goto LABEL_44;
      id = (System_Int32_array **)v12->fields.id;
      v8->fields.vcName = (struct System_String_o *)id;
      sub_B77560((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      this = (MyRoomSvtControl_o *)v8->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_1D2D438 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
            (int)this < 2) )
      {
        v14 = v8->fields.randomVoiceList;
        if ( !v14 )
          goto LABEL_44;
        v15 = v8->fields.playCnt;
        if ( (unsigned int)v15 < v14->max_length )
        {
          this = (MyRoomSvtControl_o *)v14->m_Items[v15];
          if ( this )
          {
            fsm_high = HIDWORD(this->fields.fsm);
            vcName = (int32_t)this->fields.vcName;
            FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
            standFigureCollectList = v8->fields.standFigureCollectList;
            if ( standFigureCollectList )
            {
              v20 = FadeTime;
              if ( !standFigureCollectList->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              v21 = standFigureCollectList->fields._items->m_Items[0];
              if ( v21 )
              {
                standFigure_k__BackingField = v21->fields._standFigure_k__BackingField;
                v23 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                System_Action___ctor(v23, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                if ( standFigure_k__BackingField )
                {
                  UIStandFigureR__SetFace_41143884(standFigure_k__BackingField, fsm_high, vcName, v23, v20, 0LL);
                  return;
                }
              }
            }
          }
LABEL_44:
          sub_B7769C(this, method);
        }
LABEL_42:
        v45 = sub_B776C8(this);
        sub_B77668(v45, 0LL);
      }
      v24 = v8->fields.randomVoiceList;
      if ( !v24 )
        goto LABEL_44;
      v25 = v8->fields.playCnt;
      if ( (unsigned int)v25 >= v24->max_length )
        goto LABEL_42;
      this = (MyRoomSvtControl_o *)v24->m_Items[v25];
      if ( !this )
        goto LABEL_44;
      player = this->fields.player;
      v27 = *(_QWORD *)&this->fields.svtId;
      v28 = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
      if ( player )
      {
        if ( v27 )
        {
          v29 = v28;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                         (const MethodInfo_1D2D438 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          cueSheetName = player->fields.cueSheetName;
          if ( (_DWORD)this == (_DWORD)cueSheetName )
          {
            v31 = (int)this;
            if ( (_DWORD)this == *(_DWORD *)(v27 + 24) && (int)this >= 1 )
            {
              if ( (_DWORD)cueSheetName )
              {
                v32 = 0LL;
                p_objName = &player->fields.objName;
                v34 = v27 + 32;
                v46 = player;
                while ( (unsigned int)v32 < *(_DWORD *)(v27 + 24) )
                {
                  v35 = v8->fields.standFigureCollectList;
                  if ( !v35 )
                    goto LABEL_44;
                  v36 = *((_DWORD *)p_objName + v32);
                  v37 = *(_DWORD *)(v34 + 4 * v32);
                  if ( v35->fields._size <= (unsigned int)v32 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                  v38 = v35->fields._items->m_Items[v32];
                  if ( !v38 )
                    goto LABEL_44;
                  v39 = v38->fields._standFigure_k__BackingField;
                  if ( (_DWORD)v32 )
                  {
                    if ( !v39 )
                      goto LABEL_44;
                    UIStandFigureR__SetFace_41143884(v38->fields._standFigure_k__BackingField, v36, v37, 0LL, v29, 0LL);
                  }
                  else
                  {
                    v40 = v31;
                    v41 = v27;
                    v42 = v34;
                    v43 = p_objName;
                    v44 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                    System_Action___ctor(v44, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                    if ( !v39 )
                      goto LABEL_44;
                    UIStandFigureR__SetFace_41143884(v39, v36, v37, v44, v29, 0LL);
                    p_objName = v43;
                    v34 = v42;
                    v27 = v41;
                    v31 = v40;
                    player = v46;
                  }
                  if ( (int)v32 + 1 >= v31 )
                    return;
                  if ( (unsigned int)++v32 >= LODWORD(player->fields.cueSheetName) )
                    goto LABEL_42;
                }
              }
              goto LABEL_42;
            }
          }
        }
      }
    }
  }
}


void __fastcall MyRoomSvtControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438A08D & 1) == 0 )
  {
    sub_B775C4(&MyRoomSvtControl___c_TypeInfo);
    byte_438A08D = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(MyRoomSvtControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)MyRoomSvtControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall MyRoomSvtControl___c___ctor(MyRoomSvtControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MyRoomSvtControl___c___SetVoiceData_b__21_0(
        MyRoomSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o a,
        System_Collections_Generic_KeyValuePair_int__int__o b,
        const MethodInfo *method)
{
  int32_t value; // w19
  int32_t v5; // w20
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  value = a.fields.value;
  v5 = b.fields.value;
  if ( (byte_438A08E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_438A08E = 1;
  }
  v7 = v5;
  return System_Int32__CompareTo_39547000((int32_t)&v7, value, 0LL);
}


void __fastcall MyRoomSvtControl___c__DisplayClass21_0___ctor(
        MyRoomSvtControl___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomSvtControl___c__DisplayClass21_0___SetVoiceData_b__1(
        MyRoomSvtControl___c__DisplayClass21_0_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  MyRoomSvtControl___c__DisplayClass21_0_o *v4; // x20
  struct System_Collections_Generic_List_KeyValuePair_int__int___o *priorityList; // x20
  unsigned __int64 v6; // x19

  v4 = this;
  if ( (byte_438A08F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    this = (MyRoomSvtControl___c__DisplayClass21_0_o *)sub_B775C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    byte_438A08F = 1;
  }
  priorityList = v4->fields.priorityList;
  if ( !priorityList )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(this, x);
  v6 = HIDWORD(*(unsigned __int64 *)&x);
  if ( !priorityList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  return (_DWORD)v6 == priorityList->fields._items->m_Items[1].fields.key;
}


void __fastcall MyRoomSvtControl___c__DisplayClass22_0___ctor(
        MyRoomSvtControl___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomSvtControl___c__DisplayClass22_1___ctor(
        MyRoomSvtControl___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomSvtControl___c__DisplayClass22_1___PreloadFormAssets_b__0(
        MyRoomSvtControl___c__DisplayClass22_1_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = a;
  voice = this->fields.voice;
  if ( !voice )
    sub_B7769C(this, a);
  return System_Int32__Equals_39547160((int32_t)&v5, voice->fields.form, 0LL);
}


void __fastcall MyRoomSvtControl___c__DisplayClass22_2___ctor(
        MyRoomSvtControl___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomSvtControl___c__DisplayClass22_2___PreloadFormAssets_b__1(
        MyRoomSvtControl___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  struct StandFigureCollect_o *collect; // x9
  struct MyRoomSvtControl___c__DisplayClass22_0_o *CS___8__locals1; // x8
  struct MyRoomSvtControl_o *_4__this; // x11
  struct ServantVoiceData_array *randomVoiceList; // x10
  __int64 playCnt; // x11
  ServantVoiceData_o *v7; // x10
  __int64 v8; // x0

  collect = this->fields.collect;
  if ( !collect )
    goto LABEL_9;
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  randomVoiceList = _4__this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_9;
  playCnt = _4__this->fields.playCnt;
  if ( (unsigned int)playCnt >= randomVoiceList->max_length )
  {
    v8 = sub_B776C8(this);
    sub_B77668(v8, 0LL);
  }
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_B7769C(this, method);
  UIStandFigureR__SetFace_41143884(
    (UIStandFigureR_o *)this,
    0,
    v7->fields.form,
    CS___8__locals1->fields.callback,
    0.0,
    0LL);
}


void __fastcall MyRoomSvtControl___c__DisplayClass23_0___ctor(
        MyRoomSvtControl___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomSvtControl___c__DisplayClass23_0___playVoice_b__0(
        MyRoomSvtControl___c__DisplayClass23_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = a;
  voice = this->fields.voice;
  if ( !voice )
    sub_B7769C(this, a);
  return System_Int32__Equals_39547160((int32_t)&v5, voice->fields.form, 0LL);
}