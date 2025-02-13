void __fastcall MyRoomSvtControl___cctor(const MethodInfo *method)
{
  if ( (byte_4BD7DF4 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomSvtControl_TypeInfo);
    byte_4BD7DF4 = 1;
  }
  MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = 3;
}


void __fastcall MyRoomSvtControl___ctor(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *v5; // x20

  if ( (byte_4BD7DF3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4BD7DF3 = 1;
  }
  this->fields.volume = 1.0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.canPlayVoiceIdxList = v3;
  sub_1C21DDC(&this->fields.canPlayVoiceIdxList, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v4;
  sub_1C21DDC(&this->fields.firstPlayVoiceList, v4);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_32AC5B8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v5;
  sub_1C21DDC(&this->fields.canFirstPlayVoiceIdxDic, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *v3; // x0
  __int64 v4; // x1
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v7; // x8
  struct SePlayer_o **p_player; // x0
  UnityEngine_Object_o *fsm; // x20

  if ( (byte_4BD7DF0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_24143/*"svtVoicePlay"*/);
    sub_1C21E38(&StringLiteral_5602/*"END_PLAY"*/);
    byte_4BD7DF0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, 0LL, 0LL);
  if ( ((unsigned __int8)v3 & 1) == 0 )
  {
    playCnt = this->fields.playCnt;
    if ( (int)playCnt < this->fields.maxPlayCnt )
    {
      randomVoiceList = this->fields.randomVoiceList;
      if ( randomVoiceList )
      {
        if ( (unsigned int)playCnt >= randomVoiceList->max_length )
          sub_1C2209C(v3, v4);
        v7 = randomVoiceList->m_Items[playCnt];
        if ( v7 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_24143/*"svtVoicePlay"*/,
            v7->fields.delay,
            0LL);
          return;
        }
      }
LABEL_19:
      sub_1C22094(v3, v4);
    }
    p_player = &this->fields.player;
    if ( this->fields.player )
    {
      *p_player = 0LL;
      sub_1C21DDC(p_player, 0LL);
    }
    this->fields.playCnt = 0;
    this->fields.isValidVoice = 0;
    fsm = (UnityEngine_Object_o *)this->fields.fsm;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fsm, 0LL, 0LL) )
    {
      v3 = this->fields.fsm;
      if ( !v3 )
        goto LABEL_19;
      PlayMakerFSM__SendEvent(v3, (System_String_o *)StringLiteral_5602/*"END_PLAY"*/, 0LL);
    }
  }
}


void __fastcall MyRoomSvtControl__EndSetFace(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v6; // x22
  struct SePlayer_o *v7; // x0
  struct SePlayer_o **p_player; // x19

  if ( (byte_4BD7DEF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MyRoomSvtControl_EndPlay__);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BD7DEF = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v7 = SoundManager__playVoice_39957484(asstName, vcName, volume, v6, 0, 0LL);
  this->fields.player = v7;
  p_player = &this->fields.player;
  sub_1C21DDC(p_player, v7);
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
    sub_1C2209C(this, method);
  return randomVoiceList->m_Items[0];
}


int32_t __fastcall MyRoomSvtControl__GetFormId(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v4; // x8

  if ( (byte_4BD7DF2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4BD7DF2 = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v4 = *(_QWORD *)&standFigureCollectList->fields._size) == 0 )
  {
    sub_1C22094(standFigureCollectList, method);
  }
  return *(_DWORD *)(v4 + 64);
}


void __fastcall MyRoomSvtControl__PreloadFormAssets(
        MyRoomSvtControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 bits; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v10; // x26
  Il2CppObject *v11; // x23
  Il2CppClass *v12; // x1
  Il2CppObject *v13; // x22
  System_Predicate_int__o *v14; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppObject *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x1
  __int64 v22; // x0
  __int64 v23; // x1
  Il2CppClass *klass; // x8
  UIStandFigureR_o *namespaze; // x22
  System_Action_o *v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1
  MyRoomSvtControl_o *v29; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BD7DEC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Exists__);
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Predicate_int__TypeInfo);
    sub_1C21E38(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
    sub_1C21E38(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__);
    sub_1C21E38(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
    sub_1C21E38(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__);
    sub_1C21E38(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    byte_4BD7DEC = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v5 = (Il2CppObject *)sub_1C22084(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_25;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C21DDC(&v5[1], this);
  v5[1].monitor = callback;
  sub_1C21DDC(&v5[1].monitor, callback);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v29 = this;
  if ( !randomVoiceList )
    goto LABEL_25;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = (Il2CppObject *)sub_1C22084(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
      System_Object___ctor(v11, 0LL);
      if ( v10 >= randomVoiceList->max_length )
        sub_1C2209C(standFigureCollectList, bits);
      if ( !v11 )
        break;
      v12 = (Il2CppClass *)randomVoiceList->m_Items[v10];
      v11[1].klass = v12;
      v13 = v11 + 1;
      sub_1C21DDC(&v11[1], v12);
      v14 = (System_Predicate_int__o *)sub_1C22084(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v14,
        v11,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        0LL);
      if ( !v8 )
        break;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v8,
                                                                              (System_Predicate_T__o *)v14,
                                                                              (const MethodInfo_363269C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !v13->klass )
          break;
        bits = v13->klass->_1.this_arg.bits;
        items = v8->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            bits,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size + 1] = bits;
        }
      }
      if ( (__int64)++v10 >= (int)randomVoiceList->max_length )
        goto LABEL_17;
    }
LABEL_25:
    sub_1C22094(standFigureCollectList, bits);
  }
LABEL_17:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v29->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    standFigureCollectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v18 = (Il2CppObject *)sub_1C22084(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !v18 )
      sub_1C22094(v19, v20);
    v18[1].monitor = v5;
    sub_1C21DDC(&v18[1].monitor, v5);
    current = v31.fields._current;
    v18[1].klass = (Il2CppClass *)v31.fields._current;
    v22 = sub_1C21DDC(&v18[1], current);
    klass = v18[1].klass;
    if ( !klass )
      sub_1C22094(v22, v23);
    namespaze = (UIStandFigureR_o *)klass->_1.namespaze;
    v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v26, v18, Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__, 0LL);
    if ( !namespaze )
      sub_1C22094(v27, v28);
    UIStandFigureR__PreloadFormAssets(namespaze, v8, v26, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void __fastcall MyRoomSvtControl__SetSvtFigureCollect(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  this->fields.standFigureCollectList = collects;
  sub_1C21DDC(&this->fields.standFigureCollectList, collects);
}


bool __fastcall MyRoomSvtControl__SetVoiceData(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x0
  Il2CppObject *v5; // x20
  System_Collections_Generic_IEnumerable_T__o *v6; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *v7; // x21
  __int64 Item; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_KeyValuePair_int__int___o *klass; // x21
  System_Comparison_KeyValuePair_int__int___o *v11; // x22
  Il2CppObject *v12; // x23
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_KeyValuePair_int__int___o *v14; // x21
  System_Predicate_KeyValuePair_int__int___o *v15; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *All; // x20
  System_Random_o *v17; // x21
  int32_t v18; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x21
  int32_t v20; // w22
  struct ServantVoiceData_array *v21; // x0
  System_Collections_Generic_Dictionary_int__int__o *v22; // x23
  System_Random_o *v24; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int32_t v26; // w21
  int v27; // w20
  struct ServantVoiceData_array *v28; // x0
  struct System_Collections_Generic_List_int__o *v29; // x8
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_String_o *asstName; // x0
  struct ServantVoiceData_array *v32; // x8
  struct ServantVoiceData_array *v33; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v34; // x8
  int32_t v35; // w21
  int size; // w9
  __int64 v37; // x9
  _QWORD *v38; // x10
  __int64 v39; // x11

  if ( (byte_4BD7DEB & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_KeyValuePair_int__int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___77560888);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    sub_1C21E38(&System_Predicate_KeyValuePair_int__int___TypeInfo);
    sub_1C21E38(&System_Random_TypeInfo);
    sub_1C21E38(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__);
    sub_1C21E38(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__);
    sub_1C21E38(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    sub_1C21E38(&MyRoomSvtControl___c_TypeInfo);
    byte_4BD7DEB = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_32ACC30 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v5 = (Il2CppObject *)sub_1C22084(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    v6 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v7 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1C22084(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_56217000(
      v7,
      v6,
      (const MethodInfo_359CDA8 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___77560888);
    if ( !v5 )
      goto LABEL_54;
    v5[1].klass = (Il2CppClass *)v7;
    sub_1C21DDC(&v5[1], v7);
    klass = (System_Collections_Generic_List_KeyValuePair_int__int___o *)v5[1].klass;
    Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    if ( !MyRoomSvtControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomSvtControl___c_TypeInfo);
      Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    }
    v11 = *(System_Comparison_KeyValuePair_int__int___o **)(*(_QWORD *)(Item + 184) + 8LL);
    if ( !v11 )
    {
      if ( !*(_DWORD *)(Item + 224) )
      {
        j_il2cpp_runtime_class_init_0(Item);
        Item = (__int64)MyRoomSvtControl___c_TypeInfo;
      }
      v12 = **(Il2CppObject ***)(Item + 184);
      v11 = (System_Comparison_KeyValuePair_int__int___o *)sub_1C22084(System_Comparison_KeyValuePair_int__int___TypeInfo);
      System_Comparison_KeyValuePair_int__int_____ctor(
        v11,
        v12,
        Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__,
        0LL);
      static_fields = MyRoomSvtControl___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = v11;
      Item = sub_1C21DDC(&static_fields->__9__21_0, v11);
    }
    if ( !klass )
      goto LABEL_54;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_56225532(
      klass,
      (System_Comparison_T__o *)v11,
      (const MethodInfo_359EEFC *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v14 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)v5[1].klass;
    v15 = (System_Predicate_KeyValuePair_int__int___o *)sub_1C22084(System_Predicate_KeyValuePair_int__int___TypeInfo);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v15,
      v5,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      0LL);
    if ( !v14 )
      goto LABEL_54;
    All = (System_Collections_Generic_List_KeyValuePair_int__int___o *)System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
                                                                         v14,
                                                                         (System_Predicate_T__o *)v15,
                                                                         (const MethodInfo_359DBC4 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v17 = (System_Random_o *)sub_1C22084(System_Random_TypeInfo);
    System_Random___ctor(v17, 0LL);
    if ( !All )
      goto LABEL_54;
    if ( !v17 )
      goto LABEL_54;
    v18 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._7_Next.method)(
            v17,
            (unsigned int)All->fields._size,
            v17->klass->vtable._8_NextDouble.methodPtr);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v20 = v18;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v18,
                      (const MethodInfo_359D1E4 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !firstPlayVoiceList )
      goto LABEL_54;
    v21 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)firstPlayVoiceList,
                                             Item,
                                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v21;
    sub_1C21DDC(&this->fields.randomVoiceList, v21);
    v22 = this->fields.canFirstPlayVoiceIdxDic;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v20,
                      (const MethodInfo_359D1E4 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !v22 )
      goto LABEL_54;
    System_Collections_Generic_Dictionary_int__int___Remove(
      v22,
      Item,
      (const MethodInfo_32AE334 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Item = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Item )
      goto LABEL_54;
    Item = System_Collections_Generic_Dictionary_int__int___get_Count(
             (System_Collections_Generic_Dictionary_int__int__o *)Item,
             (const MethodInfo_32ACC30 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
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
                 (const MethodInfo_364FD54 *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Item != -1 )
        {
          v9 = (unsigned int)Item;
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          Item = System_Collections_Generic_List_int___Remove(
                   (System_Collections_Generic_List_int__o *)Item,
                   v9,
                   (const MethodInfo_363358C *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v24 = (System_Random_o *)sub_1C22084(System_Random_TypeInfo);
    System_Random___ctor(v24, 0LL);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_54;
    if ( !v24 )
      goto LABEL_54;
    Item = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._7_Next.method)(
             v24,
             (unsigned int)canPlayVoiceIdxList->fields._size,
             v24->klass->vtable._8_NextDouble.methodPtr);
    if ( !this->fields.canPlayVoiceIdxList )
      goto LABEL_54;
    v26 = Item;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.canPlayVoiceIdxList,
             Item,
             (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !this->fields.voiceList )
      goto LABEL_54;
    v27 = Item;
    v28 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this->fields.voiceList,
                                             Item,
                                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v28;
    sub_1C21DDC(&this->fields.randomVoiceList, v28);
    Item = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Item )
      goto LABEL_54;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Item,
      v26,
      (const MethodInfo_3633810 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v29 = this->fields.canPlayVoiceIdxList;
    if ( !v29 )
      goto LABEL_54;
    if ( !v29->fields._size )
    {
      v34 = this->fields.voiceList;
      if ( !v34 )
        goto LABEL_54;
      v35 = 0;
      while ( 1 )
      {
        size = v34->fields._size;
        if ( v35 >= size )
          break;
        if ( v27 != v35 || size <= 1 )
        {
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          v37 = *(_QWORD *)(Item + 16);
          v38 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(Item + 28);
          if ( !v37 )
            goto LABEL_54;
          v39 = *(int *)(Item + 24);
          if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v35,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            v34 = this->fields.voiceList;
          }
          else
          {
            *(_DWORD *)(Item + 24) = v39 + 1;
            *(_DWORD *)(v37 + 4 * v39 + 32) = v35;
          }
        }
        ++v35;
        if ( !v34 )
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
    v32 = this->fields.randomVoiceList;
    if ( !v32 )
      goto LABEL_54;
    if ( this->fields.playCnt < (signed int)v32->max_length )
      this->fields.isValidVoice = 1;
  }
  v33 = this->fields.randomVoiceList;
  if ( !v33 )
LABEL_54:
    sub_1C22094(Item, v9);
  return this->fields.playCnt < (signed int)v33->max_length;
}


void __fastcall MyRoomSvtControl__initFirstPlayVoiceList(
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

  if ( (byte_4BD7DE8 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&MyRoomSvtControl_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7DE8 = 1;
  }
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_34;
  if ( !MasterData_object )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_QWORD *)Instance + 14),
               (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  v10 = (UserServantEntity_o *)Instance;
  v12 = *((_QWORD *)Instance + 10);
  v11 = *((_QWORD *)Instance + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v12;
  *(_QWORD *)&v29.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v29, 0LL);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v13;
  if ( voiceList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)voiceList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v27;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v15) )
    {
      ;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v10, 0LL);
  if ( !svtVoiceEnt )
LABEL_34:
    sub_1C22094(Instance, v8);
  v16 = ServantVoiceEntity__FriendShipRankWithVoice(svtVoiceEnt, (int32_t)Instance, 0LL);
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
      FriendshipRank = UserServantEntity__getFriendshipRank(v10, 0LL);
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
        MyRoomFriendShipVoiceList = ServantVoiceEntity__getMyRoomFriendShipVoiceList(
                                      svtVoiceEnt,
                                      j,
                                      imageLimitCount,
                                      0LL);
        if ( MyRoomFriendShipVoiceList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v27,
            (System_Collections_Generic_List_object__o *)MyRoomFriendShipVoiceList,
            (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v27;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &i,
                    (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields._current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v26);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &i,
            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 bits; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v6; // x25
  Il2CppObject *v7; // x22
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  Il2CppClass *v9; // x1
  Il2CppObject *v10; // x21
  System_Predicate_int__o *v11; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  UIStandFigureR_o *v15; // x21
  System_Action_o *v16; // x22
  struct ServantVoiceData_array *v17; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v20; // x8
  struct System_String_StaticFields *static_fields; // x8
  MyRoomSvtControl_o *v23; // [xsp+8h] [xbp-68h]

  if ( (byte_4BD7DED & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Exists__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_MyRoomSvtControl_svtVoicePlay__);
    sub_1C21E38(&System_Predicate_int__TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__);
    sub_1C21E38(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
    byte_4BD7DED = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_24;
  v23 = this;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      v7 = (Il2CppObject *)sub_1C22084(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
      System_Object___ctor(v7, 0LL);
      if ( v6 >= randomVoiceList->max_length )
        break;
      if ( !v7 )
        goto LABEL_26;
      v9 = (Il2CppClass *)randomVoiceList->m_Items[v6];
      v7[1].klass = v9;
      v10 = v7 + 1;
      sub_1C21DDC(&v7[1], v9);
      v11 = (System_Predicate_int__o *)sub_1C22084(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(v11, v7, Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__, 0LL);
      if ( !v3 )
        goto LABEL_26;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v3,
                                                                              (System_Predicate_T__o *)v11,
                                                                              (const MethodInfo_363269C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !v10->klass )
          goto LABEL_26;
        bits = v10->klass->_1.this_arg.bits;
        items = v3->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            bits,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size + 1] = bits;
        }
      }
      if ( (__int64)++v6 >= (int)randomVoiceList->max_length )
        goto LABEL_16;
    }
LABEL_27:
    sub_1C2209C(standFigureCollectList, bits);
  }
LABEL_16:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v23->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v15 = *(UIStandFigureR_o **)&standFigureCollectList->fields._size,
        v16 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)v23, Method_MyRoomSvtControl_svtVoicePlay__, 0LL),
        !v15)
    || (UIStandFigureR__PreloadFormAssets(v15, v3, v16, 0LL), (v17 = v23->fields.randomVoiceList) == 0LL) )
  {
LABEL_26:
    sub_1C22094(standFigureCollectList, bits);
  }
  playCnt = v23->fields.playCnt;
  max_length = v17->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_24:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_27;
  v20 = (struct System_String_StaticFields *)v17->m_Items[playCnt];
  if ( !v20 )
    goto LABEL_26;
  static_fields = v20 + 2;
  return static_fields->Empty;
}


void __fastcall MyRoomSvtControl__setFirstPlayVoice(
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
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v16; // x8

  if ( (byte_4BD7DE9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7DE9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !voice )
    goto LABEL_19;
  if ( !voice->max_length )
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
                                0LL);
  if ( !(_DWORD)Instance )
    return;
  firstPlayVoiceList = this->fields.firstPlayVoiceList;
  if ( !firstPlayVoiceList )
LABEL_19:
    sub_1C22094(Instance, v6);
  if ( !voice->max_length )
LABEL_20:
    sub_1C2209C(Instance, v6);
  v10 = voice->m_Items[0];
  if ( !v10 )
    goto LABEL_19;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  size = firstPlayVoiceList->fields._size;
  Instance = (DataManager_o *)VoiceMaster__getFirstPlayPriority(v8, this->fields.svtId, v10->fields.id, 0LL);
  if ( !canFirstPlayVoiceIdxDic )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__int___Add(
    canFirstPlayVoiceIdxDic,
    size,
    (int32_t)Instance,
    (const MethodInfo_32ACF7C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  Instance = (DataManager_o *)this->fields.firstPlayVoiceList;
  if ( !Instance )
    goto LABEL_19;
  v13 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v14 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v13 )
    goto LABEL_19;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v13 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      &voice->obj,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = v13 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v16 + 32) = voice;
    sub_1C21DDC(v16 + 32, voice);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *list,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceList; // x20
  System_Collections_Generic_List_int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int v11; // w9
  struct System_Collections_Generic_List_ServantVoiceData____o *v12; // x8
  int32_t v13; // w21
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  int32_t v18; // w2
  int v19; // w9

  if ( (byte_4BD7DE7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_4BD7DE7 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.playCnt = 0;
  sub_1C21DDC(&this->fields.asstName, assetName);
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)sub_1C21DDC(&this->fields.voiceList, list);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_21;
    v11 = canPlayVoiceIdxList->fields._version + 1;
    canPlayVoiceIdxList->fields._size = 0;
    canPlayVoiceIdxList->fields._version = v11;
    v12 = *p_voiceList;
    if ( *p_voiceList )
    {
      v13 = 0;
      while ( v13 < v12->fields._size )
      {
        canFirstPlayVoiceIdxDic = this->fields.canPlayVoiceIdxList;
        if ( canFirstPlayVoiceIdxDic )
        {
          items = canFirstPlayVoiceIdxDic->fields._items;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++canFirstPlayVoiceIdxDic->fields._version;
          if ( items )
          {
            size = canFirstPlayVoiceIdxDic->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                canFirstPlayVoiceIdxDic,
                v13,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
              v12 = *p_voiceList;
            }
            else
            {
              canFirstPlayVoiceIdxDic->fields._size = size + 1;
              items->m_Items[size + 1] = v13;
            }
            ++v13;
            if ( v12 )
              continue;
          }
        }
        goto LABEL_21;
      }
    }
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_21;
    v18 = firstPlayVoiceList->fields._size;
    v19 = firstPlayVoiceList->fields._version + 1;
    firstPlayVoiceList->fields._size = 0;
    firstPlayVoiceList->fields._version = v19;
    if ( v18 >= 1 )
      System_Array__Clear((System_Array_o *)firstPlayVoiceList->fields._items, 0, v18, 0LL);
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic;
    if ( !canFirstPlayVoiceIdxDic )
LABEL_21:
      sub_1C22094(canFirstPlayVoiceIdxDic, v9);
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canFirstPlayVoiceIdxDic,
      (const MethodInfo_32AD0FC *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void __fastcall MyRoomSvtControl__setSvtVoice_32606676(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  const MethodInfo *v14; // x3

  if ( (byte_4BD7DEA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___77561992);
    sub_1C21E38(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4BD7DEA = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor_56944880(
    v7,
    1,
    (const MethodInfo_364E8F0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___77561992);
  if ( !v7
    || (items = v7->fields._items,
        v11 = Method_System_Collections_Generic_List_ServantVoiceData____Add__,
        ++v7->fields._version,
        !items) )
  {
    sub_1C22094(v8, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      &data->obj,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v13[4] = (Il2CppClass *)data;
    sub_1C21DDC(v13 + 4, data);
  }
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v7, assetName, v14);
}


void __fastcall MyRoomSvtControl__stopVoice(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
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
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BD7DF1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C21E38(&Method_MyRoomSvtControl_EndSetFace__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&StringLiteral_24143/*"svtVoicePlay"*/);
    byte_4BD7DF1 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    standFigureCollectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1C22094(v4, v5);
    monitor = (UIStandFigureR_o *)v15.fields._current[1].monitor;
    if ( !monitor )
      sub_1C22094(0LL, v5);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0LL);
    v8 = (UIStandFigureR_o *)current[1].monitor;
    v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0LL);
    if ( !v8 )
      sub_1C22094(v10, v11);
    UIStandFigureR__RemoveCallback(v8, v9, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( this->fields.player )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70854192(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_24143/*"svtVoicePlay"*/,
      0LL);
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    this->fields.player = 0LL;
    sub_1C21DDC(&this->fields.player, 0LL);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
}


void __fastcall MyRoomSvtControl__svtVoicePlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *v2; // x19
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v6; // x8
  struct System_String_o *id; // x1
  struct ServantVoiceData_array *v8; // x8
  __int64 v9; // x9
  int32_t m_CancellationTokenSource_high; // w20
  int32_t asstName; // w21
  float FadeTime; // s0
  float v13; // s8
  UIStandFigureR_o *m_CancellationTokenSource; // x22
  System_Action_o *v15; // x23
  struct ServantVoiceData_array *v16; // x8
  __int64 v17; // x9
  struct PlayMakerFSM_o *fsm; // x25
  struct SePlayer_o *player; // x26
  float v20; // s0
  float v21; // s8
  unsigned __int64 v22; // x20
  __int64 v23; // x29
  int32_t v24; // w21
  int32_t v25; // w22
  UIStandFigureR_o *v26; // x23
  System_Action_o *v27; // x24

  v2 = this;
  if ( (byte_4BD7DEE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    this = (MyRoomSvtControl_o *)sub_1C21E38(&Method_MyRoomSvtControl_EndSetFace__);
    byte_4BD7DEE = 1;
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
      v6 = randomVoiceList->m_Items[playCnt];
      if ( !v6 )
        goto LABEL_39;
      id = v6->fields.id;
      v2->fields.vcName = id;
      sub_1C21DDC(&v2->fields.vcName, id);
      this = (MyRoomSvtControl_o *)v2->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
            (int)this < 2) )
      {
        v8 = v2->fields.randomVoiceList;
        if ( !v8 )
          goto LABEL_39;
        v9 = v2->fields.playCnt;
        if ( (unsigned int)v9 < v8->max_length )
        {
          this = (MyRoomSvtControl_o *)v8->m_Items[v9];
          if ( this )
          {
            m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
            asstName = (int32_t)this->fields.asstName;
            FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
            this = (MyRoomSvtControl_o *)v2->fields.standFigureCollectList;
            if ( this )
            {
              v13 = FadeTime;
              this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( this )
              {
                m_CancellationTokenSource = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(v15, (Il2CppObject *)v2, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                if ( m_CancellationTokenSource )
                {
                  UIStandFigureR__SetFace_42326132(
                    m_CancellationTokenSource,
                    m_CancellationTokenSource_high,
                    asstName,
                    v15,
                    v13,
                    0LL);
                  return;
                }
              }
            }
          }
LABEL_39:
          sub_1C22094(this, method);
        }
LABEL_37:
        sub_1C2209C(this, method);
      }
      v16 = v2->fields.randomVoiceList;
      if ( !v16 )
        goto LABEL_39;
      v17 = v2->fields.playCnt;
      if ( (unsigned int)v17 >= v16->max_length )
        goto LABEL_37;
      this = (MyRoomSvtControl_o *)v16->m_Items[v17];
      if ( !this )
        goto LABEL_39;
      fsm = this->fields.fsm;
      player = this->fields.player;
      v20 = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
      if ( fsm )
      {
        if ( player )
        {
          v21 = v20;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.standFigureCollectList,
                                         (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          if ( (_DWORD)this == (unsigned int)fsm->fields.m_CancellationTokenSource
            && (_DWORD)this == LODWORD(player->fields.cueSheetName)
            && (int)this >= 1 )
          {
            if ( (unsigned int)fsm->fields.m_CancellationTokenSource )
            {
              v22 = 0LL;
              v23 = (unsigned int)this - 1LL;
              while ( v22 < LODWORD(player->fields.cueSheetName) )
              {
                this = (MyRoomSvtControl_o *)v2->fields.standFigureCollectList;
                if ( !this )
                  goto LABEL_39;
                v24 = *((_DWORD *)&fsm->fields.fsm + v22);
                v25 = *((_DWORD *)&player->fields.objName + v22);
                this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               v22,
                                               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
                if ( !this )
                  goto LABEL_39;
                v26 = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                if ( v22 )
                {
                  if ( !v26 )
                    goto LABEL_39;
                  v27 = 0LL;
                }
                else
                {
                  v27 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                  System_Action___ctor(v27, (Il2CppObject *)v2, Method_MyRoomSvtControl_EndSetFace__, 0LL);
                  if ( !v26 )
                    goto LABEL_39;
                }
                UIStandFigureR__SetFace_42326132(v26, v24, v25, v27, v21, 0LL);
                if ( v23 == v22 )
                  return;
                if ( ++v22 >= LODWORD(fsm->fields.m_CancellationTokenSource) )
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
  Il2CppObject *v1; // x19

  if ( (byte_4BD7DF5 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomSvtControl___c_TypeInfo);
    byte_4BD7DF5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(MyRoomSvtControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MyRoomSvtControl___c_TypeInfo->static_fields->__9 = (struct MyRoomSvtControl___c_o *)v1;
  sub_1C21DDC(MyRoomSvtControl___c_TypeInfo->static_fields, v1);
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
  if ( (byte_4BD7DF6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4BD7DF6 = 1;
  }
  v7 = value;
  return System_Int32__CompareTo_63920764((int32_t)&v7, v5, 0LL);
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
  System_Collections_Generic_List_KeyValuePair_int__int___o *priorityList; // x0

  value = x.fields.value;
  if ( (byte_4BD7DF7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    byte_4BD7DF7 = 1;
  }
  priorityList = this->fields.priorityList;
  if ( !priorityList )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C22094)(0LL, x);
  return value == System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                    priorityList,
                    0,
                    (const MethodInfo_359D1E4 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__).fields.value;
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
    sub_1C22094(this, a);
  return System_Int32__Equals_63920912((int32_t)&v5, voice->fields.form, 0LL);
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
    sub_1C2209C(this, method);
  v7 = randomVoiceList->m_Items[playCnt];
  if ( !v7 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0LL )
LABEL_9:
    sub_1C22094(this, method);
  UIStandFigureR__SetFace_42326132(
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
    sub_1C22094(this, a);
  return System_Int32__Equals_63920912((int32_t)&v5, voice->fields.form, 0LL);
}