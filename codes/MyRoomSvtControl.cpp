void __fastcall MyRoomSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4213E78 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomSvtControl_TypeInfo, v1);
    byte_4213E78 = 1;
  }
  MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = 3;
}


void __fastcall MyRoomSvtControl___ctor(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_Dictionary_int__int__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4213E77 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    byte_4213E77 = 1;
  }
  this->fields.volume = 1.0;
  v9 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.canPlayVoiceIdxList = v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.canPlayVoiceIdxList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.firstPlayVoiceList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v25,
                                                               v26);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v27,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.canFirstPlayVoiceIdxDic,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v14; // x8
  BattleServantConfConponent_o *p_player; // x0
  UnityEngine_Object_o *fsm; // x20
  __int64 v17; // x0

  if ( (byte_4213E74 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_22549/*"svtVoicePlay"*/, v3);
    sub_B0D8A4(&StringLiteral_5510/*"END_PLAY"*/, v4);
    byte_4213E74 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    playCnt = this->fields.playCnt;
    if ( (int)playCnt >= this->fields.maxPlayCnt )
    {
      p_player = (BattleServantConfConponent_o *)&this->fields.player;
      if ( this->fields.player )
      {
        p_player->klass = 0LL;
        sub_B0D840(p_player, 0LL, v6, v7, v8, v9, v10, v11);
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
      v5 = this->fields.fsm;
      if ( v5 )
      {
        PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_5510/*"END_PLAY"*/, 0LL);
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
          v17 = sub_B0D9A8(v5);
          sub_B0D948(v17, 0LL);
        }
        v14 = randomVoiceList->m_Items[playCnt];
        if ( v14 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_22549/*"svtVoicePlay"*/,
            v14->fields.delay,
            0LL);
          return;
        }
      }
    }
    sub_B0D97C(v5);
  }
}


void __fastcall MyRoomSvtControl__EndSetFace(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v9; // x22
  struct SePlayer_o *v10; // x0
  struct SePlayer_o **p_player; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4213E73 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MyRoomSvtControl_EndPlay__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4213E73 = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v10 = SoundManager__playVoice_24977528(asstName, vcName, volume, v9, 0LL);
  this->fields.player = v10;
  p_player = &this->fields.player;
  sub_B0D840((BattleServantConfConponent_o *)p_player, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
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
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
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
  if ( (byte_4213E76 & 1) == 0 )
  {
    this = (MyRoomSvtControl_o *)sub_B0D8A4(
                                   &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                   method);
    byte_4213E76 = 1;
  }
  standFigureCollectList = v2->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( !standFigureCollectList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v4 = standFigureCollectList->fields._items->m_Items[0];
  if ( !v4 || (standFigure_k__BackingField = v4->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_B0D97C(this);
  return standFigure_k__BackingField->fields.formId;
}


void __fastcall MyRoomSvtControl__PreloadFormAssets(
        MyRoomSvtControl_o *this,
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
  __int64 v20; // x19
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_int__o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v40; // x26
  __int64 v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  __int64 v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  System_Predicate_int__o *v52; // x24
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x21
  __int64 v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **current; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x8
  UIStandFigureR_o *v74; // x22
  System_Action_o *v75; // x23
  __int64 v76; // x0
  __int64 v77; // x0
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4213E70 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Exists__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v13);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v14);
    sub_B0D8A4(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, v15);
    sub_B0D8A4(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__, v16);
    sub_B0D8A4(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, v17);
    sub_B0D8A4(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, v18);
    sub_B0D8A4(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v19);
    byte_4213E70 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  v20 = sub_B0D974(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, callback, method);
  MyRoomSvtControl___c__DisplayClass22_0___ctor((MyRoomSvtControl___c__DisplayClass22_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_22;
  *(_QWORD *)(v20 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v20 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  v36 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v34, v35);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_22;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v40 = 0LL;
    while ( 1 )
    {
      v41 = sub_B0D974(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, v37, v38);
      MyRoomSvtControl___c__DisplayClass22_1___ctor((MyRoomSvtControl___c__DisplayClass22_1_o *)v41, 0LL);
      if ( v40 >= randomVoiceList->max_length )
      {
        v77 = sub_B0D9A8(standFigureCollectList);
        sub_B0D948(v77, 0LL);
      }
      if ( !v41 )
        break;
      v48 = (System_Int32_array **)randomVoiceList->m_Items[v40];
      *(_QWORD *)(v41 + 16) = v48;
      v49 = v41 + 16;
      sub_B0D840((BattleServantConfConponent_o *)(v41 + 16), v48, v42, v43, v44, v45, v46, v47);
      v52 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v50, v51);
      System_Predicate_int____ctor(
        v52,
        (Il2CppObject *)v41,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
      if ( !v36 )
        break;
      standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)System_Collections_Generic_List_int___Exists(
                                                                                                 v36,
                                                                                                 (System_Predicate_T__o *)v52,
                                                                                                 (const MethodInfo_2FB0754 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !*(_QWORD *)v49 )
          break;
        System_Collections_Generic_List_int___Add(
          v36,
          *(_DWORD *)(*(_QWORD *)v49 + 56LL),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v40 >= (int)randomVoiceList->max_length )
        goto LABEL_14;
    }
LABEL_22:
    sub_B0D97C(standFigureCollectList);
  }
LABEL_14:
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v78,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v79 = v78;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v79,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v55 = sub_B0D974(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v53, v54);
    MyRoomSvtControl___c__DisplayClass22_2___ctor((MyRoomSvtControl___c__DisplayClass22_2_o *)v55, 0LL);
    if ( !v55 )
      sub_B0D97C(v56);
    *(_QWORD *)(v55 + 24) = v20;
    sub_B0D840((BattleServantConfConponent_o *)(v55 + 24), (System_Int32_array **)v20, v57, v58, v59, v60, v61, v62);
    current = (System_Int32_array **)v79.fields.current;
    *(_QWORD *)(v55 + 16) = v79.fields.current;
    sub_B0D840((BattleServantConfConponent_o *)(v55 + 16), current, v64, v65, v66, v67, v68, v69);
    v73 = *(_QWORD *)(v55 + 16);
    if ( !v73 )
      sub_B0D97C(v70);
    v74 = *(UIStandFigureR_o **)(v73 + 24);
    v75 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v71, v72);
    System_Action___ctor(
      v75,
      (Il2CppObject *)v55,
      Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__,
      0LL);
    if ( !v74 )
      sub_B0D97C(v76);
    UIStandFigureR__PreloadFormAssets(v74, v36, v75, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v79,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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


bool __fastcall MyRoomSvtControl__SetVoiceData(MyRoomSvtControl_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v31; // x20
  System_Collections_Generic_IEnumerable_T__o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_KeyValuePair_int__int___o *v35; // x21
  __int64 Count; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_KeyValuePair_int__int___o *v45; // x21
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x8
  System_Comparison_KeyValuePair_int__int___o *_9__21_0; // x22
  Il2CppObject *v48; // x23
  struct MyRoomSvtControl___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v56; // x21
  __int64 v57; // x1
  __int64 v58; // x2
  System_Predicate_KeyValuePair_int__int___o *v59; // x22
  System_Collections_Generic_List_T__o *All; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  System_Random_o *v63; // x20
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x20
  unsigned int v71; // w22
  Il2CppObject *v72; // x23
  struct ServantVoiceData_array *v73; // x1
  WarBoardManager_TaskList_o **p_randomVoiceList; // x20
  int32_t v75; // w1
  System_Random_o *v77; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct System_Collections_Generic_List_int__o *v85; // x22
  int32_t v86; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *v87; // x20
  __int64 v88; // x22
  struct ServantVoiceData_array *v89; // x1
  struct System_Collections_Generic_List_int__o *v90; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v91; // x8
  int32_t v92; // w21
  int size; // w9
  System_String_o *asstName; // x0

  if ( (byte_4213E6F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_KeyValuePair_int__int____ctor__, method);
    sub_B0D8A4(&System_Comparison_KeyValuePair_int__int___TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__RemoveAt__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___67871336, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v21);
    sub_B0D8A4(&Method_System_Predicate_KeyValuePair_int__int____ctor__, v22);
    sub_B0D8A4(&System_Predicate_KeyValuePair_int__int___TypeInfo, v23);
    sub_B0D8A4(&System_Random_TypeInfo, v24);
    sub_B0D8A4(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__, v25);
    sub_B0D8A4(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__, v26);
    sub_B0D8A4(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, v27);
    sub_B0D8A4(&MyRoomSvtControl___c_TypeInfo, v28);
    byte_4213E6F = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_2E69454 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v31 = sub_B0D974(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, method, v2);
    MyRoomSvtControl___c__DisplayClass21_0___ctor((MyRoomSvtControl___c__DisplayClass21_0_o *)v31, 0LL);
    v32 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v35 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_B0D974(
                                                                         System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo,
                                                                         v33,
                                                                         v34);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_47350136(
      v35,
      v32,
      (const MethodInfo_2D28178 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___67871336);
    if ( !v31 )
      goto LABEL_64;
    *(_QWORD *)(v31 + 16) = v35;
    sub_B0D840((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)v35, v37, v38, v39, v40, v41, v42);
    v45 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v31 + 16);
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
      v48 = (Il2CppObject *)static_fields->__9;
      _9__21_0 = (System_Comparison_KeyValuePair_int__int___o *)sub_B0D974(
                                                                  System_Comparison_KeyValuePair_int__int___TypeInfo,
                                                                  v43,
                                                                  v44);
      System_Comparison_KeyValuePair_int__int_____ctor(
        _9__21_0,
        v48,
        Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__,
        (const MethodInfo_240C0CC *)Method_System_Comparison_KeyValuePair_int__int____ctor__);
      v49 = MyRoomSvtControl___c_TypeInfo->static_fields;
      v49->__9__21_0 = _9__21_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v49->__9__21_0,
        (System_Int32_array **)_9__21_0,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    if ( !v45 )
      goto LABEL_64;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_47361408(
      v45,
      (System_Comparison_T__o *)_9__21_0,
      (const MethodInfo_2D2AD80 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v56 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v31 + 16);
    v59 = (System_Predicate_KeyValuePair_int__int___o *)sub_B0D974(
                                                          System_Predicate_KeyValuePair_int__int___TypeInfo,
                                                          v57,
                                                          v58);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v59,
      (Il2CppObject *)v31,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      (const MethodInfo_2AF1A38 *)Method_System_Predicate_KeyValuePair_int__int____ctor__);
    if ( !v56 )
      goto LABEL_64;
    All = System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
            v56,
            (System_Predicate_T__o *)v59,
            (const MethodInfo_2D29630 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v63 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, v61, v62);
    System_Random___ctor(v63, 0LL);
    if ( !All || !v63 )
      goto LABEL_64;
    Count = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v63->klass->vtable._7_Next.method)(
              v63,
              (unsigned int)All->fields._size,
              v63->klass->vtable._8_NextDouble.methodPtr);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v71 = Count;
    if ( All->fields._size <= (unsigned int)Count )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !firstPlayVoiceList )
      goto LABEL_64;
    v72 = All->fields._items->m_Items[(int)Count];
    if ( firstPlayVoiceList->fields._size <= (unsigned int)v72 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v73 = firstPlayVoiceList->fields._items->m_Items[(int)v72];
    this->fields.randomVoiceList = v73;
    p_randomVoiceList = (WarBoardManager_TaskList_o **)&this->fields.randomVoiceList;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v73,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    if ( All->fields._size <= v71 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !this->fields.canFirstPlayVoiceIdxDic )
      goto LABEL_64;
    System_Collections_Generic_Dictionary_int__int___Remove(
      this->fields.canFirstPlayVoiceIdxDic,
      (int32_t)All->fields._items->m_Items[v71],
      (const MethodInfo_2E6B14C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Count = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Count )
      goto LABEL_64;
    Count = System_Collections_Generic_Dictionary_int__int___get_Count(
              (System_Collections_Generic_Dictionary_int__int__o *)Count,
              (const MethodInfo_2E69454 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
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
                  (const MethodInfo_2FC6798 *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Count != -1 )
        {
          v75 = Count;
          Count = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Count )
            goto LABEL_64;
          Count = System_Collections_Generic_List_int___Remove(
                    (System_Collections_Generic_List_int__o *)Count,
                    v75,
                    (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v77 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, method, v2);
    System_Random___ctor(v77, 0LL);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_64;
    if ( !v77 )
      goto LABEL_64;
    Count = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v77->klass->vtable._7_Next.method)(
              v77,
              (unsigned int)canPlayVoiceIdxList->fields._size,
              v77->klass->vtable._8_NextDouble.methodPtr);
    v85 = this->fields.canPlayVoiceIdxList;
    if ( !v85 )
      goto LABEL_64;
    v86 = Count;
    if ( v85->fields._size <= (unsigned int)Count )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v87 = this->fields.voiceList;
    if ( !v87 )
      goto LABEL_64;
    v88 = v85->fields._items->m_Items[(int)Count + 1];
    if ( v87->fields._size <= (unsigned int)v88 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v89 = v87->fields._items->m_Items[v88];
    this->fields.randomVoiceList = v89;
    p_randomVoiceList = (WarBoardManager_TaskList_o **)&this->fields.randomVoiceList;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v89,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84);
    Count = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Count )
      goto LABEL_64;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Count,
      v86,
      (const MethodInfo_2FB1BB8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v90 = this->fields.canPlayVoiceIdxList;
    if ( !v90 )
      goto LABEL_64;
    if ( !v90->fields._size )
    {
      v91 = this->fields.voiceList;
      if ( !v91 )
        goto LABEL_64;
      v92 = 0;
      while ( 1 )
      {
        size = v91->fields._size;
        if ( v92 >= size )
          break;
        if ( (_DWORD)v88 != v92 || size <= 1 )
        {
          Count = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Count )
            goto LABEL_64;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Count,
            v92,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          v91 = this->fields.voiceList;
        }
        ++v92;
        if ( !v91 )
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
    sub_B0D97C(Count);
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
  void *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  UserServantEntity_o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x9
  const MethodInfo *v21; // x2
  int32_t v22; // w0
  int32_t v23; // w22
  int v24; // w27
  int32_t j; // w23
  BalanceConfig_c *v26; // x0
  int32_t svtId; // w24
  int32_t FriendshipRank; // w24
  MyRoomSvtControl_c *v29; // x8
  int32_t SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP; // w9
  System_Collections_Generic_List_ServantVoiceData____o *MyRoomFriendShipVoiceList; // x0
  const MethodInfo *v32; // x2
  int v33; // w26
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-98h] BYREF
  int v35[2]; // [xsp+20h] [xbp-80h]
  int v36; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4213E6C & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, svtVoiceEnt);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v10);
    sub_B0D8A4(&MyRoomSvtControl_TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4213E6C = 1;
  }
  memset(&i, 0, sizeof(i));
  v36 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_41;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               *((_QWORD *)Instance + 14),
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_41;
  v16 = (UserServantEntity_o *)Instance;
  v18 = *((_QWORD *)Instance + 10);
  v17 = *((_QWORD *)Instance + 11);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v18;
  *(_QWORD *)&v38.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v38, 0LL);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v19;
  if ( voiceList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v34;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields.current, v21) )
    {
      ;
    }
    v35[0] = 105;
    v36 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v36 = 0;
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v16, 0LL);
  if ( !svtVoiceEnt )
LABEL_41:
    sub_B0D97C(Instance);
  v22 = ServantVoiceEntity__FriendShipRankWithVoice(svtVoiceEnt, (int32_t)Instance, 0LL);
  if ( v22 >= 2 )
  {
    v23 = v22;
    v24 = 0;
    for ( j = 1; j < v23; ++j )
    {
      v26 = BalanceConfig_TypeInfo;
      svtId = this->fields.svtId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      if ( svtId != v26->static_fields->ServantIdSwimsuitMelt )
        goto LABEL_30;
      FriendshipRank = UserServantEntity__getFriendshipRank(v16, 0LL);
      v29 = MyRoomSvtControl_TypeInfo;
      if ( (BYTE3(MyRoomSvtControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomSvtControl_TypeInfo);
        v29 = MyRoomSvtControl_TypeInfo;
      }
      SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = v29->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      if ( FriendshipRank < SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
        goto LABEL_30;
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      }
      if ( j >= SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
      {
LABEL_30:
        MyRoomFriendShipVoiceList = ServantVoiceEntity__getMyRoomFriendShipVoiceList(svtVoiceEnt, j, 0LL);
        if ( MyRoomFriendShipVoiceList )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v34,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MyRoomFriendShipVoiceList,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v34;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &i,
                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields.current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields.current, v32);
          }
          v35[v24] = 228;
          v33 = ++v36;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &i,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
          if ( v33 )
          {
            v24 = v33;
            if ( v35[v33 - 1] == 228 )
            {
              v24 = v33 - 1;
              v36 = v33 - 1;
            }
          }
          else
          {
            v24 = 0;
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
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v20; // x25
  __int64 v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  __int64 v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  System_Predicate_int__o *v32; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x19
  StandFigureCollect_o *v34; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x21
  System_Action_o *v36; // x22
  struct ServantVoiceData_array *v37; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v40; // x8
  struct System_String_StaticFields *static_fields; // x8
  __int64 v43; // x0
  MyRoomSvtControl_o *v44; // [xsp+8h] [xbp-58h]

  if ( (byte_4213E71 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Exists__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B0D8A4(&Method_MyRoomSvtControl_svtVoicePlay__, v9);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v10);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v11);
    sub_B0D8A4(&string_TypeInfo, v12);
    sub_B0D8A4(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, v13);
    sub_B0D8A4(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, v14);
    byte_4213E71 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_23;
  v44 = this;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      v21 = sub_B0D974(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, v17, v18);
      MyRoomSvtControl___c__DisplayClass23_0___ctor((MyRoomSvtControl___c__DisplayClass23_0_o *)v21, 0LL);
      if ( v20 >= randomVoiceList->max_length )
        break;
      if ( !v21 )
        goto LABEL_25;
      v28 = (System_Int32_array **)randomVoiceList->m_Items[v20];
      *(_QWORD *)(v21 + 16) = v28;
      v29 = v21 + 16;
      sub_B0D840((BattleServantConfConponent_o *)(v21 + 16), v28, v22, v23, v24, v25, v26, v27);
      v32 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v30, v31);
      System_Predicate_int____ctor(
        v32,
        (Il2CppObject *)v21,
        Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__,
        (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
      if ( !v15 )
        goto LABEL_25;
      v16 = System_Collections_Generic_List_int___Exists(
              v15,
              (System_Predicate_T__o *)v32,
              (const MethodInfo_2FB0754 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( !v16 )
      {
        if ( !*(_QWORD *)v29 )
          goto LABEL_25;
        System_Collections_Generic_List_int___Add(
          v15,
          *(_DWORD *)(*(_QWORD *)v29 + 56LL),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v20 >= (int)randomVoiceList->max_length )
        goto LABEL_13;
    }
LABEL_26:
    v43 = sub_B0D9A8(v16);
    sub_B0D948(v43, 0LL);
  }
LABEL_13:
  standFigureCollectList = v44->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  if ( !standFigureCollectList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v34 = standFigureCollectList->fields._items->m_Items[0];
  if ( !v34
    || (standFigure_k__BackingField = v34->fields._standFigure_k__BackingField,
        v36 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18),
        System_Action___ctor(v36, (Il2CppObject *)v44, Method_MyRoomSvtControl_svtVoicePlay__, 0LL),
        !standFigure_k__BackingField)
    || (UIStandFigureR__PreloadFormAssets(standFigure_k__BackingField, v15, v36, 0LL),
        (v37 = v44->fields.randomVoiceList) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(v16);
  }
  playCnt = v44->fields.playCnt;
  max_length = v37->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_23:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_26;
  v40 = (struct System_String_StaticFields *)v37->m_Items[playCnt];
  if ( !v40 )
    goto LABEL_25;
  static_fields = v40 + 2;
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
  DataManager_o *Instance; // x0
  ServantVoiceData_o *v10; // x8
  VoiceMaster_o *v11; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  ServantVoiceData_o *v13; // x9
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x22
  int32_t size; // w23
  __int64 v16; // x0

  if ( (byte_4213E6D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoiceMaster___, voice);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4213E6D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !voice )
    goto LABEL_16;
  if ( !voice->max_length )
  {
LABEL_17:
    v16 = sub_B0D9A8(Instance);
    sub_B0D948(v16, 0LL);
  }
  v10 = voice->m_Items[0];
  if ( !v10 )
    goto LABEL_16;
  v11 = (VoiceMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)VoiceMaster__getFlagRequestNumber(
                                (VoiceMaster_o *)Instance,
                                this->fields.svtId,
                                v10->fields.id,
                                0,
                                0LL);
  if ( (_DWORD)Instance )
  {
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_16;
    if ( voice->max_length )
    {
      v13 = voice->m_Items[0];
      if ( v13 )
      {
        canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
        size = firstPlayVoiceList->fields._size;
        Instance = (DataManager_o *)VoiceMaster__getFirstPlayPriority(v11, this->fields.svtId, v13->fields.id, 0LL);
        if ( canFirstPlayVoiceIdxDic )
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            canFirstPlayVoiceIdxDic,
            size,
            (int32_t)Instance,
            (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          Instance = (DataManager_o *)this->fields.firstPlayVoiceList;
          if ( Instance )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              (EventMissionProgressRequest_Argument_ProgressData_o *)voice,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
            return;
          }
        }
      }
LABEL_16:
      sub_B0D97C(Instance);
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

  if ( (byte_4213E6B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, list);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v14);
    byte_4213E6B = 1;
  }
  this->fields.asstName = assetName;
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
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    sub_B0D840(
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
      (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
    v23 = *p_voiceList;
    if ( *p_voiceList )
    {
      v24 = 0;
      while ( v24 < v23->fields._size )
      {
        canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
        if ( canPlayVoiceIdxList )
        {
          System_Collections_Generic_List_int___Add(
            canPlayVoiceIdxList,
            v24,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          v23 = *p_voiceList;
          ++v24;
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
            (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ServantVoiceData____Clear__),
          (canPlayVoiceIdxList = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic) == 0LL) )
    {
LABEL_15:
      sub_B0D97C(canPlayVoiceIdxList);
    }
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canPlayVoiceIdxList,
      (const MethodInfo_2E69A20 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice_23623804(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v9; // x22
  __int64 v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4213E6E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___67872136, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    byte_4213E6E = 1;
  }
  v9 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                          data,
                                                                          assetName);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v9,
    1,
    (const MethodInfo_2FC4AF4 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___67872136);
  if ( !v9 )
    sub_B0D97C(v10);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v9, assetName, v11);
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
  _BOOL8 v10; // x0
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UIStandFigureR_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x21
  __int64 v17; // x0
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

  if ( (byte_4213E75 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_B0D8A4(&Method_MyRoomSvtControl_EndSetFace__, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    byte_4213E75 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v10 )
      break;
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B0D97C(v10);
    monitor = (UIStandFigureR_o *)v27.fields.current[1].monitor;
    if ( !monitor )
      sub_B0D97C(0LL);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0LL);
    v13 = (UIStandFigureR_o *)current[1].monitor;
    v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0LL);
    if ( !v13 )
      sub_B0D97C(v17);
    UIStandFigureR__RemoveCallback(v13, v16, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.player, 0LL, v20, v21, v22, v23, v24, v25);
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
  int32_t fsm_high; // w20
  int32_t vcName; // w21
  __int64 v21; // x1
  __int64 v22; // x2
  float FadeTime; // s0
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x22
  float v25; // s8
  StandFigureCollect_o *v26; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x22
  System_Action_o *v28; // x23
  struct ServantVoiceData_array *v29; // x8
  __int64 v30; // x9
  struct SePlayer_o *player; // x25
  __int64 v32; // x26
  float v33; // s0
  float v34; // s8
  __int64 v35; // x1
  __int64 v36; // x2
  struct System_String_o *cueSheetName; // x8
  int v38; // w20
  __int64 v39; // x27
  struct System_String_o **p_objName; // x24
  __int64 v41; // x28
  struct System_Collections_Generic_List_StandFigureCollect__o *v42; // x23
  int32_t v43; // w22
  int32_t v44; // w21
  StandFigureCollect_o *v45; // x8
  UIStandFigureR_o *v46; // x23
  int v47; // w25
  __int64 v48; // x20
  __int64 v49; // x26
  struct System_String_o **v50; // x28
  System_Action_o *v51; // x24
  __int64 v52; // x0
  struct SePlayer_o *v53; // [xsp+8h] [xbp-58h]

  v8 = this;
  if ( (byte_4213E72 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v10);
    this = (MyRoomSvtControl_o *)sub_B0D8A4(&Method_MyRoomSvtControl_EndSetFace__, v11);
    byte_4213E72 = 1;
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
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      this = (MyRoomSvtControl_o *)v8->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
            (int)this < 2) )
      {
        v17 = v8->fields.randomVoiceList;
        if ( !v17 )
          goto LABEL_44;
        v18 = v8->fields.playCnt;
        if ( (unsigned int)v18 < v17->max_length )
        {
          this = (MyRoomSvtControl_o *)v17->m_Items[v18];
          if ( this )
          {
            fsm_high = HIDWORD(this->fields.fsm);
            vcName = (int32_t)this->fields.vcName;
            FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
            standFigureCollectList = v8->fields.standFigureCollectList;
            if ( standFigureCollectList )
            {
              v25 = FadeTime;
              if ( !standFigureCollectList->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v26 = standFigureCollectList->fields._items->m_Items[0];
              if ( v26 )
              {
                standFigure_k__BackingField = v26->fields._standFigure_k__BackingField;
                v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
                System_Action___ctor(v28, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                if ( standFigure_k__BackingField )
                {
                  UIStandFigureR__SetFace_40555568(standFigure_k__BackingField, fsm_high, vcName, v28, v25, 0LL);
                  return;
                }
              }
            }
          }
LABEL_44:
          sub_B0D97C(this);
        }
LABEL_42:
        v52 = sub_B0D9A8(this);
        sub_B0D948(v52, 0LL);
      }
      v29 = v8->fields.randomVoiceList;
      if ( !v29 )
        goto LABEL_44;
      v30 = v8->fields.playCnt;
      if ( (unsigned int)v30 >= v29->max_length )
        goto LABEL_42;
      this = (MyRoomSvtControl_o *)v29->m_Items[v30];
      if ( !this )
        goto LABEL_44;
      player = this->fields.player;
      v32 = *(_QWORD *)&this->fields.svtId;
      v33 = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
      if ( player )
      {
        if ( v32 )
        {
          v34 = v33;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                         (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          cueSheetName = player->fields.cueSheetName;
          if ( (_DWORD)this == (_DWORD)cueSheetName )
          {
            v38 = (int)this;
            if ( (_DWORD)this == *(_DWORD *)(v32 + 24) && (int)this >= 1 )
            {
              if ( (_DWORD)cueSheetName )
              {
                v39 = 0LL;
                p_objName = &player->fields.objName;
                v41 = v32 + 32;
                v53 = player;
                while ( (unsigned int)v39 < *(_DWORD *)(v32 + 24) )
                {
                  v42 = v8->fields.standFigureCollectList;
                  if ( !v42 )
                    goto LABEL_44;
                  v43 = *((_DWORD *)p_objName + v39);
                  v44 = *(_DWORD *)(v41 + 4 * v39);
                  if ( v42->fields._size <= (unsigned int)v39 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                  v45 = v42->fields._items->m_Items[v39];
                  if ( !v45 )
                    goto LABEL_44;
                  v46 = v45->fields._standFigure_k__BackingField;
                  if ( (_DWORD)v39 )
                  {
                    if ( !v46 )
                      goto LABEL_44;
                    UIStandFigureR__SetFace_40555568(v45->fields._standFigure_k__BackingField, v43, v44, 0LL, v34, 0LL);
                  }
                  else
                  {
                    v47 = v38;
                    v48 = v32;
                    v49 = v41;
                    v50 = p_objName;
                    v51 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v35, v36);
                    System_Action___ctor(v51, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                    if ( !v46 )
                      goto LABEL_44;
                    UIStandFigureR__SetFace_40555568(v46, v43, v44, v51, v34, 0LL);
                    p_objName = v50;
                    v41 = v49;
                    v32 = v48;
                    v38 = v47;
                    player = v53;
                  }
                  if ( (int)v39 + 1 >= v38 )
                    return;
                  if ( (unsigned int)++v39 >= LODWORD(player->fields.cueSheetName) )
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
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4217A76 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomSvtControl___c_TypeInfo, v1);
    byte_4217A76 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MyRoomSvtControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)MyRoomSvtControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4217A77 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, a);
    byte_4217A77 = 1;
  }
  v7 = v5;
  return System_Int32__CompareTo_38472796((int32_t)&v7, value, 0LL);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_KeyValuePair_int__int___o *priorityList; // x20
  unsigned __int64 v7; // x19

  v4 = this;
  if ( (byte_4217A78 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, x);
    this = (MyRoomSvtControl___c__DisplayClass21_0_o *)sub_B0D8A4(
                                                         &Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__,
                                                         v5);
    byte_4217A78 = 1;
  }
  priorityList = v4->fields.priorityList;
  if ( !priorityList )
    sub_B0D97C(this);
  v7 = HIDWORD(*(unsigned __int64 *)&x);
  if ( !priorityList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(this);
  return System_Int32__Equals_38472956((int32_t)&v5, voice->fields.form, 0LL);
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
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_B0D97C(this);
  UIStandFigureR__SetFace_40555568(
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
    sub_B0D97C(this);
  return System_Int32__Equals_38472956((int32_t)&v5, voice->fields.form, 0LL);
}