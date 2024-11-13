void __fastcall MyRoomSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B11B5C & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomSvtControl_TypeInfo, v1, v2);
    byte_4B11B5C = 1;
  }
  MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = 3;
}


void __fastcall MyRoomSvtControl___ctor(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_Dictionary_int__int__o *v23; // x20

  if ( (byte_4B11B5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13, v14);
    byte_4B11B5B = 1;
  }
  this->fields.volume = 1.0;
  v15 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.canPlayVoiceIdxList = v15;
  sub_1BCA784(&this->fields.canPlayVoiceIdxList, v15);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v19;
  sub_1BCA784(&this->fields.firstPlayVoiceList, v19);
  v23 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v20,
                                                               v21,
                                                               v22);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v23,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v23;
  sub_1BCA784(&this->fields.canFirstPlayVoiceIdxDic, v23);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PlayMakerFSM_o *v8; // x0
  __int64 v9; // x1
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v12; // x8
  struct SePlayer_o **p_player; // x0
  UnityEngine_Object_o *fsm; // x20

  if ( (byte_4B11B58 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23961/*"svtVoicePlay"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_5563/*"END_PLAY"*/, v6, v7);
    byte_4B11B58 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v8 = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    playCnt = this->fields.playCnt;
    if ( (int)playCnt < this->fields.maxPlayCnt )
    {
      randomVoiceList = this->fields.randomVoiceList;
      if ( randomVoiceList )
      {
        if ( (unsigned int)playCnt >= randomVoiceList->max_length )
          sub_1BCAA44(v8, v9);
        v12 = randomVoiceList->m_Items[playCnt];
        if ( v12 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_23961/*"svtVoicePlay"*/,
            v12->fields.delay,
            0LL);
          return;
        }
      }
LABEL_19:
      sub_1BCAA3C(v8, v9);
    }
    p_player = &this->fields.player;
    if ( this->fields.player )
    {
      *p_player = 0LL;
      sub_1BCA784(p_player, 0LL);
    }
    this->fields.playCnt = 0;
    this->fields.isValidVoice = 0;
    fsm = (UnityEngine_Object_o *)this->fields.fsm;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(fsm, 0LL, 0LL) )
    {
      v8 = this->fields.fsm;
      if ( !v8 )
        goto LABEL_19;
      PlayMakerFSM__SendEvent(v8, (System_String_o *)StringLiteral_5563/*"END_PLAY"*/, 0LL);
    }
  }
}


void __fastcall MyRoomSvtControl__EndSetFace(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v12; // x22
  __int64 v13; // x1
  struct SePlayer_o *v14; // x0
  struct SePlayer_o **p_player; // x19

  if ( (byte_4B11B57 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MyRoomSvtControl_EndPlay__, v5, v6);
    sub_1BCA7E0(&SoundManager_TypeInfo, v7, v8);
    byte_4B11B57 = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v13);
  v14 = SoundManager__playVoice_39419392(asstName, vcName, volume, v12, 0LL);
  this->fields.player = v14;
  p_player = &this->fields.player;
  sub_1BCA784(p_player, v14);
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
    sub_1BCAA44(this, method);
  return randomVoiceList->m_Items[0];
}


int32_t __fastcall MyRoomSvtControl__GetFormId(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v5; // x8

  if ( (byte_4B11B5A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, method, v2);
    byte_4B11B5A = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v5 = *(_QWORD *)&standFigureCollectList->fields._size) == 0 )
  {
    sub_1BCAA3C(standFigureCollectList, method);
  }
  return *(_DWORD *)(v5 + 56);
}


void __fastcall MyRoomSvtControl__PreloadFormAssets(
        MyRoomSvtControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *v34; // x19
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 bits; // x1
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_int__o *v40; // x20
  __int64 v41; // x2
  __int64 v42; // x3
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v44; // x26
  Il2CppObject *v45; // x23
  Il2CppClass *v46; // x1
  Il2CppObject *v47; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Predicate_int__o *v51; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  Il2CppObject *v58; // x21
  __int64 v59; // x0
  __int64 v60; // x1
  Il2CppObject *current; // x1
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  Il2CppClass *klass; // x8
  UIStandFigureR_o *namespaze; // x22
  System_Action_o *v68; // x23
  __int64 v69; // x0
  __int64 v70; // x1
  MyRoomSvtControl_o *v71; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B11B54 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Exists__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v22, v23);
    sub_1BCA7E0(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__, v26, v27);
    sub_1BCA7E0(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, v30, v31);
    sub_1BCA7E0(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v32, v33);
    byte_4B11B54 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v34 = (Il2CppObject *)sub_1BCAA2C(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, callback, method, v3);
  System_Object___ctor(v34, 0LL);
  if ( !v34 )
    goto LABEL_25;
  v34[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v34[1], this);
  v34[1].monitor = callback;
  sub_1BCA784(&v34[1].monitor, callback);
  v40 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v37,
                                                    v38,
                                                    v39);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v71 = this;
  if ( !randomVoiceList )
    goto LABEL_25;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v44 = 0LL;
    while ( 1 )
    {
      v45 = (Il2CppObject *)sub_1BCAA2C(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, bits, v41, v42);
      System_Object___ctor(v45, 0LL);
      if ( v44 >= randomVoiceList->max_length )
        sub_1BCAA44(standFigureCollectList, bits);
      if ( !v45 )
        break;
      v46 = (Il2CppClass *)randomVoiceList->m_Items[v44];
      v45[1].klass = v46;
      v47 = v45 + 1;
      sub_1BCA784(&v45[1], v46);
      v51 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v48, v49, v50);
      System_Predicate_int____ctor(
        v51,
        v45,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        0LL);
      if ( !v40 )
        break;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v40,
                                                                              (System_Predicate_T__o *)v51,
                                                                              (const MethodInfo_3585244 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !v47->klass )
          break;
        bits = v47->klass->_1.this_arg.bits;
        items = v40->fields._items;
        v53 = Method_System_Collections_Generic_List_int__Add__;
        ++v40->fields._version;
        if ( !items )
          break;
        size = v40->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v40,
            bits,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v40->fields._size = size + 1;
          items->m_Items[size + 1] = bits;
        }
      }
      if ( (__int64)++v44 >= (int)randomVoiceList->max_length )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BCAA3C(standFigureCollectList, bits);
  }
LABEL_17:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v71->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    standFigureCollectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v73 = v72;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v58 = (Il2CppObject *)sub_1BCAA2C(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v55, v56, v57);
    System_Object___ctor(v58, 0LL);
    if ( !v58 )
      sub_1BCAA3C(v59, v60);
    v58[1].monitor = v34;
    sub_1BCA784(&v58[1].monitor, v34);
    current = v73.fields._current;
    v58[1].klass = (Il2CppClass *)v73.fields._current;
    v62 = sub_1BCA784(&v58[1], current);
    klass = v58[1].klass;
    if ( !klass )
      sub_1BCAA3C(v62, v63);
    namespaze = (UIStandFigureR_o *)klass->_1.namespaze;
    v68 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v63, v64, v65);
    System_Action___ctor(v68, v58, Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, 0LL);
    if ( !namespaze )
      sub_1BCAA3C(v69, v70);
    UIStandFigureR__PreloadFormAssets(namespaze, v40, v68, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void __fastcall MyRoomSvtControl__SetSvtFigureCollect(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  this->fields.standFigureCollectList = collects;
  sub_1BCA784(&this->fields.standFigureCollectList, collects);
}


bool __fastcall MyRoomSvtControl__SetVoiceData(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x0
  Il2CppObject *v53; // x20
  System_Collections_Generic_IEnumerable_T__o *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_List_KeyValuePair_int__int___o *v58; // x21
  __int64 Item; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Collections_Generic_List_KeyValuePair_int__int___o *klass; // x21
  System_Comparison_KeyValuePair_int__int___o *v64; // x22
  Il2CppObject *v65; // x23
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_KeyValuePair_int__int___o *v67; // x21
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Predicate_KeyValuePair_int__int___o *v71; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *All; // x20
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  System_Random_o *v76; // x21
  int32_t v77; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x21
  int32_t v79; // w22
  struct ServantVoiceData_array *v80; // x0
  System_Collections_Generic_Dictionary_int__int__o *v81; // x23
  System_Random_o *v83; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int32_t v85; // w21
  int v86; // w20
  struct ServantVoiceData_array *v87; // x0
  struct System_Collections_Generic_List_int__o *v88; // x8
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_String_o *asstName; // x0
  struct ServantVoiceData_array *v91; // x8
  struct ServantVoiceData_array *v92; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v93; // x8
  int32_t v94; // w21
  int size; // w9
  __int64 v96; // x9
  _QWORD *v97; // x10
  __int64 v98; // x11

  if ( (byte_4B11B53 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_KeyValuePair_int__int___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__RemoveAt__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___76771928, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v37, v38);
    sub_1BCA7E0(&System_Predicate_KeyValuePair_int__int___TypeInfo, v39, v40);
    sub_1BCA7E0(&System_Random_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__, v43, v44);
    sub_1BCA7E0(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__, v45, v46);
    sub_1BCA7E0(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, v47, v48);
    sub_1BCA7E0(&MyRoomSvtControl___c_TypeInfo, v49, v50);
    byte_4B11B53 = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_31FCF28 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v53 = (Il2CppObject *)sub_1BCAA2C(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, method, v2, v3);
    System_Object___ctor(v53, 0LL);
    v54 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v58 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1BCAA2C(
                                                                         System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo,
                                                                         v55,
                                                                         v56,
                                                                         v57);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_55504560(
      v58,
      v54,
      (const MethodInfo_34EEEB0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___76771928);
    if ( !v53 )
      goto LABEL_54;
    v53[1].klass = (Il2CppClass *)v58;
    sub_1BCA784(&v53[1], v58);
    klass = (System_Collections_Generic_List_KeyValuePair_int__int___o *)v53[1].klass;
    Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    if ( !MyRoomSvtControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomSvtControl___c_TypeInfo, v60);
      Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    }
    v64 = *(System_Comparison_KeyValuePair_int__int___o **)(*(_QWORD *)(Item + 184) + 8LL);
    if ( !v64 )
    {
      if ( !*(_DWORD *)(Item + 224) )
      {
        j_il2cpp_runtime_class_init_0(Item, v60);
        Item = (__int64)MyRoomSvtControl___c_TypeInfo;
      }
      v65 = **(Il2CppObject ***)(Item + 184);
      v64 = (System_Comparison_KeyValuePair_int__int___o *)sub_1BCAA2C(
                                                             System_Comparison_KeyValuePair_int__int___TypeInfo,
                                                             v60,
                                                             v61,
                                                             v62);
      System_Comparison_KeyValuePair_int__int_____ctor(
        v64,
        v65,
        Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__,
        0LL);
      static_fields = MyRoomSvtControl___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = v64;
      Item = sub_1BCA784(&static_fields->__9__21_0, v64);
    }
    if ( !klass )
      goto LABEL_54;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_55513092(
      klass,
      (System_Comparison_T__o *)v64,
      (const MethodInfo_34F1004 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v67 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)v53[1].klass;
    v71 = (System_Predicate_KeyValuePair_int__int___o *)sub_1BCAA2C(
                                                          System_Predicate_KeyValuePair_int__int___TypeInfo,
                                                          v68,
                                                          v69,
                                                          v70);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v71,
      v53,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      0LL);
    if ( !v67 )
      goto LABEL_54;
    All = (System_Collections_Generic_List_KeyValuePair_int__int___o *)System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
                                                                         v67,
                                                                         (System_Predicate_T__o *)v71,
                                                                         (const MethodInfo_34EFCCC *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v76 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, v73, v74, v75);
    System_Random___ctor(v76, 0LL);
    if ( !All )
      goto LABEL_54;
    if ( !v76 )
      goto LABEL_54;
    v77 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v76->klass->vtable._7_Next.method)(
            v76,
            (unsigned int)All->fields._size,
            v76->klass->vtable._8_NextDouble.methodPtr);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v79 = v77;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v77,
                      (const MethodInfo_34EF2EC *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !firstPlayVoiceList )
      goto LABEL_54;
    v80 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)firstPlayVoiceList,
                                             Item,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v80;
    sub_1BCA784(&this->fields.randomVoiceList, v80);
    v81 = this->fields.canFirstPlayVoiceIdxDic;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v79,
                      (const MethodInfo_34EF2EC *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !v81 )
      goto LABEL_54;
    System_Collections_Generic_Dictionary_int__int___Remove(
      v81,
      Item,
      (const MethodInfo_31FE62C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Item = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Item )
      goto LABEL_54;
    Item = System_Collections_Generic_Dictionary_int__int___get_Count(
             (System_Collections_Generic_Dictionary_int__int__o *)Item,
             (const MethodInfo_31FCF28 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
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
                 (const MethodInfo_35A28FC *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Item != -1 )
        {
          v60 = (unsigned int)Item;
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          Item = System_Collections_Generic_List_int___Remove(
                   (System_Collections_Generic_List_int__o *)Item,
                   v60,
                   (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v83 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, method, v2, v3);
    System_Random___ctor(v83, 0LL);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_54;
    if ( !v83 )
      goto LABEL_54;
    Item = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v83->klass->vtable._7_Next.method)(
             v83,
             (unsigned int)canPlayVoiceIdxList->fields._size,
             v83->klass->vtable._8_NextDouble.methodPtr);
    if ( !this->fields.canPlayVoiceIdxList )
      goto LABEL_54;
    v85 = Item;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.canPlayVoiceIdxList,
             Item,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !this->fields.voiceList )
      goto LABEL_54;
    v86 = Item;
    v87 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this->fields.voiceList,
                                             Item,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v87;
    sub_1BCA784(&this->fields.randomVoiceList, v87);
    Item = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Item )
      goto LABEL_54;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Item,
      v85,
      (const MethodInfo_35863B8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v88 = this->fields.canPlayVoiceIdxList;
    if ( !v88 )
      goto LABEL_54;
    if ( !v88->fields._size )
    {
      v93 = this->fields.voiceList;
      if ( !v93 )
        goto LABEL_54;
      v94 = 0;
      while ( 1 )
      {
        size = v93->fields._size;
        if ( v94 >= size )
          break;
        if ( v86 != v94 || size <= 1 )
        {
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          v96 = *(_QWORD *)(Item + 16);
          v97 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(Item + 28);
          if ( !v96 )
            goto LABEL_54;
          v98 = *(int *)(Item + 24);
          if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v94,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
            v93 = this->fields.voiceList;
          }
          else
          {
            *(_DWORD *)(Item + 24) = v98 + 1;
            *(_DWORD *)(v96 + 4 * v98 + 32) = v94;
          }
        }
        ++v94;
        if ( !v93 )
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
    v91 = this->fields.randomVoiceList;
    if ( !v91 )
      goto LABEL_54;
    if ( this->fields.playCnt < (signed int)v91->max_length )
      this->fields.isValidVoice = 1;
  }
  v92 = this->fields.randomVoiceList;
  if ( !v92 )
LABEL_54:
    sub_1BCAA3C(Item, v60);
  return this->fields.playCnt < (signed int)v92->max_length;
}


void __fastcall MyRoomSvtControl__initFirstPlayVoiceList(
        MyRoomSvtControl_o *this,
        ServantVoiceEntity_o *svtVoiceEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  void *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantEntity_o *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  int32_t v29; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x9
  const MethodInfo *v31; // x2
  int32_t v32; // w0
  __int64 v33; // x1
  int32_t v34; // w22
  int32_t j; // w23
  BalanceConfig_c *v36; // x0
  int32_t svtId; // w24
  int32_t FriendshipRank; // w0
  MyRoomSvtControl_c *v39; // x8
  int32_t v40; // w24
  int32_t SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP; // w9
  System_Collections_Generic_List_ServantVoiceData____o *MyRoomFriendShipVoiceList; // x0
  const MethodInfo *v43; // x2
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4B11B50 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, svtVoiceEnt, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v15, v16);
    sub_1BCA7E0(&MyRoomSvtControl_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B11B50 = 1;
  }
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_34;
  if ( !MasterData_object )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_QWORD *)Instance + 14),
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  v26 = (UserServantEntity_o *)Instance;
  v28 = *((_QWORD *)Instance + 10);
  v27 = *((_QWORD *)Instance + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v46.fields.currentCryptoKey = v28;
  *(_QWORD *)&v46.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v46, 0LL);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v29;
  if ( voiceList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      (System_Collections_Generic_List_object__o *)voiceList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v44;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v31) )
    {
      ;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v26, 0LL);
  if ( !svtVoiceEnt )
LABEL_34:
    sub_1BCAA3C(Instance, v24);
  v32 = ServantVoiceEntity__FriendShipRankWithVoice(svtVoiceEnt, (int32_t)Instance, 0LL);
  if ( v32 >= 2 )
  {
    v34 = v32;
    for ( j = 1; j != v34; ++j )
    {
      v36 = BalanceConfig_TypeInfo;
      svtId = this->fields.svtId;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v33);
        v36 = BalanceConfig_TypeInfo;
      }
      if ( svtId != v36->static_fields->ServantIdSwimsuitMelt )
        goto LABEL_26;
      FriendshipRank = UserServantEntity__getFriendshipRank(v26, 0LL);
      v39 = MyRoomSvtControl_TypeInfo;
      v40 = FriendshipRank;
      if ( !MyRoomSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomSvtControl_TypeInfo, v33);
        v39 = MyRoomSvtControl_TypeInfo;
      }
      SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = v39->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      if ( v40 < SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
        goto LABEL_26;
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39, v33);
        SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      }
      if ( j >= SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
      {
LABEL_26:
        MyRoomFriendShipVoiceList = ServantVoiceEntity__getMyRoomFriendShipVoiceList(svtVoiceEnt, j, 0LL);
        if ( MyRoomFriendShipVoiceList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v44,
            (System_Collections_Generic_List_object__o *)MyRoomFriendShipVoiceList,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v44;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &i,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields._current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v43);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &i,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x20
  __int64 bits; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v30; // x25
  Il2CppObject *v31; // x22
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  Il2CppClass *v33; // x1
  Il2CppObject *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Predicate_int__o *v38; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  __int64 v42; // x2
  __int64 v43; // x3
  UIStandFigureR_o *v44; // x21
  System_Action_o *v45; // x22
  struct ServantVoiceData_array *v46; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v49; // x8
  struct System_String_StaticFields *static_fields; // x8
  MyRoomSvtControl_o *v52; // [xsp+8h] [xbp-68h]

  if ( (byte_4B11B55 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Exists__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_MyRoomSvtControl_svtVoicePlay__, v15, v16);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&string_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, v21, v22);
    sub_1BCA7E0(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, v23, v24);
    byte_4B11B55 = 1;
  }
  v25 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_24;
  v52 = this;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      v31 = (Il2CppObject *)sub_1BCAA2C(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, bits, v27, v28);
      System_Object___ctor(v31, 0LL);
      if ( v30 >= randomVoiceList->max_length )
        break;
      if ( !v31 )
        goto LABEL_26;
      v33 = (Il2CppClass *)randomVoiceList->m_Items[v30];
      v31[1].klass = v33;
      v34 = v31 + 1;
      sub_1BCA784(&v31[1], v33);
      v38 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v35, v36, v37);
      System_Predicate_int____ctor(v38, v31, Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, 0LL);
      if ( !v25 )
        goto LABEL_26;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v25,
                                                                              (System_Predicate_T__o *)v38,
                                                                              (const MethodInfo_3585244 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !v34->klass )
          goto LABEL_26;
        bits = v34->klass->_1.this_arg.bits;
        items = v25->fields._items;
        v40 = Method_System_Collections_Generic_List_int__Add__;
        ++v25->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v25,
            bits,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v25->fields._size = size + 1;
          items->m_Items[size + 1] = bits;
        }
      }
      if ( (__int64)++v30 >= (int)randomVoiceList->max_length )
        goto LABEL_16;
    }
LABEL_27:
    sub_1BCAA44(standFigureCollectList, bits);
  }
LABEL_16:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v52->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v44 = *(UIStandFigureR_o **)&standFigureCollectList->fields._size,
        v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, bits, v42, v43),
        System_Action___ctor(v45, (Il2CppObject *)v52, Method_MyRoomSvtControl_svtVoicePlay__, 0LL),
        !v44)
    || (UIStandFigureR__PreloadFormAssets(v44, v25, v45, 0LL), (v46 = v52->fields.randomVoiceList) == 0LL) )
  {
LABEL_26:
    sub_1BCAA3C(standFigureCollectList, bits);
  }
  playCnt = v52->fields.playCnt;
  max_length = v46->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_24:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_27;
  v49 = (struct System_String_StaticFields *)v46->m_Items[playCnt];
  if ( !v49 )
    goto LABEL_26;
  static_fields = v49 + 2;
  return static_fields->Empty;
}


void __fastcall MyRoomSvtControl__setFirstPlayVoice(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *voice,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  ServantVoiceData_o *v15; // x8
  VoiceMaster_o *v16; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  ServantVoiceData_o *v18; // x9
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x22
  int32_t size; // w23
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v24; // x8

  if ( (byte_4B11B51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoiceMaster___, voice, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B11B51 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !voice )
    goto LABEL_19;
  if ( !voice->max_length )
    goto LABEL_20;
  v15 = voice->m_Items[0];
  if ( !v15 )
    goto LABEL_19;
  v16 = (VoiceMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)VoiceMaster__getFlagRequestNumber(
                                (VoiceMaster_o *)Instance,
                                this->fields.svtId,
                                v15->fields.id,
                                0,
                                0LL);
  if ( !(_DWORD)Instance )
    return;
  firstPlayVoiceList = this->fields.firstPlayVoiceList;
  if ( !firstPlayVoiceList )
LABEL_19:
    sub_1BCAA3C(Instance, v14);
  if ( !voice->max_length )
LABEL_20:
    sub_1BCAA44(Instance, v14);
  v18 = voice->m_Items[0];
  if ( !v18 )
    goto LABEL_19;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  size = firstPlayVoiceList->fields._size;
  Instance = (DataManager_o *)VoiceMaster__getFirstPlayPriority(v16, this->fields.svtId, v18->fields.id, 0LL);
  if ( !canFirstPlayVoiceIdxDic )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__int___Add(
    canFirstPlayVoiceIdxDic,
    size,
    (int32_t)Instance,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  Instance = (DataManager_o *)this->fields.firstPlayVoiceList;
  if ( !Instance )
    goto LABEL_19;
  v21 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v22 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v21 )
    goto LABEL_19;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      &voice->obj,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = v21 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v24 + 32) = voice;
    sub_1BCA784(v24 + 32, voice);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *list,
        System_String_o *assetName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceList; // x20
  System_Collections_Generic_List_int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int v19; // w9
  struct System_Collections_Generic_List_ServantVoiceData____o *v20; // x8
  int32_t v21; // w21
  struct System_Int32_array *items; // x9
  _QWORD *v23; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  int32_t v26; // w2
  int v27; // w9

  if ( (byte_4B11B4F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, list, assetName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v13, v14);
    byte_4B11B4F = 1;
  }
  this->fields.asstName = assetName;
  this->fields.playCnt = 0;
  sub_1BCA784(&this->fields.asstName, assetName);
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)sub_1BCA784(&this->fields.voiceList, list);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_21;
    v19 = canPlayVoiceIdxList->fields._version + 1;
    canPlayVoiceIdxList->fields._size = 0;
    canPlayVoiceIdxList->fields._version = v19;
    v20 = *p_voiceList;
    if ( *p_voiceList )
    {
      v21 = 0;
      while ( v21 < v20->fields._size )
      {
        canFirstPlayVoiceIdxDic = this->fields.canPlayVoiceIdxList;
        if ( canFirstPlayVoiceIdxDic )
        {
          items = canFirstPlayVoiceIdxDic->fields._items;
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++canFirstPlayVoiceIdxDic->fields._version;
          if ( items )
          {
            size = canFirstPlayVoiceIdxDic->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                canFirstPlayVoiceIdxDic,
                v21,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              v20 = *p_voiceList;
            }
            else
            {
              canFirstPlayVoiceIdxDic->fields._size = size + 1;
              items->m_Items[size + 1] = v21;
            }
            ++v21;
            if ( v20 )
              continue;
          }
        }
        goto LABEL_21;
      }
    }
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_21;
    v26 = firstPlayVoiceList->fields._size;
    v27 = firstPlayVoiceList->fields._version + 1;
    firstPlayVoiceList->fields._size = 0;
    firstPlayVoiceList->fields._version = v27;
    if ( v26 >= 1 )
      System_Array__Clear((System_Array_o *)firstPlayVoiceList->fields._items, 0, v26, 0LL);
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic;
    if ( !canFirstPlayVoiceIdxDic )
LABEL_21:
      sub_1BCAA3C(canFirstPlayVoiceIdxDic, v17);
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canFirstPlayVoiceIdxDic,
      (const MethodInfo_31FD3F4 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice_32192120(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4B11B52 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, data, assetName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___76773008, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9, v10);
    byte_4B11B52 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       data,
                                                       assetName,
                                                       method);
  System_Collections_Generic_List_object____ctor_56235160(
    v11,
    1,
    (const MethodInfo_35A1498 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___76773008);
  if ( !v11
    || (items = v11->fields._items,
        v15 = Method_System_Collections_Generic_List_ServantVoiceData____Add__,
        ++v11->fields._version,
        !items) )
  {
    sub_1BCAA3C(v12, v13);
  }
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      &data->obj,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v17[4] = (Il2CppClass *)data;
    sub_1BCA784(v17 + 4, data);
  }
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v11, assetName, v18);
}


void __fastcall MyRoomSvtControl__stopVoice(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UIStandFigureR_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B11B59 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_MyRoomSvtControl_EndSetFace__, v12, v13);
    sub_1BCA7E0(&SoundManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_23961/*"svtVoicePlay"*/, v16, v17);
    byte_4B11B59 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    standFigureCollectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v19 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1BCAA3C(v19, v20);
    monitor = (UIStandFigureR_o *)v34.fields._current[1].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v20);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0LL);
    v23 = (UIStandFigureR_o *)current[1].monitor;
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0LL);
    if ( !v23 )
      sub_1BCAA3C(v28, v29);
    UIStandFigureR__RemoveCallback(v23, v27, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( this->fields.player )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70138824(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_23961/*"svtVoicePlay"*/,
      0LL);
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v30);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    this->fields.player = 0LL;
    sub_1BCA784(&this->fields.player, 0LL);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
}


void __fastcall MyRoomSvtControl__svtVoicePlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomSvtControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v13; // x8
  struct System_String_o *id; // x1
  struct ServantVoiceData_array *v15; // x8
  __int64 v16; // x9
  int32_t m_CancellationTokenSource_high; // w20
  int32_t asstName; // w21
  float FadeTime; // s0
  float v20; // s8
  __int64 v21; // x2
  __int64 v22; // x3
  UIStandFigureR_o *m_CancellationTokenSource; // x22
  System_Action_o *v24; // x23
  struct ServantVoiceData_array *v25; // x8
  __int64 v26; // x9
  struct PlayMakerFSM_o *fsm; // x25
  struct SePlayer_o *player; // x26
  float v29; // s0
  float v30; // s8
  unsigned __int64 v31; // x20
  __int64 v32; // x29
  int32_t v33; // w21
  int32_t v34; // w22
  __int64 v35; // x2
  __int64 v36; // x3
  UIStandFigureR_o *v37; // x23
  System_Action_o *v38; // x24

  v3 = this;
  if ( (byte_4B11B56 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v6, v7);
    this = (MyRoomSvtControl_o *)sub_1BCA7E0(&Method_MyRoomSvtControl_EndSetFace__, v8, v9);
    byte_4B11B56 = 1;
  }
  if ( v3->fields.asstName && v3->fields.maxPlayCnt )
  {
    randomVoiceList = v3->fields.randomVoiceList;
    if ( !randomVoiceList )
      goto LABEL_39;
    playCnt = v3->fields.playCnt;
    max_length = randomVoiceList->max_length;
    if ( (int)playCnt < max_length )
    {
      if ( (unsigned int)playCnt >= max_length )
        goto LABEL_37;
      v13 = randomVoiceList->m_Items[playCnt];
      if ( !v13 )
        goto LABEL_39;
      id = v13->fields.id;
      v3->fields.vcName = id;
      sub_1BCA784(&v3->fields.vcName, id);
      this = (MyRoomSvtControl_o *)v3->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
            (int)this < 2) )
      {
        v15 = v3->fields.randomVoiceList;
        if ( !v15 )
          goto LABEL_39;
        v16 = v3->fields.playCnt;
        if ( (unsigned int)v16 < v15->max_length )
        {
          this = (MyRoomSvtControl_o *)v15->m_Items[v16];
          if ( this )
          {
            m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
            asstName = (int32_t)this->fields.asstName;
            FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
            this = (MyRoomSvtControl_o *)v3->fields.standFigureCollectList;
            if ( this )
            {
              v20 = FadeTime;
              this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( this )
              {
                m_CancellationTokenSource = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v21, v22);
                System_Action___ctor(v24, (Il2CppObject *)v3, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                if ( m_CancellationTokenSource )
                {
                  UIStandFigureR__SetFace_41776260(
                    m_CancellationTokenSource,
                    m_CancellationTokenSource_high,
                    asstName,
                    v24,
                    v20,
                    0LL);
                  return;
                }
              }
            }
          }
LABEL_39:
          sub_1BCAA3C(this, method);
        }
LABEL_37:
        sub_1BCAA44(this, method);
      }
      v25 = v3->fields.randomVoiceList;
      if ( !v25 )
        goto LABEL_39;
      v26 = v3->fields.playCnt;
      if ( (unsigned int)v26 >= v25->max_length )
        goto LABEL_37;
      this = (MyRoomSvtControl_o *)v25->m_Items[v26];
      if ( !this )
        goto LABEL_39;
      fsm = this->fields.fsm;
      player = this->fields.player;
      v29 = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
      if ( fsm )
      {
        if ( player )
        {
          v30 = v29;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.standFigureCollectList,
                                         (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          if ( (_DWORD)this == (unsigned int)fsm->fields.m_CancellationTokenSource
            && (_DWORD)this == LODWORD(player->fields.cueSheetName)
            && (int)this >= 1 )
          {
            if ( (unsigned int)fsm->fields.m_CancellationTokenSource )
            {
              v31 = 0LL;
              v32 = (unsigned int)this - 1LL;
              while ( v31 < LODWORD(player->fields.cueSheetName) )
              {
                this = (MyRoomSvtControl_o *)v3->fields.standFigureCollectList;
                if ( !this )
                  goto LABEL_39;
                v33 = *((_DWORD *)&fsm->fields.fsm + v31);
                v34 = *((_DWORD *)&player->fields.objName + v31);
                this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               v31,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
                if ( !this )
                  goto LABEL_39;
                v37 = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                if ( v31 )
                {
                  if ( !v37 )
                    goto LABEL_39;
                  v38 = 0LL;
                }
                else
                {
                  v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v35, v36);
                  System_Action___ctor(v38, (Il2CppObject *)v3, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                  if ( !v37 )
                    goto LABEL_39;
                }
                UIStandFigureR__SetFace_41776260(v37, v33, v34, v38, v30, 0LL);
                if ( v32 == v31 )
                  return;
                if ( ++v31 >= LODWORD(fsm->fields.m_CancellationTokenSource) )
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11B5D & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomSvtControl___c_TypeInfo, v1, v2);
    byte_4B11B5D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MyRoomSvtControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MyRoomSvtControl___c_TypeInfo->static_fields->__9 = (struct MyRoomSvtControl___c_o *)v4;
  sub_1BCA784(MyRoomSvtControl___c_TypeInfo->static_fields, v4);
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
  if ( (byte_4B11B5E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, a, b);
    byte_4B11B5E = 1;
  }
  v7 = value;
  return System_Int32__CompareTo_63206508((int32_t)&v7, v5, 0LL);
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
  __int64 v6; // x2
  System_Collections_Generic_List_KeyValuePair_int__int___o *priorityList; // x0

  value = x.fields.value;
  if ( (byte_4B11B5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, x, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v5, v6);
    byte_4B11B5F = 1;
  }
  priorityList = this->fields.priorityList;
  if ( !priorityList )
    sub_1BCAA3C(0LL, x);
  return value == System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                    priorityList,
                    0,
                    (const MethodInfo_34EF2EC *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__).fields.value;
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(this, *(_QWORD *)&a);
  return System_Int32__Equals_63206656((int32_t)&v5, voice->fields.form, 0LL);
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
    sub_1BCAA44(this, method);
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_1BCAA3C(this, method);
  UIStandFigureR__SetFace_41776260(
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(this, *(_QWORD *)&a);
  return System_Int32__Equals_63206656((int32_t)&v5, voice->fields.form, 0LL);
}