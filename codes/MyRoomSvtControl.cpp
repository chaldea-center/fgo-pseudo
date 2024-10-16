void __fastcall MyRoomSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB1773 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomSvtControl_TypeInfo, v1);
    byte_4AB1773 = 1;
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_Dictionary_int__int__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4AB1772 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1BAB41C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    byte_4AB1772 = 1;
  }
  this->fields.volume = 1.0;
  v8 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.canPlayVoiceIdxList = v8;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.canPlayVoiceIdxList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v11;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.firstPlayVoiceList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v14,
    (const MethodInfo_31AD800 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v14;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.canFirstPlayVoiceIdxDic, (int32_t)v14, v15, v16);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v11; // x8
  ServantStatusBattleListViewItem_o *p_player; // x0
  UnityEngine_Object_o *fsm; // x20

  if ( (byte_4AB176F & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_23752/*"svtVoicePlay"*/, v3);
    sub_1BAB41C(&StringLiteral_5489/*"END_PLAY"*/, v4);
    byte_4AB176F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    playCnt = this->fields.playCnt;
    if ( (int)playCnt < this->fields.maxPlayCnt )
    {
      randomVoiceList = this->fields.randomVoiceList;
      if ( randomVoiceList )
      {
        if ( (unsigned int)playCnt >= randomVoiceList->max_length )
          sub_1BAB680(v5, v6);
        v11 = randomVoiceList->m_Items[playCnt];
        if ( v11 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_23752/*"svtVoicePlay"*/,
            v11->fields.delay,
            0LL);
          return;
        }
      }
LABEL_19:
      sub_1BAB678(v5, v6);
    }
    p_player = (ServantStatusBattleListViewItem_o *)&this->fields.player;
    if ( this->fields.player )
    {
      p_player->klass = 0LL;
      sub_1BAB3C0(p_player, 0, v7, v8);
    }
    this->fields.playCnt = 0;
    this->fields.isValidVoice = 0;
    fsm = (UnityEngine_Object_o *)this->fields.fsm;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fsm, 0LL, 0LL) )
    {
      v5 = this->fields.fsm;
      if ( !v5 )
        goto LABEL_19;
      PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_5489/*"END_PLAY"*/, 0LL);
    }
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
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4AB176E & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MyRoomSvtControl_EndPlay__, v3);
    sub_1BAB41C(&SoundManager_TypeInfo, v4);
    byte_4AB176E = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v8 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v9 = SoundManager__playVoice_39087920(asstName, vcName, volume, v8, 0LL);
  this->fields.player = v9;
  p_player = &this->fields.player;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_player, (int32_t)v9, v11, v12);
  ++*((_DWORD *)p_player + 11);
}


ServantVoiceData_o *__fastcall MyRoomSvtControl__GetFirstServantVoiceData(
        MyRoomSvtControl_o *this,
        const MethodInfo *method)
{
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v3; // x9

  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    return 0LL;
  v3 = *(_QWORD *)&randomVoiceList->max_length;
  if ( !v3 )
    return 0LL;
  if ( !(_DWORD)v3 )
    sub_1BAB680(this, method);
  return randomVoiceList->m_Items[0];
}


int32_t __fastcall MyRoomSvtControl__GetFormId(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v4; // x8

  if ( (byte_4AB1771 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, method);
    byte_4AB1771 = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v4 = *(_QWORD *)&standFigureCollectList->fields._size) == 0 )
  {
    sub_1BAB678(standFigureCollectList, method);
  }
  return *(_DWORD *)(v4 + 56);
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
  __int64 v19; // x19
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_int__o *v26; // x20
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v28; // x26
  __int64 v29; // x23
  int32_t v30; // w2
  int32_t v31; // w3
  ServantVoiceData_o *v32; // x1
  __int64 v33; // x22
  System_Predicate_int__o *v34; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  __int64 v38; // x21
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t current; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x8
  UIStandFigureR_o *v49; // x22
  System_Action_o *v50; // x23
  __int64 v51; // x0
  __int64 v52; // x1
  MyRoomSvtControl_o *v53; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4AB176B & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, callback);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Exists__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BAB41C(&System_Predicate_int__TypeInfo, v13);
    sub_1BAB41C(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, v14);
    sub_1BAB41C(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__, v15);
    sub_1BAB41C(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, v16);
    sub_1BAB41C(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, v17);
    sub_1BAB41C(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v18);
    byte_4AB176B = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v19 = sub_1BAB668(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_25;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)this, v22, v23);
  *(_QWORD *)(v19 + 24) = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v19 + 24), (int32_t)callback, v24, v25);
  v26 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v53 = this;
  if ( !randomVoiceList )
    goto LABEL_25;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v28 = 0LL;
    while ( 1 )
    {
      v29 = sub_1BAB668(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v29, 0LL);
      if ( v28 >= randomVoiceList->max_length )
        sub_1BAB680(standFigureCollectList, v21);
      if ( !v29 )
        break;
      v32 = randomVoiceList->m_Items[v28];
      *(_QWORD *)(v29 + 16) = v32;
      v33 = v29 + 16;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)v32, v30, v31);
      v34 = (System_Predicate_int__o *)sub_1BAB668(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v34,
        (Il2CppObject *)v29,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        0LL);
      if ( !v26 )
        break;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v26,
                                                                              (System_Predicate_T__o *)v34,
                                                                              (const MethodInfo_3530EA4 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !*(_QWORD *)v33 )
          break;
        v21 = *(unsigned int *)(*(_QWORD *)v33 + 56LL);
        items = v26->fields._items;
        v36 = Method_System_Collections_Generic_List_int__Add__;
        ++v26->fields._version;
        if ( !items )
          break;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v26,
            v21,
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v26->fields._size = size + 1;
          items->m_Items[size + 1] = v21;
        }
      }
      if ( (__int64)++v28 >= (int)randomVoiceList->max_length )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BAB678(standFigureCollectList, v21);
  }
LABEL_17:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v53->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    standFigureCollectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v55 = v54;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v38 = sub_1BAB668(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v38, 0LL);
    if ( !v38 )
      sub_1BAB678(v39, v40);
    *(_QWORD *)(v38 + 24) = v19;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v38 + 24), v19, v41, v42);
    current = (int32_t)v55.fields._current;
    *(_QWORD *)(v38 + 16) = v55.fields._current;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v38 + 16), current, v44, v45);
    v48 = *(_QWORD *)(v38 + 16);
    if ( !v48 )
      sub_1BAB678(v46, v47);
    v49 = *(UIStandFigureR_o **)(v48 + 24);
    v50 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(
      v50,
      (Il2CppObject *)v38,
      Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__,
      0LL);
    if ( !v49 )
      sub_1BAB678(v51, v52);
    UIStandFigureR__PreloadFormAssets(v49, v26, v50, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void __fastcall MyRoomSvtControl__SetSvtFigureCollect(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.standFigureCollectList = collects;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.standFigureCollectList,
    (int32_t)collects,
    (int32_t)method,
    v3);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v28; // x20
  System_Collections_Generic_IEnumerable_T__o *v29; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *v30; // x21
  __int64 Item; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_KeyValuePair_int__int___o *v35; // x21
  System_Comparison_KeyValuePair_int__int___o *v36; // x22
  Il2CppObject *v37; // x23
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_List_KeyValuePair_int__int___o *v41; // x21
  System_Predicate_KeyValuePair_int__int___o *v42; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *All; // x20
  System_Random_o *v44; // x21
  int32_t v45; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x21
  int32_t v47; // w22
  struct ServantVoiceData_array *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Collections_Generic_Dictionary_int__int__o *v51; // x23
  System_Random_o *v53; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int32_t v55; // w21
  int v56; // w20
  struct ServantVoiceData_array *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Collections_Generic_List_int__o *v60; // x8
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_String_o *asstName; // x0
  struct ServantVoiceData_array *v63; // x8
  struct ServantVoiceData_array *v64; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v65; // x8
  int32_t v66; // w21
  int size; // w9
  __int64 v68; // x9
  _QWORD *v69; // x10
  __int64 v70; // x11

  if ( (byte_4AB176A & 1) == 0 )
  {
    sub_1BAB41C(&System_Comparison_KeyValuePair_int__int___TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__RemoveAt__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Remove__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___76386384, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_1BAB41C(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v19);
    sub_1BAB41C(&System_Predicate_KeyValuePair_int__int___TypeInfo, v20);
    sub_1BAB41C(&System_Random_TypeInfo, v21);
    sub_1BAB41C(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__, v22);
    sub_1BAB41C(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__, v23);
    sub_1BAB41C(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, v24);
    sub_1BAB41C(&MyRoomSvtControl___c_TypeInfo, v25);
    byte_4AB176A = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_31ADE78 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v28 = sub_1BAB668(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v28, 0LL);
    v29 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v30 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1BAB668(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_55160672(
      v30,
      v29,
      (const MethodInfo_349AF60 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___76386384);
    if ( !v28 )
      goto LABEL_54;
    *(_QWORD *)(v28 + 16) = v30;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)v30, v33, v34);
    v35 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v28 + 16);
    Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    if ( !MyRoomSvtControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomSvtControl___c_TypeInfo);
      Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    }
    v36 = *(System_Comparison_KeyValuePair_int__int___o **)(*(_QWORD *)(Item + 184) + 8LL);
    if ( !v36 )
    {
      if ( !*(_DWORD *)(Item + 224) )
      {
        j_il2cpp_runtime_class_init_0(Item);
        Item = (__int64)MyRoomSvtControl___c_TypeInfo;
      }
      v37 = **(Il2CppObject ***)(Item + 184);
      v36 = (System_Comparison_KeyValuePair_int__int___o *)sub_1BAB668(System_Comparison_KeyValuePair_int__int___TypeInfo);
      System_Comparison_KeyValuePair_int__int_____ctor(
        v36,
        v37,
        Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__,
        0LL);
      static_fields = MyRoomSvtControl___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = v36;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)v36, v39, v40);
    }
    if ( !v35 )
      goto LABEL_54;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_55169204(
      v35,
      (System_Comparison_T__o *)v36,
      (const MethodInfo_349D0B4 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v41 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v28 + 16);
    v42 = (System_Predicate_KeyValuePair_int__int___o *)sub_1BAB668(System_Predicate_KeyValuePair_int__int___TypeInfo);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v42,
      (Il2CppObject *)v28,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      0LL);
    if ( !v41 )
      goto LABEL_54;
    All = (System_Collections_Generic_List_KeyValuePair_int__int___o *)System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
                                                                         v41,
                                                                         (System_Predicate_T__o *)v42,
                                                                         (const MethodInfo_349BD7C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v44 = (System_Random_o *)sub_1BAB668(System_Random_TypeInfo);
    System_Random___ctor(v44, 0LL);
    if ( !All )
      goto LABEL_54;
    if ( !v44 )
      goto LABEL_54;
    v45 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v44->klass->vtable._7_Next.method)(
            v44,
            (unsigned int)All->fields._size,
            v44->klass->vtable._8_NextDouble.methodPtr);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v47 = v45;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v45,
                      (const MethodInfo_349B39C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !firstPlayVoiceList )
      goto LABEL_54;
    v48 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)firstPlayVoiceList,
                                             Item,
                                             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v48;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)v48, v49, v50);
    v51 = this->fields.canFirstPlayVoiceIdxDic;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v47,
                      (const MethodInfo_349B39C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !v51 )
      goto LABEL_54;
    System_Collections_Generic_Dictionary_int__int___Remove(
      v51,
      Item,
      (const MethodInfo_31AF57C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Item = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Item )
      goto LABEL_54;
    Item = System_Collections_Generic_Dictionary_int__int___get_Count(
             (System_Collections_Generic_Dictionary_int__int__o *)Item,
             (const MethodInfo_31ADE78 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
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
                 (const MethodInfo_354E55C *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Item != -1 )
        {
          v32 = (unsigned int)Item;
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          Item = System_Collections_Generic_List_int___Remove(
                   (System_Collections_Generic_List_int__o *)Item,
                   v32,
                   (const MethodInfo_3531D94 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v53 = (System_Random_o *)sub_1BAB668(System_Random_TypeInfo);
    System_Random___ctor(v53, 0LL);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_54;
    if ( !v53 )
      goto LABEL_54;
    Item = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v53->klass->vtable._7_Next.method)(
             v53,
             (unsigned int)canPlayVoiceIdxList->fields._size,
             v53->klass->vtable._8_NextDouble.methodPtr);
    if ( !this->fields.canPlayVoiceIdxList )
      goto LABEL_54;
    v55 = Item;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.canPlayVoiceIdxList,
             Item,
             (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !this->fields.voiceList )
      goto LABEL_54;
    v56 = Item;
    v57 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this->fields.voiceList,
                                             Item,
                                             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v57;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.randomVoiceList, (int32_t)v57, v58, v59);
    Item = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Item )
      goto LABEL_54;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Item,
      v55,
      (const MethodInfo_3532018 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v60 = this->fields.canPlayVoiceIdxList;
    if ( !v60 )
      goto LABEL_54;
    if ( !v60->fields._size )
    {
      v65 = this->fields.voiceList;
      if ( !v65 )
        goto LABEL_54;
      v66 = 0;
      while ( 1 )
      {
        size = v65->fields._size;
        if ( v66 >= size )
          break;
        if ( v56 != v66 || size <= 1 )
        {
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          v68 = *(_QWORD *)(Item + 16);
          v69 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(Item + 28);
          if ( !v68 )
            goto LABEL_54;
          v70 = *(int *)(Item + 24);
          if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v66,
              *(const MethodInfo_3530898 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
            v65 = this->fields.voiceList;
          }
          else
          {
            *(_DWORD *)(Item + 24) = v70 + 1;
            *(_DWORD *)(v68 + 4 * v70 + 32) = v66;
          }
        }
        ++v66;
        if ( !v65 )
          goto LABEL_54;
      }
    }
  }
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_54;
  asstName = this->fields.asstName;
  this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
  Item = System_String__IsNullOrEmpty(asstName, 0LL);
  if ( (Item & 1) == 0 && this->fields.maxPlayCnt >= 1 )
  {
    v63 = this->fields.randomVoiceList;
    if ( !v63 )
      goto LABEL_54;
    if ( this->fields.playCnt < (signed int)v63->max_length )
      this->fields.isValidVoice = 1;
  }
  v64 = this->fields.randomVoiceList;
  if ( !v64 )
LABEL_54:
    sub_1BAB678(Item, v32);
  return this->fields.playCnt < (signed int)v64->max_length;
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
  Il2CppObject *MasterData_object; // x21
  UserServantEntity_o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  int32_t v20; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x9
  const MethodInfo *v22; // x2
  int32_t v23; // w0
  int32_t v24; // w22
  int32_t j; // w23
  BalanceConfig_c *v26; // x0
  int32_t svtId; // w24
  int32_t FriendshipRank; // w0
  MyRoomSvtControl_c *v29; // x8
  int32_t v30; // w24
  int32_t SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP; // w9
  System_Collections_Generic_List_ServantVoiceData____o *MyRoomFriendShipVoiceList; // x0
  const MethodInfo *v33; // x2
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4AB1767 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, svtVoiceEnt);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v10);
    sub_1BAB41C(&MyRoomSvtControl_TypeInfo, v11);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4AB1767 = 1;
  }
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_34;
  if ( !MasterData_object )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_QWORD *)Instance + 14),
               (const MethodInfo_3163F3C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  v17 = (UserServantEntity_o *)Instance;
  v19 = *((_QWORD *)Instance + 10);
  v18 = *((_QWORD *)Instance + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v19;
  *(_QWORD *)&v36.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v36, 0LL);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v20;
  if ( voiceList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)voiceList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v34;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v22) )
    {
      ;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v17, 0LL);
  if ( !svtVoiceEnt )
LABEL_34:
    sub_1BAB678(Instance, v15);
  v23 = ServantVoiceEntity__FriendShipRankWithVoice(svtVoiceEnt, (int32_t)Instance, 0LL);
  if ( v23 >= 2 )
  {
    v24 = v23;
    for ( j = 1; j != v24; ++j )
    {
      v26 = BalanceConfig_TypeInfo;
      svtId = this->fields.svtId;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      if ( svtId != v26->static_fields->ServantIdSwimsuitMelt )
        goto LABEL_26;
      FriendshipRank = UserServantEntity__getFriendshipRank(v17, 0LL);
      v29 = MyRoomSvtControl_TypeInfo;
      v30 = FriendshipRank;
      if ( !MyRoomSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomSvtControl_TypeInfo);
        v29 = MyRoomSvtControl_TypeInfo;
      }
      SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = v29->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      if ( v30 < SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
        goto LABEL_26;
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      }
      if ( j >= SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
      {
LABEL_26:
        MyRoomFriendShipVoiceList = ServantVoiceEntity__getMyRoomFriendShipVoiceList(svtVoiceEnt, j, 0LL);
        if ( MyRoomFriendShipVoiceList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v34,
            (System_Collections_Generic_List_object__o *)MyRoomFriendShipVoiceList,
            (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v34;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &i,
                    (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields._current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v33);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &i,
            (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  System_Collections_Generic_List_int__o *v13; // x20
  __int64 v14; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v16; // x25
  __int64 v17; // x22
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  ServantVoiceData_o *v21; // x1
  __int64 v22; // x21
  System_Predicate_int__o *v23; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  UIStandFigureR_o *v27; // x21
  System_Action_o *v28; // x22
  struct ServantVoiceData_array *v29; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v32; // x8
  struct System_String_StaticFields *static_fields; // x8
  MyRoomSvtControl_o *v35; // [xsp+8h] [xbp-68h]

  if ( (byte_4AB176C & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Exists__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v6);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1BAB41C(&Method_MyRoomSvtControl_svtVoicePlay__, v8);
    sub_1BAB41C(&System_Predicate_int__TypeInfo, v9);
    sub_1BAB41C(&string_TypeInfo, v10);
    sub_1BAB41C(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, v11);
    sub_1BAB41C(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, v12);
    byte_4AB176C = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_24;
  v35 = this;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = sub_1BAB668(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0LL);
      if ( v16 >= randomVoiceList->max_length )
        break;
      if ( !v17 )
        goto LABEL_26;
      v21 = randomVoiceList->m_Items[v16];
      *(_QWORD *)(v17 + 16) = v21;
      v22 = v17 + 16;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v21, v19, v20);
      v23 = (System_Predicate_int__o *)sub_1BAB668(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v23,
        (Il2CppObject *)v17,
        Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__,
        0LL);
      if ( !v13 )
        goto LABEL_26;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v13,
                                                                              (System_Predicate_T__o *)v23,
                                                                              (const MethodInfo_3530EA4 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !*(_QWORD *)v22 )
          goto LABEL_26;
        v14 = *(unsigned int *)(*(_QWORD *)v22 + 56LL);
        items = v13->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            v14,
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = v14;
        }
      }
      if ( (__int64)++v16 >= (int)randomVoiceList->max_length )
        goto LABEL_16;
    }
LABEL_27:
    sub_1BAB680(standFigureCollectList, v14);
  }
LABEL_16:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v35->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v27 = *(UIStandFigureR_o **)&standFigureCollectList->fields._size,
        v28 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo),
        System_Action___ctor(v28, (Il2CppObject *)v35, Method_MyRoomSvtControl_svtVoicePlay__, 0LL),
        !v27)
    || (UIStandFigureR__PreloadFormAssets(v27, v13, v28, 0LL), (v29 = v35->fields.randomVoiceList) == 0LL) )
  {
LABEL_26:
    sub_1BAB678(standFigureCollectList, v14);
  }
  playCnt = v35->fields.playCnt;
  max_length = v29->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_24:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_27;
  v32 = (struct System_String_StaticFields *)v29->m_Items[playCnt];
  if ( !v32 )
    goto LABEL_26;
  static_fields = v32 + 2;
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
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v22; // x8

  if ( (byte_4AB1768 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_VoiceMaster___, voice);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AB1768 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !voice )
    goto LABEL_19;
  if ( !voice->max_length )
    goto LABEL_20;
  v11 = voice->m_Items[0];
  if ( !v11 )
    goto LABEL_19;
  v12 = (VoiceMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)VoiceMaster__getFlagRequestNumber(
                                (VoiceMaster_o *)Instance,
                                this->fields.svtId,
                                v11->fields.id,
                                0,
                                0LL);
  if ( !(_DWORD)Instance )
    return;
  firstPlayVoiceList = this->fields.firstPlayVoiceList;
  if ( !firstPlayVoiceList )
LABEL_19:
    sub_1BAB678(Instance, v10);
  if ( !voice->max_length )
LABEL_20:
    sub_1BAB680(Instance, v10);
  v14 = voice->m_Items[0];
  if ( !v14 )
    goto LABEL_19;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  size = firstPlayVoiceList->fields._size;
  Instance = (DataManager_o *)VoiceMaster__getFirstPlayPriority(v12, this->fields.svtId, v14->fields.id, 0LL);
  if ( !canFirstPlayVoiceIdxDic )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__int___Add(
    canFirstPlayVoiceIdxDic,
    size,
    (int32_t)Instance,
    (const MethodInfo_31AE1C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  Instance = (DataManager_o *)this->fields.firstPlayVoiceList;
  if ( !Instance )
    goto LABEL_19;
  v19 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v20 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v19 )
    goto LABEL_19;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v19 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      &voice->obj,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = v19 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v22 + 32) = voice;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)voice, v17, v18);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *list,
        System_String_o *assetName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceList; // x20
  System_Collections_Generic_List_int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int v17; // w9
  struct System_Collections_Generic_List_ServantVoiceData____o *v18; // x8
  int32_t v19; // w21
  struct System_Int32_array *items; // x9
  _QWORD *v21; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  int32_t v24; // w2
  int v25; // w9

  if ( (byte_4AB1766 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, list);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v10);
    byte_4AB1766 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.playCnt = 0;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (int32_t)assetName,
    (int32_t)method);
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.voiceList, (int32_t)list, v11, v12);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_21;
    v17 = canPlayVoiceIdxList->fields._version + 1;
    canPlayVoiceIdxList->fields._size = 0;
    canPlayVoiceIdxList->fields._version = v17;
    v18 = *p_voiceList;
    if ( *p_voiceList )
    {
      v19 = 0;
      while ( v19 < v18->fields._size )
      {
        canFirstPlayVoiceIdxDic = this->fields.canPlayVoiceIdxList;
        if ( canFirstPlayVoiceIdxDic )
        {
          items = canFirstPlayVoiceIdxDic->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++canFirstPlayVoiceIdxDic->fields._version;
          if ( items )
          {
            size = canFirstPlayVoiceIdxDic->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                canFirstPlayVoiceIdxDic,
                v19,
                *(const MethodInfo_3530898 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              v18 = *p_voiceList;
            }
            else
            {
              canFirstPlayVoiceIdxDic->fields._size = size + 1;
              items->m_Items[size + 1] = v19;
            }
            ++v19;
            if ( v18 )
              continue;
          }
        }
        goto LABEL_21;
      }
    }
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_21;
    v24 = firstPlayVoiceList->fields._size;
    v25 = firstPlayVoiceList->fields._version + 1;
    firstPlayVoiceList->fields._size = 0;
    firstPlayVoiceList->fields._version = v25;
    if ( v24 >= 1 )
      System_Array__Clear((System_Array_o *)firstPlayVoiceList->fields._items, 0, v24, 0LL);
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic;
    if ( !canFirstPlayVoiceIdxDic )
LABEL_21:
      sub_1BAB678(canFirstPlayVoiceIdxDic, v15);
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canFirstPlayVoiceIdxDic,
      (const MethodInfo_31AE344 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice_31927616(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4AB1769 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, data);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___76387464, v7);
    sub_1BAB41C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    byte_4AB1769 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor_55890168(
    v9,
    1,
    (const MethodInfo_354D0F8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___76387464);
  if ( !v9
    || (items = v9->fields._items,
        v15 = Method_System_Collections_Generic_List_ServantVoiceData____Add__,
        ++v9->fields._version,
        !items) )
  {
    sub_1BAB678(v10, v11);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      &data->obj,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v17[4] = (Il2CppClass *)data;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)data, v12, v13);
  }
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v9, assetName, v18);
}


void __fastcall MyRoomSvtControl__stopVoice(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UIStandFigureR_o *v15; // x20
  System_Action_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AB1770 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_1BAB41C(&Method_MyRoomSvtControl_EndSetFace__, v7);
    sub_1BAB41C(&SoundManager_TypeInfo, v8);
    sub_1BAB41C(&StringLiteral_23752/*"svtVoicePlay"*/, v9);
    byte_4AB1770 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1BAB678(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    standFigureCollectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v11 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1BAB678(v11, v12);
    monitor = (UIStandFigureR_o *)v24.fields._current[1].monitor;
    if ( !monitor )
      sub_1BAB678(0LL, v12);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0LL);
    v15 = (UIStandFigureR_o *)current[1].monitor;
    v16 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0LL);
    if ( !v15 )
      sub_1BAB678(v17, v18);
    UIStandFigureR__RemoveCallback(v15, v16, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( this->fields.player )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_69785200(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_23752/*"svtVoicePlay"*/,
      0LL);
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    this->fields.player = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.player, 0, v21, v22);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
}


void __fastcall MyRoomSvtControl__svtVoicePlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  MyRoomSvtControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v11; // x8
  struct System_String_o *id; // x1
  struct ServantVoiceData_array *v13; // x8
  __int64 v14; // x9
  int32_t m_CancellationTokenSource_high; // w20
  int32_t asstName; // w21
  float FadeTime; // s0
  float v18; // s8
  UIStandFigureR_o *m_CancellationTokenSource; // x22
  System_Action_o *v20; // x23
  struct ServantVoiceData_array *v21; // x8
  __int64 v22; // x9
  struct PlayMakerFSM_o *fsm; // x25
  struct SePlayer_o *player; // x26
  float v25; // s0
  float v26; // s8
  unsigned __int64 v27; // x20
  __int64 v28; // x29
  int32_t v29; // w21
  int32_t v30; // w22
  UIStandFigureR_o *v31; // x23
  System_Action_o *v32; // x24

  v4 = this;
  if ( (byte_4AB176D & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v6);
    this = (MyRoomSvtControl_o *)sub_1BAB41C(&Method_MyRoomSvtControl_EndSetFace__, v7);
    byte_4AB176D = 1;
  }
  if ( v4->fields.asstName && v4->fields.maxPlayCnt )
  {
    randomVoiceList = v4->fields.randomVoiceList;
    if ( !randomVoiceList )
      goto LABEL_39;
    playCnt = v4->fields.playCnt;
    max_length = randomVoiceList->max_length;
    if ( (int)playCnt < max_length )
    {
      if ( (unsigned int)playCnt >= max_length )
        goto LABEL_37;
      v11 = randomVoiceList->m_Items[playCnt];
      if ( !v11 )
        goto LABEL_39;
      id = v11->fields.id;
      v4->fields.vcName = id;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields.vcName, (int32_t)id, v2, v3);
      this = (MyRoomSvtControl_o *)v4->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_2EE08C0 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
            (int)this < 2) )
      {
        v13 = v4->fields.randomVoiceList;
        if ( !v13 )
          goto LABEL_39;
        v14 = v4->fields.playCnt;
        if ( (unsigned int)v14 < v13->max_length )
        {
          this = (MyRoomSvtControl_o *)v13->m_Items[v14];
          if ( this )
          {
            m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
            asstName = (int32_t)this->fields.asstName;
            FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
            this = (MyRoomSvtControl_o *)v4->fields.standFigureCollectList;
            if ( this )
            {
              v18 = FadeTime;
              this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( this )
              {
                m_CancellationTokenSource = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                v20 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
                System_Action___ctor(v20, (Il2CppObject *)v4, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                if ( m_CancellationTokenSource )
                {
                  UIStandFigureR__SetFace_41430376(
                    m_CancellationTokenSource,
                    m_CancellationTokenSource_high,
                    asstName,
                    v20,
                    v18,
                    0LL);
                  return;
                }
              }
            }
          }
LABEL_39:
          sub_1BAB678(this, method);
        }
LABEL_37:
        sub_1BAB680(this, method);
      }
      v21 = v4->fields.randomVoiceList;
      if ( !v21 )
        goto LABEL_39;
      v22 = v4->fields.playCnt;
      if ( (unsigned int)v22 >= v21->max_length )
        goto LABEL_37;
      this = (MyRoomSvtControl_o *)v21->m_Items[v22];
      if ( !this )
        goto LABEL_39;
      fsm = this->fields.fsm;
      player = this->fields.player;
      v25 = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
      if ( fsm )
      {
        if ( player )
        {
          v26 = v25;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.standFigureCollectList,
                                         (const MethodInfo_2EE08C0 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          if ( (_DWORD)this == (unsigned int)fsm->fields.m_CancellationTokenSource
            && (_DWORD)this == LODWORD(player->fields.cueSheetName)
            && (int)this >= 1 )
          {
            if ( (unsigned int)fsm->fields.m_CancellationTokenSource )
            {
              v27 = 0LL;
              v28 = (unsigned int)this - 1LL;
              while ( v27 < LODWORD(player->fields.cueSheetName) )
              {
                this = (MyRoomSvtControl_o *)v4->fields.standFigureCollectList;
                if ( !this )
                  goto LABEL_39;
                v29 = *((_DWORD *)&fsm->fields.fsm + v27);
                v30 = *((_DWORD *)&player->fields.objName + v27);
                this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               v27,
                                               (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
                if ( !this )
                  goto LABEL_39;
                v31 = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                if ( v27 )
                {
                  if ( !v31 )
                    goto LABEL_39;
                  v32 = 0LL;
                }
                else
                {
                  v32 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
                  System_Action___ctor(v32, (Il2CppObject *)v4, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                  if ( !v31 )
                    goto LABEL_39;
                }
                UIStandFigureR__SetFace_41430376(v31, v29, v30, v32, v26, 0LL);
                if ( v28 == v27 )
                  return;
                if ( ++v27 >= LODWORD(fsm->fields.m_CancellationTokenSource) )
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


void __fastcall MyRoomSvtControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB1774 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomSvtControl___c_TypeInfo, v1);
    byte_4AB1774 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(MyRoomSvtControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyRoomSvtControl___c_TypeInfo->static_fields->__9 = (struct MyRoomSvtControl___c_o *)v2;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)MyRoomSvtControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  int32_t value; // x19^4
  int32_t v5; // x20^4
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  value = b.fields.value;
  v5 = a.fields.value;
  if ( (byte_4AB1775 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, a);
    byte_4AB1775 = 1;
  }
  v7 = value;
  return System_Int32__CompareTo_62853088((int32_t)&v7, v5, 0LL);
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
  int32_t value; // x19^4
  __int64 v5; // x1
  System_Collections_Generic_List_KeyValuePair_int__int___o *priorityList; // x0

  value = x.fields.value;
  if ( (byte_4AB1776 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, x);
    sub_1BAB41C(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v5);
    byte_4AB1776 = 1;
  }
  priorityList = this->fields.priorityList;
  if ( !priorityList )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BAB678)(0LL, x);
  return value == System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                    priorityList,
                    0,
                    (const MethodInfo_349B39C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__).fields.value;
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
    sub_1BAB678(this, a);
  return System_Int32__Equals_62853236((int32_t)&v5, voice->fields.form, 0LL);
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
    sub_1BAB680(this, method);
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_1BAB678(this, method);
  UIStandFigureR__SetFace_41430376(
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
    sub_1BAB678(this, a);
  return System_Int32__Equals_62853236((int32_t)&v5, voice->fields.form, 0LL);
}