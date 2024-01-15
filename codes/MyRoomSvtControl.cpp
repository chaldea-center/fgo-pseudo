void __fastcall MyRoomSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F9B8E & 1) == 0 )
  {
    sub_B16FFC(&MyRoomSvtControl_TypeInfo, v1);
    byte_40F9B8E = 1;
  }
  MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = 3;
}


void __fastcall MyRoomSvtControl___ctor(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_Dictionary_int__int__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40F9B8D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    byte_40F9B8D = 1;
  }
  this->fields.volume = 1.0;
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.canPlayVoiceIdxList = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.canPlayVoiceIdxList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.firstPlayVoiceList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v33 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v29,
                                                               v30,
                                                               v31,
                                                               v32);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v33,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.canFirstPlayVoiceIdxDic,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v15; // x8
  BattleServantConfConponent_o *p_player; // x0
  UnityEngine_Object_o *fsm; // x20
  PlayMakerFSM_o *v18; // x0

  if ( (byte_40F9B8A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_22380/*"svtVoicePlay"*/, v3);
    sub_B16FFC(&StringLiteral_5479/*"END_PLAY"*/, v4);
    byte_40F9B8A = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0LL, 0LL);
  if ( !v5 )
  {
    playCnt = this->fields.playCnt;
    if ( (int)playCnt >= this->fields.maxPlayCnt )
    {
      p_player = (BattleServantConfConponent_o *)&this->fields.player;
      if ( this->fields.player )
      {
        p_player->klass = 0LL;
        sub_B16F98(p_player, 0LL, v7, v8, v9, v10, v11, v12);
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
      v18 = this->fields.fsm;
      if ( v18 )
      {
        PlayMakerFSM__SendEvent(v18, (System_String_o *)StringLiteral_5479/*"END_PLAY"*/, 0LL);
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
          sub_B17100(v5, v6, v7);
          sub_B170A0();
        }
        v15 = randomVoiceList->m_Items[playCnt];
        if ( v15 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_22380/*"svtVoicePlay"*/,
            v15->fields.delay,
            0LL);
          return;
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall MyRoomSvtControl__EndSetFace(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v11; // x22
  struct SePlayer_o *v12; // x0
  struct SePlayer_o **p_player; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F9B89 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MyRoomSvtControl_EndPlay__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40F9B89 = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v12 = SoundManager__playVoice_24824004(asstName, vcName, volume, v11, 0LL);
  this->fields.player = v12;
  p_player = &this->fields.player;
  sub_B16F98((BattleServantConfConponent_o *)p_player, (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
  ++*((_DWORD *)p_player + 11);
}


ServantVoiceData_o *__fastcall MyRoomSvtControl__GetFirstServantVoiceData(
        MyRoomSvtControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v4; // x9

  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    return 0LL;
  v4 = *(_QWORD *)&randomVoiceList->max_length;
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  return randomVoiceList->m_Items[0];
}


int32_t __fastcall MyRoomSvtControl__GetFormId(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x19
  StandFigureCollect_o *v4; // x8
  struct UIStandFigureR_o *standFigure_k__BackingField; // x8

  if ( (byte_40F9B8C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, method);
    byte_40F9B8C = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( !standFigureCollectList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v4 = standFigureCollectList->fields._items->m_Items[0];
  if ( !v4 || (standFigure_k__BackingField = v4->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_B170D4();
  return standFigure_k__BackingField->fields.formId;
}


void __fastcall MyRoomSvtControl__PreloadFormAssets(
        MyRoomSvtControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v22; // x19
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_int__o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v45; // x26
  __int64 v46; // x23
  __int64 v47; // x0
  __int64 v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  __int64 v56; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Predicate_int__o *v61; // x24
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **current; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  __int64 v85; // x8
  UIStandFigureR_o *v86; // x22
  System_Action_o *v87; // x23
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v89; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F9B86 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Exists__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v15);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v16);
    sub_B16FFC(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, v17);
    sub_B16FFC(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__, v18);
    sub_B16FFC(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, v19);
    sub_B16FFC(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, v20);
    sub_B16FFC(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v21);
    byte_40F9B86 = 1;
  }
  memset(&v89, 0, sizeof(v89));
  v22 = sub_B170CC(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, callback, method, v3, v4);
  MyRoomSvtControl___c__DisplayClass22_0___ctor((MyRoomSvtControl___c__DisplayClass22_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_22;
  *(_QWORD *)(v22 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v22 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)callback, v29, v30, v31, v32, v33, v34);
  v39 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v35,
                                                    v36,
                                                    v37,
                                                    v38);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_22;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v45 = 0LL;
    while ( 1 )
    {
      v46 = sub_B170CC(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, v40, v41, v42, v43);
      MyRoomSvtControl___c__DisplayClass22_1___ctor((MyRoomSvtControl___c__DisplayClass22_1_o *)v46, 0LL);
      if ( v45 >= randomVoiceList->max_length )
      {
        sub_B17100(v47, v48, v49);
        sub_B170A0();
      }
      if ( !v46 )
        break;
      v55 = (System_Int32_array **)randomVoiceList->m_Items[v45];
      *(_QWORD *)(v46 + 16) = v55;
      v56 = v46 + 16;
      sub_B16F98((BattleServantConfConponent_o *)(v46 + 16), v55, v49, v50, v51, v52, v53, v54);
      v61 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v57, v58, v59, v60);
      System_Predicate_int____ctor(
        v61,
        (Il2CppObject *)v46,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
      if ( !v39 )
        break;
      if ( !System_Collections_Generic_List_int___Exists(
              v39,
              (System_Predicate_T__o *)v61,
              (const MethodInfo_2F10D44 *)Method_System_Collections_Generic_List_int__Exists__) )
      {
        if ( !*(_QWORD *)v56 )
          break;
        System_Collections_Generic_List_int___Add(
          v39,
          *(_DWORD *)(*(_QWORD *)v56 + 56LL),
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v45 >= (int)randomVoiceList->max_length )
        goto LABEL_14;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_14:
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v88,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v89 = v88;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v89,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v67 = sub_B170CC(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v63, v64, v65, v66);
    MyRoomSvtControl___c__DisplayClass22_2___ctor((MyRoomSvtControl___c__DisplayClass22_2_o *)v67, 0LL);
    if ( !v67 )
      sub_B170D4();
    *(_QWORD *)(v67 + 24) = v22;
    sub_B16F98((BattleServantConfConponent_o *)(v67 + 24), (System_Int32_array **)v22, v68, v69, v70, v71, v72, v73);
    current = (System_Int32_array **)v89.fields.current;
    *(_QWORD *)(v67 + 16) = v89.fields.current;
    sub_B16F98((BattleServantConfConponent_o *)(v67 + 16), current, v75, v76, v77, v78, v79, v80);
    v85 = *(_QWORD *)(v67 + 16);
    if ( !v85 )
      sub_B170D4();
    v86 = *(UIStandFigureR_o **)(v85 + 24);
    v87 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v81, v82, v83, v84);
    System_Action___ctor(
      v87,
      (Il2CppObject *)v67,
      Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__,
      0LL);
    if ( !v86 )
      sub_B170D4();
    UIStandFigureR__PreloadFormAssets(v86, v39, v87, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v89,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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


bool __fastcall MyRoomSvtControl__SetVoiceData(MyRoomSvtControl_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v33; // x20
  System_Collections_Generic_IEnumerable_T__o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_KeyValuePair_int__int___o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Collections_Generic_List_KeyValuePair_int__int___o *v50; // x21
  MyRoomSvtControl___c_c *v51; // x0
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x8
  System_Comparison_KeyValuePair_int__int___o *_9__21_0; // x22
  Il2CppObject *v54; // x23
  struct MyRoomSvtControl___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Predicate_KeyValuePair_int__int___o *v67; // x22
  System_Collections_Generic_List_T__o *All; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_Random_o *v73; // x20
  unsigned int v74; // w0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x20
  unsigned int v82; // w22
  Il2CppObject *v83; // x23
  struct ServantVoiceData_array *v84; // x1
  WarBoardManager_TaskList_o **p_randomVoiceList; // x20
  System_Collections_Generic_Dictionary_int__int__o *v86; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v87; // x0
  int32_t v88; // w0
  int32_t v89; // w1
  System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x0
  System_Random_o *v92; // x20
  struct System_Collections_Generic_List_int__o *v93; // x8
  unsigned int v94; // w0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct System_Collections_Generic_List_int__o *v101; // x22
  int32_t v102; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *v103; // x20
  __int64 v104; // x22
  struct ServantVoiceData_array *v105; // x1
  System_Collections_Generic_List_int__o *v106; // x0
  struct System_Collections_Generic_List_int__o *v107; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v108; // x8
  int32_t v109; // w21
  int size; // w9
  System_Collections_Generic_List_int__o *v111; // x0
  System_String_o *asstName; // x0

  if ( (byte_40F9B85 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_KeyValuePair_int__int____ctor__, method);
    sub_B16FFC(&System_Comparison_KeyValuePair_int__int___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__RemoveAt__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___66723712, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v22);
    sub_B16FFC(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v23);
    sub_B16FFC(&Method_System_Predicate_KeyValuePair_int__int____ctor__, v24);
    sub_B16FFC(&System_Predicate_KeyValuePair_int__int___TypeInfo, v25);
    sub_B16FFC(&System_Random_TypeInfo, v26);
    sub_B16FFC(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__, v27);
    sub_B16FFC(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__, v28);
    sub_B16FFC(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, v29);
    sub_B16FFC(&MyRoomSvtControl___c_TypeInfo, v30);
    byte_40F9B85 = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_2DDCBB4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v33 = sub_B170CC(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, method, v2, v3, v4);
    MyRoomSvtControl___c__DisplayClass21_0___ctor((MyRoomSvtControl___c__DisplayClass21_0_o *)v33, 0LL);
    v34 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v39 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_B170CC(
                                                                         System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo,
                                                                         v35,
                                                                         v36,
                                                                         v37,
                                                                         v38);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_37783592(
      v39,
      v34,
      (const MethodInfo_2408828 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___66723712);
    if ( !v33 )
      goto LABEL_64;
    *(_QWORD *)(v33 + 16) = v39;
    sub_B16F98((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
    v50 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v33 + 16);
    v51 = MyRoomSvtControl___c_TypeInfo;
    if ( (BYTE3(MyRoomSvtControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomSvtControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomSvtControl___c_TypeInfo);
      v51 = MyRoomSvtControl___c_TypeInfo;
    }
    static_fields = v51->static_fields;
    _9__21_0 = static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        static_fields = MyRoomSvtControl___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)static_fields->__9;
      _9__21_0 = (System_Comparison_KeyValuePair_int__int___o *)sub_B170CC(
                                                                  System_Comparison_KeyValuePair_int__int___TypeInfo,
                                                                  v46,
                                                                  v47,
                                                                  v48,
                                                                  v49);
      System_Comparison_KeyValuePair_int__int_____ctor(
        _9__21_0,
        v54,
        Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__,
        (const MethodInfo_25B9AD0 *)Method_System_Comparison_KeyValuePair_int__int____ctor__);
      v55 = MyRoomSvtControl___c_TypeInfo->static_fields;
      v55->__9__21_0 = _9__21_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v55->__9__21_0,
        (System_Int32_array **)_9__21_0,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    if ( !v50 )
      goto LABEL_64;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_37794864(
      v50,
      (System_Comparison_T__o *)_9__21_0,
      (const MethodInfo_240B430 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v62 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v33 + 16);
    v67 = (System_Predicate_KeyValuePair_int__int___o *)sub_B170CC(
                                                          System_Predicate_KeyValuePair_int__int___TypeInfo,
                                                          v63,
                                                          v64,
                                                          v65,
                                                          v66);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v67,
      (Il2CppObject *)v33,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      (const MethodInfo_2B0582C *)Method_System_Predicate_KeyValuePair_int__int____ctor__);
    if ( !v62 )
      goto LABEL_64;
    All = System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
            v62,
            (System_Predicate_T__o *)v67,
            (const MethodInfo_2409CE0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v73 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, v69, v70, v71, v72);
    System_Random___ctor(v73, 0LL);
    if ( !All || !v73 )
      goto LABEL_64;
    v74 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v73->klass->vtable._7_Next.method)(
            v73,
            (unsigned int)All->fields._size,
            v73->klass->vtable._8_NextDouble.methodPtr);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v82 = v74;
    if ( All->fields._size <= v74 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !firstPlayVoiceList )
      goto LABEL_64;
    v83 = All->fields._items->m_Items[v74];
    if ( firstPlayVoiceList->fields._size <= (unsigned int)v83 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v84 = firstPlayVoiceList->fields._items->m_Items[(int)v83];
    this->fields.randomVoiceList = v84;
    p_randomVoiceList = (WarBoardManager_TaskList_o **)&this->fields.randomVoiceList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v84,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    if ( All->fields._size <= v82 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !this->fields.canFirstPlayVoiceIdxDic )
      goto LABEL_64;
    System_Collections_Generic_Dictionary_int__int___Remove(
      this->fields.canFirstPlayVoiceIdxDic,
      (int32_t)All->fields._items->m_Items[v82],
      (const MethodInfo_2DDE8AC *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    v86 = this->fields.canFirstPlayVoiceIdxDic;
    if ( !v86 )
      goto LABEL_64;
    if ( !System_Collections_Generic_Dictionary_int__int___get_Count(
            v86,
            (const MethodInfo_2DDCBB4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) )
    {
      v87 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.voiceList;
      if ( !v87 )
        goto LABEL_64;
      if ( v87->fields._size >= 2 )
      {
        v88 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                v87,
                *p_randomVoiceList,
                (const MethodInfo_2F26D88 *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( v88 != -1 )
        {
          v89 = v88;
          canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
          if ( !canPlayVoiceIdxList )
            goto LABEL_64;
          System_Collections_Generic_List_int___Remove(
            canPlayVoiceIdxList,
            v89,
            (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v92 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, method, v2, v3, v4);
    System_Random___ctor(v92, 0LL);
    v93 = this->fields.canPlayVoiceIdxList;
    if ( !v93 )
      goto LABEL_64;
    if ( !v92 )
      goto LABEL_64;
    v94 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v92->klass->vtable._7_Next.method)(
            v92,
            (unsigned int)v93->fields._size,
            v92->klass->vtable._8_NextDouble.methodPtr);
    v101 = this->fields.canPlayVoiceIdxList;
    if ( !v101 )
      goto LABEL_64;
    v102 = v94;
    if ( v101->fields._size <= v94 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v103 = this->fields.voiceList;
    if ( !v103 )
      goto LABEL_64;
    v104 = v101->fields._items->m_Items[v94 + 1];
    if ( v103->fields._size <= (unsigned int)v104 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v105 = v103->fields._items->m_Items[v104];
    this->fields.randomVoiceList = v105;
    p_randomVoiceList = (WarBoardManager_TaskList_o **)&this->fields.randomVoiceList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v105,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
    v106 = this->fields.canPlayVoiceIdxList;
    if ( !v106 )
      goto LABEL_64;
    System_Collections_Generic_List_int___RemoveAt(
      v106,
      v102,
      (const MethodInfo_2F121A8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v107 = this->fields.canPlayVoiceIdxList;
    if ( !v107 )
      goto LABEL_64;
    if ( !v107->fields._size )
    {
      v108 = this->fields.voiceList;
      if ( !v108 )
        goto LABEL_64;
      v109 = 0;
      while ( 1 )
      {
        size = v108->fields._size;
        if ( v109 >= size )
          break;
        if ( (_DWORD)v104 != v109 || size <= 1 )
        {
          v111 = this->fields.canPlayVoiceIdxList;
          if ( !v111 )
            goto LABEL_64;
          System_Collections_Generic_List_int___Add(
            v111,
            v109,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          v108 = this->fields.voiceList;
        }
        ++v109;
        if ( !v108 )
          goto LABEL_64;
      }
    }
  }
  if ( !*p_randomVoiceList )
    goto LABEL_64;
  asstName = this->fields.asstName;
  this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->fields._size;
  if ( !System_String__IsNullOrEmpty(asstName, 0LL) && this->fields.maxPlayCnt >= 1 )
  {
    if ( !*p_randomVoiceList )
      goto LABEL_64;
    if ( this->fields.playCnt < (*p_randomVoiceList)->fields._size )
      this->fields.isValidVoice = 1;
  }
  if ( !*p_randomVoiceList )
LABEL_64:
    sub_B170D4();
  return this->fields.playCnt < (*p_randomVoiceList)->fields._size;
}


void __fastcall MyRoomSvtControl__initFirstPlayVoiceList(
        MyRoomSvtControl_o *this,
        ServantVoiceEntity_o *svtVoiceEnt,
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  UserGameEntity_o *SelfUserGame; // x0
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v18; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  int32_t v21; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x9
  const MethodInfo *v23; // x2
  int32_t FriendshipRank; // w0
  int32_t v25; // w0
  int32_t v26; // w22
  int v27; // w27
  int32_t j; // w23
  BalanceConfig_c *v29; // x0
  int32_t svtId; // w24
  int32_t v31; // w24
  MyRoomSvtControl_c *v32; // x8
  int32_t SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP; // w9
  System_Collections_Generic_List_ServantVoiceData____o *MyRoomFriendShipVoiceList; // x0
  const MethodInfo *v35; // x2
  int v36; // w26
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-98h] BYREF
  int v38[2]; // [xsp+20h] [xbp-80h]
  int v39; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_40F9B82 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, svtVoiceEnt);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v10);
    sub_B16FFC(&MyRoomSvtControl_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F9B82 = 1;
  }
  memset(&i, 0, sizeof(i));
  v39 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_41;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             SelfUserGame->fields.favoriteUserSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Entity )
    goto LABEL_41;
  v18 = Entity;
  v20 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v20;
  *(_QWORD *)&v41.fields.fakeValue = v19;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v41, 0LL);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v21;
  if ( voiceList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v37;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields.current, v23) )
    {
      ;
    }
    v38[0] = 105;
    v39 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v39 = 0;
  }
  FriendshipRank = UserServantEntity__getFriendshipRank(v18, 0LL);
  if ( !svtVoiceEnt )
LABEL_41:
    sub_B170D4();
  v25 = ServantVoiceEntity__FriendShipRankWithVoice(svtVoiceEnt, FriendshipRank, 0LL);
  if ( v25 >= 2 )
  {
    v26 = v25;
    v27 = 0;
    for ( j = 1; j < v26; ++j )
    {
      v29 = BalanceConfig_TypeInfo;
      svtId = this->fields.svtId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      if ( svtId != v29->static_fields->ServantIdSwimsuitMelt )
        goto LABEL_30;
      v31 = UserServantEntity__getFriendshipRank(v18, 0LL);
      v32 = MyRoomSvtControl_TypeInfo;
      if ( (BYTE3(MyRoomSvtControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomSvtControl_TypeInfo);
        v32 = MyRoomSvtControl_TypeInfo;
      }
      SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = v32->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      if ( v31 < SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
        goto LABEL_30;
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      }
      if ( j >= SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
      {
LABEL_30:
        MyRoomFriendShipVoiceList = ServantVoiceEntity__getMyRoomFriendShipVoiceList(svtVoiceEnt, j, 0LL);
        if ( MyRoomFriendShipVoiceList )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v37,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MyRoomFriendShipVoiceList,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v37;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &i,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields.current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields.current, v35);
          }
          v38[v27] = 228;
          v36 = ++v39;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &i,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
          if ( v36 )
          {
            v27 = v36;
            if ( v38[v36 - 1] == 228 )
            {
              v27 = v36 - 1;
              v39 = v36 - 1;
            }
          }
          else
          {
            v27 = 0;
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
  __int64 v16; // x1
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v23; // x25
  __int64 v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  __int64 v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Predicate_int__o *v39; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x19
  StandFigureCollect_o *v41; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x21
  System_Action_o *v43; // x22
  struct ServantVoiceData_array *v44; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v47; // x8
  struct System_String_StaticFields *static_fields; // x8
  MyRoomSvtControl_o *v50; // [xsp+8h] [xbp-58h]

  if ( (byte_40F9B87 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Exists__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&Method_MyRoomSvtControl_svtVoicePlay__, v11);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v12);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v13);
    sub_B16FFC(&string_TypeInfo, v14);
    sub_B16FFC(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, v15);
    sub_B16FFC(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, v16);
    byte_40F9B87 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_23;
  v50 = this;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      v24 = sub_B170CC(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, v18, v19, v20, v21);
      MyRoomSvtControl___c__DisplayClass23_0___ctor((MyRoomSvtControl___c__DisplayClass23_0_o *)v24, 0LL);
      if ( v23 >= randomVoiceList->max_length )
        break;
      if ( !v24 )
        goto LABEL_25;
      v33 = (System_Int32_array **)randomVoiceList->m_Items[v23];
      *(_QWORD *)(v24 + 16) = v33;
      v34 = v24 + 16;
      sub_B16F98((BattleServantConfConponent_o *)(v24 + 16), v33, v27, v28, v29, v30, v31, v32);
      v39 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v35, v36, v37, v38);
      System_Predicate_int____ctor(
        v39,
        (Il2CppObject *)v24,
        Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__,
        (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
      if ( !v17 )
        goto LABEL_25;
      if ( !System_Collections_Generic_List_int___Exists(
              v17,
              (System_Predicate_T__o *)v39,
              (const MethodInfo_2F10D44 *)Method_System_Collections_Generic_List_int__Exists__) )
      {
        if ( !*(_QWORD *)v34 )
          goto LABEL_25;
        System_Collections_Generic_List_int___Add(
          v17,
          *(_DWORD *)(*(_QWORD *)v34 + 56LL),
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v23 >= (int)randomVoiceList->max_length )
        goto LABEL_13;
    }
LABEL_26:
    sub_B17100(v25, v26, v27);
    sub_B170A0();
  }
LABEL_13:
  standFigureCollectList = v50->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  if ( !standFigureCollectList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v41 = standFigureCollectList->fields._items->m_Items[0];
  if ( !v41
    || (standFigure_k__BackingField = v41->fields._standFigure_k__BackingField,
        v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21),
        System_Action___ctor(v43, (Il2CppObject *)v50, Method_MyRoomSvtControl_svtVoicePlay__, 0LL),
        !standFigure_k__BackingField)
    || (UIStandFigureR__PreloadFormAssets(standFigure_k__BackingField, v17, v43, 0LL),
        (v44 = v50->fields.randomVoiceList) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  playCnt = v50->fields.playCnt;
  max_length = v44->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_23:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_26;
  v47 = (struct System_String_StaticFields *)v44->m_Items[playCnt];
  if ( !v47 )
    goto LABEL_25;
  static_fields = v47 + 2;
  return static_fields->Empty;
}


void __fastcall MyRoomSvtControl__setFirstPlayVoice(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *voice,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  ServantVoiceData_o *v13; // x8
  VoiceMaster_o *v14; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  ServantVoiceData_o *v16; // x9
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x22
  int32_t size; // w23
  int32_t FirstPlayPriority; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *v20; // x0

  if ( (byte_40F9B83 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoiceMaster___, voice);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F9B83 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !voice )
    goto LABEL_16;
  if ( !voice->max_length )
  {
LABEL_17:
    sub_B17100(MasterData_WarQuestSelectionMaster, v11, v12);
    sub_B170A0();
  }
  v13 = voice->m_Items[0];
  if ( !v13 )
    goto LABEL_16;
  v14 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)VoiceMaster__getFlagRequestNumber(
                                                                      (VoiceMaster_o *)MasterData_WarQuestSelectionMaster,
                                                                      this->fields.svtId,
                                                                      v13->fields.id,
                                                                      0,
                                                                      0LL);
  if ( (_DWORD)MasterData_WarQuestSelectionMaster )
  {
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_16;
    if ( voice->max_length )
    {
      v16 = voice->m_Items[0];
      if ( v16 )
      {
        canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
        size = firstPlayVoiceList->fields._size;
        FirstPlayPriority = VoiceMaster__getFirstPlayPriority(v14, this->fields.svtId, v16->fields.id, 0LL);
        if ( canFirstPlayVoiceIdxDic )
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            canFirstPlayVoiceIdxDic,
            size,
            FirstPlayPriority,
            (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          v20 = this->fields.firstPlayVoiceList;
          if ( v20 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v20,
              (EventMissionProgressRequest_Argument_ProgressData_o *)voice,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
            return;
          }
        }
      }
LABEL_16:
      sub_B170D4();
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceList; // x20
  System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x0
  struct System_Collections_Generic_List_ServantVoiceData____o *v23; // x8
  int32_t v24; // w21
  System_Collections_Generic_List_int__o *v25; // x0
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x0
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x0

  if ( (byte_40F9B81 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, list);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v14);
    byte_40F9B81 = 1;
  }
  this->fields.asstName = assetName;
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
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.voiceList,
      (System_Int32_array **)list,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_15;
    System_Collections_Generic_List_int___Clear(
      canPlayVoiceIdxList,
      (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
    v23 = *p_voiceList;
    if ( *p_voiceList )
    {
      v24 = 0;
      while ( v24 < v23->fields._size )
      {
        v25 = this->fields.canPlayVoiceIdxList;
        if ( v25 )
        {
          System_Collections_Generic_List_int___Add(
            v25,
            v24,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          v23 = *p_voiceList;
          ++v24;
          if ( *p_voiceList )
            continue;
        }
        goto LABEL_15;
      }
    }
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList
      || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)firstPlayVoiceList,
            (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantVoiceData____Clear__),
          (canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic) == 0LL) )
    {
LABEL_15:
      sub_B170D4();
    }
    System_Collections_Generic_Dictionary_int__int___Clear(
      canFirstPlayVoiceIdxDic,
      (const MethodInfo_2DDD180 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice_24532476(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_40F9B84 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, data);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___66724432, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    byte_40F9B84 = 1;
  }
  v10 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B170CC(
                                                                           System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                           data,
                                                                           assetName,
                                                                           method,
                                                                           v4);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v10,
    1,
    (const MethodInfo_2F250E4 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___66724432);
  if ( !v10 )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v10, assetName, v11);
}


void __fastcall MyRoomSvtControl__stopVoice(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UIStandFigureR_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x21
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F9B8B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_B16FFC(&Method_MyRoomSvtControl_EndSetFace__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40F9B8B = 1;
  }
  memset(&v27, 0, sizeof(v27));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B170D4();
    monitor = (UIStandFigureR_o *)v27.fields.current[1].monitor;
    if ( !monitor )
      sub_B170D4();
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0LL);
    v12 = (UIStandFigureR_o *)current[1].monitor;
    v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0LL);
    if ( !v12 )
      sub_B170D4();
    UIStandFigureR__RemoveCallback(v12, v17, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.player, 0LL, v20, v21, v22, v23, v24, v25);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v15; // x8
  System_Int32_array **id; // x1
  struct ServantVoiceData_array *v17; // x8
  __int64 v18; // x9
  ServantVoiceData_o *v19; // x0
  int32_t face; // w20
  int32_t form; // w21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  float FadeTime; // s0
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x22
  float v28; // s8
  StandFigureCollect_o *v29; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x22
  System_Action_o *v31; // x23
  struct ServantVoiceData_array *v32; // x8
  __int64 v33; // x9
  ServantVoiceData_o *v34; // x0
  struct System_Int32_array *multiFace; // x25
  struct System_Int32_array *multiForm; // x26
  float v37; // s0
  float v38; // s8
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x8
  int v42; // w20
  __int64 v43; // x27
  int32_t *v44; // x24
  int32_t *v45; // x28
  struct System_Collections_Generic_List_StandFigureCollect__o *v46; // x23
  int32_t v47; // w22
  int32_t v48; // w21
  StandFigureCollect_o *v49; // x8
  UIStandFigureR_o *v50; // x23
  int v51; // w25
  struct System_Int32_array *v52; // x20
  int32_t *v53; // x26
  int32_t *v54; // x28
  System_Action_o *v55; // x24
  struct System_Int32_array *v56; // [xsp+8h] [xbp-58h]

  v8 = this;
  if ( (byte_40F9B88 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v10);
    this = (MyRoomSvtControl_o *)sub_B16FFC(&Method_MyRoomSvtControl_EndSetFace__, v11);
    byte_40F9B88 = 1;
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
      v15 = randomVoiceList->m_Items[playCnt];
      if ( !v15 )
        goto LABEL_44;
      id = (System_Int32_array **)v15->fields.id;
      v8->fields.vcName = (struct System_String_o *)id;
      sub_B16F98((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      this = (MyRoomSvtControl_o *)v8->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
            (int)this < 2) )
      {
        v17 = v8->fields.randomVoiceList;
        if ( !v17 )
          goto LABEL_44;
        v18 = v8->fields.playCnt;
        if ( (unsigned int)v18 < v17->max_length )
        {
          v19 = v17->m_Items[v18];
          if ( v19 )
          {
            face = v19->fields.face;
            form = v19->fields.form;
            FadeTime = ServantVoiceData__GetFadeTime(v19, 0LL);
            standFigureCollectList = v8->fields.standFigureCollectList;
            if ( standFigureCollectList )
            {
              v28 = FadeTime;
              if ( !standFigureCollectList->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v29 = standFigureCollectList->fields._items->m_Items[0];
              if ( v29 )
              {
                standFigure_k__BackingField = v29->fields._standFigure_k__BackingField;
                v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
                System_Action___ctor(v31, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                if ( standFigure_k__BackingField )
                {
                  UIStandFigureR__SetFace_40887852(standFigure_k__BackingField, face, form, v31, v28, 0LL);
                  return;
                }
              }
            }
          }
LABEL_44:
          sub_B170D4();
        }
LABEL_42:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v32 = v8->fields.randomVoiceList;
      if ( !v32 )
        goto LABEL_44;
      v33 = v8->fields.playCnt;
      if ( (unsigned int)v33 >= v32->max_length )
        goto LABEL_42;
      v34 = v32->m_Items[v33];
      if ( !v34 )
        goto LABEL_44;
      multiFace = v34->fields.multiFace;
      multiForm = v34->fields.multiForm;
      v37 = ServantVoiceData__GetFadeTime(v34, 0LL);
      if ( multiFace )
      {
        if ( multiForm )
        {
          v38 = v37;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                         (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          v41 = *(_QWORD *)&multiFace->max_length;
          if ( (_DWORD)this == (_DWORD)v41 )
          {
            v42 = (int)this;
            if ( (_DWORD)this == multiForm->max_length && (int)this >= 1 )
            {
              if ( (_DWORD)v41 )
              {
                v43 = 0LL;
                v44 = &multiFace->m_Items[1];
                v45 = &multiForm->m_Items[1];
                v56 = multiFace;
                while ( (unsigned int)v43 < multiForm->max_length )
                {
                  v46 = v8->fields.standFigureCollectList;
                  if ( !v46 )
                    goto LABEL_44;
                  v47 = v44[v43];
                  v48 = v45[v43];
                  if ( v46->fields._size <= (unsigned int)v43 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  v49 = v46->fields._items->m_Items[v43];
                  if ( !v49 )
                    goto LABEL_44;
                  v50 = v49->fields._standFigure_k__BackingField;
                  if ( (_DWORD)v43 )
                  {
                    if ( !v50 )
                      goto LABEL_44;
                    UIStandFigureR__SetFace_40887852(v49->fields._standFigure_k__BackingField, v47, v48, 0LL, v38, 0LL);
                  }
                  else
                  {
                    v51 = v42;
                    v52 = multiForm;
                    v53 = v45;
                    v54 = v44;
                    v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v39, v40);
                    System_Action___ctor(v55, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                    if ( !v50 )
                      goto LABEL_44;
                    UIStandFigureR__SetFace_40887852(v50, v47, v48, v55, v38, 0LL);
                    v44 = v54;
                    v45 = v53;
                    multiForm = v52;
                    v42 = v51;
                    multiFace = v56;
                  }
                  if ( (int)v43 + 1 >= v42 )
                    return;
                  if ( (unsigned int)++v43 >= multiFace->max_length )
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8350 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomSvtControl___c_TypeInfo, v1);
    byte_40F8350 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MyRoomSvtControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MyRoomSvtControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_40F8351 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, a);
    byte_40F8351 = 1;
  }
  v7 = v5;
  return System_Int32__CompareTo_38275572((int32_t)&v7, value, 0LL);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_KeyValuePair_int__int___o *priorityList; // x20
  unsigned __int64 v7; // x19

  if ( (byte_40F8352 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, x);
    sub_B16FFC(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v5);
    byte_40F8352 = 1;
  }
  priorityList = this->fields.priorityList;
  if ( !priorityList )
    sub_B170D4();
  v7 = HIDWORD(*(unsigned __int64 *)&x);
  if ( !priorityList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return (_DWORD)v7 == priorityList->fields._items->m_Items[1].fields.key;
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
    sub_B170D4();
  return System_Int32__Equals_38275732((int32_t)&v5, voice->fields.form, 0LL);
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
  __int64 v2; // x2
  struct StandFigureCollect_o *collect; // x9
  struct MyRoomSvtControl___c__DisplayClass22_0_o *CS___8__locals1; // x8
  struct MyRoomSvtControl_o *_4__this; // x11
  struct ServantVoiceData_array *randomVoiceList; // x10
  __int64 playCnt; // x11
  ServantVoiceData_o *v8; // x10
  UIStandFigureR_o *standFigure_k__BackingField; // x0

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
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v8 = randomVoiceList->m_Items[playCnt];
  if ( !v8 || (standFigure_k__BackingField = collect->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_B170D4();
  UIStandFigureR__SetFace_40887852(
    standFigure_k__BackingField,
    0,
    v8->fields.form,
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
    sub_B170D4();
  return System_Int32__Equals_38275732((int32_t)&v5, voice->fields.form, 0LL);
}