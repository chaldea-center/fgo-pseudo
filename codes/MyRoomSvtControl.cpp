void __fastcall MyRoomSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418752A & 1) == 0 )
  {
    sub_B2C35C(&MyRoomSvtControl_TypeInfo, v1);
    byte_418752A = 1;
  }
  MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = 3;
}


void __fastcall MyRoomSvtControl___ctor(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_int__int__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4187529 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    byte_4187529 = 1;
  }
  this->fields.volume = 1.0;
  v8 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.canPlayVoiceIdxList = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.canPlayVoiceIdxList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.firstPlayVoiceList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v22,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.canFirstPlayVoiceIdxDic,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x0
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
  __int64 v18; // x0

  if ( (byte_4187526 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_22473/*"svtVoicePlay"*/, v3);
    sub_B2C35C(&StringLiteral_5494/*"END_PLAY"*/, v4);
    byte_4187526 = 1;
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
        sub_B2C2F8(p_player, 0LL, v7, v8, v9, v10, v11, v12);
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
        PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_5494/*"END_PLAY"*/, 0LL);
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
          v18 = sub_B2C460(v5);
          sub_B2C400(v18, 0LL);
        }
        v15 = randomVoiceList->m_Items[playCnt];
        if ( v15 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_22473/*"svtVoicePlay"*/,
            v15->fields.delay,
            0LL);
          return;
        }
      }
    }
    sub_B2C434(v5, v6);
  }
}


void __fastcall MyRoomSvtControl__EndSetFace(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v8; // x22
  struct SePlayer_o *v9; // x0
  struct SePlayer_o **p_player; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4187525 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MyRoomSvtControl_EndPlay__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4187525 = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v9 = SoundManager__playVoice_24786800(asstName, vcName, volume, v8, 0LL);
  this->fields.player = v9;
  p_player = &this->fields.player;
  sub_B2C2F8((BattleServantConfConponent_o *)p_player, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
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
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
  if ( (byte_4187528 & 1) == 0 )
  {
    this = (MyRoomSvtControl_o *)sub_B2C35C(
                                   &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                   method);
    byte_4187528 = 1;
  }
  standFigureCollectList = v2->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( !standFigureCollectList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v4 = standFigureCollectList->fields._items->m_Items[0];
  if ( !v4 || (standFigure_k__BackingField = v4->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_B2C434(this, method);
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
  __int64 v22; // x1
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
  System_Collections_Generic_List_int__o *v35; // x20
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v37; // x26
  __int64 v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  __int64 v46; // x22
  System_Predicate_int__o *v47; // x24
  __int64 v48; // x21
  __int64 v49; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **current; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x8
  UIStandFigureR_o *v67; // x22
  System_Action_o *v68; // x23
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x0
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4187522 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Exists__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v13);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v14);
    sub_B2C35C(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, v15);
    sub_B2C35C(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__, v16);
    sub_B2C35C(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, v17);
    sub_B2C35C(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, v18);
    sub_B2C35C(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v19);
    byte_4187522 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v20 = sub_B2C42C(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
  MyRoomSvtControl___c__DisplayClass22_0___ctor((MyRoomSvtControl___c__DisplayClass22_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_22;
  *(_QWORD *)(v20 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)callback, v29, v30, v31, v32, v33, v34);
  v35 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_22;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      v38 = sub_B2C42C(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
      MyRoomSvtControl___c__DisplayClass22_1___ctor((MyRoomSvtControl___c__DisplayClass22_1_o *)v38, 0LL);
      if ( v37 >= randomVoiceList->max_length )
      {
        v71 = sub_B2C460(standFigureCollectList);
        sub_B2C400(v71, 0LL);
      }
      if ( !v38 )
        break;
      v45 = (System_Int32_array **)randomVoiceList->m_Items[v37];
      *(_QWORD *)(v38 + 16) = v45;
      v46 = v38 + 16;
      sub_B2C2F8((BattleServantConfConponent_o *)(v38 + 16), v45, v39, v40, v41, v42, v43, v44);
      v47 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v47,
        (Il2CppObject *)v38,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
      if ( !v35 )
        break;
      standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)System_Collections_Generic_List_int___Exists(
                                                                                                 v35,
                                                                                                 (System_Predicate_T__o *)v47,
                                                                                                 (const MethodInfo_2F6784C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !*(_QWORD *)v46 )
          break;
        System_Collections_Generic_List_int___Add(
          v35,
          *(_DWORD *)(*(_QWORD *)v46 + 56LL),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v37 >= (int)randomVoiceList->max_length )
        goto LABEL_14;
    }
LABEL_22:
    sub_B2C434(standFigureCollectList, v22);
  }
LABEL_14:
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v72,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v73 = v72;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v73,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v48 = sub_B2C42C(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    MyRoomSvtControl___c__DisplayClass22_2___ctor((MyRoomSvtControl___c__DisplayClass22_2_o *)v48, 0LL);
    if ( !v48 )
      sub_B2C434(v49, v50);
    *(_QWORD *)(v48 + 24) = v20;
    sub_B2C2F8((BattleServantConfConponent_o *)(v48 + 24), (System_Int32_array **)v20, v51, v52, v53, v54, v55, v56);
    current = (System_Int32_array **)v73.fields.current;
    *(_QWORD *)(v48 + 16) = v73.fields.current;
    sub_B2C2F8((BattleServantConfConponent_o *)(v48 + 16), current, v58, v59, v60, v61, v62, v63);
    v66 = *(_QWORD *)(v48 + 16);
    if ( !v66 )
      sub_B2C434(v64, v65);
    v67 = *(UIStandFigureR_o **)(v66 + 24);
    v68 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v68,
      (Il2CppObject *)v48,
      Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__,
      0LL);
    if ( !v67 )
      sub_B2C434(v69, v70);
    UIStandFigureR__PreloadFormAssets(v67, v35, v68, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v73,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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


bool __fastcall MyRoomSvtControl__SetVoiceData(MyRoomSvtControl_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v30; // x20
  System_Collections_Generic_IEnumerable_T__o *v31; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *v32; // x21
  __int64 Count; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v41; // x21
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x8
  System_Comparison_KeyValuePair_int__int___o *_9__21_0; // x22
  Il2CppObject *v44; // x23
  struct MyRoomSvtControl___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v52; // x21
  System_Predicate_KeyValuePair_int__int___o *v53; // x22
  System_Collections_Generic_List_T__o *All; // x21
  System_Random_o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x20
  unsigned int v63; // w22
  Il2CppObject *v64; // x23
  struct ServantVoiceData_array *v65; // x1
  WarBoardManager_TaskList_o **p_randomVoiceList; // x20
  System_Random_o *v68; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct System_Collections_Generic_List_int__o *v76; // x22
  int32_t v77; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *v78; // x20
  __int64 v79; // x22
  struct ServantVoiceData_array *v80; // x1
  struct System_Collections_Generic_List_int__o *v81; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v82; // x8
  int32_t v83; // w21
  int size; // w9
  System_String_o *asstName; // x0

  if ( (byte_4187521 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_KeyValuePair_int__int____ctor__, method);
    sub_B2C35C(&System_Comparison_KeyValuePair_int__int___TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__RemoveAt__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___67297832, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v19);
    sub_B2C35C(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v20);
    sub_B2C35C(&Method_System_Predicate_KeyValuePair_int__int____ctor__, v21);
    sub_B2C35C(&System_Predicate_KeyValuePair_int__int___TypeInfo, v22);
    sub_B2C35C(&System_Random_TypeInfo, v23);
    sub_B2C35C(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__, v24);
    sub_B2C35C(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__, v25);
    sub_B2C35C(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, v26);
    sub_B2C35C(&MyRoomSvtControl___c_TypeInfo, v27);
    byte_4187521 = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_2E24140 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v30 = sub_B2C42C(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    MyRoomSvtControl___c__DisplayClass21_0___ctor((MyRoomSvtControl___c__DisplayClass21_0_o *)v30, 0LL);
    v31 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v32 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_B2C42C(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_48101716(
      v32,
      v31,
      (const MethodInfo_2DDF954 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___67297832);
    if ( !v30 )
      goto LABEL_64;
    *(_QWORD *)(v30 + 16) = v32;
    sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)v32, v35, v36, v37, v38, v39, v40);
    v41 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v30 + 16);
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
      v44 = (Il2CppObject *)static_fields->__9;
      _9__21_0 = (System_Comparison_KeyValuePair_int__int___o *)sub_B2C42C(System_Comparison_KeyValuePair_int__int___TypeInfo);
      System_Comparison_KeyValuePair_int__int_____ctor(
        _9__21_0,
        v44,
        Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__,
        (const MethodInfo_25D27EC *)Method_System_Comparison_KeyValuePair_int__int____ctor__);
      v45 = MyRoomSvtControl___c_TypeInfo->static_fields;
      v45->__9__21_0 = _9__21_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v45->__9__21_0,
        (System_Int32_array **)_9__21_0,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    if ( !v41 )
      goto LABEL_64;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_48112988(
      v41,
      (System_Comparison_T__o *)_9__21_0,
      (const MethodInfo_2DE255C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v52 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v30 + 16);
    v53 = (System_Predicate_KeyValuePair_int__int___o *)sub_B2C42C(System_Predicate_KeyValuePair_int__int___TypeInfo);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v53,
      (Il2CppObject *)v30,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      (const MethodInfo_294CED4 *)Method_System_Predicate_KeyValuePair_int__int____ctor__);
    if ( !v52 )
      goto LABEL_64;
    All = System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
            v52,
            (System_Predicate_T__o *)v53,
            (const MethodInfo_2DE0E0C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v55 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
    System_Random___ctor(v55, 0LL);
    if ( !All || !v55 )
      goto LABEL_64;
    Count = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v55->klass->vtable._7_Next.method)(
              v55,
              (unsigned int)All->fields._size,
              v55->klass->vtable._8_NextDouble.methodPtr);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v63 = Count;
    if ( All->fields._size <= (unsigned int)Count )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( !firstPlayVoiceList )
      goto LABEL_64;
    v64 = All->fields._items->m_Items[(int)Count];
    if ( firstPlayVoiceList->fields._size <= (unsigned int)v64 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v65 = firstPlayVoiceList->fields._items->m_Items[(int)v64];
    this->fields.randomVoiceList = v65;
    p_randomVoiceList = (WarBoardManager_TaskList_o **)&this->fields.randomVoiceList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v65,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    if ( All->fields._size <= v63 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( !this->fields.canFirstPlayVoiceIdxDic )
      goto LABEL_64;
    System_Collections_Generic_Dictionary_int__int___Remove(
      this->fields.canFirstPlayVoiceIdxDic,
      (int32_t)All->fields._items->m_Items[v63],
      (const MethodInfo_2E25E38 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Count = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Count )
      goto LABEL_64;
    Count = System_Collections_Generic_Dictionary_int__int___get_Count(
              (System_Collections_Generic_Dictionary_int__int__o *)Count,
              (const MethodInfo_2E24140 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
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
                  (const MethodInfo_2EF5510 *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Count != -1 )
        {
          v34 = (unsigned int)Count;
          Count = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Count )
            goto LABEL_64;
          Count = System_Collections_Generic_List_int___Remove(
                    (System_Collections_Generic_List_int__o *)Count,
                    v34,
                    (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v68 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
    System_Random___ctor(v68, 0LL);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_64;
    if ( !v68 )
      goto LABEL_64;
    Count = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v68->klass->vtable._7_Next.method)(
              v68,
              (unsigned int)canPlayVoiceIdxList->fields._size,
              v68->klass->vtable._8_NextDouble.methodPtr);
    v76 = this->fields.canPlayVoiceIdxList;
    if ( !v76 )
      goto LABEL_64;
    v77 = Count;
    if ( v76->fields._size <= (unsigned int)Count )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v78 = this->fields.voiceList;
    if ( !v78 )
      goto LABEL_64;
    v79 = v76->fields._items->m_Items[(int)Count + 1];
    if ( v78->fields._size <= (unsigned int)v79 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v80 = v78->fields._items->m_Items[v79];
    this->fields.randomVoiceList = v80;
    p_randomVoiceList = (WarBoardManager_TaskList_o **)&this->fields.randomVoiceList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v80,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    Count = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Count )
      goto LABEL_64;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Count,
      v77,
      (const MethodInfo_2F68CB0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v81 = this->fields.canPlayVoiceIdxList;
    if ( !v81 )
      goto LABEL_64;
    if ( !v81->fields._size )
    {
      v82 = this->fields.voiceList;
      if ( !v82 )
        goto LABEL_64;
      v83 = 0;
      while ( 1 )
      {
        size = v82->fields._size;
        if ( v83 >= size )
          break;
        if ( (_DWORD)v79 != v83 || size <= 1 )
        {
          Count = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Count )
            goto LABEL_64;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Count,
            v83,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          v82 = this->fields.voiceList;
        }
        ++v83;
        if ( !v82 )
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
    sub_B2C434(Count, v34);
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
  __int64 v15; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  UserServantEntity_o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  int32_t v20; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x9
  const MethodInfo *v22; // x2
  int32_t v23; // w0
  int32_t v24; // w22
  int v25; // w27
  int32_t j; // w23
  BalanceConfig_c *v27; // x0
  int32_t svtId; // w24
  int32_t FriendshipRank; // w24
  MyRoomSvtControl_c *v30; // x8
  int32_t SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP; // w9
  System_Collections_Generic_List_ServantVoiceData____o *MyRoomFriendShipVoiceList; // x0
  const MethodInfo *v33; // x2
  int v34; // w26
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-98h] BYREF
  int v36[2]; // [xsp+20h] [xbp-80h]
  int v37; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_418751E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, svtVoiceEnt);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v10);
    sub_B2C35C(&MyRoomSvtControl_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418751E = 1;
  }
  memset(&i, 0, sizeof(i));
  v37 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_41;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               *((_QWORD *)Instance + 14),
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_41;
  v17 = (UserServantEntity_o *)Instance;
  v19 = *((_QWORD *)Instance + 10);
  v18 = *((_QWORD *)Instance + 11);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v19;
  *(_QWORD *)&v39.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v39, 0LL);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v20;
  if ( voiceList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v35;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields.current, v22) )
    {
      ;
    }
    v36[0] = 105;
    v37 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v37 = 0;
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v17, 0LL);
  if ( !svtVoiceEnt )
LABEL_41:
    sub_B2C434(Instance, v15);
  v23 = ServantVoiceEntity__FriendShipRankWithVoice(svtVoiceEnt, (int32_t)Instance, 0LL);
  if ( v23 >= 2 )
  {
    v24 = v23;
    v25 = 0;
    for ( j = 1; j < v24; ++j )
    {
      v27 = BalanceConfig_TypeInfo;
      svtId = this->fields.svtId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      if ( svtId != v27->static_fields->ServantIdSwimsuitMelt )
        goto LABEL_30;
      FriendshipRank = UserServantEntity__getFriendshipRank(v17, 0LL);
      v30 = MyRoomSvtControl_TypeInfo;
      if ( (BYTE3(MyRoomSvtControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomSvtControl_TypeInfo);
        v30 = MyRoomSvtControl_TypeInfo;
      }
      SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = v30->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      if ( FriendshipRank < SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
        goto LABEL_30;
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      }
      if ( j >= SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
      {
LABEL_30:
        MyRoomFriendShipVoiceList = ServantVoiceEntity__getMyRoomFriendShipVoiceList(svtVoiceEnt, j, 0LL);
        if ( MyRoomFriendShipVoiceList )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v35,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MyRoomFriendShipVoiceList,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v35;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &i,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields.current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields.current, v33);
          }
          v36[v25] = 228;
          v34 = ++v37;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &i,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
          if ( v34 )
          {
            v25 = v34;
            if ( v36[v34 - 1] == 228 )
            {
              v25 = v34 - 1;
              v37 = v34 - 1;
            }
          }
          else
          {
            v25 = 0;
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
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v18; // x25
  __int64 v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  __int64 v27; // x21
  System_Predicate_int__o *v28; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x19
  StandFigureCollect_o *v30; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x21
  System_Action_o *v32; // x22
  struct ServantVoiceData_array *v33; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v36; // x8
  struct System_String_StaticFields *static_fields; // x8
  __int64 v39; // x0
  MyRoomSvtControl_o *v40; // [xsp+8h] [xbp-58h]

  if ( (byte_4187523 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Exists__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B2C35C(&Method_MyRoomSvtControl_svtVoicePlay__, v8);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v9);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v10);
    sub_B2C35C(&string_TypeInfo, v11);
    sub_B2C35C(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, v12);
    sub_B2C35C(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, v13);
    byte_4187523 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_23;
  v40 = this;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      v19 = sub_B2C42C(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
      MyRoomSvtControl___c__DisplayClass23_0___ctor((MyRoomSvtControl___c__DisplayClass23_0_o *)v19, 0LL);
      if ( v18 >= randomVoiceList->max_length )
        break;
      if ( !v19 )
        goto LABEL_25;
      v26 = (System_Int32_array **)randomVoiceList->m_Items[v18];
      *(_QWORD *)(v19 + 16) = v26;
      v27 = v19 + 16;
      sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 16), v26, v20, v21, v22, v23, v24, v25);
      v28 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v28,
        (Il2CppObject *)v19,
        Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__,
        (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
      if ( !v14 )
        goto LABEL_25;
      v15 = System_Collections_Generic_List_int___Exists(
              v14,
              (System_Predicate_T__o *)v28,
              (const MethodInfo_2F6784C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( !v15 )
      {
        if ( !*(_QWORD *)v27 )
          goto LABEL_25;
        System_Collections_Generic_List_int___Add(
          v14,
          *(_DWORD *)(*(_QWORD *)v27 + 56LL),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v18 >= (int)randomVoiceList->max_length )
        goto LABEL_13;
    }
LABEL_26:
    v39 = sub_B2C460(v15);
    sub_B2C400(v39, 0LL);
  }
LABEL_13:
  standFigureCollectList = v40->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  if ( !standFigureCollectList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v30 = standFigureCollectList->fields._items->m_Items[0];
  if ( !v30
    || (standFigure_k__BackingField = v30->fields._standFigure_k__BackingField,
        v32 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v32, (Il2CppObject *)v40, Method_MyRoomSvtControl_svtVoicePlay__, 0LL),
        !standFigure_k__BackingField)
    || (UIStandFigureR__PreloadFormAssets(standFigure_k__BackingField, v14, v32, 0LL),
        (v33 = v40->fields.randomVoiceList) == 0LL) )
  {
LABEL_25:
    sub_B2C434(v15, v16);
  }
  playCnt = v40->fields.playCnt;
  max_length = v33->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_23:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_26;
  v36 = (struct System_String_StaticFields *)v33->m_Items[playCnt];
  if ( !v36 )
    goto LABEL_25;
  static_fields = v36 + 2;
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
  __int64 v10; // x1
  ServantVoiceData_o *v11; // x8
  VoiceMaster_o *v12; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  ServantVoiceData_o *v14; // x9
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x22
  int32_t size; // w23
  __int64 v17; // x0

  if ( (byte_418751F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoiceMaster___, voice);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418751F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !voice )
    goto LABEL_16;
  if ( !voice->max_length )
  {
LABEL_17:
    v17 = sub_B2C460(Instance);
    sub_B2C400(v17, 0LL);
  }
  v11 = voice->m_Items[0];
  if ( !v11 )
    goto LABEL_16;
  v12 = (VoiceMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)VoiceMaster__getFlagRequestNumber(
                                (VoiceMaster_o *)Instance,
                                this->fields.svtId,
                                v11->fields.id,
                                0,
                                0LL);
  if ( (_DWORD)Instance )
  {
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_16;
    if ( voice->max_length )
    {
      v14 = voice->m_Items[0];
      if ( v14 )
      {
        canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
        size = firstPlayVoiceList->fields._size;
        Instance = (DataManager_o *)VoiceMaster__getFirstPlayPriority(v12, this->fields.svtId, v14->fields.id, 0LL);
        if ( canFirstPlayVoiceIdxDic )
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            canFirstPlayVoiceIdxDic,
            size,
            (int32_t)Instance,
            (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          Instance = (DataManager_o *)this->fields.firstPlayVoiceList;
          if ( Instance )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              (EventMissionProgressRequest_Argument_ProgressData_o *)voice,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
            return;
          }
        }
      }
LABEL_16:
      sub_B2C434(Instance, v10);
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
  __int64 v22; // x1
  System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x0
  struct System_Collections_Generic_List_ServantVoiceData____o *v24; // x8
  int32_t v25; // w21

  if ( (byte_418751D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, list);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v14);
    byte_418751D = 1;
  }
  this->fields.asstName = assetName;
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
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    sub_B2C2F8(
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
      (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
    v24 = *p_voiceList;
    if ( *p_voiceList )
    {
      v25 = 0;
      while ( v25 < v24->fields._size )
      {
        canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
        if ( canPlayVoiceIdxList )
        {
          System_Collections_Generic_List_int___Add(
            canPlayVoiceIdxList,
            v25,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          v24 = *p_voiceList;
          ++v25;
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
            (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantVoiceData____Clear__),
          (canPlayVoiceIdxList = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic) == 0LL) )
    {
LABEL_15:
      sub_B2C434(canPlayVoiceIdxList, v22);
    }
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canPlayVoiceIdxList,
      (const MethodInfo_2E2470C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice_24670984(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4187520 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, data);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___67298584, v7);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    byte_4187520 = 1;
  }
  v9 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v9,
    1,
    (const MethodInfo_2EF386C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___67298584);
  if ( !v9 )
    sub_B2C434(v10, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v9, assetName, v12);
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
  __int64 v11; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UIStandFigureR_o *v14; // x20
  System_Action_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
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

  if ( (byte_4187527 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_B2C35C(&Method_MyRoomSvtControl_EndSetFace__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    byte_4187527 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v10 )
      break;
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B2C434(v10, v11);
    monitor = (UIStandFigureR_o *)v27.fields.current[1].monitor;
    if ( !monitor )
      sub_B2C434(0LL, v11);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0LL);
    v14 = (UIStandFigureR_o *)current[1].monitor;
    v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0LL);
    if ( !v14 )
      sub_B2C434(v16, v17);
    UIStandFigureR__RemoveCallback(v14, v15, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.player, 0LL, v20, v21, v22, v23, v24, v25);
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
  float FadeTime; // s0
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x22
  float v23; // s8
  StandFigureCollect_o *v24; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x22
  System_Action_o *v26; // x23
  struct ServantVoiceData_array *v27; // x8
  __int64 v28; // x9
  struct SePlayer_o *player; // x25
  __int64 v30; // x26
  float v31; // s0
  float v32; // s8
  struct System_String_o *cueSheetName; // x8
  int v34; // w20
  __int64 v35; // x27
  struct System_String_o **p_objName; // x24
  __int64 v37; // x28
  struct System_Collections_Generic_List_StandFigureCollect__o *v38; // x23
  int32_t v39; // w22
  int32_t v40; // w21
  StandFigureCollect_o *v41; // x8
  UIStandFigureR_o *v42; // x23
  int v43; // w25
  __int64 v44; // x20
  __int64 v45; // x26
  struct System_String_o **v46; // x28
  System_Action_o *v47; // x24
  __int64 v48; // x0
  struct SePlayer_o *v49; // [xsp+8h] [xbp-58h]

  v8 = this;
  if ( (byte_4187524 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v10);
    this = (MyRoomSvtControl_o *)sub_B2C35C(&Method_MyRoomSvtControl_EndSetFace__, v11);
    byte_4187524 = 1;
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
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      this = (MyRoomSvtControl_o *)v8->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
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
              v23 = FadeTime;
              if ( !standFigureCollectList->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v24 = standFigureCollectList->fields._items->m_Items[0];
              if ( v24 )
              {
                standFigure_k__BackingField = v24->fields._standFigure_k__BackingField;
                v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(v26, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                if ( standFigure_k__BackingField )
                {
                  UIStandFigureR__SetFace_40495504(standFigure_k__BackingField, fsm_high, vcName, v26, v23, 0LL);
                  return;
                }
              }
            }
          }
LABEL_44:
          sub_B2C434(this, method);
        }
LABEL_42:
        v48 = sub_B2C460(this);
        sub_B2C400(v48, 0LL);
      }
      v27 = v8->fields.randomVoiceList;
      if ( !v27 )
        goto LABEL_44;
      v28 = v8->fields.playCnt;
      if ( (unsigned int)v28 >= v27->max_length )
        goto LABEL_42;
      this = (MyRoomSvtControl_o *)v27->m_Items[v28];
      if ( !this )
        goto LABEL_44;
      player = this->fields.player;
      v30 = *(_QWORD *)&this->fields.svtId;
      v31 = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
      if ( player )
      {
        if ( v30 )
        {
          v32 = v31;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                         (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          cueSheetName = player->fields.cueSheetName;
          if ( (_DWORD)this == (_DWORD)cueSheetName )
          {
            v34 = (int)this;
            if ( (_DWORD)this == *(_DWORD *)(v30 + 24) && (int)this >= 1 )
            {
              if ( (_DWORD)cueSheetName )
              {
                v35 = 0LL;
                p_objName = &player->fields.objName;
                v37 = v30 + 32;
                v49 = player;
                while ( (unsigned int)v35 < *(_DWORD *)(v30 + 24) )
                {
                  v38 = v8->fields.standFigureCollectList;
                  if ( !v38 )
                    goto LABEL_44;
                  v39 = *((_DWORD *)p_objName + v35);
                  v40 = *(_DWORD *)(v37 + 4 * v35);
                  if ( v38->fields._size <= (unsigned int)v35 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                  v41 = v38->fields._items->m_Items[v35];
                  if ( !v41 )
                    goto LABEL_44;
                  v42 = v41->fields._standFigure_k__BackingField;
                  if ( (_DWORD)v35 )
                  {
                    if ( !v42 )
                      goto LABEL_44;
                    UIStandFigureR__SetFace_40495504(v41->fields._standFigure_k__BackingField, v39, v40, 0LL, v32, 0LL);
                  }
                  else
                  {
                    v43 = v34;
                    v44 = v30;
                    v45 = v37;
                    v46 = p_objName;
                    v47 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                    System_Action___ctor(v47, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                    if ( !v42 )
                      goto LABEL_44;
                    UIStandFigureR__SetFace_40495504(v42, v39, v40, v47, v32, 0LL);
                    p_objName = v46;
                    v37 = v45;
                    v30 = v44;
                    v34 = v43;
                    player = v49;
                  }
                  if ( (int)v35 + 1 >= v34 )
                    return;
                  if ( (unsigned int)++v35 >= LODWORD(player->fields.cueSheetName) )
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418BA98 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomSvtControl___c_TypeInfo, v1);
    byte_418BA98 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MyRoomSvtControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MyRoomSvtControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_418BA99 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, a);
    byte_418BA99 = 1;
  }
  v7 = v5;
  return System_Int32__CompareTo_38381180((int32_t)&v7, value, 0LL);
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
  if ( (byte_418BA9A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, x);
    this = (MyRoomSvtControl___c__DisplayClass21_0_o *)sub_B2C35C(
                                                         &Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__,
                                                         v5);
    byte_418BA9A = 1;
  }
  priorityList = v4->fields.priorityList;
  if ( !priorityList )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(this, x);
  v7 = HIDWORD(*(unsigned __int64 *)&x);
  if ( !priorityList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, a);
  return System_Int32__Equals_38381340((int32_t)&v5, voice->fields.form, 0LL);
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
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
  }
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_B2C434(this, method);
  UIStandFigureR__SetFace_40495504(
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
    sub_B2C434(this, a);
  return System_Int32__Equals_38381340((int32_t)&v5, voice->fields.form, 0LL);
}