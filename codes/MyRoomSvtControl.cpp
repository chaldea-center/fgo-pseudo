void MyRoomSvtControl___cctor(const MethodInfo *method)
{
  if ( (byte_4C228AB & 1) == 0 )
  {
    sub_1C2D490(&MyRoomSvtControl_TypeInfo);
    byte_4C228AB = 1;
  }
  MyRoomSvtControl_TypeInfo->static_fields->SWIMSUIT_MELT_JUDGMENT_FRIENDSHIP = 3;
}


void MyRoomSvtControl___ctor(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_int__int__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C228AA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4C228AA = 1;
  }
  this->fields.volume = 1.0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.canPlayVoiceIdxList = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.canPlayVoiceIdxList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  this->fields.firstPlayVoiceList = (struct System_Collections_Generic_List_ServantVoiceData____o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.firstPlayVoiceList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.canFirstPlayVoiceIdxDic = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.canFirstPlayVoiceIdxDic, (int32_t)v9, v10, v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MyRoomSvtControl__EndPlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v9; // x8
  CGThumbnailListItem_o *p_player; // x0
  UnityEngine_Object_o *fsm; // x20

  if ( (byte_4C228A7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_23853/*"svtVoicePlay"*/);
    sub_1C2D490(&StringLiteral_5445/*"END_PLAY"*/);
    byte_4C228A7 = 1;
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
          sub_1C2D6F4(v3, v4, v5);
        v9 = randomVoiceList->m_Items[playCnt];
        if ( v9 )
        {
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_23853/*"svtVoicePlay"*/,
            v9->fields.delay,
            0);
          return;
        }
      }
LABEL_19:
      sub_1C2D6EC(v3, v4);
    }
    p_player = (CGThumbnailListItem_o *)&this->fields.player;
    if ( this->fields.player )
    {
      p_player->klass = 0;
      sub_1C2D434(p_player, 0, v5, v6);
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
      PlayMakerFSM__SendEvent(v3, (System_String_o *)StringLiteral_5445/*"END_PLAY"*/, 0);
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
  const MethodInfo *v10; // x3

  if ( (byte_4C228A6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_MyRoomSvtControl_EndPlay__);
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C228A6 = 1;
  }
  asstName = this->fields.asstName;
  vcName = this->fields.vcName;
  volume = this->fields.volume;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomSvtControl_EndPlay__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v7 = SoundManager__playVoice_41296680(asstName, vcName, volume, v6, 0, 0);
  this->fields.player = v7;
  p_player = &this->fields.player;
  sub_1C2D434((CGThumbnailListItem_o *)p_player, (int32_t)v7, v9, v10);
  ++*((_DWORD *)p_player + 11);
}


ServantVoiceData_o *MyRoomSvtControl__GetFirstServantVoiceData(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantVoiceData_array *randomVoiceList; // x8
  il2cpp_array_size_t max_length; // x9

  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    return 0;
  max_length = randomVoiceList->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C2D6F4(this, method, v2);
  return randomVoiceList->m_Items[0];
}


int32_t MyRoomSvtControl__GetFormId(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v4; // x8

  if ( (byte_4C228A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4C228A9 = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
    || (v4 = *(_QWORD *)&standFigureCollectList->fields._size) == 0 )
  {
    sub_1C2D6EC(standFigureCollectList, method);
  }
  return *(_DWORD *)(v4 + 76);
}


void MyRoomSvtControl__PreloadFormAssets(MyRoomSvtControl_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_int__o *v12; // x20
  struct ServantVoiceData_array *randomVoiceList; // x25
  unsigned __int64 v14; // x26
  __int64 v15; // x23
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  ServantVoiceData_o *v18; // x1
  __int64 v19; // x22
  System_Predicate_int__o *v20; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  __int64 v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t current; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x8
  UIStandFigureR_o *v35; // x22
  System_Action_o *v36; // x23
  __int64 v37; // x0
  __int64 v38; // x1
  MyRoomSvtControl_o *v39; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C228A3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Exists__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Predicate_int__TypeInfo);
    sub_1C2D490(&MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
    sub_1C2D490(&Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__);
    sub_1C2D490(&MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
    sub_1C2D490(&Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__);
    sub_1C2D490(&MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    byte_4C228A3 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v5 = sub_1C2D6DC(MyRoomSvtControl___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v39 = this;
  if ( !randomVoiceList )
    goto LABEL_25;
  if ( SLODWORD(randomVoiceList->max_length) >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = sub_1C2D6DC(MyRoomSvtControl___c__DisplayClass22_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( v14 >= LODWORD(randomVoiceList->max_length) )
        sub_1C2D6F4(standFigureCollectList, v7, v16);
      if ( !v15 )
        break;
      v18 = randomVoiceList->m_Items[v14];
      *(_QWORD *)(v15 + 16) = v18;
      v19 = v15 + 16;
      sub_1C2D434((CGThumbnailListItem_o *)(v15 + 16), (int32_t)v18, v16, v17);
      v20 = (System_Predicate_int__o *)sub_1C2D6DC(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v20,
        (Il2CppObject *)v15,
        Method_MyRoomSvtControl___c__DisplayClass22_1__PreloadFormAssets_b__0__,
        0);
      if ( !v12 )
        break;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v12,
                                                                              (System_Predicate_T__o *)v20,
                                                                              (const MethodInfo_376D16C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !*(_QWORD *)v19 )
          break;
        v7 = *(unsigned int *)(*(_QWORD *)v19 + 56LL);
        items = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v7,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size] = v7;
        }
      }
      if ( (__int64)++v14 >= SLODWORD(randomVoiceList->max_length) )
        goto LABEL_17;
    }
LABEL_25:
    sub_1C2D6EC(standFigureCollectList, v7);
  }
LABEL_17:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v39->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    standFigureCollectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v24 = sub_1C2D6DC(MyRoomSvtControl___c__DisplayClass22_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0);
    if ( !v24 )
      sub_1C2D6EC(v25, v26);
    *(_QWORD *)(v24 + 24) = v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v24 + 24), v5, v27, v28);
    current = (int32_t)v41.fields._current;
    *(_QWORD *)(v24 + 16) = v41.fields._current;
    sub_1C2D434((CGThumbnailListItem_o *)(v24 + 16), current, v30, v31);
    v34 = *(_QWORD *)(v24 + 16);
    if ( !v34 )
      sub_1C2D6EC(v32, v33);
    v35 = *(UIStandFigureR_o **)(v34 + 24);
    v36 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v24,
      Method_MyRoomSvtControl___c__DisplayClass22_2__PreloadFormAssets_b__1__,
      0);
    if ( !v35 )
      sub_1C2D6EC(v37, v38);
    UIStandFigureR__PreloadFormAssets(v35, v12, v36, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void MyRoomSvtControl__SetSvtFigureCollect(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.standFigureCollectList = collects;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.standFigureCollectList, (int32_t)collects, (int32_t)method, v3);
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
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_KeyValuePair_int__int___o *v12; // x21
  System_Comparison_KeyValuePair_int__int___o *v13; // x22
  Il2CppObject *v14; // x23
  struct MyRoomSvtControl___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_KeyValuePair_int__int___o *v18; // x21
  System_Predicate_KeyValuePair_int__int___o *v19; // x22
  System_Collections_Generic_List_KeyValuePair_int__int___o *All; // x20
  System_Random_o *v21; // x21
  int32_t v22; // w0
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x21
  int32_t v24; // w22
  struct ServantVoiceData_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_Dictionary_int__int__o *v28; // x23
  System_Random_o *v30; // x20
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int32_t v32; // w21
  int v33; // w20
  struct ServantVoiceData_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Collections_Generic_List_int__o *v37; // x8
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_String_o *asstName; // x0
  struct ServantVoiceData_array *v40; // x8
  struct ServantVoiceData_array *v41; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *v42; // x8
  int32_t v43; // w21
  int size; // w9
  __int64 v45; // x9
  _QWORD *v46; // x10
  __int64 v47; // x11

  if ( (byte_4C228A2 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_KeyValuePair_int__int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___77928608);
    sub_1C2D490(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    sub_1C2D490(&System_Predicate_KeyValuePair_int__int___TypeInfo);
    sub_1C2D490(&System_Random_TypeInfo);
    sub_1C2D490(&Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__);
    sub_1C2D490(&Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__);
    sub_1C2D490(&MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    sub_1C2D490(&MyRoomSvtControl___c_TypeInfo);
    byte_4C228A2 = 1;
  }
  voiceList = this->fields.voiceList;
  if ( !voiceList || !voiceList->fields._size )
    return 0;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  if ( canFirstPlayVoiceIdxDic
    && System_Collections_Generic_Dictionary_int__int___get_Count(
         canFirstPlayVoiceIdxDic,
         (const MethodInfo_33D8478 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v5 = sub_1C2D6DC(MyRoomSvtControl___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    v6 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.canFirstPlayVoiceIdxDic;
    v7 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1C2D6DC(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    System_Collections_Generic_List_KeyValuePair_int__int_____ctor_57657836(
      v7,
      v6,
      (const MethodInfo_36FC9EC *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor___77928608);
    if ( !v5 )
      goto LABEL_54;
    *(_QWORD *)(v5 + 16) = v7;
    sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v7, v10, v11);
    v12 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v5 + 16);
    Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    if ( !MyRoomSvtControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomSvtControl___c_TypeInfo);
      Item = (__int64)MyRoomSvtControl___c_TypeInfo;
    }
    v13 = *(System_Comparison_KeyValuePair_int__int___o **)(*(_QWORD *)(Item + 184) + 8LL);
    if ( !v13 )
    {
      if ( !*(_DWORD *)(Item + 224) )
      {
        j_il2cpp_runtime_class_init_0(Item);
        Item = (__int64)MyRoomSvtControl___c_TypeInfo;
      }
      v14 = **(Il2CppObject ***)(Item + 184);
      v13 = (System_Comparison_KeyValuePair_int__int___o *)sub_1C2D6DC(System_Comparison_KeyValuePair_int__int___TypeInfo);
      System_Comparison_KeyValuePair_int__int_____ctor(v13, v14, Method_MyRoomSvtControl___c__SetVoiceData_b__21_0__, 0);
      static_fields = MyRoomSvtControl___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = v13;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__21_0, (int32_t)v13, v16, v17);
    }
    if ( !v12 )
      goto LABEL_54;
    System_Collections_Generic_List_KeyValuePair_int__int____Sort_57666368(
      v12,
      (System_Comparison_T__o *)v13,
      (const MethodInfo_36FEB40 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Sort__);
    v18 = *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v5 + 16);
    v19 = (System_Predicate_KeyValuePair_int__int___o *)sub_1C2D6DC(System_Predicate_KeyValuePair_int__int___TypeInfo);
    System_Predicate_KeyValuePair_int__int_____ctor(
      v19,
      (Il2CppObject *)v5,
      Method_MyRoomSvtControl___c__DisplayClass21_0__SetVoiceData_b__1__,
      0);
    if ( !v18 )
      goto LABEL_54;
    All = (System_Collections_Generic_List_KeyValuePair_int__int___o *)System_Collections_Generic_List_KeyValuePair_int__int____FindAll(
                                                                         v18,
                                                                         (System_Predicate_T__o *)v19,
                                                                         (const MethodInfo_36FD808 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___FindAll__);
    v21 = (System_Random_o *)sub_1C2D6DC(System_Random_TypeInfo);
    System_Random___ctor(v21, 0);
    if ( !All )
      goto LABEL_54;
    if ( !v21 )
      goto LABEL_54;
    v22 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v21->klass->vtable._7_Next.methodPtr)(
            v21,
            (unsigned int)All->fields._size,
            v21->klass->vtable._7_Next.method);
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    v24 = v22;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v22,
                      (const MethodInfo_36FCE28 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !firstPlayVoiceList )
      goto LABEL_54;
    v25 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)firstPlayVoiceList,
                                             Item,
                                             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v25;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.randomVoiceList, (int32_t)v25, v26, v27);
    v28 = this->fields.canFirstPlayVoiceIdxDic;
    Item = (__int64)System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                      All,
                      v24,
                      (const MethodInfo_36FCE28 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    if ( !v28 )
      goto LABEL_54;
    System_Collections_Generic_Dictionary_int__int___Remove(
      v28,
      Item,
      (const MethodInfo_33D9B7C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    Item = (__int64)this->fields.canFirstPlayVoiceIdxDic;
    if ( !Item )
      goto LABEL_54;
    Item = System_Collections_Generic_Dictionary_int__int___get_Count(
             (System_Collections_Generic_Dictionary_int__int__o *)Item,
             (const MethodInfo_33D8478 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
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
                 (const MethodInfo_378A824 *)Method_System_Collections_Generic_List_ServantVoiceData____IndexOf__);
        if ( (_DWORD)Item != -1 )
        {
          v9 = (unsigned int)Item;
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          Item = System_Collections_Generic_List_int___Remove(
                   (System_Collections_Generic_List_int__o *)Item,
                   v9,
                   (const MethodInfo_376E05C *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
    }
  }
  else
  {
    v30 = (System_Random_o *)sub_1C2D6DC(System_Random_TypeInfo);
    System_Random___ctor(v30, 0);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_54;
    if ( !v30 )
      goto LABEL_54;
    Item = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v30->klass->vtable._7_Next.methodPtr)(
             v30,
             (unsigned int)canPlayVoiceIdxList->fields._size,
             v30->klass->vtable._7_Next.method);
    if ( !this->fields.canPlayVoiceIdxList )
      goto LABEL_54;
    v32 = Item;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.canPlayVoiceIdxList,
             Item,
             (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !this->fields.voiceList )
      goto LABEL_54;
    v33 = Item;
    v34 = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this->fields.voiceList,
                                             Item,
                                             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = v34;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.randomVoiceList, (int32_t)v34, v35, v36);
    Item = (__int64)this->fields.canPlayVoiceIdxList;
    if ( !Item )
      goto LABEL_54;
    System_Collections_Generic_List_int___RemoveAt(
      (System_Collections_Generic_List_int__o *)Item,
      v32,
      (const MethodInfo_376E2E0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v37 = this->fields.canPlayVoiceIdxList;
    if ( !v37 )
      goto LABEL_54;
    if ( !v37->fields._size )
    {
      v42 = this->fields.voiceList;
      if ( !v42 )
        goto LABEL_54;
      v43 = 0;
      while ( 1 )
      {
        size = v42->fields._size;
        if ( v43 >= size )
          break;
        if ( v33 != v43 || size <= 1 )
        {
          Item = (__int64)this->fields.canPlayVoiceIdxList;
          if ( !Item )
            goto LABEL_54;
          v45 = *(_QWORD *)(Item + 16);
          v46 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(Item + 28);
          if ( !v45 )
            goto LABEL_54;
          v47 = *(int *)(Item + 24);
          if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v43,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            v42 = this->fields.voiceList;
          }
          else
          {
            *(_DWORD *)(Item + 24) = v47 + 1;
            *(_DWORD *)(v45 + 4 * v47 + 32) = v43;
          }
        }
        ++v43;
        if ( !v42 )
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
    v40 = this->fields.randomVoiceList;
    if ( !v40 )
      goto LABEL_54;
    if ( this->fields.playCnt < SLODWORD(v40->max_length) )
      this->fields.isValidVoice = 1;
  }
  v41 = this->fields.randomVoiceList;
  if ( !v41 )
LABEL_54:
    sub_1C2D6EC(Item, v9);
  return this->fields.playCnt < SLODWORD(v41->max_length);
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

  if ( (byte_4C2289F & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C2D490(&MyRoomSvtControl_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2289F = 1;
  }
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_34;
  if ( !MasterData_object )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_QWORD *)Instance + 15),
               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  v10 = (UserServantEntity_o *)Instance;
  v12 = *((_QWORD *)Instance + 10);
  v11 = *((_QWORD *)Instance + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v12;
  *(_QWORD *)&v29.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v29, 0);
  voiceList = this->fields.voiceList;
  this->fields.svtId = v13;
  if ( voiceList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)voiceList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    for ( i = v27;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v15) )
    {
      ;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  Instance = (void *)UserServantEntity__getFriendshipRank(v10, 0);
  if ( !svtVoiceEnt )
LABEL_34:
    sub_1C2D6EC(Instance, v8);
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
            (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
          i = v27;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &i,
                    (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
          {
            if ( i.fields._current )
              MyRoomSvtControl__setFirstPlayVoice(this, (ServantVoiceData_array *)i.fields._current, v26);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &i,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  ServantVoiceData_o *v11; // x1
  __int64 v12; // x21
  System_Predicate_int__o *v13; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  UIStandFigureR_o *v17; // x21
  System_Action_o *v18; // x22
  struct ServantVoiceData_array *v19; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  struct System_String_StaticFields *v22; // x8
  struct System_String_StaticFields *static_fields; // x8
  MyRoomSvtControl_o *v25; // [xsp+8h] [xbp-68h]

  if ( (byte_4C228A4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Exists__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_MyRoomSvtControl_svtVoicePlay__);
    sub_1C2D490(&System_Predicate_int__TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__);
    sub_1C2D490(&MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
    byte_4C228A4 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_24;
  v25 = this;
  if ( SLODWORD(randomVoiceList->max_length) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_1C2D6DC(MyRoomSvtControl___c__DisplayClass23_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      if ( v6 >= LODWORD(randomVoiceList->max_length) )
        break;
      if ( !v7 )
        goto LABEL_26;
      v11 = randomVoiceList->m_Items[v6];
      *(_QWORD *)(v7 + 16) = v11;
      v12 = v7 + 16;
      sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v11, v9, v10);
      v13 = (System_Predicate_int__o *)sub_1C2D6DC(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v13,
        (Il2CppObject *)v7,
        Method_MyRoomSvtControl___c__DisplayClass23_0__playVoice_b__0__,
        0);
      if ( !v3 )
        goto LABEL_26;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                                              v3,
                                                                              (System_Predicate_T__o *)v13,
                                                                              (const MethodInfo_376D16C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)standFigureCollectList & 1) == 0 )
      {
        if ( !*(_QWORD *)v12 )
          goto LABEL_26;
        v4 = *(unsigned int *)(*(_QWORD *)v12 + 56LL);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v4,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_1C2D6F4(standFigureCollectList, v4, v9);
  }
LABEL_16:
  standFigureCollectList = (System_Collections_Generic_List_object__o *)v25->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                0,
                                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
    || (v17 = *(UIStandFigureR_o **)&standFigureCollectList->fields._size,
        v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v18, (Il2CppObject *)v25, Method_MyRoomSvtControl_svtVoicePlay__, 0),
        !v17)
    || (UIStandFigureR__PreloadFormAssets(v17, v3, v18, 0), (v19 = v25->fields.randomVoiceList) == 0) )
  {
LABEL_26:
    sub_1C2D6EC(standFigureCollectList, v4);
  }
  playCnt = v25->fields.playCnt;
  max_length = v19->max_length;
  if ( (int)playCnt >= max_length )
  {
LABEL_24:
    static_fields = string_TypeInfo->static_fields;
    return static_fields->Empty;
  }
  if ( (unsigned int)playCnt >= max_length )
    goto LABEL_27;
  v22 = (struct System_String_StaticFields *)v19->m_Items[playCnt];
  if ( !v22 )
    goto LABEL_26;
  static_fields = v22 + 2;
  return static_fields->Empty;
}


void MyRoomSvtControl__setFirstPlayVoice(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *voice,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  ServantVoiceData_o *v8; // x8
  VoiceMaster_o *v9; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  ServantVoiceData_o *v11; // x9
  System_Collections_Generic_Dictionary_int__int__o *canFirstPlayVoiceIdxDic; // x22
  int32_t size; // w23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8

  if ( (byte_4C228A0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C228A0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !voice )
    goto LABEL_19;
  if ( !LODWORD(voice->max_length) )
    goto LABEL_20;
  v8 = voice->m_Items[0];
  if ( !v8 )
    goto LABEL_19;
  v9 = (VoiceMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)VoiceMaster__getFlagRequestNumber(
                                (VoiceMaster_o *)Instance,
                                this->fields.svtId,
                                v8->fields.id,
                                0,
                                0);
  if ( !(_DWORD)Instance )
    return;
  firstPlayVoiceList = this->fields.firstPlayVoiceList;
  if ( !firstPlayVoiceList )
LABEL_19:
    sub_1C2D6EC(Instance, v6);
  if ( !LODWORD(voice->max_length) )
LABEL_20:
    sub_1C2D6F4(Instance, v6, v7);
  v11 = voice->m_Items[0];
  if ( !v11 )
    goto LABEL_19;
  canFirstPlayVoiceIdxDic = this->fields.canFirstPlayVoiceIdxDic;
  size = firstPlayVoiceList->fields._size;
  Instance = (DataManager_o *)VoiceMaster__getFirstPlayPriority(v9, this->fields.svtId, v11->fields.id, 0);
  if ( !canFirstPlayVoiceIdxDic )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__int___Add(
    canFirstPlayVoiceIdxDic,
    size,
    (int32_t)Instance,
    (const MethodInfo_33D87C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  Instance = (DataManager_o *)this->fields.firstPlayVoiceList;
  if ( !Instance )
    goto LABEL_19;
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v17 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_19;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      &voice->obj,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v19 + 32) = voice;
    sub_1C2D434((CGThumbnailListItem_o *)(v19 + 32), (int32_t)voice, v14, v15);
  }
}


void MyRoomSvtControl__setSvtVoice(
        MyRoomSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *list,
        System_String_o *assetName,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceList; // x20
  System_Collections_Generic_List_int__o *canFirstPlayVoiceIdxDic; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_int__o *canPlayVoiceIdxList; // x8
  int v13; // w9
  struct System_Collections_Generic_List_ServantVoiceData____o *v14; // x8
  int32_t v15; // w21
  struct System_Int32_array *items; // x9
  _QWORD *v17; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_ServantVoiceData____o *firstPlayVoiceList; // x8
  int32_t v20; // w2
  int v21; // w9

  if ( (byte_4C2289E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_4C2289E = 1;
  }
  this->fields.asstName = assetName;
  this->fields.playCnt = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)assetName, (int32_t)assetName, method);
  if ( list )
  {
    this->fields.voiceList = list;
    p_voiceList = &this->fields.voiceList;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voiceList, (int32_t)list, v7, v8);
    canPlayVoiceIdxList = this->fields.canPlayVoiceIdxList;
    if ( !canPlayVoiceIdxList )
      goto LABEL_21;
    v13 = canPlayVoiceIdxList->fields._version + 1;
    canPlayVoiceIdxList->fields._size = 0;
    canPlayVoiceIdxList->fields._version = v13;
    v14 = *p_voiceList;
    if ( *p_voiceList )
    {
      v15 = 0;
      while ( v15 < v14->fields._size )
      {
        canFirstPlayVoiceIdxDic = this->fields.canPlayVoiceIdxList;
        if ( canFirstPlayVoiceIdxDic )
        {
          items = canFirstPlayVoiceIdxDic->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++canFirstPlayVoiceIdxDic->fields._version;
          if ( items )
          {
            size = canFirstPlayVoiceIdxDic->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                canFirstPlayVoiceIdxDic,
                v15,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
              v14 = *p_voiceList;
            }
            else
            {
              canFirstPlayVoiceIdxDic->fields._size = size + 1;
              items->m_Items[size] = v15;
            }
            ++v15;
            if ( v14 )
              continue;
          }
        }
        goto LABEL_21;
      }
    }
    firstPlayVoiceList = this->fields.firstPlayVoiceList;
    if ( !firstPlayVoiceList )
      goto LABEL_21;
    v20 = firstPlayVoiceList->fields._size;
    v21 = firstPlayVoiceList->fields._version + 1;
    firstPlayVoiceList->fields._size = 0;
    firstPlayVoiceList->fields._version = v21;
    if ( v20 >= 1 )
      System_Array__Clear((System_Array_o *)firstPlayVoiceList->fields._items, 0, v20, 0);
    canFirstPlayVoiceIdxDic = (System_Collections_Generic_List_int__o *)this->fields.canFirstPlayVoiceIdxDic;
    if ( !canFirstPlayVoiceIdxDic )
LABEL_21:
      sub_1C2D6EC(canFirstPlayVoiceIdxDic, v11);
    System_Collections_Generic_Dictionary_int__int___Clear(
      (System_Collections_Generic_Dictionary_int__int__o *)canFirstPlayVoiceIdxDic,
      (const MethodInfo_33D8944 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
}


void MyRoomSvtControl__setSvtVoice_33556572(
        MyRoomSvtControl_o *this,
        ServantVoiceData_array *data,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  const MethodInfo *v16; // x3

  if ( (byte_4C228A1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor___77929960);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4C228A1 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor_58233792(
    v7,
    1,
    (const MethodInfo_37893C0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor___77929960);
  if ( !v7
    || (items = v7->fields._items,
        v13 = Method_System_Collections_Generic_List_ServantVoiceData____Add__,
        ++v7->fields._version,
        !items) )
  {
    sub_1C2D6EC(v8, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      &data->obj,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v15[4] = (Il2CppClass *)data;
    sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)data, v10, v11);
  }
  MyRoomSvtControl__setSvtVoice(this, (System_Collections_Generic_List_ServantVoiceData____o *)v7, assetName, v16);
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
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C228A8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C2D490(&Method_MyRoomSvtControl_EndSetFace__);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&StringLiteral_23853/*"svtVoicePlay"*/);
    byte_4C228A8 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)standFigureCollectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C2D6EC(v4, v5);
    monitor = (UIStandFigureR_o *)v17.fields._current[1].monitor;
    if ( !monitor )
      sub_1C2D6EC(0, v5);
    UIStandFigureR__CancelPreloadFormAssets(monitor, 0);
    v8 = (UIStandFigureR_o *)current[1].monitor;
    v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomSvtControl_EndSetFace__, 0);
    if ( !v8 )
      sub_1C2D6EC(v10, v11);
    UIStandFigureR__RemoveCallback(v8, v9, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( this->fields.player )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_71148584(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_23853/*"svtVoicePlay"*/,
      0);
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0);
    this->fields.player = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.player, 0, v14, v15);
    *(_QWORD *)&this->fields.maxPlayCnt = 0;
  }
}


void MyRoomSvtControl__svtVoicePlay(MyRoomSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  MyRoomSvtControl_o *v4; // x19
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v8; // x8
  struct System_String_o *id; // x1
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

  v4 = this;
  if ( (byte_4C228A5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    this = (MyRoomSvtControl_o *)sub_1C2D490(&Method_MyRoomSvtControl_EndSetFace__);
    byte_4C228A5 = 1;
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
      v8 = randomVoiceList->m_Items[playCnt];
      if ( !v8 )
        goto LABEL_39;
      id = v8->fields.id;
      v4->fields.vcName = id;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.vcName, (int32_t)id, v2, v3);
      this = (MyRoomSvtControl_o *)v4->fields.standFigureCollectList;
      if ( !this
        || (this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                           (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
            (int)this < 2) )
      {
        v10 = v4->fields.randomVoiceList;
        if ( !v10 )
          goto LABEL_39;
        v11 = v4->fields.playCnt;
        if ( (unsigned int)v11 < LODWORD(v10->max_length) )
        {
          this = (MyRoomSvtControl_o *)v10->m_Items[v11];
          if ( this )
          {
            m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
            asstName = (int32_t)this->fields.asstName;
            FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0);
            this = (MyRoomSvtControl_o *)v4->fields.standFigureCollectList;
            if ( this )
            {
              v15 = FadeTime;
              this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( this )
              {
                m_CancellationTokenSource = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                System_Action___ctor(v17, (Il2CppObject *)v4, Method_MyRoomSvtControl_EndSetFace__, 0);
                if ( m_CancellationTokenSource )
                {
                  UIStandFigureR__SetFace_43824080(
                    m_CancellationTokenSource,
                    m_CancellationTokenSource_high,
                    asstName,
                    v17,
                    v15,
                    0);
                  return;
                }
              }
            }
          }
LABEL_39:
          sub_1C2D6EC(this, method);
        }
LABEL_37:
        sub_1C2D6F4(this, method, v2);
      }
      v18 = v4->fields.randomVoiceList;
      if ( !v18 )
        goto LABEL_39;
      v19 = v4->fields.playCnt;
      if ( (unsigned int)v19 >= LODWORD(v18->max_length) )
        goto LABEL_37;
      this = (MyRoomSvtControl_o *)v18->m_Items[v19];
      if ( !this )
        goto LABEL_39;
      fsm = this->fields.fsm;
      player = this->fields.player;
      v22 = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0);
      if ( fsm )
      {
        if ( player )
        {
          v23 = v22;
          this = (MyRoomSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.standFigureCollectList,
                                         (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
          if ( (_DWORD)this == (unsigned int)fsm->fields.m_CancellationTokenSource
            && (_DWORD)this == LODWORD(player->fields.cueSheetName)
            && (int)this >= 1 )
          {
            if ( (unsigned int)fsm->fields.m_CancellationTokenSource )
            {
              v24 = 0;
              v25 = (unsigned int)this - 1LL;
              while ( v24 < LODWORD(player->fields.cueSheetName) )
              {
                this = (MyRoomSvtControl_o *)v4->fields.standFigureCollectList;
                if ( !this )
                  goto LABEL_39;
                v26 = *((_DWORD *)&fsm->fields.fsm + v24);
                v27 = *((_DWORD *)&player->fields.objName + v24);
                this = (MyRoomSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               v24,
                                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
                if ( !this )
                  goto LABEL_39;
                v28 = (UIStandFigureR_o *)this->fields.m_CancellationTokenSource;
                if ( v24 )
                {
                  if ( !v28 )
                    goto LABEL_39;
                  v29 = 0;
                }
                else
                {
                  v29 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(v29, (Il2CppObject *)v4, Method_MyRoomSvtControl_EndSetFace__, 0);
                  if ( !v28 )
                    goto LABEL_39;
                }
                UIStandFigureR__SetFace_43824080(v28, v26, v27, v29, v23, 0);
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


void MyRoomSvtControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C228AC & 1) == 0 )
  {
    sub_1C2D490(&MyRoomSvtControl___c_TypeInfo);
    byte_4C228AC = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(MyRoomSvtControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomSvtControl___c_TypeInfo->static_fields->__9 = (struct MyRoomSvtControl___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)MyRoomSvtControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C228AD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4C228AD = 1;
  }
  v7 = value;
  return System_Int32__CompareTo_64968396((int32_t)&v7, v5, 0);
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
  if ( (byte_4C228AE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__);
    byte_4C228AE = 1;
  }
  priorityList = this->fields.priorityList;
  if ( !priorityList )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C2D6EC)(0, x);
  return value == System_Collections_Generic_List_KeyValuePair_int__int____get_Item(
                    priorityList,
                    0,
                    (const MethodInfo_36FCE28 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___get_Item__).fields.value;
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
    sub_1C2D6EC(this, a);
  return System_Int32__Equals_64968544((int32_t)&v5, voice->fields.form, 0);
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
  __int64 v2; // x2
  struct StandFigureCollect_o *collect; // x9
  struct MyRoomSvtControl___c__DisplayClass22_0_o *CS___8__locals1; // x8
  struct MyRoomSvtControl_o *_4__this; // x11
  struct ServantVoiceData_array *randomVoiceList; // x10
  __int64 playCnt; // x11
  ServantVoiceData_o *v8; // x10

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
    sub_1C2D6F4(this, method, v2);
  v8 = randomVoiceList->m_Items[playCnt];
  if ( !v8 || (this = (MyRoomSvtControl___c__DisplayClass22_2_o *)collect->fields._standFigure_k__BackingField) == 0 )
LABEL_9:
    sub_1C2D6EC(this, method);
  UIStandFigureR__SetFace_43824080(
    (UIStandFigureR_o *)this,
    0,
    v8->fields.form,
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
    sub_1C2D6EC(this, a);
  return System_Int32__Equals_64968544((int32_t)&v5, voice->fields.form, 0);
}