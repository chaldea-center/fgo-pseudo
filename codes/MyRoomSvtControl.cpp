void __fastcall MyRoomSvtControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E85DD & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomSvtControl_TypeInfo, v1, v2, v3);
    byte_42E85DD = 1;
  }
  MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = 3;
}


void __fastcall MyRoomSvtControl___ctor(MyRoomSvtControl_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_Dictionary_int__int__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_42E85DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v17, v18, v19);
    byte_42E85DC = 1;
  }
  this->fields.volume = 1.0;
  v20 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.canPlayVoiceIdxList = v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.canPlayVoiceIdxList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.firstPlayVoiceList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v34,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.canFirstPlayVoiceIdxDic,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  PlayMakerFSM_o *v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v21; // x8
  BattleServantConfConponent_o *p_player; // x0
  UnityEngine_Object_o *fsm; // x20
  __int64 v24; // x0

  if ( (byte_42E85D9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22778/*"svtVoicePlay"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5571/*"END_PLAY"*/, v8, v9, v10);
    byte_42E85D9 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    playCnt = this->fields.playCnt;
    if ( (int)playCnt >= this->fields.maxPlayCnt )
    {
      p_player = (BattleServantConfConponent_o *)&this->fields.player;
      if ( this->fields.player )
      {
        p_player->klass = 0LL;
        sub_B5D560(p_player, 0LL, v13, v14, v15, v16, v17, v18);
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
      v11 = this->fields.fsm;
      if ( v11 )
      {
        PlayMakerFSM__SendEvent(v11, (System_String_o *)StringLiteral_5571/*"END_PLAY"*/, 0LL);
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
          v24 = sub_B5D6C8(v11);
          sub_B5D668(v24, 0LL);
        }
        v21 = randomVoiceList->m_Items[playCnt];
        if ( v21 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_22778/*"svtVoicePlay"*/,
            v21->fields.delay,
            0LL);
          return;
        }
      }
    }
    sub_B5D69C(v11, v12);
  }
}


void __fastcall MyRoomSvtControl__EndSetFace(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v14; // x22
  struct SePlayer_o *v15; // x0
  struct SePlayer_o **p_player; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42E85D8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MyRoomSvtControl_EndPlay__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E85D8 = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v15 = SoundManager__playVoice_23391328(asstName, vcName, volume, v14, 0LL);
  this->fields.player = v15;
  p_player = &this->fields.player;
  sub_B5D560((BattleServantConfConponent_o *)p_player, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
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
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return randomVoiceList->m_Items[0];
}


int32_t __fastcall MyRoomSvtControl__GetFormId(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MyRoomSvtControl_o *v4; // x19
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x19
  StandFigureCollect_o *v6; // x8
  struct UIStandFigureR_o *standFigure_k__BackingField; // x8

  v4 = this;
  if ( (byte_42E85DB & 1) == 0 )
  {
    this = (MyRoomSvtControl_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                   (_DWORD)method,
                                   v2,
                                   v3);
    byte_42E85DB = 1;
  }
  standFigureCollectList = v4->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( !standFigureCollectList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v6 = standFigureCollectList->fields._items->m_Items[0];
  if ( !v6 || (standFigure_k__BackingField = v6->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_B5D69C(this, method);
  return standFigure_k__BackingField->fields.formId;
}


void __fastcall MyRoomSvtControl__PreloadFormAssets(
        MyRoomSvtControl_o *this,
        System_Action_o *callback,
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
  __int64 v51; // x19
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_List_int__o *v66; // x20
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v68; // x26
  __int64 v69; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  __int64 v77; // x22
  System_Predicate_int__o *v78; // x24
  __int64 v79; // x21
  __int64 v80; // x0
  __int64 v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **current; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x8
  UIStandFigureR_o *v98; // x22
  System_Action_o *v99; // x23
  __int64 v100; // x0
  __int64 v101; // x1
  __int64 v102; // x0
  System_Collections_Generic_List_Enumerator_T__o v103; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v104; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E85D5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Exists__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__, v39, v40, v41);
    sub_B5D5C4(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, v45, v46, v47);
    sub_B5D5C4(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v48, v49, v50);
    byte_42E85D5 = 1;
  }
  memset(&v104, 0, sizeof(v104));
  v51 = sub_B5D694(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
  MyRoomSvtControl___c__DisplayClass22_0___ctor((MyRoomSvtControl___c__DisplayClass22_0_o *)v51, 0LL);
  if ( !v51 )
    goto LABEL_22;
  *(_QWORD *)(v51 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 16), (System_Int32_array **)this, v54, v55, v56, v57, v58, v59);
  *(_QWORD *)(v51 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 24), (System_Int32_array **)callback, v60, v61, v62, v63, v64, v65);
  v66 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v66,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_22;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v68 = 0LL;
    while ( 1 )
    {
      v69 = sub_B5D694(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
      MyRoomSvtControl___c__DisplayClass22_1___ctor((MyRoomSvtControl___c__DisplayClass22_1_o *)v69, 0LL);
      if ( v68 >= randomVoiceList->max_length )
      {
        v102 = sub_B5D6C8(standFigureCollectList);
        sub_B5D668(v102, 0LL);
      }
      if ( !v69 )
        break;
      v76 = (System_Int32_array **)randomVoiceList->m_Items[v68];
      *(_QWORD *)(v69 + 16) = v76;
      v77 = v69 + 16;
      sub_B5D560((BattleServantConfConponent_o *)(v69 + 16), v76, v70, v71, v72, v73, v74, v75);
      v78 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v78,
        (Il2CppObject *)v69,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
      if ( !v66 )
        break;
      standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)System_Collections_Generic_List_int___Exists(
                                                                                                 v66,
                                                                                                 (System_Predicate_T__o *)v78,
                                                                                                 (const MethodInfo_3084C60 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !*(_QWORD *)v77 )
          break;
        System_Collections_Generic_List_int___Add(
          v66,
          *(_DWORD *)(*(_QWORD *)v77 + 56LL),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v68 >= (int)randomVoiceList->max_length )
        goto LABEL_14;
    }
LABEL_22:
    sub_B5D69C(standFigureCollectList, v53);
  }
LABEL_14:
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v103,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v104 = v103;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v104,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v79 = sub_B5D694(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    MyRoomSvtControl___c__DisplayClass22_2___ctor((MyRoomSvtControl___c__DisplayClass22_2_o *)v79, 0LL);
    if ( !v79 )
      sub_B5D69C(v80, v81);
    *(_QWORD *)(v79 + 24) = v51;
    sub_B5D560((BattleServantConfConponent_o *)(v79 + 24), (System_Int32_array **)v51, v82, v83, v84, v85, v86, v87);
    current = (System_Int32_array **)v104.fields.current;
    *(_QWORD *)(v79 + 16) = v104.fields.current;
    sub_B5D560((BattleServantConfConponent_o *)(v79 + 16), current, v89, v90, v91, v92, v93, v94);
    v97 = *(_QWORD *)(v79 + 16);
    if ( !v97 )
      sub_B5D69C(v95, v96);
    v98 = *(UIStandFigureR_o **)(v97 + 24);
    v99 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v99,
      (Il2CppObject *)v79,
      Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__,
      0LL);
    if ( !v98 )
      sub_B5D69C(v100, v101);
    UIStandFigureR__PreloadFormAssets(v98, v66, v99, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v104,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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


bool __fastcall MyRoomSvtControl__SetVoiceData(MyRoomSvtControl_o *this, const MethodInfo *method)
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
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v82; // x20
  System_Collections_Generic_IEnumerable_T__o *v83; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *v84; // x21
  __int64 Count; // x0
  __int64 v86; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v93; // x21
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x8
  System_Comparison_KeyValuePair_int__int___o *_9__21_0; // x22
  Il2CppObject *v96; // x23
  struct MyRoomSvtControl___c_StaticFields *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v104; // x21
  System_Predicate_KeyValuePair_int__int___o *v105; // x22
  System_Collections_Generic_List_T__o *All; // x21
  System_Random_o *v107; // x20
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x20
  unsigned int v115; // w22
  Il2CppObject *v116; // x23
  struct ServantVoiceData_array *v117; // x1
  WarBoardManager_TaskList_o **p_randomVoiceList; // x20
  System_Random_o *v120; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  struct System_Collections_Generic_List_int__o *v128; // x22
  int32_t v129; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *v130; // x20
  __int64 v131; // x22
  struct ServantVoiceData_array *v132; // x1
  struct System_Collections_Generic_List_int__o *v133; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v134; // x8
  int32_t v135; // w21
  int size; // w9
  System_String_o *asstName; // x0

  if ( (byte_42E85D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_KeyValuePair_int__int____ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_KeyValuePair_int__int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__RemoveAt__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___68726488, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v53, v54, v55);
    sub_B5D5C4(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_System_Predicate_KeyValuePair_int__int____ctor__, v59, v60, v61);
    sub_B5D5C4(&System_Predicate_KeyValuePair_int__int___TypeInfo, v62, v63, v64);
    sub_B5D5C4(&System_Random_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__, v68, v69, v70);
    sub_B5D5C4(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__, v71, v72, v73);
    sub_B5D5C4(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, v74, v75, v76);
    sub_B5D5C4(&MyRoomSvtControl___c_TypeInfo, v77, v78, v79);
    byte_42E85D4 = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_2F0AA58 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v82 = sub_B5D694(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    MyRoomSvtControl___c__DisplayClass21_0___ctor((MyRoomSvtControl___c__DisplayClass21_0_o *)v82, 0LL);
    v83 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v84 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_B5D694(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_49980276(
      v84,
      v83,
      (const MethodInfo_2FAA374 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___68726488);
    if ( !v82 )
      goto LABEL_64;
    *(_QWORD *)(v82 + 16) = v84;
    sub_B5D560((BattleServantConfConponent_o *)(v82 + 16), (System_Int32_array **)v84, v87, v88, v89, v90, v91, v92);
    v93 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v82 + 16);
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
      v96 = (Il2CppObject *)static_fields->__9;
      _9__21_0 = (System_Comparison_KeyValuePair_int__int___o *)sub_B5D694(System_Comparison_KeyValuePair_int__int___TypeInfo);
      System_Comparison_KeyValuePair_int__int_____ctor(
        _9__21_0,
        v96,
        Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__,
        (const MethodInfo_2493D5C *)Method_System_Comparison_KeyValuePair_int__int____ctor__);
      v97 = MyRoomSvtControl___c_TypeInfo->static_fields;
      v97->__9__21_0 = _9__21_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v97->__9__21_0,
        (System_Int32_array **)_9__21_0,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
    if ( !v93 )
      goto LABEL_64;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_49991548(
      v93,
      (System_Comparison_T__o *)_9__21_0,
      (const MethodInfo_2FACF7C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v104 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v82 + 16);
    v105 = (System_Predicate_KeyValuePair_int__int___o *)sub_B5D694(System_Predicate_KeyValuePair_int__int___TypeInfo);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v105,
      (Il2CppObject *)v82,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      (const MethodInfo_2B8C7C0 *)Method_System_Predicate_KeyValuePair_int__int____ctor__);
    if ( !v104 )
      goto LABEL_64;
    All = System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
            v104,
            (System_Predicate_T__o *)v105,
            (const MethodInfo_2FAB82C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v107 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
    System_Random___ctor(v107, 0LL);
    if ( !All || !v107 )
      goto LABEL_64;
    Count = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v107->klass->vtable._7_Next.method)(
              v107,
              (unsigned int)All->fields._size,
              v107->klass->vtable._8_NextDouble.methodPtr);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v115 = Count;
    if ( All->fields._size <= (unsigned int)Count )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !firstPlayVoiceList )
      goto LABEL_64;
    v116 = All->fields._items->m_Items[(int)Count];
    if ( firstPlayVoiceList->fields._size <= (unsigned int)v116 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v117 = firstPlayVoiceList->fields._items->m_Items[(int)v116];
    this->fields.randomVoiceList = v117;
    p_randomVoiceList = (WarBoardManager_TaskList_o **)&this->fields.randomVoiceList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v117,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    if ( All->fields._size <= v115 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !this->fields.canFirstPlayVoiceIdxDic )
      goto LABEL_64;
    System_Collections_Generic_Dictionary_int__int___Remove(
      this->fields.canFirstPlayVoiceIdxDic,
      (int32_t)All->fields._items->m_Items[v115],
      (const MethodInfo_2F0C750 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Count = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Count )
      goto LABEL_64;
    Count = System_Collections_Generic_Dictionary_int__int___get_Count(
              (System_Collections_Generic_Dictionary_int__int__o *)Count,
              (const MethodInfo_2F0AA58 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
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
                  (const MethodInfo_3058070 *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Count != -1 )
        {
          v86 = (unsigned int)Count;
          Count = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Count )
            goto LABEL_64;
          Count = System_Collections_Generic_List_int___Remove(
                    (System_Collections_Generic_List_int__o *)Count,
                    v86,
                    (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v120 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
    System_Random___ctor(v120, 0LL);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_64;
    if ( !v120 )
      goto LABEL_64;
    Count = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v120->klass->vtable._7_Next.method)(
              v120,
              (unsigned int)canPlayVoiceIdxList->fields._size,
              v120->klass->vtable._8_NextDouble.methodPtr);
    v128 = this->fields.canPlayVoiceIdxList;
    if ( !v128 )
      goto LABEL_64;
    v129 = Count;
    if ( v128->fields._size <= (unsigned int)Count )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v130 = this->fields.voiceList;
    if ( !v130 )
      goto LABEL_64;
    v131 = v128->fields._items->m_Items[(int)Count + 1];
    if ( v130->fields._size <= (unsigned int)v131 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v132 = v130->fields._items->m_Items[v131];
    this->fields.randomVoiceList = v132;
    p_randomVoiceList = (WarBoardManager_TaskList_o **)&this->fields.randomVoiceList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.randomVoiceList,
      (System_Int32_array **)v132,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
    Count = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Count )
      goto LABEL_64;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Count,
      v129,
      (const MethodInfo_30860C4 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v133 = this->fields.canPlayVoiceIdxList;
    if ( !v133 )
      goto LABEL_64;
    if ( !v133->fields._size )
    {
      v134 = this->fields.voiceList;
      if ( !v134 )
        goto LABEL_64;
      v135 = 0;
      while ( 1 )
      {
        size = v134->fields._size;
        if ( v135 >= size )
          break;
        if ( (_DWORD)v131 != v135 || size <= 1 )
        {
          Count = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Count )
            goto LABEL_64;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Count,
            v135,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v134 = this->fields.voiceList;
        }
        ++v135;
        if ( !v134 )
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
    sub_B5D69C(Count, v86);
  return this->fields.playCnt < (*p_randomVoiceList)->fields._size;
}


void __fastcall MyRoomSvtControl__initFirstPlayVoiceList(
        MyRoomSvtControl_o *this,
        ServantVoiceEntity_o *svtVoiceEnt,
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
  void *Instance; // x0
  __int64 v34; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  UserServantEntity_o *v36; // x21
  __int64 v37; // x22
  __int64 v38; // x23
  int32_t v39; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x9
  const MethodInfo *v41; // x2
  int32_t v42; // w0
  int32_t v43; // w22
  int v44; // w27
  int32_t j; // w23
  BalanceConfig_c *v46; // x0
  int32_t svtId; // w24
  int32_t FriendshipRank; // w24
  MyRoomSvtControl_c *v49; // x8
  int32_t SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP; // w9
  System_Collections_Generic_List_ServantVoiceData____o *MyRoomFriendShipVoiceList; // x0
  const MethodInfo *v52; // x2
  int v53; // w26
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-98h] BYREF
  int v55[2]; // [xsp+20h] [xbp-80h]
  int v56; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42E85D1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)svtVoiceEnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&MyRoomSvtControl_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42E85D1 = 1;
  }
  memset(&i, 0, sizeof(i));
  v56 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_41;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               *((_QWORD *)Instance + 14),
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_41;
  v36 = (UserServantEntity_o *)Instance;
  v38 = *((_QWORD *)Instance + 10);
  v37 = *((_QWORD *)Instance + 11);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v58.fields.currentCryptoKey = v38;
  *(_QWORD *)&v58.fields.fakeValue = v37;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v39;
  if ( voiceList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v54,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v54;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields.current, v41) )
    {
      ;
    }
    v55[0] = 105;
    v56 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v56 = 0;
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v36, 0LL);
  if ( !svtVoiceEnt )
LABEL_41:
    sub_B5D69C(Instance, v34);
  v42 = ServantVoiceEntity__FriendShipRankWithVoice(svtVoiceEnt, (int32_t)Instance, 0LL);
  if ( v42 >= 2 )
  {
    v43 = v42;
    v44 = 0;
    for ( j = 1; j < v43; ++j )
    {
      v46 = BalanceConfig_TypeInfo;
      svtId = this->fields.svtId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v46 = BalanceConfig_TypeInfo;
      }
      if ( svtId != v46->static_fields->ServantIdSwimsuitMelt )
        goto LABEL_30;
      FriendshipRank = UserServantEntity__getFriendshipRank(v36, 0LL);
      v49 = MyRoomSvtControl_TypeInfo;
      if ( (BYTE3(MyRoomSvtControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomSvtControl_TypeInfo);
        v49 = MyRoomSvtControl_TypeInfo;
      }
      SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = v49->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      if ( FriendshipRank < SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
        goto LABEL_30;
      if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49);
        SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      }
      if ( j >= SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
      {
LABEL_30:
        MyRoomFriendShipVoiceList = ServantVoiceEntity__getMyRoomFriendShipVoiceList(svtVoiceEnt, j, 0LL);
        if ( MyRoomFriendShipVoiceList )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v54,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MyRoomFriendShipVoiceList,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v54;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &i,
                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields.current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields.current, v52);
          }
          v55[v44] = 228;
          v53 = ++v56;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &i,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
          if ( v53 )
          {
            v44 = v53;
            if ( v55[v53 - 1] == 228 )
            {
              v44 = v53 - 1;
              v56 = v53 - 1;
            }
          }
          else
          {
            v44 = 0;
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
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_List_int__o *v38; // x20
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v42; // x25
  __int64 v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  __int64 v51; // x21
  System_Predicate_int__o *v52; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x19
  StandFigureCollect_o *v54; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x21
  System_Action_o *v56; // x22
  struct ServantVoiceData_array *v57; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v60; // x8
  struct System_String_StaticFields *static_fields; // x8
  __int64 v63; // x0
  MyRoomSvtControl_o *v64; // [xsp+8h] [xbp-58h]

  if ( (byte_42E85D6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Exists__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_MyRoomSvtControl_svtVoicePlay__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&string_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, v32, v33, v34);
    sub_B5D5C4(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, v35, v36, v37);
    byte_42E85D6 = 1;
  }
  v38 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_23;
  v64 = this;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v42 = 0LL;
    while ( 1 )
    {
      v43 = sub_B5D694(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
      MyRoomSvtControl___c__DisplayClass23_0___ctor((MyRoomSvtControl___c__DisplayClass23_0_o *)v43, 0LL);
      if ( v42 >= randomVoiceList->max_length )
        break;
      if ( !v43 )
        goto LABEL_25;
      v50 = (System_Int32_array **)randomVoiceList->m_Items[v42];
      *(_QWORD *)(v43 + 16) = v50;
      v51 = v43 + 16;
      sub_B5D560((BattleServantConfConponent_o *)(v43 + 16), v50, v44, v45, v46, v47, v48, v49);
      v52 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v52,
        (Il2CppObject *)v43,
        Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__,
        (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
      if ( !v38 )
        goto LABEL_25;
      v39 = System_Collections_Generic_List_int___Exists(
              v38,
              (System_Predicate_T__o *)v52,
              (const MethodInfo_3084C60 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( !v39 )
      {
        if ( !*(_QWORD *)v51 )
          goto LABEL_25;
        System_Collections_Generic_List_int___Add(
          v38,
          *(_DWORD *)(*(_QWORD *)v51 + 56LL),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v42 >= (int)randomVoiceList->max_length )
        goto LABEL_13;
    }
LABEL_26:
    v63 = sub_B5D6C8(v39);
    sub_B5D668(v63, 0LL);
  }
LABEL_13:
  standFigureCollectList = v64->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  if ( !standFigureCollectList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v54 = standFigureCollectList->fields._items->m_Items[0];
  if ( !v54
    || (standFigure_k__BackingField = v54->fields._standFigure_k__BackingField,
        v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v56, (Il2CppObject *)v64, Method_MyRoomSvtControl_svtVoicePlay__, 0LL),
        !standFigure_k__BackingField)
    || (UIStandFigureR__PreloadFormAssets(standFigure_k__BackingField, v38, v56, 0LL),
        (v57 = v64->fields.randomVoiceList) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(v39, v40);
  }
  playCnt = v64->fields.playCnt;
  max_length = v57->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_23:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_26;
  v60 = (struct System_String_StaticFields *)v57->m_Items[playCnt];
  if ( !v60 )
    goto LABEL_25;
  static_fields = v60 + 2;
  return static_fields->Empty;
}


void __fastcall MyRoomSvtControl__setFirstPlayVoice(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *voice,
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  ServantVoiceData_o *v20; // x8
  VoiceMaster_o *v21; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  ServantVoiceData_o *v23; // x9
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x22
  int32_t size; // w23
  __int64 v26; // x0

  if ( (byte_42E85D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoiceMaster___, (_DWORD)voice, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E85D2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !voice )
    goto LABEL_16;
  if ( !voice->max_length )
  {
LABEL_17:
    v26 = sub_B5D6C8(Instance);
    sub_B5D668(v26, 0LL);
  }
  v20 = voice->m_Items[0];
  if ( !v20 )
    goto LABEL_16;
  v21 = (VoiceMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)VoiceMaster__getFlagRequestNumber(
                                (VoiceMaster_o *)Instance,
                                this->fields.svtId,
                                v20->fields.id,
                                0,
                                0LL);
  if ( (_DWORD)Instance )
  {
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_16;
    if ( voice->max_length )
    {
      v23 = voice->m_Items[0];
      if ( v23 )
      {
        canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
        size = firstPlayVoiceList->fields._size;
        Instance = (DataManager_o *)VoiceMaster__getFirstPlayPriority(v21, this->fields.svtId, v23->fields.id, 0LL);
        if ( canFirstPlayVoiceIdxDic )
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            canFirstPlayVoiceIdxDic,
            size,
            (int32_t)Instance,
            (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
          Instance = (DataManager_o *)this->fields.firstPlayVoiceList;
          if ( Instance )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              (EventMissionProgressRequest_Argument_ProgressData_o *)voice,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
            return;
          }
        }
      }
LABEL_16:
      sub_B5D69C(Instance, v19);
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceList; // x20
  __int64 v30; // x1
  System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x0
  struct System_Collections_Generic_List_ServantVoiceData____o *v32; // x8
  int32_t v33; // w21

  if ( (byte_42E85D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, (_DWORD)list, (_DWORD)assetName, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v20, v21, v22);
    byte_42E85D0 = 1;
  }
  this->fields.asstName = assetName;
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
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.voiceList,
      (System_Int32_array **)list,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_15;
    System_Collections_Generic_List_int___Clear(
      canPlayVoiceIdxList,
      (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
    v32 = *p_voiceList;
    if ( *p_voiceList )
    {
      v33 = 0;
      while ( v33 < v32->fields._size )
      {
        canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
        if ( canPlayVoiceIdxList )
        {
          System_Collections_Generic_List_int___Add(
            canPlayVoiceIdxList,
            v33,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v32 = *p_voiceList;
          ++v33;
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
            (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantVoiceData____Clear__),
          (canPlayVoiceIdxList = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic) == 0LL) )
    {
LABEL_15:
      sub_B5D69C(canPlayVoiceIdxList, v30);
    }
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canPlayVoiceIdxList,
      (const MethodInfo_2F0B024 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice_24866396(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3

  if ( (byte_42E85D3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantVoiceData____Add__,
      (_DWORD)data,
      (_DWORD)assetName,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___68727288, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10, v11, v12);
    byte_42E85D3 = 1;
  }
  v13 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v13,
    1,
    (const MethodInfo_30563CC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___68727288);
  if ( !v13 )
    sub_B5D69C(v14, v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v13, assetName, v16);
}


void __fastcall MyRoomSvtControl__stopVoice(MyRoomSvtControl_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UIStandFigureR_o *v28; // x20
  System_Action_o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E85DA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_MyRoomSvtControl_EndSetFace__, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    byte_42E85DA = 1;
  }
  memset(&v41, 0, sizeof(v41));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v24 )
      break;
    current = v41.fields.current;
    if ( !v41.fields.current )
      sub_B5D69C(v24, v25);
    monitor = (UIStandFigureR_o *)v41.fields.current[1].monitor;
    if ( !monitor )
      sub_B5D69C(0LL, v25);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0LL);
    v28 = (UIStandFigureR_o *)current[1].monitor;
    v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0LL);
    if ( !v28 )
      sub_B5D69C(v30, v31);
    UIStandFigureR__RemoveCallback(v28, v29, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v41,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.player, 0LL, v34, v35, v36, v37, v38, v39);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v21; // x8
  System_Int32_array **id; // x1
  struct ServantVoiceData_array *v23; // x8
  __int64 v24; // x9
  int32_t fsm_high; // w20
  int32_t vcName; // w21
  float FadeTime; // s0
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x22
  float v29; // s8
  StandFigureCollect_o *v30; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x22
  System_Action_o *v32; // x23
  struct ServantVoiceData_array *v33; // x8
  __int64 v34; // x9
  struct SePlayer_o *player; // x25
  __int64 v36; // x26
  float v37; // s0
  float v38; // s8
  struct System_String_o *cueSheetName; // x8
  int v40; // w20
  __int64 v41; // x27
  struct System_String_o **p_objName; // x24
  __int64 v43; // x28
  struct System_Collections_Generic_List_StandFigureCollect__o *v44; // x23
  int32_t v45; // w22
  int32_t v46; // w21
  StandFigureCollect_o *v47; // x8
  UIStandFigureR_o *v48; // x23
  int v49; // w25
  __int64 v50; // x20
  __int64 v51; // x26
  struct System_String_o **v52; // x28
  System_Action_o *v53; // x24
  __int64 v54; // x0
  struct SePlayer_o *v55; // [xsp+8h] [xbp-58h]

  v8 = this;
  if ( (byte_42E85D7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v12, v13, v14);
    this = (MyRoomSvtControl_o *)sub_B5D5C4(&Method_MyRoomSvtControl_EndSetFace__, v15, v16, v17);
    byte_42E85D7 = 1;
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
      v21 = randomVoiceList->m_Items[playCnt];
      if ( !v21 )
        goto LABEL_44;
      id = (System_Int32_array **)v21->fields.id;
      v8->fields.vcName = (struct System_String_o *)id;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      this = (MyRoomSvtControl_o *)v8->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
            (int)this < 2) )
      {
        v23 = v8->fields.randomVoiceList;
        if ( !v23 )
          goto LABEL_44;
        v24 = v8->fields.playCnt;
        if ( (unsigned int)v24 < v23->max_length )
        {
          this = (MyRoomSvtControl_o *)v23->m_Items[v24];
          if ( this )
          {
            fsm_high = HIDWORD(this->fields.fsm);
            vcName = (int32_t)this->fields.vcName;
            FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
            standFigureCollectList = v8->fields.standFigureCollectList;
            if ( standFigureCollectList )
            {
              v29 = FadeTime;
              if ( !standFigureCollectList->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v30 = standFigureCollectList->fields._items->m_Items[0];
              if ( v30 )
              {
                standFigure_k__BackingField = v30->fields._standFigure_k__BackingField;
                v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(v32, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                if ( standFigure_k__BackingField )
                {
                  UIStandFigureR__SetFace_40975992(standFigure_k__BackingField, fsm_high, vcName, v32, v29, 0LL);
                  return;
                }
              }
            }
          }
LABEL_44:
          sub_B5D69C(this, method);
        }
LABEL_42:
        v54 = sub_B5D6C8(this);
        sub_B5D668(v54, 0LL);
      }
      v33 = v8->fields.randomVoiceList;
      if ( !v33 )
        goto LABEL_44;
      v34 = v8->fields.playCnt;
      if ( (unsigned int)v34 >= v33->max_length )
        goto LABEL_42;
      this = (MyRoomSvtControl_o *)v33->m_Items[v34];
      if ( !this )
        goto LABEL_44;
      player = this->fields.player;
      v36 = *(_QWORD *)&this->fields.svtId;
      v37 = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
      if ( player )
      {
        if ( v36 )
        {
          v38 = v37;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                         (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          cueSheetName = player->fields.cueSheetName;
          if ( (_DWORD)this == (_DWORD)cueSheetName )
          {
            v40 = (int)this;
            if ( (_DWORD)this == *(_DWORD *)(v36 + 24) && (int)this >= 1 )
            {
              if ( (_DWORD)cueSheetName )
              {
                v41 = 0LL;
                p_objName = &player->fields.objName;
                v43 = v36 + 32;
                v55 = player;
                while ( (unsigned int)v41 < *(_DWORD *)(v36 + 24) )
                {
                  v44 = v8->fields.standFigureCollectList;
                  if ( !v44 )
                    goto LABEL_44;
                  v45 = *((_DWORD *)p_objName + v41);
                  v46 = *(_DWORD *)(v43 + 4 * v41);
                  if ( v44->fields._size <= (unsigned int)v41 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  v47 = v44->fields._items->m_Items[v41];
                  if ( !v47 )
                    goto LABEL_44;
                  v48 = v47->fields._standFigure_k__BackingField;
                  if ( (_DWORD)v41 )
                  {
                    if ( !v48 )
                      goto LABEL_44;
                    UIStandFigureR__SetFace_40975992(v47->fields._standFigure_k__BackingField, v45, v46, 0LL, v38, 0LL);
                  }
                  else
                  {
                    v49 = v40;
                    v50 = v36;
                    v51 = v43;
                    v52 = p_objName;
                    v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                    System_Action___ctor(v53, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                    if ( !v48 )
                      goto LABEL_44;
                    UIStandFigureR__SetFace_40975992(v48, v45, v46, v53, v38, 0LL);
                    p_objName = v52;
                    v43 = v51;
                    v36 = v50;
                    v40 = v49;
                    player = v55;
                  }
                  if ( (int)v41 + 1 >= v40 )
                    return;
                  if ( (unsigned int)++v41 >= LODWORD(player->fields.cueSheetName) )
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E5A59 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomSvtControl___c_TypeInfo, v1, v2, v3);
    byte_42E5A59 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MyRoomSvtControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MyRoomSvtControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MyRoomSvtControl___c_o *)v4;
  sub_B5D560(static_fields);
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
  if ( (byte_42E5A5A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__,
      a.fields.key,
      b.fields.key,
      method);
    byte_42E5A5A = 1;
  }
  v7 = v5;
  return System_Int32__CompareTo_39741540((int32_t)&v7, value, 0LL);
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
  __int64 v3; // x3
  MyRoomSvtControl___c__DisplayClass21_0_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_KeyValuePair_int__int___o *priorityList; // x20
  unsigned __int64 v10; // x19

  v5 = this;
  if ( (byte_42E5A5B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, x.fields.key, (_DWORD)method, v3);
    this = (MyRoomSvtControl___c__DisplayClass21_0_o *)sub_B5D5C4(
                                                         &Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__,
                                                         v6,
                                                         v7,
                                                         v8);
    byte_42E5A5B = 1;
  }
  priorityList = v5->fields.priorityList;
  if ( !priorityList )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(this, x);
  v10 = HIDWORD(*(unsigned __int64 *)&x);
  if ( !priorityList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return (_DWORD)v10 == priorityList->fields._items->m_Items[1].fields.key;
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
    sub_B5D69C(this, a);
  return System_Int32__Equals_39741700((int32_t)&v5, voice->fields.form, 0LL);
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
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
  }
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_B5D69C(this, method);
  UIStandFigureR__SetFace_40975992(
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
    sub_B5D69C(this, a);
  return System_Int32__Equals_39741700((int32_t)&v5, voice->fields.form, 0LL);
}