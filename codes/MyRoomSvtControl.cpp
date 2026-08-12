void MyRoomSvtControl___cctor(const MethodInfo *method)
{
  if ( (byte_596BB5C & 1) == 0 )
  {
    sub_2213A60(&MyRoomSvtControl_TypeInfo);
    byte_596BB5C = 1;
  }
  MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = 3;
}


void MyRoomSvtControl___ctor(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__c *v3; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_Dictionary_int__int__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596BB5B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_596BB5B = 1;
  }
  v3 = System_Collections_Generic_List_int__TypeInfo;
  this->fields.volume = 1.0;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.canPlayVoiceIdxList = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.canPlayVoiceIdxList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.firstPlayVoiceList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v18,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.canFirstPlayVoiceIdxDic,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v14; // x8
  MissionNaviTransitionBoardItem_o *p_player; // x0
  UnityEngine_Object_c *v16; // x0
  UnityEngine_Object_o *fsm; // x20

  if ( (byte_596BB58 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_25146/*"svtVoicePlay"*/);
    sub_2213A60(&StringLiteral_5655/*"END_PLAY"*/);
    byte_596BB58 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v4 = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    playCnt = this->fields.playCnt;
    if ( (int)playCnt >= this->fields.maxPlayCnt )
    {
      p_player = (MissionNaviTransitionBoardItem_o *)&this->fields.player;
      if ( this->fields.player )
      {
        p_player->klass = 0;
        sub_2213A04(p_player, 0, v6, v7, v8, v9, v10, v11);
      }
      v16 = UnityEngine_Object_TypeInfo;
      fsm = (UnityEngine_Object_o *)this->fields.fsm;
      this->fields.playCnt = 0;
      this->fields.isValidVoice = 0;
      if ( !*(&v16->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v16, v5, v6);
      if ( !UnityEngine_Object__op_Inequality(fsm, 0, 0) )
        return;
      v4 = this->fields.fsm;
      if ( v4 )
      {
        PlayMakerFSM__SendEvent(v4, (System_String_o *)StringLiteral_5655/*"END_PLAY"*/, 0);
        return;
      }
    }
    else
    {
      randomVoiceList = this->fields.randomVoiceList;
      if ( randomVoiceList )
      {
        if ( (unsigned int)playCnt >= LODWORD(randomVoiceList->max_length) )
          sub_2213CE4(v4);
        v14 = randomVoiceList->m_Items[playCnt];
        if ( v14 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_25146/*"svtVoicePlay"*/,
            v14->fields.delay,
            0);
          return;
        }
      }
    }
    sub_2213CDC(v4, v5);
  }
}


void MyRoomSvtControl__EndSetFace(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v6; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  struct SePlayer_o *v9; // x0
  struct SePlayer_o **p_player; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596BB57 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MyRoomSvtControl_EndPlay__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596BB57 = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7, v8);
  v9 = SoundManager__playVoice_48511684(asstName, vcName, volume, v6, 0, 0);
  this->fields.player = v9;
  p_player = &this->fields.player;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_player, (int32_t)v9, v11, v12, v13, v14, v15, v16);
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
    sub_2213CE4(this);
  return randomVoiceList->m_Items[0];
}


int32_t MyRoomSvtControl__GetFormId(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v4; // x8

  if ( (byte_596BB5A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_596BB5A = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
    || (v4 = *(_QWORD *)&standFigureCollectList->fields._size) == 0 )
  {
    sub_2213CDC(standFigureCollectList, method);
  }
  return *(_DWORD *)(v4 + 76);
}


void MyRoomSvtControl__PreloadFormAssets(MyRoomSvtControl_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_int__o *v20; // x20
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v22; // x26
  __int64 v23; // x23
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  ServantVoiceData_o *v30; // x1
  __int64 v31; // x22
  System_Predicate_int__o *v32; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  __int64 v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t current; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
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

  if ( (byte_596BB54 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
    sub_2213A60(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__);
    sub_2213A60(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
    sub_2213A60(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__);
    sub_2213A60(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    byte_596BB54 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v5 = sub_2213CCC(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v59 = this;
  if ( !randomVoiceList )
    goto LABEL_25;
  if ( SLODWORD(randomVoiceList->max_length) >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = sub_2213CCC(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0);
      if ( v22 >= LODWORD(randomVoiceList->max_length) )
        sub_2213CE4(standFigureCollectList);
      if ( !v23 )
        break;
      v30 = randomVoiceList->m_Items[v22];
      *(_QWORD *)(v23 + 16) = v30;
      v31 = v23 + 16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 16), (int32_t)v30, v24, v25, v26, v27, v28, v29);
      v32 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
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
                                                                              (const MethodInfo_4467884 *)Method_System_Collections_Generic_List_int__Exists__);
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
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
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
    sub_2213CDC(standFigureCollectList, v7);
  }
LABEL_17:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v59->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    standFigureCollectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v61 = v60;
  v60.fields._list = 0;
  *(_QWORD *)&v60.fields._index = &v61;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v36 = sub_2213CCC(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v36, 0);
    if ( !v36 )
      sub_2213CDC(v37, v38);
    *(_QWORD *)(v36 + 24) = v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 24), v5, v39, v40, v41, v42, v43, v44);
    current = (int32_t)v61.fields._current;
    *(_QWORD *)(v36 + 16) = v61.fields._current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 16), current, v46, v47, v48, v49, v50, v51);
    v54 = *(_QWORD *)(v36 + 16);
    if ( !v54 )
      sub_2213CDC(v52, v53);
    v55 = *(UIStandFigureR_o **)(v54 + 24);
    v56 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v36,
      Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__,
      0);
    if ( !v55 )
      sub_2213CDC(v57, v58);
    UIStandFigureR__PreloadFormAssets(v55, v20, v56, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void MyRoomSvtControl__SetSvtFigureCollect(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.standFigureCollectList = collects;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.standFigureCollectList,
    (int32_t)collects,
    (System_String_o *)method,
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x2
  System_Collections_Generic_List_KeyValuePair_int__int___o *v17; // x21
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x8
  System_Comparison_KeyValuePair_int__int___o *_9__21_0; // x22
  Il2CppObject *v20; // x23
  struct MyRoomSvtControl___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v28; // x21
  System_Predicate_KeyValuePair_int__int___o *v29; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *All; // x20
  System_Random_o *v31; // x21
  int32_t v32; // w22
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x21
  struct ServantVoiceData_array *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_Dictionary_int__int__o *v41; // x23
  System_Random_o *v43; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int32_t v45; // w21
  int v46; // w20
  struct ServantVoiceData_array *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Collections_Generic_List_int__o *v54; // x8
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_String_o *asstName; // x0
  struct ServantVoiceData_array *v57; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v58; // x8
  int32_t v59; // w21
  int size; // w9
  __int64 v61; // x9
  _QWORD *v62; // x10
  __int64 v63; // x11

  if ( (byte_596BB53 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_KeyValuePair_int__int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___91635968);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_2213A60(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    sub_2213A60(&System_Predicate_KeyValuePair_int__int___TypeInfo);
    sub_2213A60(&System_Random_TypeInfo);
    sub_2213A60(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__);
    sub_2213A60(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__);
    sub_2213A60(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    sub_2213A60(&MyRoomSvtControl___c_TypeInfo);
    byte_596BB53 = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_3F928BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v5 = sub_2213CCC(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    v6 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v7 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_2213CCC(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_71014500(
      v7,
      v6,
      (const MethodInfo_43B9864 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___91635968);
    if ( !v5 )
      goto LABEL_55;
    *(_QWORD *)(v5 + 16) = v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v7, v10, v11, v12, v13, v14, v15);
    v17 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v5 + 16);
    Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    if ( !*(&MyRoomSvtControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomSvtControl___c_TypeInfo, v9, v16);
      Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    }
    static_fields = *(struct MyRoomSvtControl___c_StaticFields **)(Item + 184);
    _9__21_0 = static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !*(_DWORD *)(Item + 228) )
      {
        j_il2cpp_runtime_class_init_0(Item, v9, v16);
        static_fields = MyRoomSvtControl___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__21_0 = (System_Comparison_KeyValuePair_int__int___o *)sub_2213CCC(System_Comparison_KeyValuePair_int__int___TypeInfo);
      System_Comparison_KeyValuePair_int__int_____ctor(
        _9__21_0,
        v20,
        Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__,
        0);
      v21 = MyRoomSvtControl___c_TypeInfo->static_fields;
      v21->__9__21_0 = _9__21_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__21_0, (int32_t)_9__21_0, v22, v23, v24, v25, v26, v27);
    }
    if ( !v17 )
      goto LABEL_55;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_71023008(
      v17,
      (System_Comparison_T__o *)_9__21_0,
      (const MethodInfo_43BB9A0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v28 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v5 + 16);
    v29 = (System_Predicate_KeyValuePair_int__int___o *)sub_2213CCC(System_Predicate_KeyValuePair_int__int___TypeInfo);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v29,
      (Il2CppObject *)v5,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      0);
    if ( !v28 )
      goto LABEL_55;
    All = (System_Collections_Generic_List_KeyValuePair_int__int___o *)System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
                                                                         v28,
                                                                         (System_Predicate_T__o *)v29,
                                                                         (const MethodInfo_43BA698 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v31 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
    System_Random___ctor(v31, 0);
    if ( !All )
      goto LABEL_55;
    if ( !v31 )
      goto LABEL_55;
    v32 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v31->klass->vtable._7_Next.methodPtr)(
            v31,
            (unsigned int)All->fields._size,
            v31->klass->vtable._7_Next.method);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v32,
                      (const MethodInfo_43B9CC0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !firstPlayVoiceList )
      goto LABEL_55;
    v34 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)firstPlayVoiceList,
                                             Item,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v34;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    v41 = this->fields.canFirstPlayVoiceIdxDic;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v32,
                      (const MethodInfo_43B9CC0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !v41 )
      goto LABEL_55;
    System_Collections_Generic_Dictionary_int__int___Remove(
      v41,
      Item,
      (const MethodInfo_3F93FF4 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Item = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Item )
      goto LABEL_55;
    Item = System_Collections_Generic_Dictionary_int__int___get_Count(
             (System_Collections_Generic_Dictionary_int__int__o *)Item,
             (const MethodInfo_3F928BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    if ( !(_DWORD)Item )
    {
      Item = (__int64)this->fields.voiceList;
      if ( !Item )
        goto LABEL_55;
      if ( *(int *)(Item + 24) >= 2 )
      {
        Item = System_Collections_Generic_List_object___IndexOf(
                 (System_Collections_Generic_List_object__o *)Item,
                 &this->fields.randomVoiceList->obj,
                 (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Item != -1 )
        {
          v9 = (unsigned int)Item;
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_55;
          Item = System_Collections_Generic_List_int___Remove(
                   (System_Collections_Generic_List_int__o *)Item,
                   v9,
                   (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v43 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
    System_Random___ctor(v43, 0);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_55;
    if ( !v43 )
      goto LABEL_55;
    Item = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v43->klass->vtable._7_Next.methodPtr)(
             v43,
             (unsigned int)canPlayVoiceIdxList->fields._size,
             v43->klass->vtable._7_Next.method);
    if ( !this->fields.canPlayVoiceIdxList )
      goto LABEL_55;
    v45 = Item;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.canPlayVoiceIdxList,
             Item,
             (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !this->fields.voiceList )
      goto LABEL_55;
    v46 = Item;
    v47 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this->fields.voiceList,
                                             Item,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v47;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
      (int32_t)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    Item = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Item )
      goto LABEL_55;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Item,
      v45,
      (const MethodInfo_44689B4 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v54 = this->fields.canPlayVoiceIdxList;
    if ( !v54 )
      goto LABEL_55;
    if ( !v54->fields._size )
    {
      v58 = this->fields.voiceList;
      if ( !v58 )
        goto LABEL_55;
      v59 = 0;
      while ( 1 )
      {
        size = v58->fields._size;
        if ( v59 >= size )
          break;
        if ( v46 != v59 || size <= 1 )
        {
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_55;
          v61 = *(_QWORD *)(Item + 16);
          v62 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(Item + 28);
          if ( !v61 )
            goto LABEL_55;
          v63 = *(int *)(Item + 24);
          if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v59,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
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
          goto LABEL_55;
      }
    }
  }
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_55;
  asstName = this->fields.asstName;
  this->fields.maxPlayCnt = randomVoiceList->max_length;
  Item = System_String__IsNullOrEmpty(asstName, 0);
  if ( (Item & 1) != 0 )
  {
    v57 = this->fields.randomVoiceList;
    goto LABEL_42;
  }
  v57 = this->fields.randomVoiceList;
  if ( this->fields.maxPlayCnt >= 1 )
  {
    if ( v57 )
    {
      if ( this->fields.playCnt < SLODWORD(v57->max_length) )
        this->fields.isValidVoice = 1;
      return this->fields.playCnt < SLODWORD(v57->max_length);
    }
LABEL_55:
    sub_2213CDC(Item, v9);
  }
LABEL_42:
  if ( !v57 )
    goto LABEL_55;
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
  __int64 v10; // x2
  UserServantEntity_o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t v14; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x9
  const MethodInfo *v16; // x2
  int32_t v17; // w0
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t v20; // w23
  int32_t i; // w24
  BalanceConfig_c *v22; // x0
  int32_t svtId; // w25
  int32_t FriendshipRank; // w0
  MyRoomSvtControl_c *v25; // x8
  int32_t v26; // w25
  int32_t SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP; // w9
  System_Collections_Generic_List_ServantVoiceData____o *MyRoomFriendShipVoiceList; // x0
  __int128 v29; // q0
  const MethodInfo *v30; // x2
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_596BB50 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&MyRoomSvtControl_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596BB50 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_34;
  if ( !MasterData_object )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_QWORD *)Instance + 15),
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  v11 = (UserServantEntity_o *)Instance;
  v12 = *((_QWORD *)Instance + 10);
  v13 = *((_QWORD *)Instance + 11);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v10);
  *(_QWORD *)&v33.fields.currentCryptoKey = v12;
  *(_QWORD *)&v33.fields.fakeValue = v13;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v33, 0);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v14;
  if ( voiceList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      (System_Collections_Generic_List_object__o *)voiceList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v32 = v31;
    v31.fields._list = 0;
    *(_QWORD *)&v31.fields._index = &v32;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
      MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)v32.fields._current, v16);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v11, 0);
  if ( !svtVoiceEnt )
LABEL_34:
    sub_2213CDC(Instance, v8);
  v17 = ServantVoiceEntity__FriendShipRankWithVoice(svtVoiceEnt, (int32_t)Instance, 0);
  if ( v17 >= 2 )
  {
    v20 = v17;
    for ( i = 1; i != v20; ++i )
    {
      v22 = BalanceConfig_TypeInfo;
      svtId = this->fields.svtId;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18, v19);
        v22 = BalanceConfig_TypeInfo;
      }
      if ( svtId != v22->static_fields->ServantIdSwimsuitMelt )
        goto LABEL_26;
      FriendshipRank = UserServantEntity__getFriendshipRank(v11, 0);
      v25 = MyRoomSvtControl_TypeInfo;
      v26 = FriendshipRank;
      if ( !*(&MyRoomSvtControl_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomSvtControl_TypeInfo, v18, v19);
        v25 = MyRoomSvtControl_TypeInfo;
      }
      SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = v25->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      if ( v26 < SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
        goto LABEL_26;
      if ( !*(&v25->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v25, v18, v19);
        SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      }
      if ( i >= SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
      {
LABEL_26:
        MyRoomFriendShipVoiceList = ServantVoiceEntity__getMyRoomFriendShipVoiceList(svtVoiceEnt, i, imageLimitCount, 0);
        if ( MyRoomFriendShipVoiceList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v31,
            (System_Collections_Generic_List_object__o *)MyRoomFriendShipVoiceList,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          v29 = *(_OWORD *)&v31.fields._list;
          v31.fields._list = 0;
          *(_QWORD *)&v31.fields._index = &v32;
          *(_OWORD *)&v32.fields._list = v29;
          v32.fields._current = v31.fields._current;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v32,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( v32.fields._current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)v32.fields._current, v30);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v32,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
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
  ServantVoiceData_o *v26; // x8
  System_String_o **p_id; // x8
  MyRoomSvtControl_o *v29; // [xsp+8h] [xbp-68h]

  if ( (byte_596BB55 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_MyRoomSvtControl_svtVoicePlay__);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__);
    sub_2213A60(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
    byte_596BB55 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_24;
  v29 = this;
  if ( SLODWORD(randomVoiceList->max_length) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_2213CCC(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      if ( v6 >= LODWORD(randomVoiceList->max_length) )
        break;
      if ( !v7 )
        goto LABEL_26;
      v15 = randomVoiceList->m_Items[v6];
      *(_QWORD *)(v7 + 16) = v15;
      v16 = v7 + 16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)v15, v9, v10, v11, v12, v13, v14);
      v17 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
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
                                                                              (const MethodInfo_4467884 *)Method_System_Collections_Generic_List_int__Exists__);
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
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
    sub_2213CE4(standFigureCollectList);
  }
LABEL_16:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v29->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
    || (v21 = *(UIStandFigureR_o **)&standFigureCollectList->fields._size,
        v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v22, (Il2CppObject *)v29, Method_MyRoomSvtControl_svtVoicePlay__, 0),
        !v21)
    || (UIStandFigureR__PreloadFormAssets(v21, v3, v22, 0), (v23 = v29->fields.randomVoiceList) == 0) )
  {
LABEL_26:
    sub_2213CDC(standFigureCollectList, v4);
  }
  playCnt = v29->fields.playCnt;
  max_length = v23->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_24:
    p_id = *(System_String_o ***)(qword_5984390 + 184);
    return *p_id;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_27;
  v26 = v23->m_Items[playCnt];
  if ( !v26 )
    goto LABEL_26;
  p_id = &v26->fields.id;
  return *p_id;
}


void MyRoomSvtControl__setFirstPlayVoice(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *voice,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ServantVoiceData_o *v7; // x8
  VoiceMaster_o *v8; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  ServantVoiceData_o *v10; // x9
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x22
  int32_t size; // w23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *v19; // x8
  struct System_Object_array *items; // x9
  _QWORD *v21; // x10
  __int64 v22; // x11
  Il2CppClass **v23; // x0

  if ( (byte_596BB51 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596BB51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoiceMaster___);
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
  Instance = (Il2CppObject *)VoiceMaster__getFlagRequestNumber(
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
    sub_2213CDC(Instance, v6);
  if ( !LODWORD(voice->max_length) )
LABEL_20:
    sub_2213CE4(Instance);
  v10 = voice->m_Items[0];
  if ( !v10 )
    goto LABEL_19;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  size = firstPlayVoiceList->fields._size;
  Instance = (Il2CppObject *)VoiceMaster__getFirstPlayPriority(v8, this->fields.svtId, v10->fields.id, 0);
  if ( !canFirstPlayVoiceIdxDic )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__int___Add(
    canFirstPlayVoiceIdxDic,
    size,
    (int32_t)Instance,
    (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v19 = (System_Collections_Generic_List_object__o *)this->fields.firstPlayVoiceList;
  if ( !v19 )
    goto LABEL_19;
  items = v19->fields._items;
  v21 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_19;
  v22 = v19->fields._size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      &voice->obj,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + v22;
    v19->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)voice;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)voice, v13, v14, v15, v16, v17, v18);
  }
}


void MyRoomSvtControl__setSvtVoice(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *list,
        System_String_o *assetName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceList; // x20
  System_Collections_Generic_List_int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x9
  struct System_Collections_Generic_List_ServantVoiceData____o *v21; // x8
  int v22; // w10
  int32_t v23; // w21
  struct System_Int32_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  int32_t v28; // w2
  int v29; // w9

  if ( (byte_596BB4F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_596BB4F = 1;
  }
  this->fields.asstName = assetName;
  this->fields.playCnt = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    assetName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.voiceList,
      (int32_t)list,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_14;
    v21 = *p_voiceList;
    v22 = canPlayVoiceIdxList->fields._version + 1;
    canPlayVoiceIdxList->fields._size = 0;
    canPlayVoiceIdxList->fields._version = v22;
    if ( v21 )
    {
      v23 = 0;
      while ( v23 < v21->fields._size )
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
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              v21 = *p_voiceList;
            }
            else
            {
              canFirstPlayVoiceIdxDic->fields._size = size + 1;
              items->m_Items[size] = v23;
            }
            ++v23;
            if ( v21 )
              continue;
          }
        }
        goto LABEL_14;
      }
    }
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_14;
    v28 = firstPlayVoiceList->fields._size;
    v29 = firstPlayVoiceList->fields._version + 1;
    firstPlayVoiceList->fields._size = 0;
    firstPlayVoiceList->fields._version = v29;
    if ( v28 >= 1 )
      System_Array__Clear((System_Array_o *)firstPlayVoiceList->fields._items, 0, v28, 0);
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic;
    if ( !canFirstPlayVoiceIdxDic )
LABEL_14:
      sub_2213CDC(canFirstPlayVoiceIdxDic, v19);
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canFirstPlayVoiceIdxDic,
      (const MethodInfo_3F92DA0 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void MyRoomSvtControl__setSvtVoice_40493572(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x3

  if ( (byte_596BB52 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___91637584);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_596BB52 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor_71840884(
    v7,
    1,
    (const MethodInfo_4483474 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___91637584);
  if ( !v7
    || (items = v7->fields._items,
        v17 = Method_System_Collections_Generic_List_ServantVoiceData____Add__,
        ++v7->fields._version,
        !items) )
  {
    sub_2213CDC(v8, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      &data->obj,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v19[4] = (Il2CppClass *)data;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)data, v10, v11, v12, v13, v14, v15);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596BB59 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_2213A60(&Method_MyRoomSvtControl_EndSetFace__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_25146/*"svtVoicePlay"*/);
    byte_596BB59 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  memset(&v23, 0, sizeof(v23));
  if ( !standFigureCollectList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)standFigureCollectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_2213CDC(v4, v5);
    monitor = (UIStandFigureR_o *)v23.fields._current[1].monitor;
    if ( !monitor )
      sub_2213CDC(0, v5);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0);
    v8 = (UIStandFigureR_o *)current[1].monitor;
    v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0);
    if ( !v8 )
      sub_2213CDC(v10, v11);
    UIStandFigureR__RemoveCallback(v8, v9, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( this->fields.player )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_83442996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_25146/*"svtVoicePlay"*/,
      0);
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v12, v13);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0);
    this->fields.player = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.player, 0, v16, v17, v18, v19, v20, v21);
    *(_QWORD *)&this->fields.maxPlayCnt = 0;
  }
}


void MyRoomSvtControl__svtVoicePlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  const MethodInfo_4483994 **v30; // x23
  struct HutongGames_PlayMaker_Fsm_o **p_fsm; // x28
  struct System_String_o **p_objName; // x27
  int32_t v33; // w21
  int32_t v34; // w22
  struct SePlayer_o *v35; // x25
  struct System_String_o **v36; // x26
  struct HutongGames_PlayMaker_Fsm_o **v37; // x27
  const MethodInfo_4483994 **v38; // x28
  UIStandFigureR_o *v39; // x23
  System_Action_o *v40; // x24
  struct PlayMakerFSM_o *v41; // [xsp+8h] [xbp-68h]

  v8 = this;
  if ( (byte_596BB56 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    this = (MyRoomSvtControl_o *)sub_2213A60(&Method_MyRoomSvtControl_EndSetFace__);
    byte_596BB56 = 1;
  }
  if ( v8->fields.asstName && v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( !randomVoiceList )
      goto LABEL_40;
    playCnt = v8->fields.playCnt;
    max_length = randomVoiceList->max_length;
    if ( (int)playCnt < max_length )
    {
      if ( (unsigned int)playCnt >= max_length )
        goto LABEL_41;
      v12 = randomVoiceList->m_Items[playCnt];
      if ( !v12 )
        goto LABEL_40;
      id = v12->fields.id;
      v8->fields.vcName = id;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.vcName, (int32_t)id, v2, v3, v4, v5, v6, v7);
      this = (MyRoomSvtControl_o *)v8->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
            (int)this < 2) )
      {
        v14 = v8->fields.randomVoiceList;
        if ( !v14 )
          goto LABEL_40;
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
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( this )
              {
                m_CancellationTokenSource = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(v21, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0);
                if ( m_CancellationTokenSource )
                {
                  UIStandFigureR__SetFace_51076984(
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
LABEL_40:
          sub_2213CDC(this, method);
        }
LABEL_41:
        sub_2213CE4(this);
      }
      v22 = v8->fields.randomVoiceList;
      if ( !v22 )
        goto LABEL_40;
      v23 = v8->fields.playCnt;
      if ( (unsigned int)v23 >= LODWORD(v22->max_length) )
        goto LABEL_41;
      this = (MyRoomSvtControl_o *)v22->m_Items[v23];
      if ( !this )
        goto LABEL_40;
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
                                         (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          if ( (_DWORD)this == LODWORD(fsm->fields.m_CancellationTokenSource)
            && (_DWORD)this == LODWORD(player->fields.cueSheetName)
            && (int)this >= 1 )
          {
            v28 = 0;
            v29 = (unsigned int)this;
            v30 = (const MethodInfo_4483994 **)&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__;
            p_fsm = &fsm->fields.fsm;
            p_objName = &player->fields.objName;
            v41 = fsm;
            while ( v28 < LODWORD(fsm->fields.m_CancellationTokenSource) && v28 < LODWORD(player->fields.cueSheetName) )
            {
              v33 = *((_DWORD *)p_fsm + v28);
              v34 = *((_DWORD *)p_objName + v28);
              this = (MyRoomSvtControl_o *)v8->fields.standFigureCollectList;
              if ( v28 )
              {
                if ( !this )
                  goto LABEL_40;
                this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               v28,
                                               *v30);
                if ( !this )
                  goto LABEL_40;
                this = (MyRoomSvtControl_o *)this->fields.m_CancellationTokenSource;
                if ( !this )
                  goto LABEL_40;
                UIStandFigureR__SetFace_51076984((UIStandFigureR_o *)this, v33, v34, 0, v27, 0);
              }
              else
              {
                if ( !this )
                  goto LABEL_40;
                v35 = player;
                v36 = p_objName;
                v37 = p_fsm;
                v38 = v30;
                this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               0,
                                               *v30);
                if ( !this )
                  goto LABEL_40;
                v39 = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(v40, (Il2CppObject *)v8, Method_MyRoomSvtControl_EndSetFace__, 0);
                if ( !v39 )
                  goto LABEL_40;
                UIStandFigureR__SetFace_51076984(v39, v33, v34, v40, v27, 0);
                v30 = v38;
                p_fsm = v37;
                p_objName = v36;
                player = v35;
                fsm = v41;
              }
              if ( v29 == ++v28 )
                return;
            }
            goto LABEL_41;
          }
        }
      }
    }
  }
}


void MyRoomSvtControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BB5D & 1) == 0 )
  {
    sub_2213A60(&MyRoomSvtControl___c_TypeInfo);
    byte_596BB5D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MyRoomSvtControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomSvtControl___c_TypeInfo->static_fields->__9 = (struct MyRoomSvtControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MyRoomSvtControl___c_TypeInfo->static_fields,
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
  if ( (byte_596BB5E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_596BB5E = 1;
  }
  v7 = value;
  return System_Int32__CompareTo_77138392((int32_t)&v7, v5, 0);
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
  System_Collections_Generic_List_KeyValuePair_int__int___o *priorityList; // x0

  if ( (byte_596BB5F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    byte_596BB5F = 1;
  }
  priorityList = this->fields.priorityList;
  if ( !priorityList )
    sub_2213CDC(0, x);
  return (*(_QWORD *)&System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                        priorityList,
                        0,
                        (const MethodInfo_43B9CC0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__)
        ^ *(unsigned __int64 *)&x) >> 32 == 0;
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


// local variable allocation has failed, the output may be wrong!
bool MyRoomSvtControl___c__DisplayClass22_1___PreloadFormAssets_b__0(
        MyRoomSvtControl___c__DisplayClass22_1_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  voice = this->fields.voice;
  v5 = a;
  if ( !voice )
    sub_2213CDC(this, *(_QWORD *)&a);
  return System_Int32__Equals_77138484((int32_t)&v5, voice->fields.form, 0);
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
    sub_2213CE4(this);
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0 )
LABEL_9:
    sub_2213CDC(this, method);
  UIStandFigureR__SetFace_51076984(
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


// local variable allocation has failed, the output may be wrong!
bool MyRoomSvtControl___c__DisplayClass23_0___playVoice_b__0(
        MyRoomSvtControl___c__DisplayClass23_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  voice = this->fields.voice;
  v5 = a;
  if ( !voice )
    sub_2213CDC(this, *(_QWORD *)&a);
  return System_Int32__Equals_77138484((int32_t)&v5, voice->fields.form, 0);
}