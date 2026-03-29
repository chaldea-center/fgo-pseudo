void MyRoomSvtControl___cctor(const MethodInfo *method)
{
  if ( (byte_4D2BDFD & 1) == 0 )
  {
    sub_1C93AD4(&MyRoomSvtControl_TypeInfo);
    byte_4D2BDFD = 1;
  }
  MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = 3;
}


void MyRoomSvtControl___ctor(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_int__int__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2BDFC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4D2BDFC = 1;
  }
  this->fields.volume = 1.0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.canPlayVoiceIdxList = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.canPlayVoiceIdxList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.firstPlayVoiceList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_34B3908 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.canFirstPlayVoiceIdxDic,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v13; // x8
  GrandQuestFolderBoardItem_o *p_player; // x0
  UnityEngine_Object_o *fsm; // x20

  if ( (byte_4D2BDF9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_24173/*"svtVoicePlay"*/);
    sub_1C93AD4(&StringLiteral_5478/*"END_PLAY"*/);
    byte_4D2BDF9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0, 0);
  if ( ((unsigned __int8)v3 & 1) == 0 )
  {
    playCnt = this->fields.playCnt;
    if ( (int)playCnt < this->fields.maxPlayCnt )
    {
      randomVoiceList = this->fields.randomVoiceList;
      if ( randomVoiceList )
      {
        if ( (unsigned int)playCnt >= LODWORD(randomVoiceList->max_length) )
          sub_1C93D34(v3);
        v13 = randomVoiceList->m_Items[playCnt];
        if ( v13 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_24173/*"svtVoicePlay"*/,
            v13->fields.delay,
            0);
          return;
        }
      }
LABEL_19:
      sub_1C93D2C(v3, v4);
    }
    p_player = (GrandQuestFolderBoardItem_o *)&this->fields.player;
    if ( this->fields.player )
    {
      p_player->klass = 0;
      sub_1C93A78(p_player, 0, v5, v6, v7, v8, v9, v10);
    }
    this->fields.playCnt = 0;
    this->fields.isValidVoice = 0;
    fsm = (UnityEngine_Object_o *)this->fields.fsm;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fsm, 0, 0) )
    {
      v3 = this->fields.fsm;
      if ( !v3 )
        goto LABEL_19;
      PlayMakerFSM__SendEvent(v3, (System_String_o *)StringLiteral_5478/*"END_PLAY"*/, 0);
    }
  }
}


void MyRoomSvtControl__EndSetFace(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v6; // x22
  struct SePlayer_o *v7; // x0
  struct SePlayer_o **p_player; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2BDF8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_MyRoomSvtControl_EndPlay__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2BDF8 = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v7 = SoundManager__playVoice_42249560(asstName, vcName, volume, v6, 0, 0);
  this->fields.player = v7;
  p_player = &this->fields.player;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_player, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  ++*((_DWORD *)p_player + 11);
}


ServantVoiceData_o *MyRoomSvtControl__GetFirstServantVoiceData(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  struct ServantVoiceData_array *randomVoiceList; // x8
  il2cpp_array_size_t max_length; // x9

  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    return 0;
  max_length = randomVoiceList->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C93D34(this);
  return randomVoiceList->m_Items[0];
}


int32_t MyRoomSvtControl__GetFormId(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v4; // x8

  if ( (byte_4D2BDFB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4D2BDFB = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
    || (v4 = *(_QWORD *)&standFigureCollectList->fields._size) == 0 )
  {
    sub_1C93D2C(standFigureCollectList, method);
  }
  return *(_DWORD *)(v4 + 76);
}


void MyRoomSvtControl__PreloadFormAssets(MyRoomSvtControl_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_int__o *v20; // x20
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v22; // x26
  __int64 v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  ServantVoiceData_o *v30; // x1
  __int64 v31; // x22
  System_Predicate_int__o *v32; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  __int64 v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t current; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x8
  UIStandFigureR_o *v55; // x22
  System_Action_o *v56; // x23
  __int64 v57; // x0
  __int64 v58; // x1
  MyRoomSvtControl_o *v59; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2BDF5 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Exists__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Predicate_int__TypeInfo);
    sub_1C93AD4(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
    sub_1C93AD4(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__);
    sub_1C93AD4(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
    sub_1C93AD4(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__);
    sub_1C93AD4(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    byte_4D2BDF5 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v5 = sub_1C93D20(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
  MyRoomSvtControl___c__DisplayClass22_0___ctor((MyRoomSvtControl___c__DisplayClass22_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v59 = this;
  if ( !randomVoiceList )
    goto LABEL_25;
  if ( SLODWORD(randomVoiceList->max_length) >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = sub_1C93D20(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
      MyRoomSvtControl___c__DisplayClass22_1___ctor((MyRoomSvtControl___c__DisplayClass22_1_o *)v23, 0);
      if ( v22 >= LODWORD(randomVoiceList->max_length) )
        sub_1C93D34(standFigureCollectList);
      if ( !v23 )
        break;
      v30 = randomVoiceList->m_Items[v22];
      *(_QWORD *)(v23 + 16) = v30;
      v31 = v23 + 16;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 16), (int32_t)v30, v24, v25, v26, v27, v28, v29);
      v32 = (System_Predicate_int__o *)sub_1C93D20(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v32,
        (Il2CppObject *)v23,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        0);
      if ( !v20 )
        break;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v20,
                                                                              (System_Predicate_T__o *)v32,
                                                                              (const MethodInfo_385CF84 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !*(_QWORD *)v31 )
          break;
        v7 = *(unsigned int *)(*(_QWORD *)v31 + 56LL);
        items = v20->fields._items;
        v34 = Method_System_Collections_Generic_List_int__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v20,
            v7,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v20->fields._size = size + 1;
          items->m_Items[size] = v7;
        }
      }
      if ( (__int64)++v22 >= SLODWORD(randomVoiceList->max_length) )
        goto LABEL_17;
    }
LABEL_25:
    sub_1C93D2C(standFigureCollectList, v7);
  }
LABEL_17:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v59->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    standFigureCollectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v61 = v60;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v36 = sub_1C93D20(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    MyRoomSvtControl___c__DisplayClass22_2___ctor((MyRoomSvtControl___c__DisplayClass22_2_o *)v36, 0);
    if ( !v36 )
      sub_1C93D2C(v37, v38);
    *(_QWORD *)(v36 + 24) = v5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v36 + 24), v5, v39, v40, v41, v42, v43, v44);
    current = (int32_t)v61.fields._current;
    *(_QWORD *)(v36 + 16) = v61.fields._current;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v36 + 16), current, v46, v47, v48, v49, v50, v51);
    v54 = *(_QWORD *)(v36 + 16);
    if ( !v54 )
      sub_1C93D2C(v52, v53);
    v55 = *(UIStandFigureR_o **)(v54 + 24);
    v56 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v36,
      Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__,
      0);
    if ( !v55 )
      sub_1C93D2C(v57, v58);
    UIStandFigureR__PreloadFormAssets(v55, v20, v56, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void MyRoomSvtControl__SetSvtFigureCollect(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.standFigureCollectList = collects;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.standFigureCollectList,
    (int32_t)collects,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool MyRoomSvtControl__SetVoiceData(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v5; // x20
  System_Collections_Generic_IEnumerable_T__o *v6; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *v7; // x21
  __int64 Item; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v16; // x21
  System_Comparison_KeyValuePair_int__int___o *v17; // x22
  Il2CppObject *v18; // x23
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v26; // x21
  System_Predicate_KeyValuePair_int__int___o *v27; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *All; // x20
  System_Random_o *v29; // x21
  int32_t v30; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x21
  int32_t v32; // w22
  struct ServantVoiceData_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_Dictionary_int__int__o *v40; // x23
  System_Random_o *v42; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int32_t v44; // w21
  int v45; // w20
  struct ServantVoiceData_array *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct System_Collections_Generic_List_int__o *v53; // x8
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_String_o *asstName; // x0
  struct ServantVoiceData_array *v56; // x8
  struct ServantVoiceData_array *v57; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v58; // x8
  int32_t v59; // w21
  int size; // w9
  __int64 v61; // x9
  _QWORD *v62; // x10
  __int64 v63; // x11

  if ( (byte_4D2BDF4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_KeyValuePair_int__int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___78992104);
    sub_1C93AD4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    sub_1C93AD4(&System_Predicate_KeyValuePair_int__int___TypeInfo);
    sub_1C93AD4(&System_Random_TypeInfo);
    sub_1C93AD4(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__);
    sub_1C93AD4(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__);
    sub_1C93AD4(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    sub_1C93AD4(&MyRoomSvtControl___c_TypeInfo);
    byte_4D2BDF4 = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_34B3F80 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v5 = sub_1C93D20(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    MyRoomSvtControl___c__DisplayClass21_0___ctor((MyRoomSvtControl___c__DisplayClass21_0_o *)v5, 0);
    v6 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v7 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1C93D20(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_58630308(
      v7,
      v6,
      (const MethodInfo_37EA0A4 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___78992104);
    if ( !v5 )
      goto LABEL_54;
    *(_QWORD *)(v5 + 16) = v7;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v7, v10, v11, v12, v13, v14, v15);
    v16 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v5 + 16);
    Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    if ( !MyRoomSvtControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomSvtControl___c_TypeInfo);
      Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    }
    v17 = *(System_Comparison_KeyValuePair_int__int___o **)(*(_QWORD *)(Item + 184) + 8LL);
    if ( !v17 )
    {
      if ( !*(_DWORD *)(Item + 224) )
      {
        j_il2cpp_runtime_class_init_0(Item);
        Item = (__int64)MyRoomSvtControl___c_TypeInfo;
      }
      v18 = **(Il2CppObject ***)(Item + 184);
      v17 = (System_Comparison_KeyValuePair_int__int___o *)sub_1C93D20(System_Comparison_KeyValuePair_int__int___TypeInfo);
      System_Comparison_KeyValuePair_int__int_____ctor(v17, v18, Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__, 0);
      static_fields = MyRoomSvtControl___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = v17;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__21_0, (int32_t)v17, v20, v21, v22, v23, v24, v25);
    }
    if ( !v16 )
      goto LABEL_54;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_58638840(
      v16,
      (System_Comparison_T__o *)v17,
      (const MethodInfo_37EC1F8 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v26 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v5 + 16);
    v27 = (System_Predicate_KeyValuePair_int__int___o *)sub_1C93D20(System_Predicate_KeyValuePair_int__int___TypeInfo);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v27,
      (Il2CppObject *)v5,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      0);
    if ( !v26 )
      goto LABEL_54;
    All = (System_Collections_Generic_List_KeyValuePair_int__int___o *)System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
                                                                         v26,
                                                                         (System_Predicate_T__o *)v27,
                                                                         (const MethodInfo_37EAEC0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v29 = (System_Random_o *)sub_1C93D20(System_Random_TypeInfo);
    System_Random___ctor(v29, 0);
    if ( !All )
      goto LABEL_54;
    if ( !v29 )
      goto LABEL_54;
    v30 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v29->klass->vtable._7_Next.methodPtr)(
            v29,
            (unsigned int)All->fields._size,
            v29->klass->vtable._7_Next.method);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v32 = v30;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v30,
                      (const MethodInfo_37EA4E0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !firstPlayVoiceList )
      goto LABEL_54;
    v33 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)firstPlayVoiceList,
                                             Item,
                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v33;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.randomVoiceList,
      (int32_t)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    v40 = this->fields.canFirstPlayVoiceIdxDic;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v32,
                      (const MethodInfo_37EA4E0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !v40 )
      goto LABEL_54;
    System_Collections_Generic_Dictionary_int__int___Remove(
      v40,
      Item,
      (const MethodInfo_34B5684 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Item = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Item )
      goto LABEL_54;
    Item = System_Collections_Generic_Dictionary_int__int___get_Count(
             (System_Collections_Generic_Dictionary_int__int__o *)Item,
             (const MethodInfo_34B3F80 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    if ( !(_DWORD)Item )
    {
      Item = (__int64)this->fields.voiceList;
      if ( !Item )
        goto LABEL_54;
      if ( *(int *)(Item + 24) >= 2 )
      {
        Item = System_Collections_Generic_List_object___IndexOf(
                 (System_Collections_Generic_List_object__o *)Item,
                 &this->fields.randomVoiceList->obj,
                 (const MethodInfo_387A63C *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Item != -1 )
        {
          v9 = (unsigned int)Item;
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          Item = System_Collections_Generic_List_int___Remove(
                   (System_Collections_Generic_List_int__o *)Item,
                   v9,
                   (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v42 = (System_Random_o *)sub_1C93D20(System_Random_TypeInfo);
    System_Random___ctor(v42, 0);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_54;
    if ( !v42 )
      goto LABEL_54;
    Item = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v42->klass->vtable._7_Next.methodPtr)(
             v42,
             (unsigned int)canPlayVoiceIdxList->fields._size,
             v42->klass->vtable._7_Next.method);
    if ( !this->fields.canPlayVoiceIdxList )
      goto LABEL_54;
    v44 = Item;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.canPlayVoiceIdxList,
             Item,
             (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !this->fields.voiceList )
      goto LABEL_54;
    v45 = Item;
    v46 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this->fields.voiceList,
                                             Item,
                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v46;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.randomVoiceList,
      (int32_t)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    Item = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Item )
      goto LABEL_54;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Item,
      v44,
      (const MethodInfo_385E0F8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v53 = this->fields.canPlayVoiceIdxList;
    if ( !v53 )
      goto LABEL_54;
    if ( !v53->fields._size )
    {
      v58 = this->fields.voiceList;
      if ( !v58 )
        goto LABEL_54;
      v59 = 0;
      while ( 1 )
      {
        size = v58->fields._size;
        if ( v59 >= size )
          break;
        if ( v45 != v59 || size <= 1 )
        {
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          v61 = *(_QWORD *)(Item + 16);
          v62 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(Item + 28);
          if ( !v61 )
            goto LABEL_54;
          v63 = *(int *)(Item + 24);
          if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v59,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
            v58 = this->fields.voiceList;
          }
          else
          {
            *(_DWORD *)(Item + 24) = v63 + 1;
            *(_DWORD *)(v61 + 4 * v63 + 32) = v59;
          }
        }
        ++v59;
        if ( !v58 )
          goto LABEL_54;
      }
    }
  }
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_54;
  asstName = this->fields.asstName;
  this->fields.maxPlayCnt = randomVoiceList->max_length;
  Item = System_String__IsNullOrEmpty(asstName, 0);
  if ( (Item & 1) == 0 && this->fields.maxPlayCnt >= 1 )
  {
    v56 = this->fields.randomVoiceList;
    if ( !v56 )
      goto LABEL_54;
    if ( this->fields.playCnt < SLODWORD(v56->max_length) )
      this->fields.isValidVoice = 1;
  }
  v57 = this->fields.randomVoiceList;
  if ( !v57 )
LABEL_54:
    sub_1C93D2C(Item, v9);
  return this->fields.playCnt < SLODWORD(v57->max_length);
}


void MyRoomSvtControl__initFirstPlayVoiceList(
        MyRoomSvtControl_o *this,
        ServantVoiceEntity_o *svtVoiceEnt,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  UserServantEntity_o *v10; // x22
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x9
  const MethodInfo *v15; // x2
  int32_t v16; // w0
  int32_t v17; // w23
  int32_t j; // w24
  BalanceConfig_c *v19; // x0
  int32_t svtId; // w25
  int32_t FriendshipRank; // w0
  MyRoomSvtControl_c *v22; // x8
  int32_t v23; // w25
  int32_t SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP; // w9
  System_Collections_Generic_List_ServantVoiceData____o *MyRoomFriendShipVoiceList; // x0
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4D2BDF1 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C93AD4(&MyRoomSvtControl_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BDF1 = 1;
  }
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_34;
  if ( !MasterData_object )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_QWORD *)Instance + 15),
               (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  v10 = (UserServantEntity_o *)Instance;
  v12 = *((_QWORD *)Instance + 10);
  v11 = *((_QWORD *)Instance + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v12;
  *(_QWORD *)&v29.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v29, 0);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v13;
  if ( voiceList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)voiceList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v27;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v15) )
    {
      ;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v10, 0);
  if ( !svtVoiceEnt )
LABEL_34:
    sub_1C93D2C(Instance, v8);
  v16 = ServantVoiceEntity__FriendShipRankWithVoice(svtVoiceEnt, (int32_t)Instance, 0);
  if ( v16 >= 2 )
  {
    v17 = v16;
    for ( j = 1; j != v17; ++j )
    {
      v19 = BalanceConfig_TypeInfo;
      svtId = this->fields.svtId;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v19 = BalanceConfig_TypeInfo;
      }
      if ( svtId != v19->static_fields->ServantIdSwimsuitMelt )
        goto LABEL_26;
      FriendshipRank = UserServantEntity__getFriendshipRank(v10, 0);
      v22 = MyRoomSvtControl_TypeInfo;
      v23 = FriendshipRank;
      if ( !MyRoomSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomSvtControl_TypeInfo);
        v22 = MyRoomSvtControl_TypeInfo;
      }
      SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = v22->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      if ( v23 < SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
        goto LABEL_26;
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      }
      if ( j >= SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
      {
LABEL_26:
        MyRoomFriendShipVoiceList = ServantVoiceEntity__getMyRoomFriendShipVoiceList(svtVoiceEnt, j, imageLimitCount, 0);
        if ( MyRoomFriendShipVoiceList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v27,
            (System_Collections_Generic_List_object__o *)MyRoomFriendShipVoiceList,
            (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v27;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &i,
                    (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields._current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v26);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &i,
            (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        }
      }
    }
  }
}


bool MyRoomSvtControl__isPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  return this->fields.player || this->fields.isValidVoice;
}


System_String_o *MyRoomSvtControl__playVoice(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v6; // x25
  __int64 v7; // x22
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  ServantVoiceData_o *v15; // x1
  __int64 v16; // x21
  System_Predicate_int__o *v17; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  UIStandFigureR_o *v21; // x21
  System_Action_o *v22; // x22
  struct ServantVoiceData_array *v23; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v26; // x8
  struct System_String_StaticFields *static_fields; // x8
  MyRoomSvtControl_o *v29; // [xsp+8h] [xbp-68h]

  if ( (byte_4D2BDF6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Exists__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_MyRoomSvtControl_svtVoicePlay__);
    sub_1C93AD4(&System_Predicate_int__TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__);
    sub_1C93AD4(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
    byte_4D2BDF6 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_24;
  v29 = this;
  if ( SLODWORD(randomVoiceList->max_length) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_1C93D20(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
      MyRoomSvtControl___c__DisplayClass23_0___ctor((MyRoomSvtControl___c__DisplayClass23_0_o *)v7, 0);
      if ( v6 >= LODWORD(randomVoiceList->max_length) )
        break;
      if ( !v7 )
        goto LABEL_26;
      v15 = randomVoiceList->m_Items[v6];
      *(_QWORD *)(v7 + 16) = v15;
      v16 = v7 + 16;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)v15, v9, v10, v11, v12, v13, v14);
      v17 = (System_Predicate_int__o *)sub_1C93D20(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v17,
        (Il2CppObject *)v7,
        Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__,
        0);
      if ( !v3 )
        goto LABEL_26;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v3,
                                                                              (System_Predicate_T__o *)v17,
                                                                              (const MethodInfo_385CF84 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !*(_QWORD *)v16 )
          goto LABEL_26;
        v4 = *(unsigned int *)(*(_QWORD *)v16 + 56LL);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v4,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = v4;
        }
      }
      if ( (__int64)++v6 >= SLODWORD(randomVoiceList->max_length) )
        goto LABEL_16;
    }
LABEL_27:
    sub_1C93D34(standFigureCollectList);
  }
LABEL_16:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v29->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
    || (v21 = *(UIStandFigureR_o **)&standFigureCollectList->fields._size,
        v22 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v22, (Il2CppObject *)v29, Method_MyRoomSvtControl_svtVoicePlay__, 0),
        !v21)
    || (UIStandFigureR__PreloadFormAssets(v21, v3, v22, 0), (v23 = v29->fields.randomVoiceList) == 0) )
  {
LABEL_26:
    sub_1C93D2C(standFigureCollectList, v4);
  }
  playCnt = v29->fields.playCnt;
  max_length = v23->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_24:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_27;
  v26 = (struct System_String_StaticFields *)v23->m_Items[playCnt];
  if ( !v26 )
    goto LABEL_26;
  static_fields = v26 + 2;
  return static_fields->Empty;
}


void MyRoomSvtControl__setFirstPlayVoice(
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v22; // x8

  if ( (byte_4D2BDF2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BDF2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !voice )
    goto LABEL_19;
  if ( !LODWORD(voice->max_length) )
    goto LABEL_20;
  v7 = voice->m_Items[0];
  if ( !v7 )
    goto LABEL_19;
  v8 = (VoiceMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)VoiceMaster__getFlagRequestNumber(
                                (VoiceMaster_o *)Instance,
                                this->fields.svtId,
                                v7->fields.id,
                                0,
                                0);
  if ( !(_DWORD)Instance )
    return;
  firstPlayVoiceList = this->fields.firstPlayVoiceList;
  if ( !firstPlayVoiceList )
LABEL_19:
    sub_1C93D2C(Instance, v6);
  if ( !LODWORD(voice->max_length) )
LABEL_20:
    sub_1C93D34(Instance);
  v10 = voice->m_Items[0];
  if ( !v10 )
    goto LABEL_19;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  size = firstPlayVoiceList->fields._size;
  Instance = (DataManager_o *)VoiceMaster__getFirstPlayPriority(v8, this->fields.svtId, v10->fields.id, 0);
  if ( !canFirstPlayVoiceIdxDic )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__int___Add(
    canFirstPlayVoiceIdxDic,
    size,
    (int32_t)Instance,
    (const MethodInfo_34B42CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  Instance = (DataManager_o *)this->fields.firstPlayVoiceList;
  if ( !Instance )
    goto LABEL_19;
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v20 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_19;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      &voice->obj,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v22 + 32) = voice;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 32), (int32_t)voice, v13, v14, v15, v16, v17, v18);
  }
}


void MyRoomSvtControl__setSvtVoice(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *list,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceList; // x20
  System_Collections_Generic_List_int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int v21; // w9
  struct System_Collections_Generic_List_ServantVoiceData____o *v22; // x8
  int32_t v23; // w21
  struct System_Int32_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  int32_t v28; // w2
  int v29; // w9

  if ( (byte_4D2BDF0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_4D2BDF0 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.playCnt = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voiceList, (int32_t)list, v11, v12, v13, v14, v15, v16);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_21;
    v21 = canPlayVoiceIdxList->fields._version + 1;
    canPlayVoiceIdxList->fields._size = 0;
    canPlayVoiceIdxList->fields._version = v21;
    v22 = *p_voiceList;
    if ( *p_voiceList )
    {
      v23 = 0;
      while ( v23 < v22->fields._size )
      {
        canFirstPlayVoiceIdxDic = this->fields.canPlayVoiceIdxList;
        if ( canFirstPlayVoiceIdxDic )
        {
          items = canFirstPlayVoiceIdxDic->fields._items;
          v25 = Method_System_Collections_Generic_List_int__Add__;
          ++canFirstPlayVoiceIdxDic->fields._version;
          if ( items )
          {
            size = canFirstPlayVoiceIdxDic->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                canFirstPlayVoiceIdxDic,
                v23,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              v22 = *p_voiceList;
            }
            else
            {
              canFirstPlayVoiceIdxDic->fields._size = size + 1;
              items->m_Items[size] = v23;
            }
            ++v23;
            if ( v22 )
              continue;
          }
        }
        goto LABEL_21;
      }
    }
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_21;
    v28 = firstPlayVoiceList->fields._size;
    v29 = firstPlayVoiceList->fields._version + 1;
    firstPlayVoiceList->fields._size = 0;
    firstPlayVoiceList->fields._version = v29;
    if ( v28 >= 1 )
      System_Array__Clear((System_Array_o *)firstPlayVoiceList->fields._items, 0, v28, 0);
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic;
    if ( !canFirstPlayVoiceIdxDic )
LABEL_21:
      sub_1C93D2C(canFirstPlayVoiceIdxDic, v19);
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canFirstPlayVoiceIdxDic,
      (const MethodInfo_34B444C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void MyRoomSvtControl__setSvtVoice_34291892(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x3

  if ( (byte_4D2BDF3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___78993528);
    sub_1C93AD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4D2BDF3 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor_59216344(
    v7,
    1,
    (const MethodInfo_38791D8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___78993528);
  if ( !v7
    || (items = v7->fields._items,
        v17 = Method_System_Collections_Generic_List_ServantVoiceData____Add__,
        ++v7->fields._version,
        !items) )
  {
    sub_1C93D2C(v8, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      &data->obj,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v19[4] = (Il2CppClass *)data;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)data, v10, v11, v12, v13, v14, v15);
  }
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v7, assetName, v20);
}


void MyRoomSvtControl__stopVoice(MyRoomSvtControl_o *this, const MethodInfo *method)
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2BDFA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C93AD4(&Method_MyRoomSvtControl_EndSetFace__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_24173/*"svtVoicePlay"*/);
    byte_4D2BDFA = 1;
  }
  memset(&v21, 0, sizeof(v21));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)standFigureCollectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1C93D2C(v4, v5);
    monitor = (UIStandFigureR_o *)v21.fields._current[1].monitor;
    if ( !monitor )
      sub_1C93D2C(0, v5);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0);
    v8 = (UIStandFigureR_o *)current[1].monitor;
    v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0);
    if ( !v8 )
      sub_1C93D2C(v10, v11);
    UIStandFigureR__RemoveCallback(v8, v9, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( this->fields.player )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_72104408(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_24173/*"svtVoicePlay"*/,
      0);
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0);
    this->fields.player = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.player, 0, v14, v15, v16, v17, v18, v19);
    *(_QWORD *)&this->fields.maxPlayCnt = 0;
  }
}


void MyRoomSvtControl__svtVoicePlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MyRoomSvtControl_o *v8; // x19
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v12; // x8
  struct System_String_o *id; // x1
  struct ServantVoiceData_array *v14; // x8
  __int64 v15; // x9
  int32_t m_CancellationTokenSource_high; // w20
  int32_t asstName; // w21
  float FadeTime; // s0
  float v19; // s8
  UIStandFigureR_o *m_CancellationTokenSource; // x22
  System_Action_o *v21; // x23
  struct ServantVoiceData_array *v22; // x8
  __int64 v23; // x9
  struct PlayMakerFSM_o *fsm; // x25
  struct SePlayer_o *player; // x26
  float v26; // s0
  float v27; // s8
  unsigned __int64 v28; // x20
  __int64 v29; // x29
  int32_t v30; // w21
  int32_t v31; // w22
  UIStandFigureR_o *v32; // x23
  System_Action_o *v33; // x24

  v8 = this;
  if ( (byte_4D2BDF7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    this = (MyRoomSvtControl_o *)sub_1C93AD4(&Method_MyRoomSvtControl_EndSetFace__);
    byte_4D2BDF7 = 1;
  }
  if ( v8->fields.asstName && v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( !randomVoiceList )
      goto LABEL_39;
    playCnt = v8->fields.playCnt;
    max_length = randomVoiceList->max_length;
    if ( (int)playCnt < max_length )
    {
      if ( (unsigned int)playCnt >= max_length )
        goto LABEL_37;
      v12 = randomVoiceList->m_Items[playCnt];
      if ( !v12 )
        goto LABEL_39;
      id = v12->fields.id;
      v8->fields.vcName = id;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.vcName, (int32_t)id, v2, v3, v4, v5, v6, v7);
      this = (MyRoomSvtControl_o *)v8->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
            (int)this < 2) )
      {
        v14 = v8->fields.randomVoiceList;
        if ( !v14 )
          goto LABEL_39;
        v15 = v8->fields.playCnt;
        if ( (unsigned int)v15 < LODWORD(v14->max_length) )
        {
          this = (MyRoomSvtControl_o *)v14->m_Items[v15];
          if ( this )
          {
            m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
            asstName = (int32_t)this->fields.asstName;
            FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0);
            this = (MyRoomSvtControl_o *)v8->fields.standFigureCollectList;
            if ( this )
            {
              v19 = FadeTime;
              this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( this )
              {
                m_CancellationTokenSource = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                v21 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                System_Action___ctor(v21, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0);
                if ( m_CancellationTokenSource )
                {
                  UIStandFigureR__SetFace_44751792(
                    m_CancellationTokenSource,
                    m_CancellationTokenSource_high,
                    asstName,
                    v21,
                    v19,
                    0);
                  return;
                }
              }
            }
          }
LABEL_39:
          sub_1C93D2C(this, method);
        }
LABEL_37:
        sub_1C93D34(this);
      }
      v22 = v8->fields.randomVoiceList;
      if ( !v22 )
        goto LABEL_39;
      v23 = v8->fields.playCnt;
      if ( (unsigned int)v23 >= LODWORD(v22->max_length) )
        goto LABEL_37;
      this = (MyRoomSvtControl_o *)v22->m_Items[v23];
      if ( !this )
        goto LABEL_39;
      fsm = this->fields.fsm;
      player = this->fields.player;
      v26 = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0);
      if ( fsm )
      {
        if ( player )
        {
          v27 = v26;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                         (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          if ( (_DWORD)this == (unsigned int)fsm->fields.m_CancellationTokenSource
            && (_DWORD)this == LODWORD(player->fields.cueSheetName)
            && (int)this >= 1 )
          {
            if ( (unsigned int)fsm->fields.m_CancellationTokenSource )
            {
              v28 = 0;
              v29 = (unsigned int)this - 1LL;
              while ( v28 < LODWORD(player->fields.cueSheetName) )
              {
                this = (MyRoomSvtControl_o *)v8->fields.standFigureCollectList;
                if ( !this )
                  goto LABEL_39;
                v30 = *((_DWORD *)&fsm->fields.fsm + v28);
                v31 = *((_DWORD *)&player->fields.objName + v28);
                this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               v28,
                                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
                if ( !this )
                  goto LABEL_39;
                v32 = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                if ( v28 )
                {
                  if ( !v32 )
                    goto LABEL_39;
                  v33 = 0;
                }
                else
                {
                  v33 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                  System_Action___ctor(v33, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0);
                  if ( !v32 )
                    goto LABEL_39;
                }
                UIStandFigureR__SetFace_44751792(v32, v30, v31, v33, v27, 0);
                if ( v29 == v28 )
                  return;
                if ( ++v28 >= LODWORD(fsm->fields.m_CancellationTokenSource) )
                  goto LABEL_37;
              }
            }
            goto LABEL_37;
          }
        }
      }
    }
  }
}


void MyRoomSvtControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2BDFF & 1) == 0 )
  {
    sub_1C93AD4(&MyRoomSvtControl___c_TypeInfo);
    byte_4D2BDFF = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(MyRoomSvtControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomSvtControl___c_TypeInfo->static_fields->__9 = (struct MyRoomSvtControl___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)MyRoomSvtControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MyRoomSvtControl___c___ctor(MyRoomSvtControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MyRoomSvtControl___c___SetVoiceData_b__21_0(
        MyRoomSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o a,
        System_Collections_Generic_KeyValuePair_int__int__o b,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  int32_t v5; // x20^4
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  value = b.fields.value;
  v5 = a.fields.value;
  if ( (byte_4D2BE00 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4D2BE00 = 1;
  }
  v7 = value;
  return System_Int32__CompareTo_65933900((int32_t)&v7, v5, 0);
}


void MyRoomSvtControl___c__DisplayClass21_0___ctor(
        MyRoomSvtControl___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomSvtControl___c__DisplayClass21_0___SetVoiceData_b__1(
        MyRoomSvtControl___c__DisplayClass21_0_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  System_Collections_Generic_List_KeyValuePair_int__int___o *priorityList; // x0

  value = x.fields.value;
  if ( (byte_4D2BE01 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    byte_4D2BE01 = 1;
  }
  priorityList = this->fields.priorityList;
  if ( !priorityList )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C93D2C)(0, x);
  return value == System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                    priorityList,
                    0,
                    (const MethodInfo_37EA4E0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__).fields.value;
}


void MyRoomSvtControl___c__DisplayClass22_0___ctor(
        MyRoomSvtControl___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomSvtControl___c__DisplayClass22_1___ctor(
        MyRoomSvtControl___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomSvtControl___c__DisplayClass22_1___PreloadFormAssets_b__0(
        MyRoomSvtControl___c__DisplayClass22_1_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = a;
  voice = this->fields.voice;
  if ( !voice )
    sub_1C93D2C(this, a);
  return System_Int32__Equals_65934048((int32_t)&v5, voice->fields.form, 0);
}


void MyRoomSvtControl___c__DisplayClass22_2___ctor(
        MyRoomSvtControl___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomSvtControl___c__DisplayClass22_2___PreloadFormAssets_b__1(
        MyRoomSvtControl___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  struct StandFigureCollect_o *collect; // x9
  struct MyRoomSvtControl___c__DisplayClass22_0_o *CS___8__locals1; // x8
  struct MyRoomSvtControl_o *_4__this; // x11
  struct ServantVoiceData_array *randomVoiceList; // x10
  __int64 playCnt; // x11
  ServantVoiceData_o *v7; // x10

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
  if ( (unsigned int)playCnt >= LODWORD(randomVoiceList->max_length) )
    sub_1C93D34(this);
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0 )
LABEL_9:
    sub_1C93D2C(this, method);
  UIStandFigureR__SetFace_44751792(
    (UIStandFigureR_o *)this,
    0,
    v7->fields.form,
    CS___8__locals1->fields.callback,
    0.0,
    0);
}


void MyRoomSvtControl___c__DisplayClass23_0___ctor(
        MyRoomSvtControl___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomSvtControl___c__DisplayClass23_0___playVoice_b__0(
        MyRoomSvtControl___c__DisplayClass23_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = a;
  voice = this->fields.voice;
  if ( !voice )
    sub_1C93D2C(this, a);
  return System_Int32__Equals_65934048((int32_t)&v5, voice->fields.form, 0);
}