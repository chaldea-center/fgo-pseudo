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

  if ( (byte_4C56393 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&StringLiteral_2913/*"BGM_CHALDEA_1"*/);
    sub_1C3E564(&StringLiteral_2914/*"BGM_CHALDEA_2"*/);
    byte_4C56393 = 1;
  }
  static_fields = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_VOLUME = 0x3DCCCCCD3F800000LL;
  v4 = StringLiteral_2913/*"BGM_CHALDEA_1"*/;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_2913/*"BGM_CHALDEA_1"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v4, v1, v2);
  v5 = StringLiteral_2914/*"BGM_CHALDEA_2"*/;
  v6 = BgmManager_TypeInfo->static_fields;
  v6->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_2914/*"BGM_CHALDEA_2"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v5, v7, v8);
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

  if ( (byte_4C56392 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager___ctor__);
    byte_4C56392 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.addBindList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.loadingBgmCueNameList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bgmPlayers, (int32_t)v9, v10, v11);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39FFA90 *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *Instance; // x20
  System_Collections_Generic_List_object__o *m_CachedPtr; // x20
  System_Predicate_object__o *v12; // x21
  Il2CppObject *v13; // x0

  if ( (byte_4C56369 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&System_Predicate_BgmPlayerBase__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C3E564(&Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__);
    sub_1C3E564(&BgmManager___c__DisplayClass29_0_TypeInfo);
    byte_4C56369 = 1;
  }
  v5 = sub_1C3E7B0(BgmManager___c__DisplayClass29_0_TypeInfo);
  BgmManager___c__DisplayClass29_0___ctor((BgmManager___c__DisplayClass29_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)bgmName, v8, v9);
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( !v6 )
  {
    if ( Instance )
    {
      m_CachedPtr = (System_Collections_Generic_List_object__o *)Instance[2].fields.m_CachedPtr;
      v12 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_BgmPlayerBase__TypeInfo);
      System_Predicate_object____ctor(
        v12,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__,
        0);
      if ( m_CachedPtr )
      {
        v13 = System_Collections_Generic_List_object___Find(
                m_CachedPtr,
                (System_Predicate_T__o *)v12,
                (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v13 )
          BgmPlayerBase__set_BgmVolume((BgmPlayerBase_o *)v13, volume, 0);
        return;
      }
    }
LABEL_12:
    sub_1C3E7C0(v6, v7);
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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C56386 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo);
    byte_4C56386 = 1;
  }
  v7 = sub_1C3E7B0(BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo);
  BgmManager__CoWaitSameAudioLoading_d__63___ctor((BgmManager__CoWaitSameAudioLoading_d__63_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), (int32_t)bgmName, v12, v13);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v14, v15);
  return (System_Collections_IEnumerator_o *)v7;
}


void BgmManager__Enable_KeepSubBgm(bool value, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int v6; // w9

  if ( (byte_4C5637C & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C5637C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C3E7C0(v4, v5);
    if ( value )
      v6 = 1;
    else
      v6 = -1;
    LODWORD(Instance[4].monitor) = (LODWORD(Instance[4].monitor) + v6) & ~((LODWORD(Instance[4].monitor) + v6) >> 31);
  }
}


System_Collections_Generic_IEnumerable_T__o *BgmManager__EnumeratePlayersHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_30EB0D0 *method)
{
  long double v3; // q0
  const MethodInfo_30EB0D0_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass54_0_T; // x0
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  long double inited; // q0
  const MethodInfo_30EB0D0_RGCTXs *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  __int64 _5_System_Func_T__bool; // x0
  System_Func_object__bool__o *v20; // x21
  __int64 _6_BgmManager___c__54_T; // x0
  Il2CppClass *v22; // x0
  Il2CppClass *v23; // x0
  const MethodInfo_30EB0D0_RGCTXs *v24; // x8
  __int64 v25; // x0
  __int64 v26; // x8
  Il2CppObject *v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  long double v30; // q0
  Il2CppClass *v31; // x0
  Il2CppClass *v32; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C8ECD4(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass54_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_;
  if ( (*(&rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BgmManager___c__DisplayClass54_0_T = sub_1C8EC78(v3);
  v9 = sub_1C3E7B0(_0_BgmManager___c__DisplayClass54_0_T);
  BgmManager___c__DisplayClass54_0_object____ctor(
    (BgmManager___c__DisplayClass54_0_T__o *)v9,
    (const MethodInfo_32CD1D4 *)method->rgctx_data->_1_BgmManager___c__DisplayClass54_0_T___ctor);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
  *(_QWORD *)(v9 + 16) = bgmNameFilter;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)bgmNameFilter, v12, v13);
  v14 = *(_QWORD *)(v9 + 16);
  v15 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
          (const MethodInfo_3128D28 *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  v17 = method->rgctx_data;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( v14 )
  {
    _5_System_Func_T__bool = (__int64)v17->_5_System_Func_T__bool_;
    if ( (*(_BYTE *)(_5_System_Func_T__bool + 309) & 1) == 0 )
      _5_System_Func_T__bool = sub_1C8EC78(inited);
    v20 = (System_Func_object__bool__o *)sub_1C3E7B0(_5_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v9,
      (intptr_t)method->rgctx_data->_10_BgmManager___c__DisplayClass54_0_T___EnumeratePlayersHavingBgmName_b__1,
      (const MethodInfo_364B6F4 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
  }
  else
  {
    _6_BgmManager___c__54_T = (__int64)v17->_6_BgmManager___c__54_T_;
    if ( (*(_BYTE *)(_6_BgmManager___c__54_T + 309) & 1) == 0 )
      _6_BgmManager___c__54_T = sub_1C8EC78(inited);
    if ( !*(_DWORD *)(_6_BgmManager___c__54_T + 224) )
      inited = j_il2cpp_runtime_class_init_0(_6_BgmManager___c__54_T);
    v22 = method->rgctx_data->_6_BgmManager___c__54_T_;
    if ( (*(&v22->_2.bitflags2 + 2) & 1) == 0 )
      v22 = (Il2CppClass *)sub_1C8EC78(inited);
    v20 = (System_Func_object__bool__o *)*((_QWORD *)v22->static_fields + 1);
    if ( !v20 )
    {
      v23 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (*(&v23->_2.bitflags2 + 2) & 1) == 0 )
        v23 = (Il2CppClass *)sub_1C8EC78(inited);
      if ( !v23->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(v23);
      v24 = method->rgctx_data;
      v25 = (__int64)v24->_6_BgmManager___c__54_T_;
      if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      {
        v25 = sub_1C8EC78(inited);
        v24 = method->rgctx_data;
      }
      v26 = (__int64)v24->_5_System_Func_T__bool_;
      v27 = **(Il2CppObject ***)(v25 + 184);
      if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
        v26 = sub_1C8EC78(inited);
      v20 = (System_Func_object__bool__o *)sub_1C3E7B0(v26);
      System_Func_object__bool____ctor(
        v20,
        v27,
        (intptr_t)method->rgctx_data->_7_BgmManager___c__54_T___EnumeratePlayersHavingBgmName_b__54_0,
        (const MethodInfo_364B6F4 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
      v31 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (*(&v31->_2.bitflags2 + 2) & 1) == 0 )
        v31 = (Il2CppClass *)sub_1C8EC78(v30);
      *((_QWORD *)v31->static_fields + 1) = v20;
      v32 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (*(&v32->_2.bitflags2 + 2) & 1) == 0 )
        v32 = (Il2CppClass *)sub_1C8EC78(v30);
      sub_1C3E508((CGThumbnailListItem_o *)((char *)v32->static_fields + 8), (int32_t)v20, v28, v29);
    }
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          v18,
                                                          (System_Func_TSource__bool__o *)v20,
                                                          (const MethodInfo_3140304 *)method->rgctx_data->_9_System_Linq_Enumerable_Where_T_);
}


bool BgmManager__ExistsPlayerHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_30EB29C *method)
{
  const MethodInfo_30EB0D0 **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  rgctx_data = (const MethodInfo_30EB0D0 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C8ECD4(method);
    rgctx_data = (const MethodInfo_30EB0D0 **)method->rgctx_data;
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, bgmNameFilter, *rgctx_data);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_31055E8 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_);
}


BgmPlayArgsGroup_o *BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4C56361 & 1) == 0 )
  {
    sub_1C3E564(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56361 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v2 )
    return 0;
  if ( !Instance )
    sub_1C3E7C0(v2, v3);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_30EB2E8 *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *BgmManager__ExportPlayArgsGroupLocal_object_(BgmManager_o *this, const MethodInfo_30EB2E8 *method)
{
  const MethodInfo_30EB0D0 **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__76_T; // x8
  Il2CppClass *v8; // x0
  System_Func_object__object__o *v9; // x21
  Il2CppClass *v10; // x0
  const MethodInfo_30EB2E8_RGCTXs *v11; // x8
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

  rgctx_data = (const MethodInfo_30EB0D0 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C3E564(&BgmPlayArgsGroup_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    rgctx_data = (const MethodInfo_30EB0D0 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C8ECD4(method);
      rgctx_data = (const MethodInfo_30EB0D0 **)method->rgctx_data;
    }
  }
  v5 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, 0, *rgctx_data);
  _4_BgmManager___c__76_T = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (*(&_4_BgmManager___c__76_T->_2.bitflags2 + 2) & 1) == 0 )
    _4_BgmManager___c__76_T = (Il2CppClass *)sub_1C8EC78(inited);
  if ( !_4_BgmManager___c__76_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__76_T);
  v8 = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (*(&v8->_2.bitflags2 + 2) & 1) == 0 )
    v8 = (Il2CppClass *)sub_1C8EC78(inited);
  v9 = (System_Func_object__object__o *)*((_QWORD *)v8->static_fields + 1);
  if ( !v9 )
  {
    v10 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (*(&v10->_2.bitflags2 + 2) & 1) == 0 )
      v10 = (Il2CppClass *)sub_1C8EC78(inited);
    if ( !v10->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = method->rgctx_data;
    v12 = (__int64)v11->_4_BgmManager___c__76_T_;
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    {
      v12 = sub_1C8EC78(inited);
      v11 = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = (__int64)v11->_3_System_Func_T__BgmPlayArgs_;
    v14 = **(Il2CppObject ***)(v12 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__BgmPlayArgs + 309) & 1) == 0 )
      _3_System_Func_T__BgmPlayArgs = sub_1C8EC78(inited);
    v9 = (System_Func_object__object__o *)sub_1C3E7B0(_3_System_Func_T__BgmPlayArgs);
    System_Func_object__object____ctor(
      v9,
      v14,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__76_T___ExportPlayArgsGroupLocal_b__76_0,
      (const MethodInfo_364BD9C *)method->rgctx_data->_6_System_Func_T__BgmPlayArgs___ctor);
    v18 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (*(&v18->_2.bitflags2 + 2) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1C8EC78(v17);
    *((_QWORD *)v18->static_fields + 1) = v9;
    v19 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (*(&v19->_2.bitflags2 + 2) & 1) == 0 )
      v19 = (Il2CppClass *)sub_1C8EC78(v17);
    sub_1C3E508((CGThumbnailListItem_o *)((char *)v19->static_fields + 8), (int32_t)v9, v15, v16);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TResult__o *)v9,
                                                               (const MethodInfo_3130218 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__BgmPlayArgs_);
  v21 = System_Linq_Enumerable__ToArray_object_(
          v20,
          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v22 = (BgmPlayArgsGroup_o *)sub_1C3E7B0(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_41255288(v22, (BgmPlayArgs_array *)v21, 0);
  return v22;
}


System_String_o *BgmManager__ExtractCueName(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  il2cpp_array_size_t max_length; // x8

  if ( (byte_4C56389 & 1) == 0 )
  {
    sub_1C3E564(&char___TypeInfo);
    byte_4C56389 = 1;
  }
  v4 = (System_String_array *)sub_1C3E60C(char___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 47;
  if ( !name || (v4 = System_String__Split_63685544(name, (System_Char_array *)v4, 0)) == 0 )
LABEL_9:
    sub_1C3E7C0(v4, v5);
  max_length = v4->max_length;
  if ( !(_DWORD)max_length )
LABEL_10:
    sub_1C3E7C8(v4, v5);
  return *(System_String_o **)((char *)v4->m_Items + ((__int64)((max_length << 32) - 0x100000000LL) >> 29));
}


void BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4C56371 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    byte_4C56371 = 1;
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
        const MethodInfo_30EB4A4 *method)
{
  const MethodInfo_30EB4A4_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass67_0_T; // x0
  BgmManager___c__DisplayClass67_0_T__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  long double v14; // q0
  Il2CppClass *_5_System_Func_T__bool; // x8
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_bool___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_bool___);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C8ECD4(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_BgmManager___c__DisplayClass67_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_;
  if ( (*(&rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BgmManager___c__DisplayClass67_0_T = sub_1C8EC78(*(long double *)&fadeoutTime);
  v10 = (BgmManager___c__DisplayClass67_0_T__o *)sub_1C3E7B0(_0_BgmManager___c__DisplayClass67_0_T);
  BgmManager___c__DisplayClass67_0_object____ctor(
    v10,
    (const MethodInfo_32CE738 *)method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor);
  if ( !v10 )
    sub_1C3E7C0(v11, v12);
  v10->fields.fadeoutTime = fadeoutTime;
  v13 = BgmManager__EnumeratePlayersHavingBgmName_object_(
          this,
          name,
          (const MethodInfo_30EB0D0 *)method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_);
  _5_System_Func_T__bool = method->rgctx_data->_5_System_Func_T__bool_;
  if ( (*(&_5_System_Func_T__bool->_2.bitflags2 + 2) & 1) == 0 )
    _5_System_Func_T__bool = (Il2CppClass *)sub_1C8EC78(v14);
  v16 = (System_Func_object__bool__o *)sub_1C3E7B0(_5_System_Func_T__bool);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass67_0_T___FadeoutBgmLocal_b__0,
    (const MethodInfo_364B6F4 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                               (System_Func_TSource__TResult__o *)v16,
                                                               (const MethodInfo_312F354 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v17,
                                                               (const MethodInfo_3138EB8 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v18, (const MethodInfo_3104E20 *)Method_System_Linq_Enumerable_Any_bool___);
}


void BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C5637A & 1) == 0 )
  {
    sub_1C3E564(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C5637A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C3E7C0(v4, v5);
    BgmManager__FadeoutBgmLocal_object_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0,
      (const MethodInfo_30EB4A4 *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
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
  if ( (byte_4C56390 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_GeneralBgmPlayer__TypeInfo);
    sub_1C3E564(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C3E564(&System_Action_BgmPlayArgs__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_BgmPlayArgs___);
    sub_1C3E564(&Method_BasicHelper_ForEach_GeneralBgmPlayer___);
    sub_1C3E564(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_1C3E564(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
    sub_1C3E564(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1C3E564(&System_Func_GeneralBgmPlayer__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1C3E564(&Method_BgmManager___c__FixedUpdate_b__78_0__);
    sub_1C3E564(&Method_BgmManager___c__FixedUpdate_b__78_1__);
    sub_1C3E564(&Method_BgmManager___c__FixedUpdate_b__78_2__);
    sub_1C3E564(&Method_BgmManager___c__FixedUpdate_b__78_3__);
    this = (BgmManager_o *)sub_1C3E564(&BgmManager___c_TypeInfo);
    byte_4C56390 = 1;
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
           (const MethodInfo_3128D28 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
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
      _9__78_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GeneralBgmPlayer__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__78_0, v12, Method_BgmManager___c__FixedUpdate_b__78_0__, 0);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__78_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__78_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__78_0, (int32_t)_9__78_0, v14, v15);
    }
    v16 = System_Linq_Enumerable__Any_object__51410108(
            v10,
            (System_Func_TSource__bool__o *)_9__78_0,
            (const MethodInfo_31074BC *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v16 & v7) != 0 )
    {
      v17 = System_Linq_Enumerable__OfType_object_(
              *p_bgmPlayers,
              (const MethodInfo_3128D28 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
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
        _9__78_1 = (System_Action_object__o *)sub_1C3E7B0(System_Action_GeneralBgmPlayer__TypeInfo);
        System_Action_object____ctor(_9__78_1, v21, Method_BgmManager___c__FixedUpdate_b__78_1__, 0);
        v22 = BgmManager___c_TypeInfo->static_fields;
        v22->__9__78_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__78_1;
        sub_1C3E508((CGThumbnailListItem_o *)&v22->__9__78_1, (int32_t)_9__78_1, v23, v24);
      }
      BasicHelper__ForEach_object_(
        v19,
        (System_Action_T__o *)_9__78_1,
        (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v2->fields.isBgmStopJingle = 1;
    }
    else if ( !v16
           && v2->fields.isBgmStopJingle
           && v7 == 0
           && BgmManager__ExistsPlayerHavingBgmName_object_(
                v2,
                0,
                (const MethodInfo_30EB29C *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
    {
      this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                               v2,
                               (const MethodInfo_30EB2E8 *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
      if ( !this )
        goto LABEL_47;
      v25 = this;
      v26 = BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0);
      v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                             (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      this = (BgmManager_o *)BgmManager__StopBgmLocal_object_(
                               v2,
                               0,
                               (const MethodInfo_30EB690 *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
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
          _9__78_3 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BgmPlayArgs__TypeInfo);
          System_Action_object____ctor(_9__78_3, v30, Method_BgmManager___c__FixedUpdate_b__78_3__, 0);
          v31 = BgmManager___c_TypeInfo->static_fields;
          v31->__9__78_3 = (struct System_Action_BgmPlayArgs__o *)_9__78_3;
          sub_1C3E508((CGThumbnailListItem_o *)&v31->__9__78_3, (int32_t)_9__78_3, v32, v33);
        }
        BasicHelper__ForEach_object_(
          v27,
          (System_Action_T__o *)_9__78_3,
          (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BgmPlayArgs___);
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        BgmManager__PlayBgm_41238520((BgmPlayArgsGroup_o *)v25, 0, v34);
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
      v36 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BgmPlayerBase__TypeInfo);
      System_Action_object____ctor(v36, v37, Method_BgmManager___c__FixedUpdate_b__78_2__, 0);
      v38 = BgmManager___c_TypeInfo->static_fields;
      v38->__9__78_2 = (struct System_Action_BgmPlayerBase__o *)v36;
      sub_1C3E508((CGThumbnailListItem_o *)&v38->__9__78_2, (int32_t)v36, v39, v40);
    }
    if ( v35 )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)v35,
        (System_Action_T__o *)v36,
        (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
      return;
    }
LABEL_47:
    sub_1C3E7C0(this, method);
  }
}


void BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4C5637D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C5637D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C3E7C0(v2, v3);
    LODWORD(Instance[4].monitor) = 0;
  }
}


CriAtomSource_o *BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C5638E & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
    byte_4C5638E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v4);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_object_(
                              gameObject,
                              (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *CueSheet; // x0
  SoundManager_c *v6; // x8
  System_String_o *v7; // x19

  if ( (byte_4C56363 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    byte_4C56363 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, name, 0);
  v6 = SoundManager_TypeInfo;
  v7 = CueSheet;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v6 = SoundManager_TypeInfo;
  }
  return System_String__op_Equality(v7, v6->static_fields->RESIDENT_RESOURCE_SOUND_NAME, 0);
}


System_String_o *BgmManager__GetBgmName(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  __int64 v2; // x1
  bool v3; // w8
  System_String_o *result; // x0
  UnityEngine_Object_c *klass; // x8

  if ( (byte_4C56375 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56375 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality(Instance, 0, 0);
  result = 0;
  if ( !v3 )
  {
    if ( !Instance || (klass = Instance[2].klass) == 0 )
      sub_1C3E7C0(0, v2);
    return (System_String_o *)klass->_1.namespaze;
  }
  return result;
}


System_String_o *BgmManager__GetMainBgmName(bool isFormation, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t UiFlag; // w19
  System_Collections_ICollection_o *ClearWarIdList; // x20
  BalanceConfig_c *v8; // x0
  BalanceConfig_c *v9; // x0
  System_String_o **p_bgmName; // x8
  BgmManager_c *v11; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  TerminalOverwriteEntity_o *v14; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *bgmName; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C56391 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&ServantCommentManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_19341/*"excludeFormation"*/);
    byte_4C56391 = 1;
  }
  v14 = 0;
  bgmName = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( !MasterData_object )
    goto LABEL_9;
  Instance = (Il2CppObject *)TerminalOverwriteMaster__TryGetOverwriteMainBgmName(
                               (TerminalOverwriteMaster_o *)MasterData_object,
                               &bgmName,
                               &v14,
                               0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_9;
  if ( !isFormation )
  {
LABEL_23:
    p_bgmName = &bgmName;
    return *p_bgmName;
  }
  if ( !v14 )
LABEL_25:
    sub_1C3E7C0(Instance, v4);
  if ( EntityScriptUtil__GetIntValue(v14->fields.script, (System_String_o *)StringLiteral_19341/*"excludeFormation"*/, 0, 0) != 1 )
    goto LABEL_23;
LABEL_9:
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  UiFlag = ServantCommentManager__GetUiFlag(0);
  ClearWarIdList = (System_Collections_ICollection_o *)ServantCommentManager__GetClearWarIdList(0);
  if ( BasicHelper__IsNullOrEmpty(ClearWarIdList, 0) )
    goto LABEL_18;
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
          v8->static_fields->OrdealCallWarId,
          (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___) )
  {
LABEL_18:
    v11 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v11 = BgmManager_TypeInfo;
    }
    static_fields = v11->static_fields;
    if ( UiFlag == 1 )
      p_bgmName = &static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
    else
      p_bgmName = &static_fields->DEFAULT_MAIN_BGM_NAME;
  }
  else
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    p_bgmName = &v9->static_fields->OrdealCallClearBgmName;
  }
  return *p_bgmName;
}


float BgmManager__GetMasterVolume(const MethodInfo *method)
{
  BgmManager_c *v1; // x0

  if ( (byte_4C56367 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    byte_4C56367 = 1;
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
  Il2CppObject *jinglePlayer; // x1
  struct System_String_o *bgmName; // x8
  JinglePlayer_o **p_jinglePlayer; // x20
  JinglePlayer_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  JinglePlayer_c *klass; // x9
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 bgmName_low; // x10
  __int64 v18; // x8

  if ( (byte_4C5638D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_OfType_JinglePlayer___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
    sub_1C3E564(&JinglePlayer_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    byte_4C5638D = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_3128D28 *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  v4 = (JinglePlayer_o *)System_Linq_Enumerable__ToArray_object_(
                           v3,
                           (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !v4 )
    goto LABEL_15;
  bgmName = v4->fields.bgmName;
  if ( !bgmName )
  {
    v8 = (JinglePlayer_o *)sub_1C3E7B0(JinglePlayer_TypeInfo);
    JinglePlayer___ctor(v8, 0);
    this->fields.jinglePlayer = v8;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.jinglePlayer, (int32_t)v8, v9, v10);
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
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = v15 + 8 * bgmName_low;
              LODWORD(v4->fields.bgmName) = bgmName_low + 1;
              *(_QWORD *)(v18 + 32) = jinglePlayer;
              sub_1C3E508((CGThumbnailListItem_o *)(v18 + 32), (int32_t)jinglePlayer, v13, v14);
            }
            return *p_jinglePlayer;
          }
        }
      }
    }
LABEL_15:
    sub_1C3E7C0(v4, jinglePlayer);
  }
  if ( !(_DWORD)bgmName )
    sub_1C3E7C8(v4, jinglePlayer);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Object_array *v11; // x20
  System_Func_object__bool__o *v12; // x22
  SubBgmPlayer_o *object; // x21
  BgmManager___c_c *v14; // x0
  System_Func_object__bool__o *_9__72_1; // x21
  Il2CppObject *v16; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  SubBgmPlayer_c *klass; // x9
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8

  if ( (byte_4C5638C & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Find_SubBgmPlayer___);
    sub_1C3E564(&Method_System_Linq_Enumerable_First_SubBgmPlayer___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
    sub_1C3E564(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1C3E564(&SubBgmPlayer_TypeInfo);
    sub_1C3E564(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__);
    sub_1C3E564(&Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__);
    sub_1C3E564(&BgmManager___c__DisplayClass72_0_TypeInfo);
    sub_1C3E564(&BgmManager___c_TypeInfo);
    byte_4C5638C = 1;
  }
  v5 = sub_1C3E7B0(BgmManager___c__DisplayClass72_0_TypeInfo);
  BgmManager___c__DisplayClass72_0___ctor((BgmManager___c__DisplayClass72_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)bgmName, v8, v9);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_3128D28 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v11 = System_Linq_Enumerable__ToArray_object_(
          v10,
          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v12 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__,
    0);
  object = (SubBgmPlayer_o *)BasicHelper__Find_object_(
                               v11,
                               (System_Func_T__bool__o *)v12,
                               (const MethodInfo_30E39DC *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( object )
    return object;
  v14 = BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v14 = BgmManager___c_TypeInfo;
  }
  _9__72_1 = (System_Func_object__bool__o *)v14->static_fields->__9__72_1;
  if ( !_9__72_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BgmManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__72_1 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__72_1, v16, Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__72_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__72_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__72_1, (int32_t)_9__72_1, v18, v19);
  }
  v6 = (System_Collections_Generic_List_object__o *)BasicHelper__Find_object_(
                                                      v11,
                                                      (System_Func_T__bool__o *)_9__72_1,
                                                      (const MethodInfo_30E39DC *)Method_BasicHelper_Find_SubBgmPlayer___);
  object = (SubBgmPlayer_o *)v6;
  if ( v6 )
    return object;
  if ( !v11 )
LABEL_23:
    sub_1C3E7C0(v6, v7);
  if ( SLODWORD(v11->max_length) <= 1 )
  {
    object = (SubBgmPlayer_o *)sub_1C3E7B0(SubBgmPlayer_TypeInfo);
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
          v26 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++v6->fields._version;
          if ( items )
          {
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)object,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v28[4] = (Il2CppClass *)object;
              sub_1C3E508((CGThumbnailListItem_o *)(v28 + 4), (int32_t)object, v23, v24);
            }
            return object;
          }
        }
      }
    }
    goto LABEL_23;
  }
  return (SubBgmPlayer_o *)System_Linq_Enumerable__First_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                             (const MethodInfo_3120424 *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
}


void BgmManager__Initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C56362 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56362 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C3E7C0(v2, v3);
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
  intptr_t m_CachedPtr; // x8
  _QWORD *v10; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v12; // x8
  System_Collections_Generic_List_object__o *v13; // x19
  System_Action_object__o *v14; // x20
  Il2CppObject *v15; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BgmManager_c *v19; // x0

  v2 = this;
  if ( (byte_4C5637E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1C3E564(&MainBgmPlayer_TypeInfo);
    sub_1C3E564(&Method_BgmManager___c__InitializeLocal_b__50_0__);
    this = (BgmManager_o *)sub_1C3E564(&BgmManager___c_TypeInfo);
    byte_4C5637E = 1;
  }
  bgmPlayers = v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_21;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v4 = (MainBgmPlayer_o *)sub_1C3E7B0(MainBgmPlayer_TypeInfo);
    MainBgmPlayer___ctor(v4, 0);
    v2->fields.mainBgmPlayer = v4;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.mainBgmPlayer, (int32_t)v4, v5, v6);
    method = (const MethodInfo *)v2->fields.mainBgmPlayer;
    if ( !method )
      goto LABEL_21;
    LODWORD(method->invoker_method) = 0;
    this = (BgmManager_o *)v2->fields.bgmPlayers;
    if ( !this )
      goto LABEL_21;
    m_CachedPtr = this->fields.m_CachedPtr;
    v10 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_21;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)method,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      v12 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v12 + 32) = method;
      sub_1C3E508((CGThumbnailListItem_o *)(v12 + 32), (int32_t)method, v7, v8);
    }
  }
  v13 = (System_Collections_Generic_List_object__o *)v2->fields.bgmPlayers;
  this = (BgmManager_o *)BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
  }
  v14 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 1);
  if ( !v14 )
  {
    if ( !LODWORD(this[2].fields.mainBgmPlayer) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v15 = *(Il2CppObject **)this[2].monitor;
    v14 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(v14, v15, Method_BgmManager___c__InitializeLocal_b__50_0__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)v14;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__50_0, (int32_t)v14, v17, v18);
  }
  if ( !v13 )
LABEL_21:
    sub_1C3E7C0(this, method);
  System_Collections_Generic_List_object___ForEach(
    v13,
    (System_Action_T__o *)v14,
    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v19 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v19);
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
  if ( (byte_4C56388 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Contains__);
    this = (BgmManager_o *)sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4C56388 = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)v4->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_object___Contains(
               loadingBgmCueNameList,
               (Il2CppObject *)this,
               (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_1C3E7C0(this, name);
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
  __int64 v5; // x1

  if ( (byte_4C5636A & 1) == 0 )
  {
    sub_1C3E564(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C5636A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C3E7C0(v4, v5);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_30EB29C *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C56376 & 1) == 0 )
  {
    sub_1C3E564(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56376 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C3E7C0(v4, v5);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_30EB29C *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0
  __int64 v7; // x1

  if ( (byte_4C56387 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C56387 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName((BgmManager_o *)Instance, bgmName, v5);
  if ( !Instance )
    sub_1C3E7C0(CueName, v7);
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0) != 0;
}


void BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  bool v6; // w19

  if ( (byte_4C5637B & 1) == 0 )
  {
    sub_1C3E564(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    sub_1C3E564(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C5637B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C3E7C0(v4, v5);
    v6 = isPause;
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v6,
      0,
      (const MethodInfo_30EB5C0 *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v6,
      0,
      (const MethodInfo_30EB5C0 *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


void BgmManager__PauseBgmLocal_object_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_30EB5C0 *method)
{
  long double v4; // q0
  const MethodInfo_30EB5C0_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass70_0_T; // x0
  BgmManager___c__DisplayClass70_0_T__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  long double v14; // q0
  Il2CppClass *_5_System_Action_T; // x8
  System_Action_object__o *v16; // x21

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C8ECD4(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass70_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_;
  if ( (*(&rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BgmManager___c__DisplayClass70_0_T = sub_1C8EC78(v4);
  v10 = (BgmManager___c__DisplayClass70_0_T__o *)sub_1C3E7B0(_0_BgmManager___c__DisplayClass70_0_T);
  BgmManager___c__DisplayClass70_0_object____ctor(
    v10,
    (const MethodInfo_32CFB90 *)method->rgctx_data->_1_BgmManager___c__DisplayClass70_0_T___ctor);
  if ( !v10 )
    sub_1C3E7C0(v11, v12);
  v10->fields.isPause = isPause;
  v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                         (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                         (const MethodInfo_3128D28 *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  _5_System_Action_T = method->rgctx_data->_5_System_Action_T_;
  if ( (*(&_5_System_Action_T->_2.bitflags2 + 2) & 1) == 0 )
    _5_System_Action_T = (Il2CppClass *)sub_1C8EC78(v14);
  v16 = (System_Action_object__o *)sub_1C3E7B0(_5_System_Action_T);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass70_0_T___PauseBgmLocal_b__0,
    (const MethodInfo_342695C *)method->rgctx_data->_6_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v13,
    (System_Action_T__o *)v16,
    (const MethodInfo_30E5A30 *)method->rgctx_data->_7_BasicHelper_ForEach_T_);
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

  if ( (byte_4C5636C & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&BgmPlayArgsGroup_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_float___ctor__);
    byte_4C5636C = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_38DD2E0 *)Method_System_Nullable_float___ctor__);
  v12 = (BgmPlayArgsGroup_o *)sub_1C3E7B0(BgmPlayArgsGroup_TypeInfo);
  v13 = volumeNullable;
  v14 = v12;
  BgmPlayArgsGroup___ctor_41256408(v12, name, v13, fadeTime, startTime, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_41238520(v14, finishCallback, v15);
}


void BgmManager__PlayBgm_41238520(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_4C5636E & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C5636E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
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
      sub_1C3E7C0(v6, v7);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, 1, v8);
  }
}


void BgmManager__PlayBgm_41238716(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *v7; // x22
  const MethodInfo *v8; // x2

  if ( (byte_4C5636D & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&BgmPlayArgsGroup_TypeInfo);
    byte_4C5636D = 1;
  }
  v7 = (BgmPlayArgsGroup_o *)sub_1C3E7B0(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor(v7, main, (BgmPlayArgs_array *)subArray, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_41238520(v7, finishCallback, v8);
}


void BgmManager__PlayJingle(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4C56377 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56377 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C3E7C0(v8, v9);
    BgmManager__PlayJingleLocal((BgmManager_o *)Instance, name, volume, callbackFunc, v10);
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x20
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x3

  if ( (byte_4C5638B & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__);
    sub_1C3E564(&BgmManager___c__DisplayClass71_0_TypeInfo);
    byte_4C5638B = 1;
  }
  v9 = sub_1C3E7B0(BgmManager___c__DisplayClass71_0_TypeInfo);
  BgmManager___c__DisplayClass71_0___ctor((BgmManager___c__DisplayClass71_0_o *)v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = name;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)name, v14, v15);
  *(float *)(v9 + 32) = volume;
  *(_QWORD *)(v9 + 40) = callbackFunc;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), (int32_t)callbackFunc, v16, v17);
  v18 = *(System_String_o **)(v9 + 24);
  v19 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v9, Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, 0);
  BgmManager__PreloadBgm(this, v18, v19, v20);
}


void BgmManager__PlayJingle_41242684(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4C56378 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    byte_4C56378 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, 0, v3);
}


void BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C5636F & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    byte_4C5636F = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_41238716(args, 0, 0, v2);
}


void BgmManager__PlayPreloadBgms(BgmManager_o *this, const MethodInfo *method)
{
  BgmPlayArgsGroup_o *cacheArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v4; // x0
  System_Object_array *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v10; // x21
  unsigned __int64 v11; // x22

  if ( (byte_4C56383 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    byte_4C56383 = 1;
  }
  cacheArgsGroup = this->fields.cacheArgsGroup;
  if ( cacheArgsGroup )
  {
    v4 = BgmPlayArgsGroup__AllArgsListNullExcluded(cacheArgsGroup, 0);
    v5 = System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4,
           (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    if ( !v5 )
      sub_1C3E7C0(0, v6);
    max_length = v5->max_length;
    v10 = v5;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= (unsigned int)max_length )
          sub_1C3E7C8(v5, v6);
        BgmManager__PlayPreloadedBgm(this, (BgmPlayArgs_o *)v10->m_Items[v11], v7);
        LODWORD(max_length) = v10->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)max_length );
    }
    this->fields.cacheArgsGroup = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.cacheArgsGroup, 0, (int32_t)v7, v8);
  }
}


void BgmManager__PlayPreloadedBgm(BgmManager_o *this, BgmPlayArgs_o *args, const MethodInfo *method)
{
  System_String_o *BgmName_k__BackingField; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BgmPlayArgs_c *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v10; // x11
  __int64 v11; // x11
  void *mainBgmPlayer; // x0

  if ( (byte_4C56384 & 1) == 0 )
  {
    sub_1C3E564(&MainBgmPlayArgs_TypeInfo);
    sub_1C3E564(&SubBgmPlayArgs_TypeInfo);
    byte_4C56384 = 1;
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
        v10 = MainBgmPlayArgs_TypeInfo->_2.naturalAligment;
        if ( naturalAligment >= (unsigned int)v10
          && (MainBgmPlayArgs_c *)klass->_2.typeHierarchy[v10 - 1] == MainBgmPlayArgs_TypeInfo )
        {
          mainBgmPlayer = this->fields.mainBgmPlayer;
        }
        else
        {
          v11 = SubBgmPlayArgs_TypeInfo->_2.naturalAligment;
          if ( naturalAligment < (unsigned int)v11
            || (SubBgmPlayArgs_c *)klass->_2.typeHierarchy[v11 - 1] != SubBgmPlayArgs_TypeInfo )
          {
            return;
          }
          mainBgmPlayer = BgmManager__GetOrCreateSubBgmPlayer(this, BgmName_k__BackingField, v7);
        }
        if ( !mainBgmPlayer )
          sub_1C3E7C0(0, v6);
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
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x21
  Il2CppObject *Instance; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x22
  System_String_o *v13; // x21
  BgmManager_o *v14; // x20
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3

  if ( (byte_4C56370 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C3E564(&Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__);
    sub_1C3E564(&BgmManager___c__DisplayClass36_0_TypeInfo);
    byte_4C56370 = 1;
  }
  v3 = sub_1C3E7B0(BgmManager___c__DisplayClass36_0_TypeInfo);
  BgmManager___c__DisplayClass36_0___ctor((BgmManager___c__DisplayClass36_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = args;
  v8 = v3 + 24;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 24), (int32_t)args, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v3 + 16) = Instance;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Instance, v10, v11);
  v12 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(v12, 0, 0);
  if ( !v4 )
  {
    if ( *(_QWORD *)v8 )
    {
      v13 = *(System_String_o **)(*(_QWORD *)v8 + 16LL);
      v14 = *(BgmManager_o **)(v3 + 16);
      v15 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)v3, Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, 0);
      if ( v14 )
      {
        BgmManager__PreloadBgm(v14, v13, v15, v16);
        return;
      }
    }
LABEL_10:
    sub_1C3E7C0(v4, v5);
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool v14; // w24
  BgmPlayArgsGroup_o **v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BgmPlayArgsGroup_o *v22; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v23; // x0
  System_Object_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *v27; // x20
  __int64 v28; // x23
  unsigned __int64 v29; // x24
  __int64 v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  System_Action_object__o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Object_array *v43; // x21
  ChainableActionParallel_o *v44; // x20
  __int64 v45; // x21
  System_Action_o *v46; // x22
  int32_t v47; // w2
  const MethodInfo *v48; // x3

  if ( (byte_4C56382 & 1) == 0 )
  {
    sub_1C3E564(&System_Action___TypeInfo);
    sub_1C3E564(&System_Action_Action__TypeInfo);
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&ChainableActionParallel_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Action_Action___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Action_Action___ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Action_Action____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_Action_Action___TypeInfo);
    sub_1C3E564(&Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__);
    sub_1C3E564(&BgmManager___c__DisplayClass57_0_TypeInfo);
    sub_1C3E564(&Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__);
    sub_1C3E564(&BgmManager___c__DisplayClass57_1_TypeInfo);
    byte_4C56382 = 1;
  }
  v9 = sub_1C3E7B0(BgmManager___c__DisplayClass57_0_TypeInfo);
  BgmManager___c__DisplayClass57_0___ctor((BgmManager___c__DisplayClass57_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 16) = this;
  v14 = isPlay;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = argsGroup;
  v15 = (BgmPlayArgsGroup_o **)(v9 + 24);
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)argsGroup, v16, v17);
  *(_QWORD *)(v9 + 48) = finishCallback;
  *(_BYTE *)(v9 + 32) = v14;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 48), (int32_t)finishCallback, v18, v19);
  v22 = *(struct BgmPlayArgsGroup_o **)(v9 + 24);
  if ( v22 )
  {
    this->fields.cacheArgsGroup = v22;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.cacheArgsGroup, (int32_t)v22, v20, v21);
    v10 = *v15;
    if ( !*v15 )
      goto LABEL_24;
    v23 = BgmPlayArgsGroup__AllArgsListNullExcluded(v10, 0);
    v24 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v23,
            (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v9 + 40) = v24;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), (int32_t)v24, v25, v26);
    v27 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_Action_Action___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v28 = *(_QWORD *)(v9 + 40);
    if ( !v28 )
      goto LABEL_24;
    if ( *(int *)(v28 + 24) >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        v30 = sub_1C3E7B0(BgmManager___c__DisplayClass57_1_TypeInfo);
        BgmManager___c__DisplayClass57_1___ctor((BgmManager___c__DisplayClass57_1_o *)v30, 0);
        if ( !v30 )
          break;
        *(_QWORD *)(v30 + 24) = v9;
        sub_1C3E508((CGThumbnailListItem_o *)(v30 + 24), v9, v31, v32);
        if ( v29 >= *(unsigned int *)(v28 + 24) )
          goto LABEL_25;
        v35 = *(_QWORD *)(v28 + 32 + 8 * v29);
        *(_QWORD *)(v30 + 16) = v35;
        sub_1C3E508((CGThumbnailListItem_o *)(v30 + 16), v35, v33, v34);
        v36 = (System_Action_object__o *)sub_1C3E7B0(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v36,
          (Il2CppObject *)v30,
          Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__,
          0);
        if ( !v27 )
          break;
        items = v27->fields._items;
        v40 = Method_System_Collections_Generic_List_Action_Action___Add__;
        ++v27->fields._version;
        if ( !items )
          break;
        size = v27->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v36,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v27->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v36;
          sub_1C3E508((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v36, v37, v38);
        }
        if ( (__int64)++v29 >= *(int *)(v28 + 24) )
          goto LABEL_17;
      }
LABEL_24:
      sub_1C3E7C0(v10, v11);
    }
LABEL_17:
    if ( !v27 )
      goto LABEL_24;
    v43 = System_Collections_Generic_List_object___ToArray(
            v27,
            (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v44 = (ChainableActionParallel_o *)sub_1C3E7B0(ChainableActionParallel_TypeInfo);
    ChainableActionParallel___ctor_49115312(v44, (System_Action_Action__array *)v43, 0);
    v45 = sub_1C3E60C(System_Action___TypeInfo, 1);
    v46 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v46, (Il2CppObject *)v9, Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__, 0);
    if ( !v45 )
      goto LABEL_24;
    if ( !*(_DWORD *)(v45 + 24) )
LABEL_25:
      sub_1C3E7C8(v10, v11);
    *(_QWORD *)(v45 + 32) = v46;
    sub_1C3E508((CGThumbnailListItem_o *)(v45 + 32), (int32_t)v46, v47, v48);
    if ( !v44 )
      goto LABEL_24;
    v10 = (BgmPlayArgsGroup_o *)ChainableActionBase__Final((ChainableActionBase_o *)v44, (System_Action_array *)v45, 0);
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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BgmManager_o *v14; // x0
  const MethodInfo *v15; // x2
  System_String_o *CueName; // x0
  Il2CppObject **v17; // x24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *CueSheet; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  bool IsNullOrEmpty; // w22
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x3
  System_Collections_IEnumerator_o *v26; // x0

  if ( (byte_4C56385 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Insert__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C3E564(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__);
    sub_1C3E564(&BgmManager___c__DisplayClass61_0_TypeInfo);
    byte_4C56385 = 1;
  }
  v7 = sub_1C3E7B0(BgmManager___c__DisplayClass61_0_TypeInfo);
  BgmManager___c__DisplayClass61_0___ctor((BgmManager___c__DisplayClass61_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = finishCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), (int32_t)finishCallback, v12, v13);
  CueName = BgmManager__ExtractCueName(v14, name, v15);
  *(_QWORD *)(v7 + 24) = CueName;
  v17 = (Il2CppObject **)(v7 + 24);
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 24), (int32_t)CueName, v18, v19);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CueSheet = SoundManager__GetCueSheet(Instance, *(System_String_o **)(v7 + 24), 0);
  *(_QWORD *)(v7 + 16) = CueSheet;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)CueSheet, v21, v22);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0);
  if ( !IsNullOrEmpty )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)Instance,
              *v17,
              (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__) )
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
          *v17,
          (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_string__Remove__);
        Instance = (SoundManager_o *)this->fields.addBindList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            *v17,
            (const MethodInfo_37B6210 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_12;
        }
      }
    }
LABEL_14:
    sub_1C3E7C0(Instance, v9);
  }
  v24 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v7, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, 0);
  v26 = BgmManager__CoWaitSameAudioLoading(this, name, v24, v25);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v26, 0);
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

  if ( (byte_4C56381 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C3E564(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__);
    sub_1C3E564(&BgmManager___c_TypeInfo);
    byte_4C56381 = 1;
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
    _9__53_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__53_0, v6, Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Action_BgmPlayerBase__o *)_9__53_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v8, v9);
  }
  if ( !bgmPlayers )
    sub_1C3E7C0(v3, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__53_0,
    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void BgmManager__RemoveUnusedOldFromBindList(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o **v2; // x19
  BgmManager_o *v3; // x8
  int32_t m_CancellationTokenSource; // w20
  BgmManager_c *v5; // x0
  System_Collections_Generic_HashSet_T__o *v6; // x20
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *UsingCueNames; // x0
  BgmManager_c *klass; // x8
  BgmManager_o *v10; // x21
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  Il2CppObject *CueName; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  System_Collections_Generic_List_object__o *v32; // x8
  int32_t v33; // w21
  Il2CppObject *Item; // x22
  BgmManager_o *v35; // x8
  int v36; // w22
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF

  v2 = (BgmManager_o **)this;
  if ( (byte_4C5638F & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_string__UnionWith__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (BgmManager_o *)sub_1C3E564(&SoundManager_TypeInfo);
    byte_4C5638F = 1;
  }
  memset(&v38, 0, sizeof(v38));
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
    v6 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_string__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v6,
      (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = v2[8];
    if ( !this )
      goto LABEL_59;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v38 = v37;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v38.fields._current )
        sub_1C3E7C0(0, v7);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v38.fields._current,
                                                                       0);
      if ( !v6 )
        sub_1C3E7C0(UsingCueNames, UsingCueNames);
      System_Collections_Generic_HashSet_object___UnionWith(
        v6,
        UsingCueNames,
        (const MethodInfo_366D6C0 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    this = v2[10];
    if ( this )
    {
      this = (BgmManager_o *)BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0);
      if ( !this )
        goto LABEL_59;
      klass = this->klass;
      v10 = this;
      v11 = *(unsigned __int16 *)&this->klass->_2.rank;
      if ( *(_WORD *)&this->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_19;
        }
        v13 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_19:
        v13 = sub_1C8ED7C(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
      }
      v15 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
      if ( !v15 )
        sub_1C3E7C0(0, v14);
      while ( 1 )
      {
        v16 = *(_QWORD *)v15;
        v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v17;
            v18 += 4;
            if ( !v17 )
              goto LABEL_26;
          }
          v19 = v16 + 16LL * *v18 + 312;
        }
        else
        {
LABEL_26:
          v19 = sub_1C8ED7C(v15, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
          break;
        v20 = *(_QWORD *)v15;
        v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v22 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v21;
            v22 += 4;
            if ( !v21 )
              goto LABEL_33;
          }
          v23 = v20 + 16LL * *v22 + 312;
        }
        else
        {
LABEL_33:
          v23 = sub_1C8ED7C(v15, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
        if ( !v24 )
          sub_1C3E7C0(0, v25);
        CueName = (Il2CppObject *)BgmManager__ExtractCueName((BgmManager_o *)v24, *(System_String_o **)(v24 + 16), v26);
        if ( !v6 )
          sub_1C3E7C0(CueName, CueName);
        System_Collections_Generic_HashSet_object___Add(
          v6,
          CueName,
          (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
      v28 = *(_QWORD *)v15;
      v29 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
      {
        v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
        {
          --v29;
          v30 += 4;
          if ( !v29 )
            goto LABEL_42;
        }
        v31 = v28 + 16LL * *v30 + 312;
      }
      else
      {
LABEL_42:
        v31 = sub_1C8ED7C(v15, System_IDisposable_TypeInfo, 0);
      }
      this = (BgmManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v15, *(_QWORD *)(v31 + 8));
    }
    v32 = (System_Collections_Generic_List_object__o *)v2[4];
    if ( !v32 )
LABEL_59:
      sub_1C3E7C0(this, method);
    v33 = v32->fields._size - 1;
    if ( v33 >= 1 )
    {
      do
      {
        this = (BgmManager_o *)System_Collections_Generic_List_object___get_Item(
                                 v32,
                                 v33,
                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v6 )
          break;
        this = (BgmManager_o *)System_Collections_Generic_HashSet_object___Contains(
                                 v6,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_366CBC0 *)Method_System_Collections_Generic_HashSet_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v33,
                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__releaseAudioAssetStorage((System_String_o *)Item, 0);
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this,
            v33,
            (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_string__RemoveAt__);
          v35 = v2[4];
          if ( !v35 )
            goto LABEL_59;
          this = (BgmManager_o *)BgmManager_TypeInfo;
          v36 = (int)v35->fields.m_CancellationTokenSource;
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            this = (BgmManager_o *)BgmManager_TypeInfo;
          }
          if ( v36 <= *((_DWORD *)this[2].monitor + 6) )
            return;
        }
        if ( --v33 < 1 )
          return;
        v32 = (System_Collections_Generic_List_object__o *)v2[4];
      }
      while ( v32 );
      goto LABEL_59;
    }
  }
}


void BgmManager__Reset(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C56364 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56364 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C3E7C0(v2, v3);
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

  if ( (byte_4C5637F & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C3E564(&Method_BgmManager___c__ResetLocal_b__51_0__);
    sub_1C3E564(&BgmManager___c_TypeInfo);
    byte_4C5637F = 1;
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
    _9__51_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__51_0, v6, Method_BgmManager___c__ResetLocal_b__51_0__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_BgmPlayerBase__o *)_9__51_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v8, v9);
  }
  if ( !bgmPlayers )
    sub_1C3E7C0(v3, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void BgmManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  BgmManager_c *v3; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C56368 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56368 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v6 )
    {
      if ( !Instance )
        sub_1C3E7C0(v6, v7);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4C56366 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56366 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v7 )
    {
      if ( !Instance )
        sub_1C3E7C0(v7, v8);
      BgmManager__SetMuteLocal((BgmManager_o *)Instance, isMute, v9);
    }
  }
}


void BgmManager__SetMuteLocal(BgmManager_o *this, bool isMute, const MethodInfo *method)
{
  BgmManager___c__DisplayClass52_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_4C56380 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C3E564(&Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__);
    sub_1C3E564(&BgmManager___c__DisplayClass52_0_TypeInfo);
    byte_4C56380 = 1;
  }
  v5 = (BgmManager___c__DisplayClass52_0_o *)sub_1C3E7B0(BgmManager___c__DisplayClass52_0_TypeInfo);
  BgmManager___c__DisplayClass52_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.isMute = isMute,
        bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers,
        v9 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BgmPlayerBase__TypeInfo),
        System_Action_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__,
          0),
        !bgmPlayers) )
  {
    sub_1C3E7C0(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v9,
    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C56373 & 1) == 0 )
  {
    sub_1C3E564(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
    sub_1C3E564(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56373 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C3E7C0(v4, v5);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        0,
        (const MethodInfo_30EB690 *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        0,
        (const MethodInfo_30EB4A4 *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
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
  __int64 v9; // x1
  bool v10; // w22

  if ( (byte_4C56372 & 1) == 0 )
  {
    sub_1C3E564(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
    sub_1C3E564(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_1C3E564(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
    sub_1C3E564(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56372 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C3E7C0(v8, v9);
    if ( fadeoutTime <= 0.0 )
    {
      v10 = BgmManager__StopBgmLocal_object_(
              (BgmManager_o *)Instance,
              name,
              (const MethodInfo_30EB690 *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
      if ( name && !v10 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__StopBgmLocal_object_(
          (BgmManager_o *)Instance,
          0,
          (const MethodInfo_30EB690 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      v10 = BgmManager__FadeoutBgmLocal_object_(
              (BgmManager_o *)Instance,
              fadeoutTime,
              name,
              (const MethodInfo_30EB4A4 *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
      if ( name && !v10 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__FadeoutBgmLocal_object_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0,
          (const MethodInfo_30EB4A4 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    if ( v10 )
      ActionExtensions__Call(successCallback, 0);
  }
}


bool BgmManager__StopBgmLocal_object_(BgmManager_o *this, System_String_o *name, const MethodInfo_30EB690 *method)
{
  const MethodInfo_30EB0D0 **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__68_T; // x8
  Il2CppClass *v10; // x0
  System_Func_object__bool__o *v11; // x21
  Il2CppClass *v12; // x0
  const MethodInfo_30EB690_RGCTXs *v13; // x8
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

  rgctx_data = (const MethodInfo_30EB0D0 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_bool___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_bool___);
    rgctx_data = (const MethodInfo_30EB0D0 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C8ECD4(method);
      rgctx_data = (const MethodInfo_30EB0D0 **)method->rgctx_data;
    }
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, name, *rgctx_data);
  _4_BgmManager___c__68_T = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (*(&_4_BgmManager___c__68_T->_2.bitflags2 + 2) & 1) == 0 )
    _4_BgmManager___c__68_T = (Il2CppClass *)sub_1C8EC78(inited);
  if ( !_4_BgmManager___c__68_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__68_T);
  v10 = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (*(&v10->_2.bitflags2 + 2) & 1) == 0 )
    v10 = (Il2CppClass *)sub_1C8EC78(inited);
  v11 = (System_Func_object__bool__o *)*((_QWORD *)v10->static_fields + 1);
  if ( !v11 )
  {
    v12 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (*(&v12->_2.bitflags2 + 2) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1C8EC78(inited);
    if ( !v12->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = method->rgctx_data;
    v14 = (__int64)v13->_4_BgmManager___c__68_T_;
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    {
      v14 = sub_1C8EC78(inited);
      v13 = method->rgctx_data;
    }
    _3_System_Func_T__bool = (__int64)v13->_3_System_Func_T__bool_;
    v16 = **(Il2CppObject ***)(v14 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__bool + 309) & 1) == 0 )
      _3_System_Func_T__bool = sub_1C8EC78(inited);
    v11 = (System_Func_object__bool__o *)sub_1C3E7B0(_3_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v11,
      v16,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__68_T___StopBgmLocal_b__68_0,
      (const MethodInfo_364B6F4 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
    v20 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
      v20 = (Il2CppClass *)sub_1C8EC78(v19);
    *((_QWORD *)v20->static_fields + 1) = v11;
    v21 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (*(&v21->_2.bitflags2 + 2) & 1) == 0 )
      v21 = (Il2CppClass *)sub_1C8EC78(v19);
    sub_1C3E508((CGThumbnailListItem_o *)((char *)v21->static_fields + 8), (int32_t)v11, v17, v18);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TResult__o *)v11,
                                                               (const MethodInfo_312F354 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v22,
                                                               (const MethodInfo_3138EB8 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v23, (const MethodInfo_3104E20 *)Method_System_Linq_Enumerable_Any_bool___);
}


void BgmManager__StopJingle(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4C56379 & 1) == 0 )
  {
    sub_1C3E564(&Method_BgmManager_StopBgmLocal_JinglePlayer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56379 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C3E7C0(v2, v3);
    BgmManager__StopBgmLocal_object_(
      (BgmManager_o *)Instance,
      0,
      (const MethodInfo_30EB690 *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C56374 & 1) == 0 )
  {
    sub_1C3E564(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_1C3E564(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56374 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C3E7C0(v6, v7);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        name,
        (const MethodInfo_30EB690 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        name,
        (const MethodInfo_30EB4A4 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
  }
}


void BgmManager__StopUnrequestedSubBgm(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *requestedBgmArgs,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Object_array *v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *SubArgsList_k__BackingField; // x21
  BgmManager___c_c *v9; // x0
  System_Func_object__object__o *_9__69_0; // x22
  Il2CppObject *v11; // x23
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__bool__o *v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  BgmManager___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_T__o *v22; // x19
  System_Action_object__o *_9__69_2; // x20
  Il2CppObject *v24; // x21
  struct BgmManager___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C5638A & 1) == 0 )
  {
    sub_1C3E564(&System_Action_SubBgmPlayer__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_SubBgmPlayer___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    sub_1C3E564(&System_Func_SubBgmPlayArgs__string__TypeInfo);
    sub_1C3E564(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_1C3E564(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__);
    sub_1C3E564(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__);
    sub_1C3E564(&Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__);
    sub_1C3E564(&BgmManager___c__DisplayClass69_0_TypeInfo);
    sub_1C3E564(&BgmManager___c_TypeInfo);
    byte_4C5638A = 1;
  }
  v5 = sub_1C3E7B0(BgmManager___c__DisplayClass69_0_TypeInfo);
  BgmManager___c__DisplayClass69_0___ctor((BgmManager___c__DisplayClass69_0_o *)v5, 0);
  if ( this->fields.enableCounter_KeepSubBgm <= 0 )
  {
    if ( !requestedBgmArgs )
      goto LABEL_19;
    SubArgsList_k__BackingField = requestedBgmArgs->fields._SubArgsList_k__BackingField;
    v9 = BgmManager___c_TypeInfo;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v9 = BgmManager___c_TypeInfo;
    }
    _9__69_0 = (System_Func_object__object__o *)v9->static_fields->__9__69_0;
    if ( !_9__69_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BgmManager___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__69_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_SubBgmPlayArgs__string__TypeInfo);
      System_Func_object__object____ctor(_9__69_0, v11, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, 0);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__69_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__69_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__69_0, (int32_t)_9__69_0, v13, v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__69_0,
                                                                 (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v6 = System_Linq_Enumerable__ToArray_object_(
           v15,
           (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v5 )
LABEL_19:
      sub_1C3E7C0(v6, v7);
    *(_QWORD *)(v5 + 16) = v6;
    sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v6, v16, v17);
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_3128D28 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v19 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v19,
      (Il2CppObject *)v5,
      Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__,
      0);
    v20 = System_Linq_Enumerable__Where_object_(
            v18,
            (System_Func_TSource__bool__o *)v19,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v21 = BgmManager___c_TypeInfo;
    v22 = (System_Collections_Generic_IEnumerable_T__o *)v20;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v21 = BgmManager___c_TypeInfo;
    }
    _9__69_2 = (System_Action_object__o *)v21->static_fields->__9__69_2;
    if ( !_9__69_2 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BgmManager___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v21->static_fields->__9;
      _9__69_2 = (System_Action_object__o *)sub_1C3E7B0(System_Action_SubBgmPlayer__TypeInfo);
      System_Action_object____ctor(_9__69_2, v24, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, 0);
      v25 = BgmManager___c_TypeInfo->static_fields;
      v25->__9__69_2 = (struct System_Action_SubBgmPlayer__o *)_9__69_2;
      sub_1C3E508((CGThumbnailListItem_o *)&v25->__9__69_2, (int32_t)_9__69_2, v26, v27);
    }
    BasicHelper__ForEach_object_(
      v22,
      (System_Action_T__o *)_9__69_2,
      (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_SubBgmPlayer___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


System_String_o *BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_1C3E7C0(this, method);
  return mainBgmPlayer->fields.bgmName;
}


bool BgmManager__get_IsBusy(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4C56360 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C56360 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v2 )
    sub_1C3E7C0(0, v3);
  return BgmManager__IsLoadingLocal((BgmManager_o *)v2, 0, v4);
}


bool BgmManager__get_IsMute(const MethodInfo *method)
{
  BgmManager_c *v1; // x0

  if ( (byte_4C56365 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    byte_4C56365 = 1;
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4C5636B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C5636B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C3E7C0(v4, v5);
  return BgmManager__IsLoadingLocal((BgmManager_o *)Instance, name, v6);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BgmManager_o *v10; // x1
  struct System_String_o *bgmName; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitWhile_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_4C5639C & 1) == 0 )
  {
    sub_1C3E564(&System_Func_bool__TypeInfo);
    sub_1C3E564(&Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__);
    sub_1C3E564(&BgmManager___c__DisplayClass63_0_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C5639C = 1;
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
    v5 = sub_1C3E7B0(BgmManager___c__DisplayClass63_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !v5
      || (v10 = this->fields.__4__this,
          *(_QWORD *)(v5 + 16) = v10,
          sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v10, v8, v9),
          bgmName = this->fields.bgmName,
          *(_QWORD *)(v5 + 24) = bgmName,
          sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)bgmName, v12, v13),
          !_4__this) )
    {
      sub_1C3E7C0(v6, v7);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v5 + 24), 0) )
    {
      v14 = (System_Func_bool__o *)sub_1C3E7B0(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v14,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__,
        0);
      v15 = (UnityEngine_WaitWhile_o *)sub_1C3E7B0(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v15, v14, 0);
      this->fields.__2__current = (Il2CppObject *)v15;
      p__2__current = &this->fields.__2__current;
      sub_1C3E508((CGThumbnailListItem_o *)p__2__current, (int32_t)v15, v17, v18);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BgmManager__CoWaitSameAudioLoading_d__63_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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

  if ( (byte_4C56397 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager___c_TypeInfo);
    byte_4C56397 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BgmManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BgmManager___c_TypeInfo->static_fields->__9 = (struct BgmManager___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)BgmManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BgmManager___c___ctor(BgmManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c___FixedUpdate_b__78_0(BgmManager___c_o *this, GeneralBgmPlayer_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, (const MethodInfo *)x);
}


void BgmManager___c___FixedUpdate_b__78_1(BgmManager___c_o *this, GeneralBgmPlayer_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  ((void (__fastcall *)(GeneralBgmPlayer_o *, __int64, const MethodInfo *))x->klass->vtable._11_StopBgm.methodPtr)(
    x,
    1,
    x->klass->vtable._11_StopBgm.method);
}


void BgmManager___c___FixedUpdate_b__78_2(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._13_FixedUpdate.methodPtr)(
    x,
    x->klass->vtable._13_FixedUpdate.method);
}


void BgmManager___c___FixedUpdate_b__78_3(BgmManager___c_o *this, BgmPlayArgs_o *x, const MethodInfo *method)
{
  System_Nullable_float__o p_fadeTime; // x0
  const MethodInfo_38DB36C *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  System_Nullable_float__o v9; // x2
  System_Nullable_float__o v10; // x1
  System_Nullable_long__o v11; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_long__o v13; // 0:x0.16

  if ( (byte_4C56398 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_long___ctor__);
    sub_1C3E564(&Method_System_Nullable_float___ctor__);
    byte_4C56398 = 1;
  }
  p_fadeTime = (System_Nullable_float__o)&fadeTime;
  fadeTime = 0;
  *(_QWORD *)&v11.fields.hasValue = 0;
  v11.fields.value = 0;
  System_Nullable_float____ctor(p_fadeTime, 0.0, (const MethodInfo_38DD2E0 *)Method_System_Nullable_float___ctor__);
  *(_QWORD *)&v13.fields.hasValue = &v11;
  v13.fields.value = 0;
  System_Nullable_long____ctor(v13, Method_System_Nullable_long___ctor__, v5);
  if ( !x )
    sub_1C3E7C0(v6, v7);
  v9 = fadeTime;
  v10 = 0;
  BgmPlayArgs__Update(x, v10, v9, v11, v8);
}


bool BgmManager___c___GetOrCreateSubBgmPlayer_b__72_1(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.bgmName == 0;
}


void BgmManager___c___InitializeLocal_b__50_0(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._8_ReflectMasterVolume.methodPtr)(
    x,
    x->klass->vtable._8_ReflectMasterVolume.method);
}


void BgmManager___c___ResetLocal_b__51_0(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  return x->fields._BgmName_k__BackingField;
}


void BgmManager___c___StopUnrequestedSubBgm_b__69_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, const MethodInfo *))x->klass->vtable._11_StopBgm.methodPtr)(
    x,
    0,
    x->klass->vtable._11_StopBgm.method);
}


void BgmManager___c__54_object____cctor(const MethodInfo_32C7FF0 *method)
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
    klass = sub_1C8EC78();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8EC78();
  v4 = (Il2CppObject *)sub_1C3E7B0(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C8EC78();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8EC78();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8EC78();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8EC78();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8EC78();
  sub_1C3E508(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void BgmManager___c__54_object____ctor(BgmManager___c__54_T__o *this, const MethodInfo_32C80AC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__54_object____EnumeratePlayersHavingBgmName_b__54_0(
        BgmManager___c__54_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32C80B4 *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x[1].monitor != 0;
}


void BgmManager___c__68_object____cctor(const MethodInfo_32C8320 *method)
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
    klass = sub_1C8EC78();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8EC78();
  v4 = (Il2CppObject *)sub_1C3E7B0(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C8EC78();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8EC78();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8EC78();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8EC78();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8EC78();
  sub_1C3E508(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void BgmManager___c__68_object____ctor(BgmManager___c__68_T__o *this, const MethodInfo_32C83DC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__68_object____StopBgmLocal_b__68_0(
        BgmManager___c__68_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32C83E4 *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))x->klass->vtable[11].methodPtr)(
           x,
           0,
           x->klass->vtable[11].method);
}


void BgmManager___c__76_object____cctor(const MethodInfo_32C8408 *method)
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
    klass = sub_1C8EC78();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8EC78();
  v4 = (Il2CppObject *)sub_1C3E7B0(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C8EC78();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8EC78();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8EC78();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8EC78();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8EC78();
  sub_1C3E508(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void BgmManager___c__76_object____ctor(BgmManager___c__76_T__o *this, const MethodInfo_32C84C4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BgmPlayArgs_o *BgmManager___c__76_object____ExportPlayArgsGroupLocal_b__76_0(
        BgmManager___c__76_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32C84CC *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(0, method);
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
    sub_1C3E7C0(this, 0);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, const MethodInfo *))x->klass->vtable._7_SetMute.methodPtr)(
    x,
    this->fields.isMute,
    x->klass->vtable._7_SetMute.method);
}


void BgmManager___c__DisplayClass54_0_object____ctor(
        BgmManager___c__DisplayClass54_0_T__o *this,
        const MethodInfo_32CD1D4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass54_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass54_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32CD1DC *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct BgmPlayArgs_array *nonNullArgsAll; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x21

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  method = (const MethodInfo *)this->fields.argsGroup;
  if ( (const MethodInfo *)_4__this->fields.cacheArgsGroup == method )
  {
    BgmManager__StopUnrequestedSubBgm(_4__this, (BgmPlayArgsGroup_o *)method, 0);
    if ( this->fields.isPlay )
    {
      nonNullArgsAll = this->fields.nonNullArgsAll;
      if ( !nonNullArgsAll )
        goto LABEL_14;
      max_length = nonNullArgsAll->max_length;
      if ( (int)max_length >= 1 )
      {
        v8 = 0;
        while ( 1 )
        {
          if ( v8 >= (unsigned int)max_length )
            sub_1C3E7C8(_4__this, method);
          _4__this = this->fields.__4__this;
          if ( !_4__this )
            break;
          BgmManager__PlayPreloadedBgm(_4__this, nonNullArgsAll->m_Items[v8], 0);
          LODWORD(max_length) = nonNullArgsAll->max_length;
          if ( (__int64)++v8 >= (int)max_length )
            goto LABEL_10;
        }
LABEL_14:
        sub_1C3E7C0(_4__this, method);
      }
LABEL_10:
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_14;
      _4__this->fields.cacheArgsGroup = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&_4__this->fields.cacheArgsGroup, 0, v4, v5);
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
    sub_1C3E7C0(this, callback);
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
  Il2CppObject *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BgmManager_o *_4__this; // x8
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C56399 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__);
    byte_4C56399 = 1;
  }
  cueName = this->fields.cueName;
  this->fields.tempCueSheetName = cueName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)cueName, v2, v3);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.loadingBgmCueNameList) == 0
    || (v7 = (Il2CppObject *)this->fields.cueName,
        items = loadingBgmCueNameList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++loadingBgmCueNameList->fields._version,
        !items) )
  {
    sub_1C3E7C0(loadingBgmCueNameList, v7);
  }
  size = loadingBgmCueNameList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      loadingBgmCueNameList,
      v7,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    loadingBgmCueNameList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v7;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v7, v8, v9);
  }
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, 0);
    this->fields.__9__1 = _9__1;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v17, v18);
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
  if ( (byte_4C5639A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Insert__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Remove__);
    this = (BgmManager___c__DisplayClass61_0_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C5639A = 1;
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
    (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
                                                   (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__);
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
            (const MethodInfo_37B6210 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_1C3E7C0(this, method);
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
    sub_1C3E7C0(0, method);
  return BgmManager__IsLoadingLocal(_4__this, this->fields.bgmName, 0);
}


void BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_32CE738 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass67_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32CE740 *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C5639B & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass69_0_o *)sub_1C3E564(&Method_System_Array_IndexOf_string___);
    byte_4C5639B = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  return (unsigned int)System_Array__IndexOf_object_(
                         (System_Object_array *)v4->fields.subBgmNamesToPlay,
                         (Il2CppObject *)x->fields.bgmName,
                         (const MethodInfo_3200DC4 *)Method_System_Array_IndexOf_string___) >> 31;
}


void BgmManager___c__DisplayClass70_0_object____ctor(
        BgmManager___c__DisplayClass70_0_T__o *this,
        const MethodInfo_32CFB90 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass70_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass70_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_32CFB98 *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(_4__this, method);
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
    sub_1C3E7C0(this, 0);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0);
}