void BgmManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct BgmManager_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct BgmManager_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BgmManager_StaticFields *v9; // x8

  if ( (byte_4C425EA & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&StringLiteral_2913/*"BGM_CHALDEA_1"*/);
    sub_1C37058(&StringLiteral_2914/*"BGM_CHALDEA_2"*/);
    byte_4C425EA = 1;
  }
  static_fields = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_VOLUME = 0x3DCCCCCD3F800000LL;
  v4 = StringLiteral_2913/*"BGM_CHALDEA_1"*/;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_2913/*"BGM_CHALDEA_1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v4, v1, v2);
  v5 = StringLiteral_2914/*"BGM_CHALDEA_2"*/;
  v6 = BgmManager_TypeInfo->static_fields;
  v6->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_2914/*"BGM_CHALDEA_2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v5, v7, v8);
  v9 = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&v9->ADD_BIND_MAX = 0x400000005LL;
  v9->isMute = 0;
  v9->masterVolume = 1.0;
}


void BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C425E9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager___ctor__);
    byte_4C425E9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.addBindList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadingBgmCueNameList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bgmPlayers, (int32_t)v9, v10, v11);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *Instance; // x20
  System_Collections_Generic_List_object__o *m_CachedPtr; // x20
  System_Predicate_object__o *v11; // x21
  Il2CppObject *v12; // x0

  if ( (byte_4C425C0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_BgmPlayerBase__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C37058(&Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__);
    sub_1C37058(&BgmManager___c__DisplayClass29_0_TypeInfo);
    byte_4C425C0 = 1;
  }
  v5 = sub_1C372A4(BgmManager___c__DisplayClass29_0_TypeInfo);
  BgmManager___c__DisplayClass29_0___ctor((BgmManager___c__DisplayClass29_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)bgmName, v7, v8);
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( !v6 )
  {
    if ( Instance )
    {
      m_CachedPtr = (System_Collections_Generic_List_object__o *)Instance[2].fields.m_CachedPtr;
      v11 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_BgmPlayerBase__TypeInfo);
      System_Predicate_object____ctor(
        v11,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__,
        0);
      if ( m_CachedPtr )
      {
        v12 = System_Collections_Generic_List_object___Find(
                m_CachedPtr,
                (System_Predicate_T__o *)v11,
                (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v12 )
          BgmPlayerBase__set_BgmVolume((BgmPlayerBase_o *)v12, volume, 0);
        return;
      }
    }
LABEL_12:
    sub_1C372B4(v6);
  }
}


System_Collections_IEnumerator_o *BgmManager__CoWaitSameAudioLoading(
        BgmManager_o *this,
        System_String_o *bgmName,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C425DD & 1) == 0 )
  {
    sub_1C37058(&BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo);
    byte_4C425DD = 1;
  }
  v7 = sub_1C372A4(BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo);
  BgmManager__CoWaitSameAudioLoading_d__63___ctor((BgmManager__CoWaitSameAudioLoading_d__63_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)bgmName, v11, v12);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v13, v14);
  return (System_Collections_IEnumerator_o *)v7;
}


void BgmManager__Enable_KeepSubBgm(bool value, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  int v5; // w9

  if ( (byte_4C425D3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C372B4(v4);
    if ( value )
      v5 = 1;
    else
      v5 = -1;
    LODWORD(Instance[4].monitor) = (LODWORD(Instance[4].monitor) + v5) & ~((LODWORD(Instance[4].monitor) + v5) >> 31);
  }
}


System_Collections_Generic_IEnumerable_T__o *BgmManager__EnumeratePlayersHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_30D92B8 *method)
{
  long double v3; // q0
  const MethodInfo_30D92B8_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass54_0_T; // x0
  __int64 v9; // x22
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  long double inited; // q0
  const MethodInfo_30D92B8_RGCTXs *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  __int64 _5_System_Func_T__bool; // x0
  System_Func_object__bool__o *v19; // x21
  __int64 _6_BgmManager___c__54_T; // x0
  Il2CppClass *v21; // x0
  Il2CppClass *v22; // x0
  const MethodInfo_30D92B8_RGCTXs *v23; // x8
  __int64 v24; // x0
  __int64 v25; // x8
  Il2CppObject *v26; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  long double v29; // q0
  Il2CppClass *v30; // x0
  Il2CppClass *v31; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass54_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_;
  if ( (*(&rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BgmManager___c__DisplayClass54_0_T = sub_1C8776C(v3);
  v9 = sub_1C372A4(_0_BgmManager___c__DisplayClass54_0_T);
  BgmManager___c__DisplayClass54_0_object____ctor(
    (BgmManager___c__DisplayClass54_0_T__o *)v9,
    (const MethodInfo_32BB280 *)method->rgctx_data->_1_BgmManager___c__DisplayClass54_0_T___ctor);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 16) = bgmNameFilter;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)bgmNameFilter, v11, v12);
  v13 = *(_QWORD *)(v9 + 16);
  v14 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
          (const MethodInfo_3116E34 *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  v16 = method->rgctx_data;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( v13 )
  {
    _5_System_Func_T__bool = (__int64)v16->_5_System_Func_T__bool_;
    if ( (*(_BYTE *)(_5_System_Func_T__bool + 309) & 1) == 0 )
      _5_System_Func_T__bool = sub_1C8776C(inited);
    v19 = (System_Func_object__bool__o *)sub_1C372A4(_5_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v19,
      (Il2CppObject *)v9,
      (intptr_t)method->rgctx_data->_10_BgmManager___c__DisplayClass54_0_T___EnumeratePlayersHavingBgmName_b__1,
      (const MethodInfo_36392B8 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
  }
  else
  {
    _6_BgmManager___c__54_T = (__int64)v16->_6_BgmManager___c__54_T_;
    if ( (*(_BYTE *)(_6_BgmManager___c__54_T + 309) & 1) == 0 )
      _6_BgmManager___c__54_T = sub_1C8776C(inited);
    if ( !*(_DWORD *)(_6_BgmManager___c__54_T + 224) )
      inited = j_il2cpp_runtime_class_init_0(_6_BgmManager___c__54_T);
    v21 = method->rgctx_data->_6_BgmManager___c__54_T_;
    if ( (*(&v21->_2.bitflags2 + 2) & 1) == 0 )
      v21 = (Il2CppClass *)sub_1C8776C(inited);
    v19 = (System_Func_object__bool__o *)*((_QWORD *)v21->static_fields + 1);
    if ( !v19 )
    {
      v22 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (*(&v22->_2.bitflags2 + 2) & 1) == 0 )
        v22 = (Il2CppClass *)sub_1C8776C(inited);
      if ( !v22->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(v22);
      v23 = method->rgctx_data;
      v24 = (__int64)v23->_6_BgmManager___c__54_T_;
      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      {
        v24 = sub_1C8776C(inited);
        v23 = method->rgctx_data;
      }
      v25 = (__int64)v23->_5_System_Func_T__bool_;
      v26 = **(Il2CppObject ***)(v24 + 184);
      if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
        v25 = sub_1C8776C(inited);
      v19 = (System_Func_object__bool__o *)sub_1C372A4(v25);
      System_Func_object__bool____ctor(
        v19,
        v26,
        (intptr_t)method->rgctx_data->_7_BgmManager___c__54_T___EnumeratePlayersHavingBgmName_b__54_0,
        (const MethodInfo_36392B8 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
      v30 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (*(&v30->_2.bitflags2 + 2) & 1) == 0 )
        v30 = (Il2CppClass *)sub_1C8776C(v29);
      *((_QWORD *)v30->static_fields + 1) = v19;
      v31 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (*(&v31->_2.bitflags2 + 2) & 1) == 0 )
        v31 = (Il2CppClass *)sub_1C8776C(v29);
      sub_1C36FFC((CGThumbnailListItem_o *)((char *)v31->static_fields + 8), (int32_t)v19, v27, v28);
    }
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          v17,
                                                          (System_Func_TSource__bool__o *)v19,
                                                          (const MethodInfo_312E410 *)method->rgctx_data->_9_System_Linq_Enumerable_Where_T_);
}


bool BgmManager__ExistsPlayerHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_30D9484 *method)
{
  const MethodInfo_30D92B8 **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  rgctx_data = (const MethodInfo_30D92B8 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = (const MethodInfo_30D92B8 **)method->rgctx_data;
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, bgmNameFilter, *rgctx_data);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_30F37D0 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_);
}


BgmPlayArgsGroup_o *BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0

  if ( (byte_4C425B8 & 1) == 0 )
  {
    sub_1C37058(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v2 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v2);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_30D94D0 *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *BgmManager__ExportPlayArgsGroupLocal_object_(BgmManager_o *this, const MethodInfo_30D94D0 *method)
{
  const MethodInfo_30D92B8 **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__76_T; // x8
  Il2CppClass *v8; // x0
  System_Func_object__object__o *v9; // x21
  Il2CppClass *v10; // x0
  const MethodInfo_30D94D0_RGCTXs *v11; // x8
  __int64 v12; // x0
  __int64 _3_System_Func_T__BgmPlayArgs; // x8
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  long double v17; // q0
  Il2CppClass *v18; // x0
  Il2CppClass *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x19
  BgmPlayArgsGroup_o *v22; // x20

  rgctx_data = (const MethodInfo_30D92B8 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&BgmPlayArgsGroup_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    rgctx_data = (const MethodInfo_30D92B8 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8(method);
      rgctx_data = (const MethodInfo_30D92B8 **)method->rgctx_data;
    }
  }
  v5 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, 0, *rgctx_data);
  _4_BgmManager___c__76_T = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (*(&_4_BgmManager___c__76_T->_2.bitflags2 + 2) & 1) == 0 )
    _4_BgmManager___c__76_T = (Il2CppClass *)sub_1C8776C(inited);
  if ( !_4_BgmManager___c__76_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__76_T);
  v8 = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (*(&v8->_2.bitflags2 + 2) & 1) == 0 )
    v8 = (Il2CppClass *)sub_1C8776C(inited);
  v9 = (System_Func_object__object__o *)*((_QWORD *)v8->static_fields + 1);
  if ( !v9 )
  {
    v10 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (*(&v10->_2.bitflags2 + 2) & 1) == 0 )
      v10 = (Il2CppClass *)sub_1C8776C(inited);
    if ( !v10->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = method->rgctx_data;
    v12 = (__int64)v11->_4_BgmManager___c__76_T_;
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    {
      v12 = sub_1C8776C(inited);
      v11 = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = (__int64)v11->_3_System_Func_T__BgmPlayArgs_;
    v14 = **(Il2CppObject ***)(v12 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__BgmPlayArgs + 309) & 1) == 0 )
      _3_System_Func_T__BgmPlayArgs = sub_1C8776C(inited);
    v9 = (System_Func_object__object__o *)sub_1C372A4(_3_System_Func_T__BgmPlayArgs);
    System_Func_object__object____ctor(
      v9,
      v14,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__76_T___ExportPlayArgsGroupLocal_b__76_0,
      (const MethodInfo_3639960 *)method->rgctx_data->_6_System_Func_T__BgmPlayArgs___ctor);
    v18 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (*(&v18->_2.bitflags2 + 2) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1C8776C(v17);
    *((_QWORD *)v18->static_fields + 1) = v9;
    v19 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (*(&v19->_2.bitflags2 + 2) & 1) == 0 )
      v19 = (Il2CppClass *)sub_1C8776C(v17);
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)v19->static_fields + 8), (int32_t)v9, v15, v16);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TResult__o *)v9,
                                                               (const MethodInfo_311E324 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__BgmPlayArgs_);
  v21 = System_Linq_Enumerable__ToArray_object_(
          v20,
          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v22 = (BgmPlayArgsGroup_o *)sub_1C372A4(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_41206760(v22, (BgmPlayArgs_array *)v21, 0);
  return v22;
}


System_String_o *BgmManager__ExtractCueName(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_array *v4; // x0
  il2cpp_array_size_t max_length; // x8

  if ( (byte_4C425E0 & 1) == 0 )
  {
    sub_1C37058(&char___TypeInfo);
    byte_4C425E0 = 1;
  }
  v4 = (System_String_array *)sub_1C37100(char___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_9;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 47;
  if ( !name || (v4 = System_String__Split_63610732(name, (System_Char_array *)v4, 0)) == 0 )
LABEL_9:
    sub_1C372B4(v4);
  max_length = v4->max_length;
  if ( !(_DWORD)max_length )
LABEL_10:
    sub_1C372BC(v4);
  return *(System_String_o **)((char *)v4->m_Items + ((__int64)((max_length << 32) - 0x100000000LL) >> 29));
}


void BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4C425C8 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C425C8 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopBgm(0, fadeoutTime, callback, v3);
}


// local variable allocation has failed, the output may be wrong!
bool BgmManager__FadeoutBgmLocal_object_(
        BgmManager_o *this,
        float fadeoutTime,
        System_String_o *name,
        const MethodInfo_30D968C *method)
{
  const MethodInfo_30D968C_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass67_0_T; // x0
  BgmManager___c__DisplayClass67_0_T__o *v10; // x22
  __int64 v11; // x0
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  long double v13; // q0
  Il2CppClass *_5_System_Func_T__bool; // x8
  System_Func_object__bool__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_bool___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_bool___);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_BgmManager___c__DisplayClass67_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_;
  if ( (*(&rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BgmManager___c__DisplayClass67_0_T = sub_1C8776C(*(long double *)&fadeoutTime);
  v10 = (BgmManager___c__DisplayClass67_0_T__o *)sub_1C372A4(_0_BgmManager___c__DisplayClass67_0_T);
  BgmManager___c__DisplayClass67_0_object____ctor(
    v10,
    (const MethodInfo_32BC7E4 *)method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor);
  if ( !v10 )
    sub_1C372B4(v11);
  v10->fields.fadeoutTime = fadeoutTime;
  v12 = BgmManager__EnumeratePlayersHavingBgmName_object_(
          this,
          name,
          (const MethodInfo_30D92B8 *)method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_);
  _5_System_Func_T__bool = method->rgctx_data->_5_System_Func_T__bool_;
  if ( (*(&_5_System_Func_T__bool->_2.bitflags2 + 2) & 1) == 0 )
    _5_System_Func_T__bool = (Il2CppClass *)sub_1C8776C(v13);
  v15 = (System_Func_object__bool__o *)sub_1C372A4(_5_System_Func_T__bool);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass67_0_T___FadeoutBgmLocal_b__0,
    (const MethodInfo_36392B8 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                               (System_Func_TSource__TResult__o *)v15,
                                                               (const MethodInfo_311D460 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v16,
                                                               (const MethodInfo_3126FC4 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v17, (const MethodInfo_30F3008 *)Method_System_Linq_Enumerable_Any_bool___);
}


void BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0

  if ( (byte_4C425D1 & 1) == 0 )
  {
    sub_1C37058(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C372B4(v4);
    BgmManager__FadeoutBgmLocal_object_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0,
      (const MethodInfo_30D968C *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
  }
}


void BgmManager__FixedUpdate(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x19
  System_Collections_IEnumerable_o *bgmPlayers; // x8
  System_Collections_IEnumerable_o **p_bgmPlayers; // x25
  BgmPlayerBase_o *jinglePlayer; // x0
  bool IsPlaying; // w0
  int v7; // w26
  System_Collections_Generic_IEnumerable_TResult__o *v8; // x0
  BgmManager___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  System_Func_object__bool__o *_9__78_0; // x21
  Il2CppObject *v12; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL4 v16; // w0
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0
  BgmManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_T__o *v19; // x20
  System_Action_object__o *_9__78_1; // x21
  Il2CppObject *v21; // x22
  struct BgmManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BgmManager_o *v25; // x20
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *v27; // x21
  BgmManager___c_c *v28; // x0
  System_Action_object__o *_9__78_3; // x22
  Il2CppObject *v30; // x23
  struct BgmManager___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  System_Collections_IEnumerable_o *v35; // x19
  System_Action_object__o *v36; // x20
  Il2CppObject *v37; // x21
  struct BgmManager___c_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  v2 = this;
  if ( (byte_4C425E7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_GeneralBgmPlayer__TypeInfo);
    sub_1C37058(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C37058(&System_Action_BgmPlayArgs__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_BgmPlayArgs___);
    sub_1C37058(&Method_BasicHelper_ForEach_GeneralBgmPlayer___);
    sub_1C37058(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_1C37058(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
    sub_1C37058(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1C37058(&System_Func_GeneralBgmPlayer__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1C37058(&Method_BgmManager___c__FixedUpdate_b__78_0__);
    sub_1C37058(&Method_BgmManager___c__FixedUpdate_b__78_1__);
    sub_1C37058(&Method_BgmManager___c__FixedUpdate_b__78_2__);
    sub_1C37058(&Method_BgmManager___c__FixedUpdate_b__78_3__);
    this = (BgmManager_o *)sub_1C37058(&BgmManager___c_TypeInfo);
    byte_4C425E7 = 1;
  }
  p_bgmPlayers = (System_Collections_IEnumerable_o **)&v2->fields.bgmPlayers;
  bgmPlayers = (System_Collections_IEnumerable_o *)v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_47;
  if ( SLODWORD(bgmPlayers[1].monitor) >= 1 )
  {
    jinglePlayer = (BgmPlayerBase_o *)v2->fields.jinglePlayer;
    if ( jinglePlayer )
    {
      IsPlaying = BgmPlayerBase__IsPlaying(jinglePlayer, 0);
      bgmPlayers = *p_bgmPlayers;
      v7 = IsPlaying;
    }
    else
    {
      v7 = 0;
    }
    v8 = System_Linq_Enumerable__OfType_object_(
           bgmPlayers,
           (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    v9 = BgmManager___c_TypeInfo;
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v9 = BgmManager___c_TypeInfo;
    }
    _9__78_0 = (System_Func_object__bool__o *)v9->static_fields->__9__78_0;
    if ( !_9__78_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BgmManager___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__78_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GeneralBgmPlayer__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__78_0, v12, Method_BgmManager___c__FixedUpdate_b__78_0__, 0);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__78_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__78_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__78_0, (int32_t)_9__78_0, v14, v15);
    }
    v16 = System_Linq_Enumerable__Any_object__51336868(
            v10,
            (System_Func_TSource__bool__o *)_9__78_0,
            (const MethodInfo_30F56A4 *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v16 & v7) != 0 )
    {
      v17 = System_Linq_Enumerable__OfType_object_(
              *p_bgmPlayers,
              (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
      v18 = BgmManager___c_TypeInfo;
      v19 = (System_Collections_Generic_IEnumerable_T__o *)v17;
      if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
        v18 = BgmManager___c_TypeInfo;
      }
      _9__78_1 = (System_Action_object__o *)v18->static_fields->__9__78_1;
      if ( !_9__78_1 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = BgmManager___c_TypeInfo;
        }
        v21 = (Il2CppObject *)v18->static_fields->__9;
        _9__78_1 = (System_Action_object__o *)sub_1C372A4(System_Action_GeneralBgmPlayer__TypeInfo);
        System_Action_object____ctor(_9__78_1, v21, Method_BgmManager___c__FixedUpdate_b__78_1__, 0);
        v22 = BgmManager___c_TypeInfo->static_fields;
        v22->__9__78_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__78_1;
        sub_1C36FFC((CGThumbnailListItem_o *)&v22->__9__78_1, (int32_t)_9__78_1, v23, v24);
      }
      BasicHelper__ForEach_object_(
        v19,
        (System_Action_T__o *)_9__78_1,
        (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v2->fields.isBgmStopJingle = 1;
    }
    else if ( !v16
           && v2->fields.isBgmStopJingle
           && v7 == 0
           && BgmManager__ExistsPlayerHavingBgmName_object_(
                v2,
                0,
                (const MethodInfo_30D9484 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
    {
      this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                               v2,
                               (const MethodInfo_30D94D0 *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
      if ( !this )
        goto LABEL_47;
      v25 = this;
      v26 = BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0);
      v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                             (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      this = (BgmManager_o *)BgmManager__StopBgmLocal_object_(
                               v2,
                               0,
                               (const MethodInfo_30D9878 *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
      if ( !v27 )
        goto LABEL_47;
      if ( v27[1].monitor )
      {
        v28 = BgmManager___c_TypeInfo;
        if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
          v28 = BgmManager___c_TypeInfo;
        }
        _9__78_3 = (System_Action_object__o *)v28->static_fields->__9__78_3;
        if ( !_9__78_3 )
        {
          if ( !v28->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v28);
            v28 = BgmManager___c_TypeInfo;
          }
          v30 = (Il2CppObject *)v28->static_fields->__9;
          _9__78_3 = (System_Action_object__o *)sub_1C372A4(System_Action_BgmPlayArgs__TypeInfo);
          System_Action_object____ctor(_9__78_3, v30, Method_BgmManager___c__FixedUpdate_b__78_3__, 0);
          v31 = BgmManager___c_TypeInfo->static_fields;
          v31->__9__78_3 = (struct System_Action_BgmPlayArgs__o *)_9__78_3;
          sub_1C36FFC((CGThumbnailListItem_o *)&v31->__9__78_3, (int32_t)_9__78_3, v32, v33);
        }
        BasicHelper__ForEach_object_(
          v27,
          (System_Action_T__o *)_9__78_3,
          (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_BgmPlayArgs___);
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        BgmManager__PlayBgm_41189992((BgmPlayArgsGroup_o *)v25, 0, v34);
      }
    }
    if ( !v7 )
      v2->fields.isBgmStopJingle = 0;
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
    v35 = *p_bgmPlayers;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v36 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 10);
    if ( !v36 )
    {
      if ( !LODWORD(this[2].fields.mainBgmPlayer) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (BgmManager_o *)BgmManager___c_TypeInfo;
      }
      v37 = *(Il2CppObject **)this[2].monitor;
      v36 = (System_Action_object__o *)sub_1C372A4(System_Action_BgmPlayerBase__TypeInfo);
      System_Action_object____ctor(v36, v37, Method_BgmManager___c__FixedUpdate_b__78_2__, 0);
      v38 = BgmManager___c_TypeInfo->static_fields;
      v38->__9__78_2 = (struct System_Action_BgmPlayerBase__o *)v36;
      sub_1C36FFC((CGThumbnailListItem_o *)&v38->__9__78_2, (int32_t)v36, v39, v40);
    }
    if ( v35 )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)v35,
        (System_Action_T__o *)v36,
        (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
      return;
    }
LABEL_47:
    sub_1C372B4(this);
  }
}


void BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0

  if ( (byte_4C425D4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C372B4(v2);
    LODWORD(Instance[4].monitor) = 0;
  }
}


CriAtomSource_o *BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C425E5 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
    byte_4C425E5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_object_(
                              gameObject,
                              (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *CueSheet; // x0
  SoundManager_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4C425BA & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C425BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, name, 0);
  v5 = SoundManager_TypeInfo;
  v6 = CueSheet;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v5 = SoundManager_TypeInfo;
  }
  return System_String__op_Equality(v6, v5->static_fields->RESIDENT_RESOURCE_SOUND_NAME, 0);
}


System_String_o *BgmManager__GetBgmName(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  bool v2; // w8
  System_String_o *result; // x0
  UnityEngine_Object_c *klass; // x8

  if ( (byte_4C425CC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425CC = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality(Instance, 0, 0);
  result = 0;
  if ( !v2 )
  {
    if ( !Instance || (klass = Instance[2].klass) == 0 )
      sub_1C372B4(0);
    return (System_String_o *)klass->_1.namespaze;
  }
  return result;
}


System_String_o *BgmManager__GetMainBgmName(bool isFormation, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t UiFlag; // w19
  System_Collections_ICollection_o *ClearWarIdList; // x20
  BalanceConfig_c *v7; // x0
  BalanceConfig_c *v8; // x0
  System_String_o **p_bgmName; // x8
  BgmManager_c *v10; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  TerminalOverwriteEntity_o *v13; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *bgmName; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C425E8 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_19323/*"excludeFormation"*/);
    byte_4C425E8 = 1;
  }
  v13 = 0;
  bgmName = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( !MasterData_object )
    goto LABEL_9;
  Instance = (Il2CppObject *)TerminalOverwriteMaster__TryGetOverwriteMainBgmName(
                               (TerminalOverwriteMaster_o *)MasterData_object,
                               &bgmName,
                               &v13,
                               0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_9;
  if ( !isFormation )
  {
LABEL_23:
    p_bgmName = &bgmName;
    return *p_bgmName;
  }
  if ( !v13 )
LABEL_25:
    sub_1C372B4(Instance);
  if ( EntityScriptUtil__GetIntValue(v13->fields.script, (System_String_o *)StringLiteral_19323/*"excludeFormation"*/, 0, 0) != 1 )
    goto LABEL_23;
LABEL_9:
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  UiFlag = ServantCommentManager__GetUiFlag(0);
  ClearWarIdList = (System_Collections_ICollection_o *)ServantCommentManager__GetClearWarIdList(0);
  if ( BasicHelper__IsNullOrEmpty(ClearWarIdList, 0) )
    goto LABEL_18;
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
          v7->static_fields->OrdealCallWarId,
          (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
LABEL_18:
    v10 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v10 = BgmManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    if ( UiFlag == 1 )
      p_bgmName = &static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
    else
      p_bgmName = &static_fields->DEFAULT_MAIN_BGM_NAME;
  }
  else
  {
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    p_bgmName = &v8->static_fields->OrdealCallClearBgmName;
  }
  return *p_bgmName;
}


float BgmManager__GetMasterVolume(const MethodInfo *method)
{
  BgmManager_c *v1; // x0

  if ( (byte_4C425BE & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C425BE = 1;
  }
  v1 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v1 = BgmManager_TypeInfo;
  }
  return v1->static_fields->masterVolume;
}


JinglePlayer_o *BgmManager__GetOrCreateJinglePlayer(BgmManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0
  JinglePlayer_o *v4; // x0
  struct System_String_o *bgmName; // x8
  JinglePlayer_o **p_jinglePlayer; // x20
  JinglePlayer_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  JinglePlayer_c *klass; // x9
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *jinglePlayer; // x1
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 bgmName_low; // x10
  __int64 v18; // x8

  if ( (byte_4C425E4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_JinglePlayer___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
    sub_1C37058(&JinglePlayer_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    byte_4C425E4 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  v4 = (JinglePlayer_o *)System_Linq_Enumerable__ToArray_object_(
                           v3,
                           (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !v4 )
    goto LABEL_15;
  bgmName = v4->fields.bgmName;
  if ( !bgmName )
  {
    v7 = (JinglePlayer_o *)sub_1C372A4(JinglePlayer_TypeInfo);
    JinglePlayer___ctor(v7, 0);
    this->fields.jinglePlayer = v7;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.jinglePlayer, (int32_t)v7, v8, v9);
    bgmPlayers = this->fields.bgmPlayers;
    if ( bgmPlayers )
    {
      v4 = *p_jinglePlayer;
      if ( *p_jinglePlayer )
      {
        klass = v4->klass;
        v4->fields.index = bgmPlayers->fields._size;
        ((void (__fastcall *)(JinglePlayer_o *, const MethodInfo *))klass->vtable._5_Initialize.methodPtr)(
          v4,
          klass->vtable._5_Initialize.method);
        v4 = (JinglePlayer_o *)this->fields.bgmPlayers;
        if ( v4 )
        {
          jinglePlayer = (Il2CppObject *)this->fields.jinglePlayer;
          v15 = *(_QWORD *)&v4->fields.index;
          v16 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++HIDWORD(v4->fields.bgmName);
          if ( v15 )
          {
            bgmName_low = SLODWORD(v4->fields.bgmName);
            if ( (unsigned int)bgmName_low >= *(_DWORD *)(v15 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)v4,
                jinglePlayer,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = v15 + 8 * bgmName_low;
              LODWORD(v4->fields.bgmName) = bgmName_low + 1;
              *(_QWORD *)(v18 + 32) = jinglePlayer;
              sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 32), (int32_t)jinglePlayer, v12, v13);
            }
            return *p_jinglePlayer;
          }
        }
      }
    }
LABEL_15:
    sub_1C372B4(v4);
  }
  if ( !(_DWORD)bgmName )
    sub_1C372BC(v4);
  p_jinglePlayer = (JinglePlayer_o **)&v4->fields.bgmVolume;
  return *p_jinglePlayer;
}


SubBgmPlayer_o *BgmManager__GetOrCreateSubBgmPlayer(
        BgmManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Object_array *v10; // x20
  System_Func_object__bool__o *v11; // x22
  SubBgmPlayer_o *object; // x21
  BgmManager___c_c *v13; // x0
  System_Func_object__bool__o *_9__72_1; // x21
  Il2CppObject *v15; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  SubBgmPlayer_c *klass; // x9
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8

  if ( (byte_4C425E3 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Find_SubBgmPlayer___);
    sub_1C37058(&Method_System_Linq_Enumerable_First_SubBgmPlayer___);
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
    sub_1C37058(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1C37058(&SubBgmPlayer_TypeInfo);
    sub_1C37058(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__);
    sub_1C37058(&Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__);
    sub_1C37058(&BgmManager___c__DisplayClass72_0_TypeInfo);
    sub_1C37058(&BgmManager___c_TypeInfo);
    byte_4C425E3 = 1;
  }
  v5 = sub_1C372A4(BgmManager___c__DisplayClass72_0_TypeInfo);
  BgmManager___c__DisplayClass72_0___ctor((BgmManager___c__DisplayClass72_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)bgmName, v7, v8);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v10 = System_Linq_Enumerable__ToArray_object_(
          v9,
          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v11 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__,
    0);
  object = (SubBgmPlayer_o *)BasicHelper__Find_object_(
                               v10,
                               (System_Func_T__bool__o *)v11,
                               (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( object )
    return object;
  v13 = BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v13 = BgmManager___c_TypeInfo;
  }
  _9__72_1 = (System_Func_object__bool__o *)v13->static_fields->__9__72_1;
  if ( !_9__72_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BgmManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__72_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__72_1, v15, Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__72_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__72_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__72_1, (int32_t)_9__72_1, v17, v18);
  }
  v6 = (System_Collections_Generic_List_object__o *)BasicHelper__Find_object_(
                                                      v10,
                                                      (System_Func_T__bool__o *)_9__72_1,
                                                      (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_SubBgmPlayer___);
  object = (SubBgmPlayer_o *)v6;
  if ( v6 )
    return object;
  if ( !v10 )
LABEL_23:
    sub_1C372B4(v6);
  if ( SLODWORD(v10->max_length) <= 1 )
  {
    object = (SubBgmPlayer_o *)sub_1C372A4(SubBgmPlayer_TypeInfo);
    SubBgmPlayer___ctor(object, 0);
    bgmPlayers = this->fields.bgmPlayers;
    if ( bgmPlayers )
    {
      if ( object )
      {
        klass = object->klass;
        object->fields.index = bgmPlayers->fields._size;
        ((void (__fastcall *)(SubBgmPlayer_o *, const MethodInfo *))klass->vtable._5_Initialize.methodPtr)(
          object,
          klass->vtable._5_Initialize.method);
        v6 = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
        if ( v6 )
        {
          items = v6->fields._items;
          v25 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++v6->fields._version;
          if ( items )
          {
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)object,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v27[4] = (Il2CppClass *)object;
              sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)object, v22, v23);
            }
            return object;
          }
        }
      }
    }
    goto LABEL_23;
  }
  return (SubBgmPlayer_o *)System_Linq_Enumerable__First_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                             (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
}


void BgmManager__Initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C425B9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C372B4(v2);
    BgmManager__InitializeLocal((BgmManager_o *)Instance, v3);
  }
}


void BgmManager__InitializeLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x19
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  MainBgmPlayer_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct MainBgmPlayer_o *mainBgmPlayer; // x1
  intptr_t m_CachedPtr; // x8
  _QWORD *v11; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v13; // x8
  System_Collections_Generic_List_object__o *v14; // x19
  System_Action_object__o *v15; // x20
  Il2CppObject *v16; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  BgmManager_c *v20; // x0

  v2 = this;
  if ( (byte_4C425D5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1C37058(&MainBgmPlayer_TypeInfo);
    sub_1C37058(&Method_BgmManager___c__InitializeLocal_b__50_0__);
    this = (BgmManager_o *)sub_1C37058(&BgmManager___c_TypeInfo);
    byte_4C425D5 = 1;
  }
  bgmPlayers = v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_21;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v4 = (MainBgmPlayer_o *)sub_1C372A4(MainBgmPlayer_TypeInfo);
    MainBgmPlayer___ctor(v4, 0);
    v2->fields.mainBgmPlayer = v4;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.mainBgmPlayer, (int32_t)v4, v5, v6);
    mainBgmPlayer = v2->fields.mainBgmPlayer;
    if ( !mainBgmPlayer )
      goto LABEL_21;
    mainBgmPlayer->fields.index = 0;
    this = (BgmManager_o *)v2->fields.bgmPlayers;
    if ( !this )
      goto LABEL_21;
    m_CachedPtr = this->fields.m_CachedPtr;
    v11 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_21;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)mainBgmPlayer,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v13 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v13 + 32) = mainBgmPlayer;
      sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)mainBgmPlayer, v7, v8);
    }
  }
  v14 = (System_Collections_Generic_List_object__o *)v2->fields.bgmPlayers;
  this = (BgmManager_o *)BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
  }
  v15 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 1);
  if ( !v15 )
  {
    if ( !LODWORD(this[2].fields.mainBgmPlayer) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v16 = *(Il2CppObject **)this[2].monitor;
    v15 = (System_Action_object__o *)sub_1C372A4(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(v15, v16, Method_BgmManager___c__InitializeLocal_b__50_0__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)v15;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__50_0, (int32_t)v15, v18, v19);
  }
  if ( !v14 )
LABEL_21:
    sub_1C372B4(this);
  System_Collections_Generic_List_object___ForEach(
    v14,
    (System_Action_T__o *)v15,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v20 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v20);
}


bool BgmManager__IsKeepSubBgm(BgmManager_o *this, const MethodInfo *method)
{
  return this->fields.enableCounter_KeepSubBgm > 0;
}


bool BgmManager__IsLoadingLocal(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  BgmManager_o *v4; // x19
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x8
  struct System_Collections_Generic_List_string__o *v7; // x8

  v4 = this;
  if ( (byte_4C425DF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    this = (BgmManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4C425DF = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)v4->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_object___Contains(
               loadingBgmCueNameList,
               (Il2CppObject *)this,
               (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_1C372B4(this);
  }
  v7 = v4->fields.loadingBgmCueNameList;
  if ( !v7 )
    goto LABEL_8;
  return v7->fields._size > 0;
}


bool BgmManager__IsPlayBgm(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0

  if ( (byte_4C425C1 & 1) == 0 )
  {
    sub_1C37058(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v4);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_30D9484 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0

  if ( (byte_4C425CD & 1) == 0 )
  {
    sub_1C37058(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v4);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_30D9484 *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0

  if ( (byte_4C425DE & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C425DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName((BgmManager_o *)Instance, bgmName, v5);
  if ( !Instance )
    sub_1C372B4(CueName);
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0) != 0;
}


void BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  bool v5; // w19

  if ( (byte_4C425D2 & 1) == 0 )
  {
    sub_1C37058(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    sub_1C37058(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C372B4(v4);
    v5 = isPause;
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v5,
      0,
      (const MethodInfo_30D97A8 *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v5,
      0,
      (const MethodInfo_30D97A8 *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


void BgmManager__PauseBgmLocal_object_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_30D97A8 *method)
{
  long double v4; // q0
  const MethodInfo_30D97A8_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass70_0_T; // x0
  BgmManager___c__DisplayClass70_0_T__o *v10; // x22
  __int64 v11; // x0
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  long double v13; // q0
  Il2CppClass *_5_System_Action_T; // x8
  System_Action_object__o *v15; // x21

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass70_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_;
  if ( (*(&rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BgmManager___c__DisplayClass70_0_T = sub_1C8776C(v4);
  v10 = (BgmManager___c__DisplayClass70_0_T__o *)sub_1C372A4(_0_BgmManager___c__DisplayClass70_0_T);
  BgmManager___c__DisplayClass70_0_object____ctor(
    v10,
    (const MethodInfo_32BDC3C *)method->rgctx_data->_1_BgmManager___c__DisplayClass70_0_T___ctor);
  if ( !v10 )
    sub_1C372B4(v11);
  v10->fields.isPause = isPause;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                         (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                         (const MethodInfo_3116E34 *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  _5_System_Action_T = method->rgctx_data->_5_System_Action_T_;
  if ( (*(&_5_System_Action_T->_2.bitflags2 + 2) & 1) == 0 )
    _5_System_Action_T = (Il2CppClass *)sub_1C8776C(v13);
  v15 = (System_Action_object__o *)sub_1C372A4(_5_System_Action_T);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass70_0_T___PauseBgmLocal_b__0,
    (const MethodInfo_3414520 *)method->rgctx_data->_6_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)v15,
    (const MethodInfo_30D3C18 *)method->rgctx_data->_7_BasicHelper_ForEach_T_);
}


void BgmManager__PlayBgm(
        System_String_o *name,
        float volume,
        float fadeTime,
        int64_t startTime,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Nullable_float__o p_volumeNullable; // x0
  BgmPlayArgsGroup_o *v12; // x0
  System_Nullable_float__o v13; // x2
  BgmPlayArgsGroup_o *v14; // x22
  const MethodInfo *v15; // x2
  System_Nullable_float__o volumeNullable; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C425C3 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&BgmPlayArgsGroup_TypeInfo);
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    byte_4C425C3 = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
  v12 = (BgmPlayArgsGroup_o *)sub_1C372A4(BgmPlayArgsGroup_TypeInfo);
  v13 = volumeNullable;
  v14 = v12;
  BgmPlayArgsGroup___ctor_41207880(v12, name, v13, fadeTime, startTime, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_41189992(v14, finishCallback, v15);
}


void BgmManager__PlayBgm_41189992(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x4

  if ( (byte_4C425C5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
  {
    ActionExtensions__Call(finishCallback, 0);
  }
  else
  {
    if ( !Instance )
      sub_1C372B4(v6);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, 1, v7);
  }
}


void BgmManager__PlayBgm_41190188(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *v7; // x22
  const MethodInfo *v8; // x2

  if ( (byte_4C425C4 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&BgmPlayArgsGroup_TypeInfo);
    byte_4C425C4 = 1;
  }
  v7 = (BgmPlayArgsGroup_o *)sub_1C372A4(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor(v7, main, (BgmPlayArgs_array *)subArray, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_41189992(v7, finishCallback, v8);
}


void BgmManager__PlayJingle(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4C425CE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C372B4(v8);
    BgmManager__PlayJingleLocal((BgmManager_o *)Instance, name, volume, callbackFunc, v9);
  }
}


void BgmManager__PlayJingleLocal(
        BgmManager_o *this,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x3

  if ( (byte_4C425E2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__);
    sub_1C37058(&BgmManager___c__DisplayClass71_0_TypeInfo);
    byte_4C425E2 = 1;
  }
  v9 = sub_1C372A4(BgmManager___c__DisplayClass71_0_TypeInfo);
  BgmManager___c__DisplayClass71_0___ctor((BgmManager___c__DisplayClass71_0_o *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = name;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)name, v13, v14);
  *(float *)(v9 + 32) = volume;
  *(_QWORD *)(v9 + 40) = callbackFunc;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)callbackFunc, v15, v16);
  v17 = *(System_String_o **)(v9 + 24);
  v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v9, Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, 0);
  BgmManager__PreloadBgm(this, v17, v18, v19);
}


void BgmManager__PlayJingle_41194156(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4C425CF & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C425CF = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, 0, v3);
}


void BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C425C6 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C425C6 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_41190188(args, 0, 0, v2);
}


void BgmManager__PlayPreloadBgms(BgmManager_o *this, const MethodInfo *method)
{
  BgmPlayArgsGroup_o *cacheArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v4; // x0
  System_Object_array *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v9; // x21
  unsigned __int64 v10; // x22

  if ( (byte_4C425DA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    byte_4C425DA = 1;
  }
  cacheArgsGroup = this->fields.cacheArgsGroup;
  if ( cacheArgsGroup )
  {
    v4 = BgmPlayArgsGroup__AllArgsListNullExcluded(cacheArgsGroup, 0);
    v5 = System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4,
           (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    if ( !v5 )
      sub_1C372B4(0);
    max_length = v5->max_length;
    v9 = v5;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= (unsigned int)max_length )
          sub_1C372BC(v5);
        BgmManager__PlayPreloadedBgm(this, (BgmPlayArgs_o *)v9->m_Items[v10], v6);
        LODWORD(max_length) = v9->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)max_length );
    }
    this->fields.cacheArgsGroup = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cacheArgsGroup, 0, (int32_t)v6, v7);
  }
}


void BgmManager__PlayPreloadedBgm(BgmManager_o *this, BgmPlayArgs_o *args, const MethodInfo *method)
{
  System_String_o *BgmName_k__BackingField; // x20
  const MethodInfo *v6; // x2
  BgmPlayArgs_c *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v9; // x11
  __int64 v10; // x11
  void *mainBgmPlayer; // x0

  if ( (byte_4C425DB & 1) == 0 )
  {
    sub_1C37058(&MainBgmPlayArgs_TypeInfo);
    sub_1C37058(&SubBgmPlayArgs_TypeInfo);
    byte_4C425DB = 1;
  }
  if ( args )
  {
    BgmName_k__BackingField = args->fields._BgmName_k__BackingField;
    if ( BgmName_k__BackingField )
    {
      if ( BgmManager__IsPreloadSucceeded(this, args->fields._BgmName_k__BackingField, method) )
      {
        klass = args->klass;
        naturalAligment = args->klass->_2.naturalAligment;
        v9 = MainBgmPlayArgs_TypeInfo->_2.naturalAligment;
        if ( naturalAligment >= (unsigned int)v9
          && (MainBgmPlayArgs_c *)klass->_2.typeHierarchy[v9 - 1] == MainBgmPlayArgs_TypeInfo )
        {
          mainBgmPlayer = this->fields.mainBgmPlayer;
        }
        else
        {
          v10 = SubBgmPlayArgs_TypeInfo->_2.naturalAligment;
          if ( naturalAligment < (unsigned int)v10
            || (SubBgmPlayArgs_c *)klass->_2.typeHierarchy[v10 - 1] != SubBgmPlayArgs_TypeInfo )
          {
            return;
          }
          mainBgmPlayer = BgmManager__GetOrCreateSubBgmPlayer(this, BgmName_k__BackingField, v6);
        }
        if ( !mainBgmPlayer )
          sub_1C372B4(0);
        (*(void (__fastcall **)(void *, System_String_o *, int64_t, _QWORD, float, float))(*(_QWORD *)mainBgmPlayer
                                                                                         + 456LL))(
          mainBgmPlayer,
          BgmName_k__BackingField,
          args->fields._StartTime_k__BackingField,
          *(_QWORD *)(*(_QWORD *)mainBgmPlayer + 464LL),
          args->fields._Volume_k__BackingField,
          args->fields._FadeTime_k__BackingField);
      }
    }
  }
}


void BgmManager__PlaySubBgm(SubBgmPlayArgs_o *args, const MethodInfo *method)
{
  __int64 v3; // x19
  _BOOL8 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x21
  Il2CppObject *Instance; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *v11; // x22
  System_String_o *v12; // x21
  BgmManager_o *v13; // x20
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4C425C7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C37058(&Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__);
    sub_1C37058(&BgmManager___c__DisplayClass36_0_TypeInfo);
    byte_4C425C7 = 1;
  }
  v3 = sub_1C372A4(BgmManager___c__DisplayClass36_0_TypeInfo);
  BgmManager___c__DisplayClass36_0___ctor((BgmManager___c__DisplayClass36_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = args;
  v7 = v3 + 24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)args, v5, v6);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v3 + 16) = Instance;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Instance, v9, v10);
  v11 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(v11, 0, 0);
  if ( !v4 )
  {
    if ( *(_QWORD *)v7 )
    {
      v12 = *(System_String_o **)(*(_QWORD *)v7 + 16LL);
      v13 = *(BgmManager_o **)(v3 + 16);
      v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)v3, Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, 0);
      if ( v13 )
      {
        BgmManager__PreloadBgm(v13, v12, v14, v15);
        return;
      }
    }
LABEL_10:
    sub_1C372B4(v4);
  }
}


void BgmManager__PreloadAndPlayBgms(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v9; // x19
  BgmPlayArgsGroup_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool v13; // w24
  BgmPlayArgsGroup_o **v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct BgmPlayArgsGroup_o *v21; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v22; // x0
  System_Object_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x20
  __int64 v27; // x23
  unsigned __int64 v28; // x24
  __int64 v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  System_Action_object__o *v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Object_array *v42; // x21
  ChainableActionParallel_o *v43; // x20
  __int64 v44; // x21
  System_Action_o *v45; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3

  if ( (byte_4C425D9 & 1) == 0 )
  {
    sub_1C37058(&System_Action___TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ChainableActionParallel_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1C37058(&Method_System_Collections_Generic_List_Action_Action___Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Action_Action___ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_Action_Action____ctor__);
    sub_1C37058(&System_Collections_Generic_List_Action_Action___TypeInfo);
    sub_1C37058(&Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__);
    sub_1C37058(&BgmManager___c__DisplayClass57_0_TypeInfo);
    sub_1C37058(&Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__);
    sub_1C37058(&BgmManager___c__DisplayClass57_1_TypeInfo);
    byte_4C425D9 = 1;
  }
  v9 = sub_1C372A4(BgmManager___c__DisplayClass57_0_TypeInfo);
  BgmManager___c__DisplayClass57_0___ctor((BgmManager___c__DisplayClass57_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 16) = this;
  v13 = isPlay;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = argsGroup;
  v14 = (BgmPlayArgsGroup_o **)(v9 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)argsGroup, v15, v16);
  *(_QWORD *)(v9 + 48) = finishCallback;
  *(_BYTE *)(v9 + 32) = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)finishCallback, v17, v18);
  v21 = *(struct BgmPlayArgsGroup_o **)(v9 + 24);
  if ( v21 )
  {
    this->fields.cacheArgsGroup = v21;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cacheArgsGroup, (int32_t)v21, v19, v20);
    v10 = *v14;
    if ( !*v14 )
      goto LABEL_24;
    v22 = BgmPlayArgsGroup__AllArgsListNullExcluded(v10, 0);
    v23 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v9 + 40) = v23;
    sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)v23, v24, v25);
    v26 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Action_Action___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v27 = *(_QWORD *)(v9 + 40);
    if ( !v27 )
      goto LABEL_24;
    if ( *(int *)(v27 + 24) >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        v29 = sub_1C372A4(BgmManager___c__DisplayClass57_1_TypeInfo);
        BgmManager___c__DisplayClass57_1___ctor((BgmManager___c__DisplayClass57_1_o *)v29, 0);
        if ( !v29 )
          break;
        *(_QWORD *)(v29 + 24) = v9;
        sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 24), v9, v30, v31);
        if ( v28 >= *(unsigned int *)(v27 + 24) )
          goto LABEL_25;
        v34 = *(_QWORD *)(v27 + 32 + 8 * v28);
        *(_QWORD *)(v29 + 16) = v34;
        sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 16), v34, v32, v33);
        v35 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v35,
          (Il2CppObject *)v29,
          Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__,
          0);
        if ( !v26 )
          break;
        items = v26->fields._items;
        v39 = Method_System_Collections_Generic_List_Action_Action___Add__;
        ++v26->fields._version;
        if ( !items )
          break;
        size = v26->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)v35,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v35;
          sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v35, v36, v37);
        }
        if ( (__int64)++v28 >= *(int *)(v27 + 24) )
          goto LABEL_17;
      }
LABEL_24:
      sub_1C372B4(v10);
    }
LABEL_17:
    if ( !v26 )
      goto LABEL_24;
    v42 = System_Collections_Generic_List_object___ToArray(
            v26,
            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v43 = (ChainableActionParallel_o *)sub_1C372A4(ChainableActionParallel_TypeInfo);
    ChainableActionParallel___ctor_49042072(v43, (System_Action_Action__array *)v42, 0);
    v44 = sub_1C37100(System_Action___TypeInfo, 1);
    v45 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)v9, Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__, 0);
    if ( !v44 )
      goto LABEL_24;
    if ( !*(_DWORD *)(v44 + 24) )
LABEL_25:
      sub_1C372BC(v10);
    *(_QWORD *)(v44 + 32) = v45;
    sub_1C36FFC((CGThumbnailListItem_o *)(v44 + 32), (int32_t)v45, v46, v47);
    if ( !v43 )
      goto LABEL_24;
    v10 = (BgmPlayArgsGroup_o *)ChainableActionBase__Final((ChainableActionBase_o *)v43, (System_Action_array *)v44, 0);
    if ( !v10 )
      goto LABEL_24;
    ChainableActionBase__Execute((ChainableActionBase_o *)v10, 0);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0);
  }
}


bool BgmManager__PreloadBgm(
        BgmManager_o *this,
        System_String_o *name,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x23
  SoundManager_o *Instance; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BgmManager_o *v13; // x0
  const MethodInfo *v14; // x2
  System_String_o *CueName; // x0
  Il2CppObject **v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_o *CueSheet; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool IsNullOrEmpty; // w22
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x3
  System_Collections_IEnumerator_o *v25; // x0

  if ( (byte_4C425DC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Insert__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__);
    sub_1C37058(&BgmManager___c__DisplayClass61_0_TypeInfo);
    byte_4C425DC = 1;
  }
  v7 = sub_1C372A4(BgmManager___c__DisplayClass61_0_TypeInfo);
  BgmManager___c__DisplayClass61_0___ctor((BgmManager___c__DisplayClass61_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 40) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)finishCallback, v11, v12);
  CueName = BgmManager__ExtractCueName(v13, name, v14);
  *(_QWORD *)(v7 + 24) = CueName;
  v16 = (Il2CppObject **)(v7 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)CueName, v17, v18);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CueSheet = SoundManager__GetCueSheet(Instance, *(System_String_o **)(v7 + 24), 0);
  *(_QWORD *)(v7 + 16) = CueSheet;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)CueSheet, v20, v21);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0);
  if ( !IsNullOrEmpty )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)Instance,
              *v16,
              (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_12:
        ActionExtensions__Call(*(System_Action_o **)(v7 + 40), 0);
        return !IsNullOrEmpty;
      }
      Instance = (SoundManager_o *)this->fields.addBindList;
      if ( Instance )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)Instance,
          *v16,
          (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
        Instance = (SoundManager_o *)this->fields.addBindList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            *v16,
            (const MethodInfo_37A3DD4 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_12;
        }
      }
    }
LABEL_14:
    sub_1C372B4(Instance);
  }
  v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v7, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, 0);
  v25 = BgmManager__CoWaitSameAudioLoading(this, name, v23, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v25, 0);
  return !IsNullOrEmpty;
}


void BgmManager__PreloadBgms(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  BgmManager__PreloadAndPlayBgms(this, argsGroup, finishCallback, 0, v4);
}


void BgmManager__ReflectMasterVolumeLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager___c_c *v3; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *_9__53_0; // x20
  Il2CppObject *v6; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C425D8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C37058(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__);
    sub_1C37058(&BgmManager___c_TypeInfo);
    byte_4C425D8 = 1;
  }
  v3 = BgmManager___c_TypeInfo;
  bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v3 = BgmManager___c_TypeInfo;
  }
  _9__53_0 = (System_Action_object__o *)v3->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BgmManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__53_0 = (System_Action_object__o *)sub_1C372A4(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__53_0, v6, Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Action_BgmPlayerBase__o *)_9__53_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v8, v9);
  }
  if ( !bgmPlayers )
    sub_1C372B4(v3);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__53_0,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void BgmManager__RemoveUnusedOldFromBindList(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o **v2; // x19
  BgmManager_o *v3; // x8
  int32_t m_CancellationTokenSource; // w20
  BgmManager_c *v5; // x0
  System_Collections_Generic_HashSet_T__o *v6; // x20
  System_Collections_Generic_IEnumerable_T__o *UsingCueNames; // x0
  BgmManager_c *klass; // x8
  BgmManager_o *v9; // x21
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x21
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *CueName; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  System_Collections_Generic_List_object__o *v29; // x8
  int32_t v30; // w21
  Il2CppObject *Item; // x22
  BgmManager_o *v32; // x8
  int v33; // w22
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-70h] BYREF

  v2 = (BgmManager_o **)this;
  if ( (byte_4C425E6 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_string__UnionWith__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (BgmManager_o *)sub_1C37058(&SoundManager_TypeInfo);
    byte_4C425E6 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v3 = v2[4];
  if ( !v3 )
    goto LABEL_59;
  m_CancellationTokenSource = (int32_t)v3->fields.m_CancellationTokenSource;
  v5 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v5 = BgmManager_TypeInfo;
  }
  if ( m_CancellationTokenSource > v5->static_fields->ADD_BIND_MAX )
  {
    v6 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_string__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v6,
      (const MethodInfo_365A090 *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = v2[8];
    if ( !this )
      goto LABEL_59;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v35 = v34;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v35.fields._current )
        sub_1C372B4(0);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v35.fields._current,
                                                                       0);
      if ( !v6 )
        sub_1C372B4(UsingCueNames);
      System_Collections_Generic_HashSet_object___UnionWith(
        v6,
        UsingCueNames,
        (const MethodInfo_365B284 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    this = v2[10];
    if ( this )
    {
      this = (BgmManager_o *)BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0);
      if ( !this )
        goto LABEL_59;
      klass = this->klass;
      v9 = this;
      v10 = *(unsigned __int16 *)&this->klass->_2.rank;
      if ( *(_WORD *)&this->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_19;
        }
        v12 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_19:
        v12 = sub_1C87870(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
      }
      v13 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
      if ( !v13 )
        sub_1C372B4(0);
      while ( 1 )
      {
        v14 = *(_QWORD *)v13;
        v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
        {
          v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v15;
            v16 += 4;
            if ( !v15 )
              goto LABEL_26;
          }
          v17 = v14 + 16LL * *v16 + 312;
        }
        else
        {
LABEL_26:
          v17 = sub_1C87870(v13, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
          break;
        v18 = *(_QWORD *)v13;
        v19 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
        {
          v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v20 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v19;
            v20 += 4;
            if ( !v19 )
              goto LABEL_33;
          }
          v21 = v18 + 16LL * *v20 + 312;
        }
        else
        {
LABEL_33:
          v21 = sub_1C87870(v13, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
        }
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
        if ( !v22 )
          sub_1C372B4(0);
        CueName = (Il2CppObject *)BgmManager__ExtractCueName((BgmManager_o *)v22, *(System_String_o **)(v22 + 16), v23);
        if ( !v6 )
          sub_1C372B4(CueName);
        System_Collections_Generic_HashSet_object___Add(
          v6,
          CueName,
          (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
      v25 = *(_QWORD *)v13;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_42;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_42:
        v28 = sub_1C87870(v13, System_IDisposable_TypeInfo, 0);
      }
      this = (BgmManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v13, *(_QWORD *)(v28 + 8));
    }
    v29 = (System_Collections_Generic_List_object__o *)v2[4];
    if ( !v29 )
LABEL_59:
      sub_1C372B4(this);
    v30 = v29->fields._size - 1;
    if ( v30 >= 1 )
    {
      do
      {
        this = (BgmManager_o *)System_Collections_Generic_List_object___get_Item(
                                 v29,
                                 v30,
                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v6 )
          break;
        this = (BgmManager_o *)System_Collections_Generic_HashSet_object___Contains(
                                 v6,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_365A784 *)Method_System_Collections_Generic_HashSet_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v30,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__releaseAudioAssetStorage((System_String_o *)Item, 0);
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this,
            v30,
            (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
          v32 = v2[4];
          if ( !v32 )
            goto LABEL_59;
          this = (BgmManager_o *)BgmManager_TypeInfo;
          v33 = (int)v32->fields.m_CancellationTokenSource;
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            this = (BgmManager_o *)BgmManager_TypeInfo;
          }
          if ( v33 <= *((_DWORD *)this[2].monitor + 6) )
            return;
        }
        if ( --v30 < 1 )
          return;
        v29 = (System_Collections_Generic_List_object__o *)v2[4];
      }
      while ( v29 );
      goto LABEL_59;
    }
  }
}


void BgmManager__Reset(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C425BB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C372B4(v2);
    BgmManager__ResetLocal((BgmManager_o *)Instance, v3);
  }
}


void BgmManager__ResetLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager___c_c *v3; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *_9__51_0; // x20
  Il2CppObject *v6; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C425D6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C37058(&Method_BgmManager___c__ResetLocal_b__51_0__);
    sub_1C37058(&BgmManager___c_TypeInfo);
    byte_4C425D6 = 1;
  }
  v3 = BgmManager___c_TypeInfo;
  bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v3 = BgmManager___c_TypeInfo;
  }
  _9__51_0 = (System_Action_object__o *)v3->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BgmManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__51_0 = (System_Action_object__o *)sub_1C372A4(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__51_0, v6, Method_BgmManager___c__ResetLocal_b__51_0__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_BgmPlayerBase__o *)_9__51_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v8, v9);
  }
  if ( !bgmPlayers )
    sub_1C372B4(v3);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void BgmManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  BgmManager_c *v3; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C425BF & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425BF = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->masterVolume != volume )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = BgmManager_TypeInfo->static_fields;
    }
    static_fields->masterVolume = volume;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v6 )
    {
      if ( !Instance )
        sub_1C372B4(v6);
      BgmManager__ReflectMasterVolumeLocal((BgmManager_o *)Instance, v7);
    }
  }
}


void BgmManager__SetMute(bool isMute, const MethodInfo *method)
{
  BgmManager_c *v3; // x0
  _BOOL4 v4; // w21
  struct BgmManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C425BD & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425BD = 1;
  }
  v3 = BgmManager_TypeInfo;
  v4 = isMute;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->isMute != v4 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = BgmManager_TypeInfo->static_fields;
    }
    static_fields->isMute = v4;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v7 )
    {
      if ( !Instance )
        sub_1C372B4(v7);
      BgmManager__SetMuteLocal((BgmManager_o *)Instance, isMute, v8);
    }
  }
}


void BgmManager__SetMuteLocal(BgmManager_o *this, bool isMute, const MethodInfo *method)
{
  BgmManager___c__DisplayClass52_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *v8; // x20

  if ( (byte_4C425D7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C37058(&Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__);
    sub_1C37058(&BgmManager___c__DisplayClass52_0_TypeInfo);
    byte_4C425D7 = 1;
  }
  v5 = (BgmManager___c__DisplayClass52_0_o *)sub_1C372A4(BgmManager___c__DisplayClass52_0_TypeInfo);
  BgmManager___c__DisplayClass52_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.isMute = isMute,
        bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers,
        v8 = (System_Action_object__o *)sub_1C372A4(System_Action_BgmPlayerBase__TypeInfo),
        System_Action_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__,
          0),
        !bgmPlayers) )
  {
    sub_1C372B4(v6);
  }
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v8,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0

  if ( (byte_4C425CA & 1) == 0 )
  {
    sub_1C37058(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
    sub_1C37058(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C372B4(v4);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        0,
        (const MethodInfo_30D9878 *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        0,
        (const MethodInfo_30D968C *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
  }
}


void BgmManager__StopBgm(
        System_String_o *name,
        float fadeoutTime,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  bool v9; // w22

  if ( (byte_4C425C9 & 1) == 0 )
  {
    sub_1C37058(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
    sub_1C37058(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_1C37058(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
    sub_1C37058(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C372B4(v8);
    if ( fadeoutTime <= 0.0 )
    {
      v9 = BgmManager__StopBgmLocal_object_(
             (BgmManager_o *)Instance,
             name,
             (const MethodInfo_30D9878 *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
      if ( name && !v9 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__StopBgmLocal_object_(
          (BgmManager_o *)Instance,
          0,
          (const MethodInfo_30D9878 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      v9 = BgmManager__FadeoutBgmLocal_object_(
             (BgmManager_o *)Instance,
             fadeoutTime,
             name,
             (const MethodInfo_30D968C *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
      if ( name && !v9 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__FadeoutBgmLocal_object_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0,
          (const MethodInfo_30D968C *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    if ( v9 )
      ActionExtensions__Call(successCallback, 0);
  }
}


bool BgmManager__StopBgmLocal_object_(BgmManager_o *this, System_String_o *name, const MethodInfo_30D9878 *method)
{
  const MethodInfo_30D92B8 **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__68_T; // x8
  Il2CppClass *v10; // x0
  System_Func_object__bool__o *v11; // x21
  Il2CppClass *v12; // x0
  const MethodInfo_30D9878_RGCTXs *v13; // x8
  __int64 v14; // x0
  __int64 _3_System_Func_T__bool; // x8
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  long double v19; // q0
  Il2CppClass *v20; // x0
  Il2CppClass *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  rgctx_data = (const MethodInfo_30D92B8 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_bool___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_bool___);
    rgctx_data = (const MethodInfo_30D92B8 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8(method);
      rgctx_data = (const MethodInfo_30D92B8 **)method->rgctx_data;
    }
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, name, *rgctx_data);
  _4_BgmManager___c__68_T = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (*(&_4_BgmManager___c__68_T->_2.bitflags2 + 2) & 1) == 0 )
    _4_BgmManager___c__68_T = (Il2CppClass *)sub_1C8776C(inited);
  if ( !_4_BgmManager___c__68_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__68_T);
  v10 = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (*(&v10->_2.bitflags2 + 2) & 1) == 0 )
    v10 = (Il2CppClass *)sub_1C8776C(inited);
  v11 = (System_Func_object__bool__o *)*((_QWORD *)v10->static_fields + 1);
  if ( !v11 )
  {
    v12 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (*(&v12->_2.bitflags2 + 2) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1C8776C(inited);
    if ( !v12->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = method->rgctx_data;
    v14 = (__int64)v13->_4_BgmManager___c__68_T_;
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    {
      v14 = sub_1C8776C(inited);
      v13 = method->rgctx_data;
    }
    _3_System_Func_T__bool = (__int64)v13->_3_System_Func_T__bool_;
    v16 = **(Il2CppObject ***)(v14 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__bool + 309) & 1) == 0 )
      _3_System_Func_T__bool = sub_1C8776C(inited);
    v11 = (System_Func_object__bool__o *)sub_1C372A4(_3_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v11,
      v16,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__68_T___StopBgmLocal_b__68_0,
      (const MethodInfo_36392B8 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
    v20 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
      v20 = (Il2CppClass *)sub_1C8776C(v19);
    *((_QWORD *)v20->static_fields + 1) = v11;
    v21 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (*(&v21->_2.bitflags2 + 2) & 1) == 0 )
      v21 = (Il2CppClass *)sub_1C8776C(v19);
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)v21->static_fields + 8), (int32_t)v11, v17, v18);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TResult__o *)v11,
                                                               (const MethodInfo_311D460 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v22,
                                                               (const MethodInfo_3126FC4 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v23, (const MethodInfo_30F3008 *)Method_System_Linq_Enumerable_Any_bool___);
}


void BgmManager__StopJingle(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0

  if ( (byte_4C425D0 & 1) == 0 )
  {
    sub_1C37058(&Method_BgmManager_StopBgmLocal_JinglePlayer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C372B4(v2);
    BgmManager__StopBgmLocal_object_(
      (BgmManager_o *)Instance,
      0,
      (const MethodInfo_30D9878 *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0

  if ( (byte_4C425CB & 1) == 0 )
  {
    sub_1C37058(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_1C37058(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C372B4(v6);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        name,
        (const MethodInfo_30D9878 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        name,
        (const MethodInfo_30D968C *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
  }
}


void BgmManager__StopUnrequestedSubBgm(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *requestedBgmArgs,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Object_array *v6; // x0
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *SubArgsList_k__BackingField; // x21
  BgmManager___c_c *v8; // x0
  System_Func_object__object__o *_9__69_0; // x22
  Il2CppObject *v10; // x23
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__bool__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  BgmManager___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x19
  System_Action_object__o *_9__69_2; // x20
  Il2CppObject *v23; // x21
  struct BgmManager___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C425E1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_SubBgmPlayer__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_SubBgmPlayer___);
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    sub_1C37058(&System_Func_SubBgmPlayArgs__string__TypeInfo);
    sub_1C37058(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_1C37058(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__);
    sub_1C37058(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__);
    sub_1C37058(&Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__);
    sub_1C37058(&BgmManager___c__DisplayClass69_0_TypeInfo);
    sub_1C37058(&BgmManager___c_TypeInfo);
    byte_4C425E1 = 1;
  }
  v5 = sub_1C372A4(BgmManager___c__DisplayClass69_0_TypeInfo);
  BgmManager___c__DisplayClass69_0___ctor((BgmManager___c__DisplayClass69_0_o *)v5, 0);
  if ( this->fields.enableCounter_KeepSubBgm <= 0 )
  {
    if ( !requestedBgmArgs )
      goto LABEL_19;
    SubArgsList_k__BackingField = requestedBgmArgs->fields._SubArgsList_k__BackingField;
    v8 = BgmManager___c_TypeInfo;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v8 = BgmManager___c_TypeInfo;
    }
    _9__69_0 = (System_Func_object__object__o *)v8->static_fields->__9__69_0;
    if ( !_9__69_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = BgmManager___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__69_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_SubBgmPlayArgs__string__TypeInfo);
      System_Func_object__object____ctor(_9__69_0, v10, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, 0);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__69_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__69_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__69_0, (int32_t)_9__69_0, v12, v13);
    }
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__69_0,
                                                                 (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v6 = System_Linq_Enumerable__ToArray_object_(
           v14,
           (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v5 )
LABEL_19:
      sub_1C372B4(v6);
    *(_QWORD *)(v5 + 16) = v6;
    sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v6, v15, v16);
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v18 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v5,
      Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__,
      0);
    v19 = System_Linq_Enumerable__Where_object_(
            v17,
            (System_Func_TSource__bool__o *)v18,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v20 = BgmManager___c_TypeInfo;
    v21 = (System_Collections_Generic_IEnumerable_T__o *)v19;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v20 = BgmManager___c_TypeInfo;
    }
    _9__69_2 = (System_Action_object__o *)v20->static_fields->__9__69_2;
    if ( !_9__69_2 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = BgmManager___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v20->static_fields->__9;
      _9__69_2 = (System_Action_object__o *)sub_1C372A4(System_Action_SubBgmPlayer__TypeInfo);
      System_Action_object____ctor(_9__69_2, v23, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, 0);
      v24 = BgmManager___c_TypeInfo->static_fields;
      v24->__9__69_2 = (struct System_Action_SubBgmPlayer__o *)_9__69_2;
      sub_1C36FFC((CGThumbnailListItem_o *)&v24->__9__69_2, (int32_t)_9__69_2, v25, v26);
    }
    BasicHelper__ForEach_object_(
      v21,
      (System_Action_T__o *)_9__69_2,
      (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_SubBgmPlayer___);
  }
}


void BgmManager__WaitSameAudioLoading(
        BgmManager_o *this,
        System_String_o *bgmName,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BgmManager__CoWaitSameAudioLoading(this, bgmName, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


System_String_o *BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_1C372B4(this);
  return mainBgmPlayer->fields.bgmName;
}


bool BgmManager__get_IsBusy(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  const MethodInfo *v3; // x2

  if ( (byte_4C425B7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v2 )
    sub_1C372B4(0);
  return BgmManager__IsLoadingLocal((BgmManager_o *)v2, 0, v3);
}


bool BgmManager__get_IsMute(const MethodInfo *method)
{
  BgmManager_c *v1; // x0

  if ( (byte_4C425BC & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C425BC = 1;
  }
  v1 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v1 = BgmManager_TypeInfo;
  }
  return v1->static_fields->isMute;
}


bool BgmManager__isLoading(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C425C2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C425C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v4);
  return BgmManager__IsLoadingLocal((BgmManager_o *)Instance, name, v5);
}


void BgmManager__CoWaitSameAudioLoading_d__63___ctor(
        BgmManager__CoWaitSameAudioLoading_d__63_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BgmManager__CoWaitSameAudioLoading_d__63__MoveNext(
        BgmManager__CoWaitSameAudioLoading_d__63_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BgmManager_o *_4__this; // x21
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BgmManager_o *v9; // x1
  struct System_String_o *bgmName; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Func_bool__o *v13; // x21
  UnityEngine_WaitWhile_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_4C425F3 & 1) == 0 )
  {
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__);
    sub_1C37058(&BgmManager___c__DisplayClass63_0_TypeInfo);
    sub_1C37058(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C425F3 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    finishCallback = this->fields.finishCallback;
    this->fields.__1__state = -1;
LABEL_11:
    ActionExtensions__Call(finishCallback, 0);
    return 0;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    v5 = sub_1C372A4(BgmManager___c__DisplayClass63_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !v5
      || (v9 = this->fields.__4__this,
          *(_QWORD *)(v5 + 16) = v9,
          sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v9, v7, v8),
          bgmName = this->fields.bgmName,
          *(_QWORD *)(v5 + 24) = bgmName,
          sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)bgmName, v11, v12),
          !_4__this) )
    {
      sub_1C372B4(v6);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v5 + 24), 0) )
    {
      v13 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v13,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__,
        0);
      v14 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v14, v13, 0);
      this->fields.__2__current = (Il2CppObject *)v14;
      p__2__current = &this->fields.__2__current;
      sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v14, v16, v17);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    finishCallback = this->fields.finishCallback;
    goto LABEL_11;
  }
  return 0;
}


Il2CppObject *BgmManager__CoWaitSameAudioLoading_d__63__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BgmManager__CoWaitSameAudioLoading_d__63_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BgmManager__CoWaitSameAudioLoading_d__63__System_Collections_IEnumerator_Reset(
        BgmManager__CoWaitSameAudioLoading_d__63_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BgmManager__CoWaitSameAudioLoading_d__63_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BgmManager__CoWaitSameAudioLoading_d__63__System_Collections_IEnumerator_get_Current(
        BgmManager__CoWaitSameAudioLoading_d__63_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BgmManager__CoWaitSameAudioLoading_d__63__System_IDisposable_Dispose(
        BgmManager__CoWaitSameAudioLoading_d__63_o *this,
        const MethodInfo *method)
{
  ;
}


void BgmManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C425EE & 1) == 0 )
  {
    sub_1C37058(&BgmManager___c_TypeInfo);
    byte_4C425EE = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BgmManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BgmManager___c_TypeInfo->static_fields->__9 = (struct BgmManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BgmManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BgmManager___c___ctor(BgmManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c___FixedUpdate_b__78_0(BgmManager___c_o *this, GeneralBgmPlayer_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, (const MethodInfo *)x);
}


void BgmManager___c___FixedUpdate_b__78_1(BgmManager___c_o *this, GeneralBgmPlayer_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ((void (__fastcall *)(GeneralBgmPlayer_o *, __int64, const MethodInfo *))x->klass->vtable._11_StopBgm.methodPtr)(
    x,
    1,
    x->klass->vtable._11_StopBgm.method);
}


void BgmManager___c___FixedUpdate_b__78_2(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._13_FixedUpdate.methodPtr)(
    x,
    x->klass->vtable._13_FixedUpdate.method);
}


void BgmManager___c___FixedUpdate_b__78_3(BgmManager___c_o *this, BgmPlayArgs_o *x, const MethodInfo *method)
{
  System_Nullable_float__o p_fadeTime; // x0
  const MethodInfo_38C8F30 *v5; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x5
  System_Nullable_float__o v8; // x2
  System_Nullable_float__o v9; // x1
  System_Nullable_long__o v10; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_long__o v12; // 0:x0.16

  if ( (byte_4C425EF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_long___ctor__);
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    byte_4C425EF = 1;
  }
  p_fadeTime = (System_Nullable_float__o)&fadeTime;
  fadeTime = 0;
  *(_QWORD *)&v10.fields.hasValue = 0;
  v10.fields.value = 0;
  System_Nullable_float____ctor(p_fadeTime, 0.0, (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
  *(_QWORD *)&v12.fields.hasValue = &v10;
  v12.fields.value = 0;
  System_Nullable_long____ctor(v12, Method_System_Nullable_long___ctor__, v5);
  if ( !x )
    sub_1C372B4(v6);
  v8 = fadeTime;
  v9 = 0;
  BgmPlayArgs__Update(x, v9, v8, v10, v7);
}


bool BgmManager___c___GetOrCreateSubBgmPlayer_b__72_1(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.bgmName == 0;
}


void BgmManager___c___InitializeLocal_b__50_0(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._5_Initialize.methodPtr)(
    x,
    x->klass->vtable._5_Initialize.method);
}


void BgmManager___c___ReflectMasterVolumeLocal_b__53_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._8_ReflectMasterVolume.methodPtr)(
    x,
    x->klass->vtable._8_ReflectMasterVolume.method);
}


void BgmManager___c___ResetLocal_b__51_0(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._6_Reset.methodPtr)(
    x,
    x->klass->vtable._6_Reset.method);
}


System_String_o *BgmManager___c___StopUnrequestedSubBgm_b__69_0(
        BgmManager___c_o *this,
        SubBgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._BgmName_k__BackingField;
}


void BgmManager___c___StopUnrequestedSubBgm_b__69_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, const MethodInfo *))x->klass->vtable._11_StopBgm.methodPtr)(
    x,
    0,
    x->klass->vtable._11_StopBgm.method);
}


void BgmManager___c__54_object____cctor(const MethodInfo_32B609C *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8776C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C();
  v4 = (Il2CppObject *)sub_1C372A4(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C8776C();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8776C();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C();
  sub_1C36FFC(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void BgmManager___c__54_object____ctor(BgmManager___c__54_T__o *this, const MethodInfo_32B6158 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__54_object____EnumeratePlayersHavingBgmName_b__54_0(
        BgmManager___c__54_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32B6160 *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x[1].monitor != 0;
}


void BgmManager___c__68_object____cctor(const MethodInfo_32B63CC *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8776C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C();
  v4 = (Il2CppObject *)sub_1C372A4(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C8776C();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8776C();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C();
  sub_1C36FFC(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void BgmManager___c__68_object____ctor(BgmManager___c__68_T__o *this, const MethodInfo_32B6488 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__68_object____StopBgmLocal_b__68_0(
        BgmManager___c__68_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32B6490 *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))x->klass->vtable[11].methodPtr)(
           x,
           0,
           x->klass->vtable[11].method);
}


void BgmManager___c__76_object____cctor(const MethodInfo_32B64B4 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8776C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C();
  v4 = (Il2CppObject *)sub_1C372A4(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C8776C();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8776C();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C();
  sub_1C36FFC(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void BgmManager___c__76_object____ctor(BgmManager___c__76_T__o *this, const MethodInfo_32B6570 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BgmPlayArgs_o *BgmManager___c__76_object____ExportPlayArgsGroupLocal_b__76_0(
        BgmManager___c__76_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32B6578 *method)
{
  if ( !x )
    sub_1C372B4(this);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[12].methodPtr)(
                            x,
                            x->klass->vtable[12].method);
}


void BgmManager___c__DisplayClass29_0___ctor(BgmManager___c__DisplayClass29_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass29_0___ChangePlayerVolume_b__0(
        BgmManager___c__DisplayClass29_0_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0);
}


void BgmManager___c__DisplayClass36_0___ctor(BgmManager___c__DisplayClass36_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass36_0___PlaySubBgm_b__0(
        BgmManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  BgmManager_o *ins; // x0

  ins = this->fields.ins;
  if ( !ins )
    sub_1C372B4(0);
  BgmManager__PlayPreloadedBgm(ins, (BgmPlayArgs_o *)this->fields.args, 0);
}


void BgmManager___c__DisplayClass52_0___ctor(BgmManager___c__DisplayClass52_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass52_0___SetMuteLocal_b__0(
        BgmManager___c__DisplayClass52_0_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, const MethodInfo *))x->klass->vtable._7_SetMute.methodPtr)(
    x,
    this->fields.isMute,
    x->klass->vtable._7_SetMute.method);
}


void BgmManager___c__DisplayClass54_0_object____ctor(
        BgmManager___c__DisplayClass54_0_T__o *this,
        const MethodInfo_32BB280 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass54_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass54_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32BB288 *method)
{
  if ( !x )
    sub_1C372B4(this);
  return System_String__op_Equality((System_String_o *)x[1].monitor, this->fields.bgmNameFilter, 0);
}


void BgmManager___c__DisplayClass57_0___ctor(BgmManager___c__DisplayClass57_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass57_0___PreloadAndPlayBgms_b__0(
        BgmManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  struct BgmManager_o *_4__this; // x0
  BgmPlayArgsGroup_o *argsGroup; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct BgmPlayArgs_array *nonNullArgsAll; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x21

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  argsGroup = this->fields.argsGroup;
  if ( _4__this->fields.cacheArgsGroup == argsGroup )
  {
    BgmManager__StopUnrequestedSubBgm(_4__this, argsGroup, 0);
    if ( this->fields.isPlay )
    {
      nonNullArgsAll = this->fields.nonNullArgsAll;
      if ( !nonNullArgsAll )
        goto LABEL_14;
      max_length = nonNullArgsAll->max_length;
      if ( (int)max_length >= 1 )
      {
        v9 = 0;
        while ( 1 )
        {
          if ( v9 >= (unsigned int)max_length )
            sub_1C372BC(_4__this);
          _4__this = this->fields.__4__this;
          if ( !_4__this )
            break;
          BgmManager__PlayPreloadedBgm(_4__this, nonNullArgsAll->m_Items[v9], 0);
          LODWORD(max_length) = nonNullArgsAll->max_length;
          if ( (__int64)++v9 >= (int)max_length )
            goto LABEL_10;
        }
LABEL_14:
        sub_1C372B4(_4__this);
      }
LABEL_10:
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_14;
      _4__this->fields.cacheArgsGroup = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.cacheArgsGroup, 0, v5, v6);
    }
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BgmManager__RemoveUnusedOldFromBindList(_4__this, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void BgmManager___c__DisplayClass57_1___ctor(BgmManager___c__DisplayClass57_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass57_1___PreloadAndPlayBgms_b__1(
        BgmManager___c__DisplayClass57_1_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct BgmManager___c__DisplayClass57_0_o *CS___8__locals1; // x9
  struct BgmPlayArgs_o *args; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (args = this->fields.args) == 0
    || (this = (BgmManager___c__DisplayClass57_1_o *)CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_1C372B4(this);
  }
  BgmManager__PreloadBgm((BgmManager_o *)this, args->fields._BgmName_k__BackingField, callback, 0);
}


void BgmManager___c__DisplayClass61_0___ctor(BgmManager___c__DisplayClass61_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass61_0___PreloadBgm_b__0(
        BgmManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_String_o *cueName; // x1
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BgmManager_o *_4__this; // x8
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C425F0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__);
    byte_4C425F0 = 1;
  }
  cueName = this->fields.cueName;
  this->fields.tempCueSheetName = cueName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)cueName, v2, v3);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.loadingBgmCueNameList) == 0
    || (v10 = (Il2CppObject *)this->fields.cueName,
        items = loadingBgmCueNameList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++loadingBgmCueNameList->fields._version,
        !items) )
  {
    sub_1C372B4(loadingBgmCueNameList);
  }
  size = loadingBgmCueNameList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      loadingBgmCueNameList,
      v10,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    loadingBgmCueNameList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v10;
    sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v7, v8);
  }
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, 0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v17, v18);
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(tempCueSheetName, _9__1, 1, 0);
}


void BgmManager___c__DisplayClass61_0___PreloadBgm_b__1(
        BgmManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  BgmManager___c__DisplayClass61_0_o *v2; // x19
  struct BgmManager_o *_4__this; // x8
  struct BgmManager_o *v4; // x8
  struct BgmManager_o *v5; // x8

  v2 = this;
  if ( (byte_4C425F1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Insert__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    this = (BgmManager___c__DisplayClass61_0_o *)sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C425F1 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass61_0_o *)_4__this->fields.loadingBgmCueNameList;
  if ( !this )
    goto LABEL_14;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)this,
    (Il2CppObject *)v2->fields.cueName,
    (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass61_0_o *)SoundManager__GetCueSheet((SoundManager_o *)this, v2->fields.cueName, 0);
  if ( this )
  {
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass61_0_o *)v4->fields.addBindList;
    if ( !this )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass61_0_o *)System_Collections_Generic_List_object___Contains(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   (Il2CppObject *)v2->fields.cueName,
                                                   (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v5 = v2->fields.__4__this;
      if ( v5 )
      {
        this = (BgmManager___c__DisplayClass61_0_o *)v5->fields.addBindList;
        if ( this )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)this,
            0,
            (Il2CppObject *)v2->fields.cueName,
            (const MethodInfo_37A3DD4 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_1C372B4(this);
    }
  }
LABEL_13:
  ActionExtensions__Call(v2->fields.finishCallback, 0);
}


void BgmManager___c__DisplayClass63_0___ctor(BgmManager___c__DisplayClass63_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass63_0___CoWaitSameAudioLoading_b__0(
        BgmManager___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  BgmManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  return BgmManager__IsLoadingLocal(_4__this, this->fields.bgmName, 0);
}


void BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_32BC7E4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass67_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32BC7EC *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, float))x->klass->vtable[10].methodPtr)(
           x,
           x->klass->vtable[10].method,
           this->fields.fadeoutTime);
}


void BgmManager___c__DisplayClass69_0___ctor(BgmManager___c__DisplayClass69_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass69_0___StopUnrequestedSubBgm_b__1(
        BgmManager___c__DisplayClass69_0_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  BgmManager___c__DisplayClass69_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C425F2 & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass69_0_o *)sub_1C37058(&Method_System_Array_IndexOf_string___);
    byte_4C425F2 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  return (unsigned int)System_Array__IndexOf_object_(
                         (System_Object_array *)v4->fields.subBgmNamesToPlay,
                         (Il2CppObject *)x->fields.bgmName,
                         (const MethodInfo_31EEE70 *)Method_System_Array_IndexOf_string___) >> 31;
}


void BgmManager___c__DisplayClass70_0_object____ctor(
        BgmManager___c__DisplayClass70_0_T__o *this,
        const MethodInfo_32BDC3C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass70_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass70_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32BDC44 *method)
{
  if ( !x )
    sub_1C372B4(this);
  BgmPlayerBase__PauseBgm((BgmPlayerBase_o *)x, this->fields.isPause, 0);
}


void BgmManager___c__DisplayClass71_0___ctor(BgmManager___c__DisplayClass71_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass71_0___PlayJingleLocal_b__0(
        BgmManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  BgmManager_o *_4__this; // x0
  const MethodInfo *v4; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BgmManager_o *)BgmManager__GetOrCreateJinglePlayer(_4__this, 0)) == 0 )
    sub_1C372B4(_4__this);
  JinglePlayer__PlayBgm(
    (JinglePlayer_o *)_4__this,
    this->fields.name,
    this->fields.volume,
    this->fields.callbackFunc,
    v4);
}


void BgmManager___c__DisplayClass72_0___ctor(BgmManager___c__DisplayClass72_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass72_0___GetOrCreateSubBgmPlayer_b__0(
        BgmManager___c__DisplayClass72_0_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0);
}