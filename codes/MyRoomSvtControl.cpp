void __fastcall MyRoomSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F7EA4 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomSvtControl_TypeInfo, v1);
    byte_49F7EA4 = 1;
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_int__int__o *v15; // x20

  if ( (byte_49F7EA3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    byte_49F7EA3 = 1;
  }
  this->fields.volume = 1.0;
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.canPlayVoiceIdxList = v9;
  sub_1B6406C(&this->fields.canPlayVoiceIdxList);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v12;
  sub_1B6406C(&this->fields.firstPlayVoiceList);
  v15 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v13,
                                                               v14);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v15,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v15;
  sub_1B6406C(&this->fields.canFirstPlayVoiceIdxDic);
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

  if ( (byte_49F7EA0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_23616/*"svtVoicePlay"*/, v3);
    sub_1B640C8(&StringLiteral_5461/*"END_PLAY"*/, v4);
    byte_49F7EA0 = 1;
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
          sub_1B6432C(v5, v6);
        v9 = randomVoiceList->m_Items[playCnt];
        if ( v9 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_23616/*"svtVoicePlay"*/,
            v9->fields.delay,
            0LL);
          return;
        }
      }
LABEL_19:
      sub_1B64324(v5);
    }
    p_player = &this->fields.player;
    if ( this->fields.player )
    {
      *p_player = 0LL;
      sub_1B6406C(p_player);
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
      PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_5461/*"END_PLAY"*/, 0LL);
    }
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
  struct SePlayer_o **p_player; // x19

  if ( (byte_49F7E9F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_MyRoomSvtControl_EndPlay__, v4);
    sub_1B640C8(&SoundManager_TypeInfo, v5);
    byte_49F7E9F = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  this->fields.player = SoundManager__playVoice_38387180(asstName, vcName, volume, v9, 0LL);
  p_player = &this->fields.player;
  sub_1B6406C(p_player);
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
    sub_1B6432C(this, method);
  return randomVoiceList->m_Items[0];
}


int32_t __fastcall MyRoomSvtControl__GetFormId(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v4; // x8

  if ( (byte_49F7EA2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, method);
    byte_49F7EA2 = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v4 = *(_QWORD *)&standFigureCollectList->fields._size) == 0 )
  {
    sub_1B64324(standFigureCollectList);
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
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_int__o *v23; // x20
  __int64 bits; // x1
  __int64 v25; // x2
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v27; // x26
  Il2CppObject *v28; // x23
  __int64 v29; // x1
  Il2CppObject *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  System_Predicate_int__o *v33; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *v39; // x21
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  Il2CppClass *klass; // x8
  UIStandFigureR_o *namespaze; // x22
  System_Action_o *v46; // x23
  __int64 v47; // x0
  MyRoomSvtControl_o *v48; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49F7E9C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Exists__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v13);
    sub_1B640C8(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, v14);
    sub_1B640C8(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__, v15);
    sub_1B640C8(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, v16);
    sub_1B640C8(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, v17);
    sub_1B640C8(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v18);
    byte_49F7E9C = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v19 = (Il2CppObject *)sub_1B64314(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo, callback, method);
  System_Object___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_25;
  v19[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v19[1]);
  v19[1].monitor = callback;
  sub_1B6406C(&v19[1].monitor);
  v23 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v21, v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v48 = this;
  if ( !randomVoiceList )
    goto LABEL_25;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      v28 = (Il2CppObject *)sub_1B64314(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo, bits, v25);
      System_Object___ctor(v28, 0LL);
      if ( v27 >= randomVoiceList->max_length )
        sub_1B6432C(standFigureCollectList, v29);
      if ( !v28 )
        break;
      v28[1].klass = (Il2CppClass *)randomVoiceList->m_Items[v27];
      v30 = v28 + 1;
      sub_1B6406C(&v28[1]);
      v33 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v31, v32);
      System_Predicate_int____ctor(
        v33,
        v28,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        0LL);
      if ( !v23 )
        break;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v23,
                                                                              (System_Predicate_T__o *)v33,
                                                                              (const MethodInfo_34904E8 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !v30->klass )
          break;
        bits = v30->klass->_1.this_arg.bits;
        items = v23->fields._items;
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++v23->fields._version;
        if ( !items )
          break;
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            bits,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v23->fields._size = size + 1;
          items->m_Items[size + 1] = bits;
        }
      }
      if ( (__int64)++v27 >= (int)randomVoiceList->max_length )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B64324(standFigureCollectList);
  }
LABEL_17:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v48->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    standFigureCollectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v50 = v49;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v39 = (Il2CppObject *)sub_1B64314(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo, v37, v38);
    System_Object___ctor(v39, 0LL);
    if ( !v39 )
      sub_1B64324(v40);
    v39[1].monitor = v19;
    sub_1B6406C(&v39[1].monitor);
    v39[1].klass = (Il2CppClass *)v50.fields._current;
    v41 = sub_1B6406C(&v39[1]);
    klass = v39[1].klass;
    if ( !klass )
      sub_1B64324(v41);
    namespaze = (UIStandFigureR_o *)klass->_1.namespaze;
    v46 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v42, v43);
    System_Action___ctor(v46, v39, Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, 0LL);
    if ( !namespaze )
      sub_1B64324(v47);
    UIStandFigureR__PreloadFormAssets(namespaze, v23, v46, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void __fastcall MyRoomSvtControl__SetSvtFigureCollect(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  this->fields.standFigureCollectList = collects;
  sub_1B6406C(&this->fields.standFigureCollectList);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x0
  Il2CppObject *v29; // x20
  System_Collections_Generic_IEnumerable_T__o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_KeyValuePair_int__int___o *v33; // x21
  __int64 Item; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_KeyValuePair_int__int___o *klass; // x21
  System_Comparison_KeyValuePair_int__int___o *v38; // x22
  Il2CppObject *v39; // x23
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_KeyValuePair_int__int___o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  System_Predicate_KeyValuePair_int__int___o *v44; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *All; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  System_Random_o *v48; // x21
  int32_t v49; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x21
  int32_t v51; // w22
  System_Collections_Generic_Dictionary_int__int__o *v52; // x23
  int32_t v53; // w1
  System_Random_o *v55; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int32_t v57; // w21
  int v58; // w20
  struct System_Collections_Generic_List_int__o *v59; // x8
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_String_o *asstName; // x0
  struct ServantVoiceData_array *v62; // x8
  struct ServantVoiceData_array *v63; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v64; // x8
  int32_t v65; // w21
  int size; // w9
  __int64 v67; // x9
  _QWORD *v68; // x10
  __int64 v69; // x11

  if ( (byte_49F7E9B & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_KeyValuePair_int__int___TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__RemoveAt__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___75641840, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v20);
    sub_1B640C8(&System_Predicate_KeyValuePair_int__int___TypeInfo, v21);
    sub_1B640C8(&System_Random_TypeInfo, v22);
    sub_1B640C8(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__, v23);
    sub_1B640C8(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__, v24);
    sub_1B640C8(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, v25);
    sub_1B640C8(&MyRoomSvtControl___c_TypeInfo, v26);
    byte_49F7E9B = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_311AB68 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v29 = (Il2CppObject *)sub_1B64314(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo, method, v2);
    System_Object___ctor(v29, 0LL);
    v30 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v33 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1B64314(
                                                                         System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo,
                                                                         v31,
                                                                         v32);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_54504972(
      v33,
      v30,
      (const MethodInfo_33FAE0C *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___75641840);
    if ( !v29 )
      goto LABEL_54;
    v29[1].klass = (Il2CppClass *)v33;
    sub_1B6406C(&v29[1]);
    klass = (System_Collections_Generic_List_KeyValuePair_int__int___o *)v29[1].klass;
    Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    if ( !MyRoomSvtControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomSvtControl___c_TypeInfo);
      Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    }
    v38 = *(System_Comparison_KeyValuePair_int__int___o **)(*(_QWORD *)(Item + 184) + 8LL);
    if ( !v38 )
    {
      if ( !*(_DWORD *)(Item + 224) )
      {
        j_il2cpp_runtime_class_init_0(Item);
        Item = (__int64)MyRoomSvtControl___c_TypeInfo;
      }
      v39 = **(Il2CppObject ***)(Item + 184);
      v38 = (System_Comparison_KeyValuePair_int__int___o *)sub_1B64314(
                                                             System_Comparison_KeyValuePair_int__int___TypeInfo,
                                                             v35,
                                                             v36);
      System_Comparison_KeyValuePair_int__int_____ctor(
        v38,
        v39,
        Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__,
        0LL);
      static_fields = MyRoomSvtControl___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = v38;
      Item = sub_1B6406C(&static_fields->__9__21_0);
    }
    if ( !klass )
      goto LABEL_54;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_54513664(
      klass,
      (System_Comparison_T__o *)v38,
      (const MethodInfo_33FD000 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v41 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)v29[1].klass;
    v44 = (System_Predicate_KeyValuePair_int__int___o *)sub_1B64314(
                                                          System_Predicate_KeyValuePair_int__int___TypeInfo,
                                                          v42,
                                                          v43);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v44,
      v29,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      0LL);
    if ( !v41 )
      goto LABEL_54;
    All = (System_Collections_Generic_List_KeyValuePair_int__int___o *)System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
                                                                         v41,
                                                                         (System_Predicate_T__o *)v44,
                                                                         (const MethodInfo_33FBC28 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v48 = (System_Random_o *)sub_1B64314(System_Random_TypeInfo, v46, v47);
    System_Random___ctor(v48, 0LL);
    if ( !All )
      goto LABEL_54;
    if ( !v48 )
      goto LABEL_54;
    v49 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v48->klass->vtable._7_Next.method)(
            v48,
            (unsigned int)All->fields._size,
            v48->klass->vtable._8_NextDouble.methodPtr);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v51 = v49;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v49,
                      (const MethodInfo_33FB248 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !firstPlayVoiceList )
      goto LABEL_54;
    this->fields.randomVoiceList = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)firstPlayVoiceList,
                                                                      Item,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1B6406C(&this->fields.randomVoiceList);
    v52 = this->fields.canFirstPlayVoiceIdxDic;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v51,
                      (const MethodInfo_33FB248 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !v52 )
      goto LABEL_54;
    System_Collections_Generic_Dictionary_int__int___Remove(
      v52,
      Item,
      (const MethodInfo_311C26C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Item = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Item )
      goto LABEL_54;
    Item = System_Collections_Generic_Dictionary_int__int___get_Count(
             (System_Collections_Generic_Dictionary_int__int__o *)Item,
             (const MethodInfo_311AB68 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
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
                 (const MethodInfo_34AE414 *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Item != -1 )
        {
          v53 = Item;
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          Item = System_Collections_Generic_List_int___Remove(
                   (System_Collections_Generic_List_int__o *)Item,
                   v53,
                   (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v55 = (System_Random_o *)sub_1B64314(System_Random_TypeInfo, method, v2);
    System_Random___ctor(v55, 0LL);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_54;
    if ( !v55 )
      goto LABEL_54;
    Item = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v55->klass->vtable._7_Next.method)(
             v55,
             (unsigned int)canPlayVoiceIdxList->fields._size,
             v55->klass->vtable._8_NextDouble.methodPtr);
    if ( !this->fields.canPlayVoiceIdxList )
      goto LABEL_54;
    v57 = Item;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.canPlayVoiceIdxList,
             Item,
             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !this->fields.voiceList )
      goto LABEL_54;
    v58 = Item;
    this->fields.randomVoiceList = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this->fields.voiceList,
                                                                      Item,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1B6406C(&this->fields.randomVoiceList);
    Item = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Item )
      goto LABEL_54;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Item,
      v57,
      (const MethodInfo_34916FC *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v59 = this->fields.canPlayVoiceIdxList;
    if ( !v59 )
      goto LABEL_54;
    if ( !v59->fields._size )
    {
      v64 = this->fields.voiceList;
      if ( !v64 )
        goto LABEL_54;
      v65 = 0;
      while ( 1 )
      {
        size = v64->fields._size;
        if ( v65 >= size )
          break;
        if ( v58 != v65 || size <= 1 )
        {
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          v67 = *(_QWORD *)(Item + 16);
          v68 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(Item + 28);
          if ( !v67 )
            goto LABEL_54;
          v69 = *(int *)(Item + 24);
          if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v65,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
            v64 = this->fields.voiceList;
          }
          else
          {
            *(_DWORD *)(Item + 24) = v69 + 1;
            *(_DWORD *)(v67 + 4 * v69 + 32) = v65;
          }
        }
        ++v65;
        if ( !v64 )
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
    v62 = this->fields.randomVoiceList;
    if ( !v62 )
      goto LABEL_54;
    if ( this->fields.playCnt < (signed int)v62->max_length )
      this->fields.isValidVoice = 1;
  }
  v63 = this->fields.randomVoiceList;
  if ( !v63 )
LABEL_54:
    sub_1B64324(Item);
  return this->fields.playCnt < (signed int)v63->max_length;
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
  Il2CppObject *MasterData_object; // x21
  UserServantEntity_o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x9
  const MethodInfo *v21; // x2
  int32_t v22; // w0
  int32_t v23; // w22
  int32_t j; // w23
  BalanceConfig_c *v25; // x0
  int32_t svtId; // w24
  int32_t FriendshipRank; // w0
  MyRoomSvtControl_c *v28; // x8
  int32_t v29; // w24
  int32_t SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP; // w9
  System_Collections_Generic_List_ServantVoiceData____o *MyRoomFriendShipVoiceList; // x0
  const MethodInfo *v32; // x2
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_49F7E98 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, svtVoiceEnt);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v10);
    sub_1B640C8(&MyRoomSvtControl_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49F7E98 = 1;
  }
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_34;
  if ( !MasterData_object )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_QWORD *)Instance + 14),
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  v16 = (UserServantEntity_o *)Instance;
  v18 = *((_QWORD *)Instance + 10);
  v17 = *((_QWORD *)Instance + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v18;
  *(_QWORD *)&v35.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v35, 0LL);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v19;
  if ( voiceList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      (System_Collections_Generic_List_object__o *)voiceList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v33;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v21) )
    {
      ;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v16, 0LL);
  if ( !svtVoiceEnt )
LABEL_34:
    sub_1B64324(Instance);
  v22 = ServantVoiceEntity__FriendShipRankWithVoice(svtVoiceEnt, (int32_t)Instance, 0LL);
  if ( v22 >= 2 )
  {
    v23 = v22;
    for ( j = 1; j != v23; ++j )
    {
      v25 = BalanceConfig_TypeInfo;
      svtId = this->fields.svtId;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v25 = BalanceConfig_TypeInfo;
      }
      if ( svtId != v25->static_fields->ServantIdSwimsuitMelt )
        goto LABEL_26;
      FriendshipRank = UserServantEntity__getFriendshipRank(v16, 0LL);
      v28 = MyRoomSvtControl_TypeInfo;
      v29 = FriendshipRank;
      if ( !MyRoomSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomSvtControl_TypeInfo);
        v28 = MyRoomSvtControl_TypeInfo;
      }
      SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = v28->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      if ( v29 < SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
        goto LABEL_26;
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP;
      }
      if ( j >= SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP )
      {
LABEL_26:
        MyRoomFriendShipVoiceList = ServantVoiceEntity__getMyRoomFriendShipVoiceList(svtVoiceEnt, j, 0LL);
        if ( MyRoomFriendShipVoiceList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v33,
            (System_Collections_Generic_List_object__o *)MyRoomFriendShipVoiceList,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v33;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &i,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields._current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v32);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &i,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  System_Collections_Generic_List_int__o *v14; // x20
  __int64 bits; // x1
  __int64 v16; // x2
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v18; // x25
  Il2CppObject *v19; // x22
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Predicate_int__o *v25; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  __int64 v29; // x1
  __int64 v30; // x2
  UIStandFigureR_o *v31; // x21
  System_Action_o *v32; // x22
  struct ServantVoiceData_array *v33; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v36; // x8
  struct System_String_StaticFields *static_fields; // x8
  MyRoomSvtControl_o *v39; // [xsp+8h] [xbp-68h]

  if ( (byte_49F7E9D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Exists__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B640C8(&Method_MyRoomSvtControl_svtVoicePlay__, v9);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v10);
    sub_1B640C8(&string_TypeInfo, v11);
    sub_1B640C8(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, v12);
    sub_1B640C8(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, v13);
    byte_49F7E9D = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_24;
  v39 = this;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      v19 = (Il2CppObject *)sub_1B64314(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo, bits, v16);
      System_Object___ctor(v19, 0LL);
      if ( v18 >= randomVoiceList->max_length )
        break;
      if ( !v19 )
        goto LABEL_26;
      v19[1].klass = (Il2CppClass *)randomVoiceList->m_Items[v18];
      v22 = v19 + 1;
      sub_1B6406C(&v19[1]);
      v25 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v23, v24);
      System_Predicate_int____ctor(v25, v19, Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, 0LL);
      if ( !v14 )
        goto LABEL_26;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v14,
                                                                              (System_Predicate_T__o *)v25,
                                                                              (const MethodInfo_34904E8 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !v22->klass )
          goto LABEL_26;
        bits = v22->klass->_1.this_arg.bits;
        items = v14->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v14,
            bits,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v14->fields._size = size + 1;
          items->m_Items[size + 1] = bits;
        }
      }
      if ( (__int64)++v18 >= (int)randomVoiceList->max_length )
        goto LABEL_16;
    }
LABEL_27:
    sub_1B6432C(standFigureCollectList, v21);
  }
LABEL_16:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v39->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v31 = *(UIStandFigureR_o **)&standFigureCollectList->fields._size,
        v32 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30),
        System_Action___ctor(v32, (Il2CppObject *)v39, Method_MyRoomSvtControl_svtVoicePlay__, 0LL),
        !v31)
    || (UIStandFigureR__PreloadFormAssets(v31, v14, v32, 0LL), (v33 = v39->fields.randomVoiceList) == 0LL) )
  {
LABEL_26:
    sub_1B64324(standFigureCollectList);
  }
  playCnt = v39->fields.playCnt;
  max_length = v33->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_24:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_27;
  v36 = (struct System_String_StaticFields *)v33->m_Items[playCnt];
  if ( !v36 )
    goto LABEL_26;
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
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v20; // x8

  if ( (byte_49F7E99 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoiceMaster___, voice);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49F7E99 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoiceMaster___);
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
    sub_1B64324(Instance);
  if ( !voice->max_length )
LABEL_20:
    sub_1B6432C(Instance, v10);
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
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = v17 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v20 + 32) = voice;
    sub_1B6406C(v20 + 32);
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
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int v14; // w9
  struct System_Collections_Generic_List_ServantVoiceData____o *v15; // x8
  int32_t v16; // w21
  struct System_Int32_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  int32_t v21; // w2
  int v22; // w9

  if ( (byte_49F7E97 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, list);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v10);
    byte_49F7E97 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.playCnt = 0;
  sub_1B6406C(&this->fields.asstName);
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)sub_1B6406C(&this->fields.voiceList);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_21;
    v14 = canPlayVoiceIdxList->fields._version + 1;
    canPlayVoiceIdxList->fields._size = 0;
    canPlayVoiceIdxList->fields._version = v14;
    v15 = *p_voiceList;
    if ( *p_voiceList )
    {
      v16 = 0;
      while ( v16 < v15->fields._size )
      {
        canFirstPlayVoiceIdxDic = this->fields.canPlayVoiceIdxList;
        if ( canFirstPlayVoiceIdxDic )
        {
          items = canFirstPlayVoiceIdxDic->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++canFirstPlayVoiceIdxDic->fields._version;
          if ( items )
          {
            size = canFirstPlayVoiceIdxDic->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                canFirstPlayVoiceIdxDic,
                v16,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              v15 = *p_voiceList;
            }
            else
            {
              canFirstPlayVoiceIdxDic->fields._size = size + 1;
              items->m_Items[size + 1] = v16;
            }
            ++v16;
            if ( v15 )
              continue;
          }
        }
        goto LABEL_21;
      }
    }
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_21;
    v21 = firstPlayVoiceList->fields._size;
    v22 = firstPlayVoiceList->fields._version + 1;
    firstPlayVoiceList->fields._size = 0;
    firstPlayVoiceList->fields._version = v22;
    if ( v21 >= 1 )
      System_Array__Clear((System_Array_o *)firstPlayVoiceList->fields._items, 0, v21, 0LL);
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic;
    if ( !canFirstPlayVoiceIdxDic )
LABEL_21:
      sub_1B64324(canFirstPlayVoiceIdxDic);
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canFirstPlayVoiceIdxDic,
      (const MethodInfo_311B034 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice_31264204(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x22
  __int64 v10; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  const MethodInfo *v15; // x3

  if ( (byte_49F7E9A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, data);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___75642896, v7);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    byte_49F7E9A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                      data,
                                                      assetName);
  System_Collections_Generic_List_object____ctor_55234320(
    v9,
    1,
    (const MethodInfo_34ACF10 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___75642896);
  if ( !v9
    || (items = v9->fields._items,
        v12 = Method_System_Collections_Generic_List_ServantVoiceData____Add__,
        ++v9->fields._version,
        !items) )
  {
    sub_1B64324(v10);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      &data->obj,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1B6406C(v14 + 4);
  }
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v9, assetName, v15);
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
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UIStandFigureR_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x21
  __int64 v17; // x0
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F7EA1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_1B640C8(&Method_MyRoomSvtControl_EndSetFace__, v7);
    sub_1B640C8(&SoundManager_TypeInfo, v8);
    byte_49F7EA1 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    standFigureCollectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v10 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1B64324(v10);
    monitor = (UIStandFigureR_o *)v21.fields._current[1].monitor;
    if ( !monitor )
      sub_1B64324(0LL);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0LL);
    v13 = (UIStandFigureR_o *)current[1].monitor;
    v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0LL);
    if ( !v13 )
      sub_1B64324(v17);
    UIStandFigureR__RemoveCallback(v13, v16, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    this->fields.player = 0LL;
    sub_1B6406C(&this->fields.player);
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
  __int64 v16; // x1
  __int64 v17; // x2
  UIStandFigureR_o *m_CancellationTokenSource; // x22
  System_Action_o *v19; // x23
  struct ServantVoiceData_array *v20; // x8
  __int64 v21; // x9
  struct PlayMakerFSM_o *fsm; // x25
  struct SePlayer_o *player; // x26
  float v24; // s0
  float v25; // s8
  unsigned __int64 v26; // x20
  __int64 v27; // x29
  int32_t v28; // w21
  int32_t v29; // w22
  __int64 v30; // x1
  __int64 v31; // x2
  UIStandFigureR_o *v32; // x23
  System_Action_o *v33; // x24

  v2 = this;
  if ( (byte_49F7E9E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v4);
    this = (MyRoomSvtControl_o *)sub_1B640C8(&Method_MyRoomSvtControl_EndSetFace__, v5);
    byte_49F7E9E = 1;
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
      sub_1B6406C(&v2->fields.vcName);
      this = (MyRoomSvtControl_o *)v2->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
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
                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( this )
              {
                m_CancellationTokenSource = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
                System_Action___ctor(v19, (Il2CppObject *)v2, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                if ( m_CancellationTokenSource )
                {
                  UIStandFigureR__SetFace_40646300(
                    m_CancellationTokenSource,
                    m_CancellationTokenSource_high,
                    asstName,
                    v19,
                    v15,
                    0LL);
                  return;
                }
              }
            }
          }
LABEL_39:
          sub_1B64324(this);
        }
LABEL_37:
        sub_1B6432C(this, method);
      }
      v20 = v2->fields.randomVoiceList;
      if ( !v20 )
        goto LABEL_39;
      v21 = v2->fields.playCnt;
      if ( (unsigned int)v21 >= v20->max_length )
        goto LABEL_37;
      this = (MyRoomSvtControl_o *)v20->m_Items[v21];
      if ( !this )
        goto LABEL_39;
      fsm = this->fields.fsm;
      player = this->fields.player;
      v24 = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
      if ( fsm )
      {
        if ( player )
        {
          v25 = v24;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.standFigureCollectList,
                                         (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          if ( (_DWORD)this == (unsigned int)fsm->fields.m_CancellationTokenSource
            && (_DWORD)this == LODWORD(player->fields.cueSheetName)
            && (int)this >= 1 )
          {
            if ( (unsigned int)fsm->fields.m_CancellationTokenSource )
            {
              v26 = 0LL;
              v27 = (unsigned int)this - 1LL;
              while ( v26 < LODWORD(player->fields.cueSheetName) )
              {
                this = (MyRoomSvtControl_o *)v2->fields.standFigureCollectList;
                if ( !this )
                  goto LABEL_39;
                v28 = *((_DWORD *)&fsm->fields.fsm + v26);
                v29 = *((_DWORD *)&player->fields.objName + v26);
                this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               v26,
                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
                if ( !this )
                  goto LABEL_39;
                v32 = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                if ( v26 )
                {
                  if ( !v32 )
                    goto LABEL_39;
                  v33 = 0LL;
                }
                else
                {
                  v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v31);
                  System_Action___ctor(v33, (Il2CppObject *)v2, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                  if ( !v32 )
                    goto LABEL_39;
                }
                UIStandFigureR__SetFace_40646300(v32, v28, v29, v33, v25, 0LL);
                if ( v27 == v26 )
                  return;
                if ( ++v26 >= LODWORD(fsm->fields.m_CancellationTokenSource) )
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
  Il2CppObject *v3; // x19

  if ( (byte_49F7EA5 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomSvtControl___c_TypeInfo, v1);
    byte_49F7EA5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MyRoomSvtControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MyRoomSvtControl___c_TypeInfo->static_fields->__9 = (struct MyRoomSvtControl___c_o *)v3;
  sub_1B6406C(MyRoomSvtControl___c_TypeInfo->static_fields);
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
  if ( (byte_49F7EA6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, a);
    byte_49F7EA6 = 1;
  }
  v7 = value;
  return System_Int32__CompareTo_62180348((int32_t)&v7, v5, 0LL);
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
  if ( (byte_49F7EA7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, x);
    sub_1B640C8(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__, v5);
    byte_49F7EA7 = 1;
  }
  priorityList = this->fields.priorityList;
  if ( !priorityList )
    sub_1B64324(0LL);
  return value == System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                    priorityList,
                    0,
                    (const MethodInfo_33FB248 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__).fields.value;
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
    sub_1B64324(this);
  return System_Int32__Equals_62180496((int32_t)&v5, voice->fields.form, 0LL);
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
    sub_1B6432C(this, method);
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_1B64324(this);
  UIStandFigureR__SetFace_40646300(
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
    sub_1B64324(this);
  return System_Int32__Equals_62180496((int32_t)&v5, voice->fields.form, 0LL);
}