void __fastcall MyRoomSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FA5B4 & 1) == 0 )
  {
    sub_1B64A00(&MyRoomSvtControl_TypeInfo, v1);
    byte_49FA5B4 = 1;
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
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_Dictionary_int__int__o *v10; // x20

  if ( (byte_49FA5B3 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1B64A00(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B64A00(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    byte_49FA5B3 = 1;
  }
  this->fields.volume = 1.0;
  v8 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.canPlayVoiceIdxList = v8;
  sub_1B649A4(&this->fields.canPlayVoiceIdxList);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v9;
  sub_1B649A4(&this->fields.firstPlayVoiceList);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_311CDE4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v10;
  sub_1B649A4(&this->fields.canFirstPlayVoiceIdxDic);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x0
  __int64 v6; // x1
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v9; // x8
  struct SePlayer_o **p_player; // x0
  UnityEngine_Object_o *fsm; // x20

  if ( (byte_49FA5B0 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&StringLiteral_23620/*"svtVoicePlay"*/, v3);
    sub_1B64A00(&StringLiteral_5462/*"END_PLAY"*/, v4);
    byte_49FA5B0 = 1;
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
          sub_1B64C64(v5, v6);
        v9 = randomVoiceList->m_Items[playCnt];
        if ( v9 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_23620/*"svtVoicePlay"*/,
            v9->fields.delay,
            0LL);
          return;
        }
      }
LABEL_19:
      sub_1B64C5C(v5, v6);
    }
    p_player = &this->fields.player;
    if ( this->fields.player )
    {
      *p_player = 0LL;
      sub_1B649A4(p_player);
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
      PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_5462/*"END_PLAY"*/, 0LL);
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
  struct SePlayer_o **p_player; // x19

  if ( (byte_49FA5AF & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_MyRoomSvtControl_EndPlay__, v3);
    sub_1B64A00(&SoundManager_TypeInfo, v4);
    byte_49FA5AF = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v8 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  this->fields.player = SoundManager__playVoice_38391896(asstName, vcName, volume, v8, 0LL);
  p_player = &this->fields.player;
  sub_1B649A4(p_player);
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
    sub_1B64C64(this, method);
  return randomVoiceList->m_Items[0];
}


int32_t __fastcall MyRoomSvtControl__GetFormId(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v4; // x8

  if ( (byte_49FA5B2 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, method);
    byte_49FA5B2 = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v4 = *(_QWORD *)&standFigureCollectList->fields._size) == 0 )
  {
    sub_1B64C5C(standFigureCollectList, method);
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
  Il2CppObject *v19; // x19
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 bits; // x1
  System_Collections_Generic_List_int__o *v22; // x20
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v24; // x26
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x22
  System_Predicate_int__o *v27; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppObject *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x0
  __int64 v35; // x1
  Il2CppClass *klass; // x8
  UIStandFigureR_o *namespaze; // x22
  System_Action_o *v38; // x23
  __int64 v39; // x0
  __int64 v40; // x1
  MyRoomSvtControl_o *v41; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FA5AC & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, callback);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Exists__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B64A00(&System_Predicate_int__TypeInfo, v13);
    sub_1B64A00(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, v14);
    sub_1B64A00(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__, v15);
    sub_1B64A00(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, v16);
    sub_1B64A00(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, v17);
    sub_1B64A00(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v18);
    byte_49FA5AC = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v19 = (Il2CppObject *)sub_1B64C4C(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_25;
  v19[1].klass = (Il2CppClass *)this;
  sub_1B649A4(&v19[1]);
  v19[1].monitor = callback;
  sub_1B649A4(&v19[1].monitor);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v41 = this;
  if ( !randomVoiceList )
    goto LABEL_25;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      v25 = (Il2CppObject *)sub_1B64C4C(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
      System_Object___ctor(v25, 0LL);
      if ( v24 >= randomVoiceList->max_length )
        sub_1B64C64(standFigureCollectList, bits);
      if ( !v25 )
        break;
      v25[1].klass = (Il2CppClass *)randomVoiceList->m_Items[v24];
      v26 = v25 + 1;
      sub_1B649A4(&v25[1]);
      v27 = (System_Predicate_int__o *)sub_1B64C4C(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v27,
        v25,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        0LL);
      if ( !v22 )
        break;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v22,
                                                                              (System_Predicate_T__o *)v27,
                                                                              (const MethodInfo_3492DDC *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !v26->klass )
          break;
        bits = v26->klass->_1.this_arg.bits;
        items = v22->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v22->fields._version;
        if ( !items )
          break;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v22,
            bits,
            *(const MethodInfo_34927D0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v22->fields._size = size + 1;
          items->m_Items[size + 1] = bits;
        }
      }
      if ( (__int64)++v24 >= (int)randomVoiceList->max_length )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B64C5C(standFigureCollectList, bits);
  }
LABEL_17:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v41->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    standFigureCollectList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v31 = (Il2CppObject *)sub_1B64C4C(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    System_Object___ctor(v31, 0LL);
    if ( !v31 )
      sub_1B64C5C(v32, v33);
    v31[1].monitor = v19;
    sub_1B649A4(&v31[1].monitor);
    v31[1].klass = (Il2CppClass *)v43.fields._current;
    v34 = sub_1B649A4(&v31[1]);
    klass = v31[1].klass;
    if ( !klass )
      sub_1B64C5C(v34, v35);
    namespaze = (UIStandFigureR_o *)klass->_1.namespaze;
    v38 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v38, v31, Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, 0LL);
    if ( !namespaze )
      sub_1B64C5C(v39, v40);
    UIStandFigureR__PreloadFormAssets(namespaze, v22, v38, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void __fastcall MyRoomSvtControl__SetSvtFigureCollect(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  this->fields.standFigureCollectList = collects;
  sub_1B649A4(&this->fields.standFigureCollectList);
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
  Il2CppObject *v28; // x20
  System_Collections_Generic_IEnumerable_T__o *v29; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *v30; // x21
  __int64 Item; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_KeyValuePair_int__int___o *klass; // x21
  System_Comparison_KeyValuePair_int__int___o *v34; // x22
  Il2CppObject *v35; // x23
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_KeyValuePair_int__int___o *v37; // x21
  System_Predicate_KeyValuePair_int__int___o *v38; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *All; // x20
  System_Random_o *v40; // x21
  int32_t v41; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x21
  int32_t v43; // w22
  System_Collections_Generic_Dictionary_int__int__o *v44; // x23
  System_Random_o *v46; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int32_t v48; // w21
  int v49; // w20
  struct System_Collections_Generic_List_int__o *v50; // x8
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_String_o *asstName; // x0
  struct ServantVoiceData_array *v53; // x8
  struct ServantVoiceData_array *v54; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v55; // x8
  int32_t v56; // w21
  int size; // w9
  __int64 v58; // x9
  _QWORD *v59; // x10
  __int64 v60; // x11

  if ( (byte_49FA5AB & 1) == 0 )
  {
    sub_1B64A00(&System_Comparison_KeyValuePair_int__int___TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__RemoveAt__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Remove__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___75651848, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v18);
    sub_1B64A00(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v19);
    sub_1B64A00(&System_Predicate_KeyValuePair_int__int___TypeInfo, v20);
    sub_1B64A00(&System_Random_TypeInfo, v21);
    sub_1B64A00(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__, v22);
    sub_1B64A00(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__, v23);
    sub_1B64A00(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, v24);
    sub_1B64A00(&MyRoomSvtControl___c_TypeInfo, v25);
    byte_49FA5AB = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_311D45C *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v28 = (Il2CppObject *)sub_1B64C4C(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor(v28, 0LL);
    v29 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v30 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1B64C4C(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_54515456(
      v30,
      v29,
      (const MethodInfo_33FD700 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___75651848);
    if ( !v28 )
      goto LABEL_54;
    v28[1].klass = (Il2CppClass *)v30;
    sub_1B649A4(&v28[1]);
    klass = (System_Collections_Generic_List_KeyValuePair_int__int___o *)v28[1].klass;
    Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    if ( !MyRoomSvtControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomSvtControl___c_TypeInfo);
      Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    }
    v34 = *(System_Comparison_KeyValuePair_int__int___o **)(*(_QWORD *)(Item + 184) + 8LL);
    if ( !v34 )
    {
      if ( !*(_DWORD *)(Item + 224) )
      {
        j_il2cpp_runtime_class_init_0(Item);
        Item = (__int64)MyRoomSvtControl___c_TypeInfo;
      }
      v35 = **(Il2CppObject ***)(Item + 184);
      v34 = (System_Comparison_KeyValuePair_int__int___o *)sub_1B64C4C(System_Comparison_KeyValuePair_int__int___TypeInfo);
      System_Comparison_KeyValuePair_int__int_____ctor(
        v34,
        v35,
        Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__,
        0LL);
      static_fields = MyRoomSvtControl___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = v34;
      Item = sub_1B649A4(&static_fields->__9__21_0);
    }
    if ( !klass )
      goto LABEL_54;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_54524148(
      klass,
      (System_Comparison_T__o *)v34,
      (const MethodInfo_33FF8F4 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v37 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)v28[1].klass;
    v38 = (System_Predicate_KeyValuePair_int__int___o *)sub_1B64C4C(System_Predicate_KeyValuePair_int__int___TypeInfo);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v38,
      v28,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      0LL);
    if ( !v37 )
      goto LABEL_54;
    All = (System_Collections_Generic_List_KeyValuePair_int__int___o *)System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
                                                                         v37,
                                                                         (System_Predicate_T__o *)v38,
                                                                         (const MethodInfo_33FE51C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v40 = (System_Random_o *)sub_1B64C4C(System_Random_TypeInfo);
    System_Random___ctor(v40, 0LL);
    if ( !All )
      goto LABEL_54;
    if ( !v40 )
      goto LABEL_54;
    v41 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v40->klass->vtable._7_Next.method)(
            v40,
            (unsigned int)All->fields._size,
            v40->klass->vtable._8_NextDouble.methodPtr);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v43 = v41;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v41,
                      (const MethodInfo_33FDB3C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !firstPlayVoiceList )
      goto LABEL_54;
    this->fields.randomVoiceList = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)firstPlayVoiceList,
                                                                      Item,
                                                                      (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1B649A4(&this->fields.randomVoiceList);
    v44 = this->fields.canFirstPlayVoiceIdxDic;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v43,
                      (const MethodInfo_33FDB3C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !v44 )
      goto LABEL_54;
    System_Collections_Generic_Dictionary_int__int___Remove(
      v44,
      Item,
      (const MethodInfo_311EB60 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Item = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Item )
      goto LABEL_54;
    Item = System_Collections_Generic_Dictionary_int__int___get_Count(
             (System_Collections_Generic_Dictionary_int__int__o *)Item,
             (const MethodInfo_311D45C *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
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
                 (const MethodInfo_34B0D08 *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Item != -1 )
        {
          v32 = (unsigned int)Item;
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          Item = System_Collections_Generic_List_int___Remove(
                   (System_Collections_Generic_List_int__o *)Item,
                   v32,
                   (const MethodInfo_3493D6C *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v46 = (System_Random_o *)sub_1B64C4C(System_Random_TypeInfo);
    System_Random___ctor(v46, 0LL);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_54;
    if ( !v46 )
      goto LABEL_54;
    Item = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v46->klass->vtable._7_Next.method)(
             v46,
             (unsigned int)canPlayVoiceIdxList->fields._size,
             v46->klass->vtable._8_NextDouble.methodPtr);
    if ( !this->fields.canPlayVoiceIdxList )
      goto LABEL_54;
    v48 = Item;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.canPlayVoiceIdxList,
             Item,
             (const MethodInfo_34924E0 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !this->fields.voiceList )
      goto LABEL_54;
    v49 = Item;
    this->fields.randomVoiceList = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this->fields.voiceList,
                                                                      Item,
                                                                      (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1B649A4(&this->fields.randomVoiceList);
    Item = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Item )
      goto LABEL_54;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Item,
      v48,
      (const MethodInfo_3493FF0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v50 = this->fields.canPlayVoiceIdxList;
    if ( !v50 )
      goto LABEL_54;
    if ( !v50->fields._size )
    {
      v55 = this->fields.voiceList;
      if ( !v55 )
        goto LABEL_54;
      v56 = 0;
      while ( 1 )
      {
        size = v55->fields._size;
        if ( v56 >= size )
          break;
        if ( v49 != v56 || size <= 1 )
        {
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          v58 = *(_QWORD *)(Item + 16);
          v59 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(Item + 28);
          if ( !v58 )
            goto LABEL_54;
          v60 = *(int *)(Item + 24);
          if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v56,
              *(const MethodInfo_34927D0 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
            v55 = this->fields.voiceList;
          }
          else
          {
            *(_DWORD *)(Item + 24) = v60 + 1;
            *(_DWORD *)(v58 + 4 * v60 + 32) = v56;
          }
        }
        ++v56;
        if ( !v55 )
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
    v53 = this->fields.randomVoiceList;
    if ( !v53 )
      goto LABEL_54;
    if ( this->fields.playCnt < (signed int)v53->max_length )
      this->fields.isValidVoice = 1;
  }
  v54 = this->fields.randomVoiceList;
  if ( !v54 )
LABEL_54:
    sub_1B64C5C(Item, v32);
  return this->fields.playCnt < (signed int)v54->max_length;
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

  if ( (byte_49FA5A8 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, svtVoiceEnt);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v10);
    sub_1B64A00(&MyRoomSvtControl_TypeInfo, v11);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FA5A8 = 1;
  }
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_34;
  if ( !MasterData_object )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_QWORD *)Instance + 14),
               (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  v17 = (UserServantEntity_o *)Instance;
  v19 = *((_QWORD *)Instance + 10);
  v18 = *((_QWORD *)Instance + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v19;
  *(_QWORD *)&v36.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v36, 0LL);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v20;
  if ( voiceList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)voiceList,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v34;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v22) )
    {
      ;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v17, 0LL);
  if ( !svtVoiceEnt )
LABEL_34:
    sub_1B64C5C(Instance, v15);
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
            (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v34;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &i,
                    (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields._current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v33);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &i,
            (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 bits; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v16; // x25
  Il2CppObject *v17; // x22
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  Il2CppObject *v19; // x21
  System_Predicate_int__o *v20; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UIStandFigureR_o *v24; // x21
  System_Action_o *v25; // x22
  struct ServantVoiceData_array *v26; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v29; // x8
  struct System_String_StaticFields *static_fields; // x8
  MyRoomSvtControl_o *v32; // [xsp+8h] [xbp-68h]

  if ( (byte_49FA5AD & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Exists__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v6);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B64A00(&Method_MyRoomSvtControl_svtVoicePlay__, v8);
    sub_1B64A00(&System_Predicate_int__TypeInfo, v9);
    sub_1B64A00(&string_TypeInfo, v10);
    sub_1B64A00(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, v11);
    sub_1B64A00(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, v12);
    byte_49FA5AD = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_24;
  v32 = this;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = (Il2CppObject *)sub_1B64C4C(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
      System_Object___ctor(v17, 0LL);
      if ( v16 >= randomVoiceList->max_length )
        break;
      if ( !v17 )
        goto LABEL_26;
      v17[1].klass = (Il2CppClass *)randomVoiceList->m_Items[v16];
      v19 = v17 + 1;
      sub_1B649A4(&v17[1]);
      v20 = (System_Predicate_int__o *)sub_1B64C4C(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(v20, v17, Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, 0LL);
      if ( !v13 )
        goto LABEL_26;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v13,
                                                                              (System_Predicate_T__o *)v20,
                                                                              (const MethodInfo_3492DDC *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !v19->klass )
          goto LABEL_26;
        bits = v19->klass->_1.this_arg.bits;
        items = v13->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            bits,
            *(const MethodInfo_34927D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = bits;
        }
      }
      if ( (__int64)++v16 >= (int)randomVoiceList->max_length )
        goto LABEL_16;
    }
LABEL_27:
    sub_1B64C64(standFigureCollectList, bits);
  }
LABEL_16:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v32->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v24 = *(UIStandFigureR_o **)&standFigureCollectList->fields._size,
        v25 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(v25, (Il2CppObject *)v32, Method_MyRoomSvtControl_svtVoicePlay__, 0LL),
        !v24)
    || (UIStandFigureR__PreloadFormAssets(v24, v13, v25, 0LL), (v26 = v32->fields.randomVoiceList) == 0LL) )
  {
LABEL_26:
    sub_1B64C5C(standFigureCollectList, bits);
  }
  playCnt = v32->fields.playCnt;
  max_length = v26->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_24:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_27;
  v29 = (struct System_String_StaticFields *)v26->m_Items[playCnt];
  if ( !v29 )
    goto LABEL_26;
  static_fields = v29 + 2;
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
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v20; // x8

  if ( (byte_49FA5A9 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_VoiceMaster___, voice);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FA5A9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
    sub_1B64C5C(Instance, v10);
  if ( !voice->max_length )
LABEL_20:
    sub_1B64C64(Instance, v10);
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
    (const MethodInfo_311D7A8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  Instance = (DataManager_o *)this->fields.firstPlayVoiceList;
  if ( !Instance )
    goto LABEL_19;
  v17 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v18 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v17 )
    goto LABEL_19;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v17 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      &voice->obj,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = v17 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v20 + 32) = voice;
    sub_1B649A4(v20 + 32);
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
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceList; // x20
  System_Collections_Generic_List_int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int v15; // w9
  struct System_Collections_Generic_List_ServantVoiceData____o *v16; // x8
  int32_t v17; // w21
  struct System_Int32_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  int32_t v22; // w2
  int v23; // w9

  if ( (byte_49FA5A7 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, list);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v10);
    byte_49FA5A7 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.playCnt = 0;
  sub_1B649A4(&this->fields.asstName);
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)sub_1B649A4(&this->fields.voiceList);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_21;
    v15 = canPlayVoiceIdxList->fields._version + 1;
    canPlayVoiceIdxList->fields._size = 0;
    canPlayVoiceIdxList->fields._version = v15;
    v16 = *p_voiceList;
    if ( *p_voiceList )
    {
      v17 = 0;
      while ( v17 < v16->fields._size )
      {
        canFirstPlayVoiceIdxDic = this->fields.canPlayVoiceIdxList;
        if ( canFirstPlayVoiceIdxDic )
        {
          items = canFirstPlayVoiceIdxDic->fields._items;
          v19 = Method_System_Collections_Generic_List_int__Add__;
          ++canFirstPlayVoiceIdxDic->fields._version;
          if ( items )
          {
            size = canFirstPlayVoiceIdxDic->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                canFirstPlayVoiceIdxDic,
                v17,
                *(const MethodInfo_34927D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
              v16 = *p_voiceList;
            }
            else
            {
              canFirstPlayVoiceIdxDic->fields._size = size + 1;
              items->m_Items[size + 1] = v17;
            }
            ++v17;
            if ( v16 )
              continue;
          }
        }
        goto LABEL_21;
      }
    }
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_21;
    v22 = firstPlayVoiceList->fields._size;
    v23 = firstPlayVoiceList->fields._version + 1;
    firstPlayVoiceList->fields._size = 0;
    firstPlayVoiceList->fields._version = v23;
    if ( v22 >= 1 )
      System_Array__Clear((System_Array_o *)firstPlayVoiceList->fields._items, 0, v22, 0LL);
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic;
    if ( !canFirstPlayVoiceIdxDic )
LABEL_21:
      sub_1B64C5C(canFirstPlayVoiceIdxDic, v13);
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canFirstPlayVoiceIdxDic,
      (const MethodInfo_311D928 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice_31266496(
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
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  const MethodInfo *v16; // x3

  if ( (byte_49FA5AA & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, data);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___75652904, v7);
    sub_1B64A00(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    byte_49FA5AA = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor_55244804(
    v9,
    1,
    (const MethodInfo_34AF804 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___75652904);
  if ( !v9
    || (items = v9->fields._items,
        v13 = Method_System_Collections_Generic_List_ServantVoiceData____Add__,
        ++v9->fields._version,
        !items) )
  {
    sub_1B64C5C(v10, v11);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      &data->obj,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v15[4] = (Il2CppClass *)data;
    sub_1B649A4(v15 + 4);
  }
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v9, assetName, v16);
}


void __fastcall MyRoomSvtControl__stopVoice(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
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
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FA5B1 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_1B64A00(&Method_MyRoomSvtControl_EndSetFace__, v7);
    sub_1B64A00(&SoundManager_TypeInfo, v8);
    byte_49FA5B1 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1B64C5C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    standFigureCollectList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v10 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1B64C5C(v10, v11);
    monitor = (UIStandFigureR_o *)v21.fields._current[1].monitor;
    if ( !monitor )
      sub_1B64C5C(0LL, v11);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0LL);
    v14 = (UIStandFigureR_o *)current[1].monitor;
    v15 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0LL);
    if ( !v14 )
      sub_1B64C5C(v16, v17);
    UIStandFigureR__RemoveCallback(v14, v15, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    this->fields.player = 0LL;
    sub_1B649A4(&this->fields.player);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
}


void __fastcall MyRoomSvtControl__svtVoicePlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v9; // x8
  struct ServantVoiceData_array *v10; // x8
  __int64 v11; // x9
  int32_t m_CancellationTokenSource_high; // w20
  int32_t asstName; // w21
  float FadeTime; // s0
  float v15; // s8
  UIStandFigureR_o *m_CancellationTokenSource; // x22
  System_Action_o *v17; // x23
  struct ServantVoiceData_array *v18; // x8
  __int64 v19; // x9
  struct PlayMakerFSM_o *fsm; // x25
  struct SePlayer_o *player; // x26
  float v22; // s0
  float v23; // s8
  unsigned __int64 v24; // x20
  __int64 v25; // x29
  int32_t v26; // w21
  int32_t v27; // w22
  UIStandFigureR_o *v28; // x23
  System_Action_o *v29; // x24

  v2 = this;
  if ( (byte_49FA5AE & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v4);
    this = (MyRoomSvtControl_o *)sub_1B64A00(&Method_MyRoomSvtControl_EndSetFace__, v5);
    byte_49FA5AE = 1;
  }
  if ( v2->fields.asstName && v2->fields.maxPlayCnt )
  {
    randomVoiceList = v2->fields.randomVoiceList;
    if ( !randomVoiceList )
      goto LABEL_39;
    playCnt = v2->fields.playCnt;
    max_length = randomVoiceList->max_length;
    if ( (int)playCnt < max_length )
    {
      if ( (unsigned int)playCnt >= max_length )
        goto LABEL_37;
      v9 = randomVoiceList->m_Items[playCnt];
      if ( !v9 )
        goto LABEL_39;
      v2->fields.vcName = v9->fields.id;
      sub_1B649A4(&v2->fields.vcName);
      this = (MyRoomSvtControl_o *)v2->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_2E585A8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
            (int)this < 2) )
      {
        v10 = v2->fields.randomVoiceList;
        if ( !v10 )
          goto LABEL_39;
        v11 = v2->fields.playCnt;
        if ( (unsigned int)v11 < v10->max_length )
        {
          this = (MyRoomSvtControl_o *)v10->m_Items[v11];
          if ( this )
          {
            m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
            asstName = (int32_t)this->fields.asstName;
            FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
            this = (MyRoomSvtControl_o *)v2->fields.standFigureCollectList;
            if ( this )
            {
              v15 = FadeTime;
              this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( this )
              {
                m_CancellationTokenSource = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                v17 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
                System_Action___ctor(v17, (Il2CppObject *)v2, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                if ( m_CancellationTokenSource )
                {
                  UIStandFigureR__SetFace_40651944(
                    m_CancellationTokenSource,
                    m_CancellationTokenSource_high,
                    asstName,
                    v17,
                    v15,
                    0LL);
                  return;
                }
              }
            }
          }
LABEL_39:
          sub_1B64C5C(this, method);
        }
LABEL_37:
        sub_1B64C64(this, method);
      }
      v18 = v2->fields.randomVoiceList;
      if ( !v18 )
        goto LABEL_39;
      v19 = v2->fields.playCnt;
      if ( (unsigned int)v19 >= v18->max_length )
        goto LABEL_37;
      this = (MyRoomSvtControl_o *)v18->m_Items[v19];
      if ( !this )
        goto LABEL_39;
      fsm = this->fields.fsm;
      player = this->fields.player;
      v22 = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
      if ( fsm )
      {
        if ( player )
        {
          v23 = v22;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.standFigureCollectList,
                                         (const MethodInfo_2E585A8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          if ( (_DWORD)this == (unsigned int)fsm->fields.m_CancellationTokenSource
            && (_DWORD)this == LODWORD(player->fields.cueSheetName)
            && (int)this >= 1 )
          {
            if ( (unsigned int)fsm->fields.m_CancellationTokenSource )
            {
              v24 = 0LL;
              v25 = (unsigned int)this - 1LL;
              while ( v24 < LODWORD(player->fields.cueSheetName) )
              {
                this = (MyRoomSvtControl_o *)v2->fields.standFigureCollectList;
                if ( !this )
                  goto LABEL_39;
                v26 = *((_DWORD *)&fsm->fields.fsm + v24);
                v27 = *((_DWORD *)&player->fields.objName + v24);
                this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               v24,
                                               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
                if ( !this )
                  goto LABEL_39;
                v28 = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                if ( v24 )
                {
                  if ( !v28 )
                    goto LABEL_39;
                  v29 = 0LL;
                }
                else
                {
                  v29 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
                  System_Action___ctor(v29, (Il2CppObject *)v2, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                  if ( !v28 )
                    goto LABEL_39;
                }
                UIStandFigureR__SetFace_40651944(v28, v26, v27, v29, v23, 0LL);
                if ( v25 == v24 )
                  return;
                if ( ++v24 >= LODWORD(fsm->fields.m_CancellationTokenSource) )
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

  if ( (byte_49FA5B5 & 1) == 0 )
  {
    sub_1B64A00(&MyRoomSvtControl___c_TypeInfo, v1);
    byte_49FA5B5 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(MyRoomSvtControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyRoomSvtControl___c_TypeInfo->static_fields->__9 = (struct MyRoomSvtControl___c_o *)v2;
  sub_1B649A4(MyRoomSvtControl___c_TypeInfo->static_fields);
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
  if ( (byte_49FA5B6 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, a);
    byte_49FA5B6 = 1;
  }
  v7 = value;
  return System_Int32__CompareTo_62190088((int32_t)&v7, v5, 0LL);
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
  if ( (byte_49FA5B7 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, x);
    sub_1B64A00(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v5);
    byte_49FA5B7 = 1;
  }
  priorityList = this->fields.priorityList;
  if ( !priorityList )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B64C5C)(0LL, x);
  return value == System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                    priorityList,
                    0,
                    (const MethodInfo_33FDB3C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__).fields.value;
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
    sub_1B64C5C(this, a);
  return System_Int32__Equals_62190236((int32_t)&v5, voice->fields.form, 0LL);
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
    sub_1B64C64(this, method);
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_1B64C5C(this, method);
  UIStandFigureR__SetFace_40651944(
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
    sub_1B64C5C(this, a);
  return System_Int32__Equals_62190236((int32_t)&v5, voice->fields.form, 0LL);
}