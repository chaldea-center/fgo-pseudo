void BgmManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct BgmManager_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct BgmManager_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BgmManager_StaticFields *v17; // x8

  if ( (byte_4D2BE82 & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&StringLiteral_2912/*"BGM_CHALDEA_1"*/);
    sub_1C94098(&StringLiteral_2913/*"BGM_CHALDEA_2"*/);
    byte_4D2BE82 = 1;
  }
  static_fields = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_VOLUME = 0x3DCCCCCD3F800000LL;
  v8 = StringLiteral_2912/*"BGM_CHALDEA_1"*/;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_2912/*"BGM_CHALDEA_1"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_2913/*"BGM_CHALDEA_2"*/;
  v10 = BgmManager_TypeInfo->static_fields;
  v10->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_2913/*"BGM_CHALDEA_2"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v9, v11, v12, v13, v14, v15, v16);
  v17 = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&v17->ADD_BIND_MAX = 0x400000005LL;
  v17->isMute = 0;
  v17->masterVolume = 1.0;
}


void BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
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
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2BE81 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager___ctor__);
    byte_4D2BE81 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.addBindList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadingBgmCueNameList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.bgmPlayers, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3ABAA5C *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Object_o *Instance; // x20
  System_Collections_Generic_List_object__o *m_CachedPtr; // x20
  System_Predicate_object__o *v16; // x21
  Il2CppObject *v17; // x0

  if ( (byte_4D2BE58 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_BgmPlayerBase__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C94098(&Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__);
    sub_1C94098(&BgmManager___c__DisplayClass29_0_TypeInfo);
    byte_4D2BE58 = 1;
  }
  v5 = sub_1C942E4(BgmManager___c__DisplayClass29_0_TypeInfo);
  BgmManager___c__DisplayClass29_0___ctor((BgmManager___c__DisplayClass29_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)bgmName, v8, v9, v10, v11, v12, v13);
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( !v6 )
  {
    if ( Instance )
    {
      m_CachedPtr = (System_Collections_Generic_List_object__o *)Instance[2].fields.m_CachedPtr;
      v16 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_BgmPlayerBase__TypeInfo);
      System_Predicate_object____ctor(
        v16,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__,
        0);
      if ( m_CachedPtr )
      {
        v17 = System_Collections_Generic_List_object___Find(
                m_CachedPtr,
                (System_Predicate_T__o *)v16,
                (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v17 )
          BgmPlayerBase__set_BgmVolume((BgmPlayerBase_o *)v17, volume, 0);
        return;
      }
    }
LABEL_12:
    sub_1C942F0(v6, v7);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D2BE75 & 1) == 0 )
  {
    sub_1C94098(&BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo);
    byte_4D2BE75 = 1;
  }
  v7 = sub_1C942E4(BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo);
  BgmManager__CoWaitSameAudioLoading_d__63___ctor((BgmManager__CoWaitSameAudioLoading_d__63_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)bgmName, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)finishCallback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


void BgmManager__Enable_KeepSubBgm(bool value, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int v6; // w9

  if ( (byte_4D2BE6B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE6B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C942F0(v4, v5);
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
        const MethodInfo_318D68C *method)
{
  long double v3; // q0
  const MethodInfo_318D68C_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass54_0_T; // x0
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x0
  long double inited; // q0
  const MethodInfo_318D68C_RGCTXs *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  __int64 _5_System_Func_T__bool; // x0
  System_Func_object__bool__o *v24; // x21
  __int64 _6_BgmManager___c__54_T; // x0
  Il2CppClass *v26; // x0
  Il2CppClass *v27; // x0
  const MethodInfo_318D68C_RGCTXs *v28; // x8
  __int64 v29; // x0
  __int64 v30; // x8
  Il2CppObject *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  long double v38; // q0
  Il2CppClass *v39; // x0
  Il2CppClass *v40; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C6A188(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass54_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_;
  if ( (*(&rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BgmManager___c__DisplayClass54_0_T = sub_1C6A12C(v3);
  v9 = sub_1C942E4(_0_BgmManager___c__DisplayClass54_0_T);
  BgmManager___c__DisplayClass54_0_object____ctor(
    (BgmManager___c__DisplayClass54_0_T__o *)v9,
    (const MethodInfo_3371690 *)method->rgctx_data->_1_BgmManager___c__DisplayClass54_0_T___ctor);
  if ( !v9 )
    sub_1C942F0(v10, v11);
  *(_QWORD *)(v9 + 16) = bgmNameFilter;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)bgmNameFilter, v12, v13, v14, v15, v16, v17);
  v18 = *(_QWORD *)(v9 + 16);
  v19 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
          (const MethodInfo_31CBB8C *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  v21 = method->rgctx_data;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( v18 )
  {
    _5_System_Func_T__bool = (__int64)v21->_5_System_Func_T__bool_;
    if ( (*(_BYTE *)(_5_System_Func_T__bool + 309) & 1) == 0 )
      _5_System_Func_T__bool = sub_1C6A12C(inited);
    v24 = (System_Func_object__bool__o *)sub_1C942E4(_5_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v24,
      (Il2CppObject *)v9,
      (intptr_t)method->rgctx_data->_10_BgmManager___c__DisplayClass54_0_T___EnumeratePlayersHavingBgmName_b__1,
      (const MethodInfo_36FB138 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
  }
  else
  {
    _6_BgmManager___c__54_T = (__int64)v21->_6_BgmManager___c__54_T_;
    if ( (*(_BYTE *)(_6_BgmManager___c__54_T + 309) & 1) == 0 )
      _6_BgmManager___c__54_T = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(_6_BgmManager___c__54_T + 224) )
      inited = j_il2cpp_runtime_class_init_0(_6_BgmManager___c__54_T);
    v26 = method->rgctx_data->_6_BgmManager___c__54_T_;
    if ( (*(&v26->_2.bitflags2 + 2) & 1) == 0 )
      v26 = (Il2CppClass *)sub_1C6A12C(inited);
    v24 = (System_Func_object__bool__o *)*((_QWORD *)v26->static_fields + 1);
    if ( !v24 )
    {
      v27 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (*(&v27->_2.bitflags2 + 2) & 1) == 0 )
        v27 = (Il2CppClass *)sub_1C6A12C(inited);
      if ( !v27->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(v27);
      v28 = method->rgctx_data;
      v29 = (__int64)v28->_6_BgmManager___c__54_T_;
      if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      {
        v29 = sub_1C6A12C(inited);
        v28 = method->rgctx_data;
      }
      v30 = (__int64)v28->_5_System_Func_T__bool_;
      v31 = **(Il2CppObject ***)(v29 + 184);
      if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
        v30 = sub_1C6A12C(inited);
      v24 = (System_Func_object__bool__o *)sub_1C942E4(v30);
      System_Func_object__bool____ctor(
        v24,
        v31,
        (intptr_t)method->rgctx_data->_7_BgmManager___c__54_T___EnumeratePlayersHavingBgmName_b__54_0,
        (const MethodInfo_36FB138 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
      v39 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (*(&v39->_2.bitflags2 + 2) & 1) == 0 )
        v39 = (Il2CppClass *)sub_1C6A12C(v38);
      *((_QWORD *)v39->static_fields + 1) = v24;
      v40 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (*(&v40->_2.bitflags2 + 2) & 1) == 0 )
        v40 = (Il2CppClass *)sub_1C6A12C(v38);
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)((char *)v40->static_fields + 8),
        (int32_t)v24,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          v22,
                                                          (System_Func_TSource__bool__o *)v24,
                                                          (const MethodInfo_31E39C8 *)method->rgctx_data->_9_System_Linq_Enumerable_Where_T_);
}


bool BgmManager__ExistsPlayerHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_318D858 *method)
{
  const MethodInfo_318D68C **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  rgctx_data = (const MethodInfo_318D68C **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C6A188(method);
    rgctx_data = (const MethodInfo_318D68C **)method->rgctx_data;
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, bgmNameFilter, *rgctx_data);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_31A7F44 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_);
}


BgmPlayArgsGroup_o *BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4D2BE50 & 1) == 0 )
  {
    sub_1C94098(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE50 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v2 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v2, v3);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_318D8A4 *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *BgmManager__ExportPlayArgsGroupLocal_object_(BgmManager_o *this, const MethodInfo_318D8A4 *method)
{
  const MethodInfo_318D68C **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__76_T; // x8
  Il2CppClass *v8; // x0
  System_Func_object__object__o *v9; // x21
  Il2CppClass *v10; // x0
  const MethodInfo_318D8A4_RGCTXs *v11; // x8
  __int64 v12; // x0
  __int64 _3_System_Func_T__BgmPlayArgs; // x8
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  long double v21; // q0
  Il2CppClass *v22; // x0
  Il2CppClass *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Object_array *v25; // x19
  BgmPlayArgsGroup_o *v26; // x20

  rgctx_data = (const MethodInfo_318D68C **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C94098(&BgmPlayArgsGroup_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    rgctx_data = (const MethodInfo_318D68C **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C6A188(method);
      rgctx_data = (const MethodInfo_318D68C **)method->rgctx_data;
    }
  }
  v5 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, 0, *rgctx_data);
  _4_BgmManager___c__76_T = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (*(&_4_BgmManager___c__76_T->_2.bitflags2 + 2) & 1) == 0 )
    _4_BgmManager___c__76_T = (Il2CppClass *)sub_1C6A12C(inited);
  if ( !_4_BgmManager___c__76_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__76_T);
  v8 = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (*(&v8->_2.bitflags2 + 2) & 1) == 0 )
    v8 = (Il2CppClass *)sub_1C6A12C(inited);
  v9 = (System_Func_object__object__o *)*((_QWORD *)v8->static_fields + 1);
  if ( !v9 )
  {
    v10 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (*(&v10->_2.bitflags2 + 2) & 1) == 0 )
      v10 = (Il2CppClass *)sub_1C6A12C(inited);
    if ( !v10->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = method->rgctx_data;
    v12 = (__int64)v11->_4_BgmManager___c__76_T_;
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    {
      v12 = sub_1C6A12C(inited);
      v11 = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = (__int64)v11->_3_System_Func_T__BgmPlayArgs_;
    v14 = **(Il2CppObject ***)(v12 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__BgmPlayArgs + 309) & 1) == 0 )
      _3_System_Func_T__BgmPlayArgs = sub_1C6A12C(inited);
    v9 = (System_Func_object__object__o *)sub_1C942E4(_3_System_Func_T__BgmPlayArgs);
    System_Func_object__object____ctor(
      v9,
      v14,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__76_T___ExportPlayArgsGroupLocal_b__76_0,
      (const MethodInfo_36FB7E0 *)method->rgctx_data->_6_System_Func_T__BgmPlayArgs___ctor);
    v22 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (*(&v22->_2.bitflags2 + 2) & 1) == 0 )
      v22 = (Il2CppClass *)sub_1C6A12C(v21);
    *((_QWORD *)v22->static_fields + 1) = v9;
    v23 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (*(&v23->_2.bitflags2 + 2) & 1) == 0 )
      v23 = (Il2CppClass *)sub_1C6A12C(v21);
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)((char *)v23->static_fields + 8),
      (int32_t)v9,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TResult__o *)v9,
                                                               (const MethodInfo_31D30EC *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__BgmPlayArgs_);
  v25 = System_Linq_Enumerable__ToArray_object_(
          v24,
          (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v26 = (BgmPlayArgsGroup_o *)sub_1C942E4(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_41964756(v26, (BgmPlayArgs_array *)v25, 0);
  return v26;
}


System_String_o *BgmManager__ExtractCueName(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  il2cpp_array_size_t max_length; // x8

  if ( (byte_4D2BE78 & 1) == 0 )
  {
    sub_1C94098(&char___TypeInfo);
    byte_4D2BE78 = 1;
  }
  v4 = (System_String_array *)sub_1C94140(char___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 47;
  if ( !name || (v4 = System_String__Split_64466836(name, (System_Char_array *)v4, 0)) == 0 )
LABEL_9:
    sub_1C942F0(v4, v5);
  max_length = v4->max_length;
  if ( !(_DWORD)max_length )
LABEL_10:
    sub_1C942F8(v4);
  return *(System_String_o **)((char *)v4->m_Items + ((__int64)((max_length << 32) - 0x100000000LL) >> 29));
}


void BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4D2BE60 & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    byte_4D2BE60 = 1;
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
        const MethodInfo_318DA60 *method)
{
  const MethodInfo_318DA60_RGCTXs *rgctx_data; // x8
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
    sub_1C94098(&Method_System_Linq_Enumerable_Any_bool___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_bool___);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C6A188(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_BgmManager___c__DisplayClass67_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_;
  if ( (*(&rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BgmManager___c__DisplayClass67_0_T = sub_1C6A12C(*(long double *)&fadeoutTime);
  v10 = (BgmManager___c__DisplayClass67_0_T__o *)sub_1C942E4(_0_BgmManager___c__DisplayClass67_0_T);
  BgmManager___c__DisplayClass67_0_object____ctor(
    v10,
    (const MethodInfo_3372BF4 *)method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor);
  if ( !v10 )
    sub_1C942F0(v11, v12);
  v10->fields.fadeoutTime = fadeoutTime;
  v13 = BgmManager__EnumeratePlayersHavingBgmName_object_(
          this,
          name,
          (const MethodInfo_318D68C *)method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_);
  _5_System_Func_T__bool = method->rgctx_data->_5_System_Func_T__bool_;
  if ( (*(&_5_System_Func_T__bool->_2.bitflags2 + 2) & 1) == 0 )
    _5_System_Func_T__bool = (Il2CppClass *)sub_1C6A12C(v14);
  v16 = (System_Func_object__bool__o *)sub_1C942E4(_5_System_Func_T__bool);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass67_0_T___FadeoutBgmLocal_b__0,
    (const MethodInfo_36FB138 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                               (System_Func_TSource__TResult__o *)v16,
                                                               (const MethodInfo_31D2228 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v17,
                                                               (const MethodInfo_31DC57C *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v18, (const MethodInfo_31A777C *)Method_System_Linq_Enumerable_Any_bool___);
}


void BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D2BE69 & 1) == 0 )
  {
    sub_1C94098(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE69 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C942F0(v4, v5);
    BgmManager__FadeoutBgmLocal_object_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0,
      (const MethodInfo_318DA60 *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL4 v20; // w0
  System_Collections_Generic_IEnumerable_TResult__o *v21; // x0
  BgmManager___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_T__o *v23; // x20
  System_Action_object__o *_9__78_1; // x21
  Il2CppObject *v25; // x22
  struct BgmManager___c_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  BgmManager_o *v33; // x20
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x21
  BgmManager___c_c *v36; // x0
  System_Action_object__o *_9__78_3; // x22
  Il2CppObject *v38; // x23
  struct BgmManager___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  const MethodInfo *v46; // x2
  System_Collections_IEnumerable_o *v47; // x19
  System_Action_object__o *v48; // x20
  Il2CppObject *v49; // x21
  struct BgmManager___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7

  v2 = this;
  if ( (byte_4D2BE7F & 1) == 0 )
  {
    sub_1C94098(&System_Action_GeneralBgmPlayer__TypeInfo);
    sub_1C94098(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C94098(&System_Action_BgmPlayArgs__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_BgmPlayArgs___);
    sub_1C94098(&Method_BasicHelper_ForEach_GeneralBgmPlayer___);
    sub_1C94098(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_1C94098(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
    sub_1C94098(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    sub_1C94098(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1C94098(&System_Func_GeneralBgmPlayer__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1C94098(&Method_BgmManager___c__FixedUpdate_b__78_0__);
    sub_1C94098(&Method_BgmManager___c__FixedUpdate_b__78_1__);
    sub_1C94098(&Method_BgmManager___c__FixedUpdate_b__78_2__);
    sub_1C94098(&Method_BgmManager___c__FixedUpdate_b__78_3__);
    this = (BgmManager_o *)sub_1C94098(&BgmManager___c_TypeInfo);
    byte_4D2BE7F = 1;
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
           (const MethodInfo_31CBB8C *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
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
      _9__78_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_GeneralBgmPlayer__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__78_0, v12, Method_BgmManager___c__FixedUpdate_b__78_0__, 0);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__78_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__78_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__78_0,
        (int32_t)_9__78_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v20 = System_Linq_Enumerable__Any_object__52076056(
            v10,
            (System_Func_TSource__bool__o *)_9__78_0,
            (const MethodInfo_31A9E18 *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v20 & v7) != 0 )
    {
      v21 = System_Linq_Enumerable__OfType_object_(
              *p_bgmPlayers,
              (const MethodInfo_31CBB8C *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
      v22 = BgmManager___c_TypeInfo;
      v23 = (System_Collections_Generic_IEnumerable_T__o *)v21;
      if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
        v22 = BgmManager___c_TypeInfo;
      }
      _9__78_1 = (System_Action_object__o *)v22->static_fields->__9__78_1;
      if ( !_9__78_1 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = BgmManager___c_TypeInfo;
        }
        v25 = (Il2CppObject *)v22->static_fields->__9;
        _9__78_1 = (System_Action_object__o *)sub_1C942E4(System_Action_GeneralBgmPlayer__TypeInfo);
        System_Action_object____ctor(_9__78_1, v25, Method_BgmManager___c__FixedUpdate_b__78_1__, 0);
        v26 = BgmManager___c_TypeInfo->static_fields;
        v26->__9__78_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__78_1;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v26->__9__78_1, (int32_t)_9__78_1, v27, v28, v29, v30, v31, v32);
      }
      BasicHelper__ForEach_object_(
        v23,
        (System_Action_T__o *)_9__78_1,
        (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v2->fields.isBgmStopJingle = 1;
    }
    else if ( !v20
           && v2->fields.isBgmStopJingle
           && v7 == 0
           && BgmManager__ExistsPlayerHavingBgmName_object_(
                v2,
                0,
                (const MethodInfo_318D858 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
    {
      this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                               v2,
                               (const MethodInfo_318D8A4 *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
      if ( !this )
        goto LABEL_47;
      v33 = this;
      v34 = BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0);
      v35 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v34,
                                                             (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      this = (BgmManager_o *)BgmManager__StopBgmLocal_object_(
                               v2,
                               0,
                               (const MethodInfo_318DC4C *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
      if ( !v35 )
        goto LABEL_47;
      if ( v35[1].monitor )
      {
        v36 = BgmManager___c_TypeInfo;
        if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
          v36 = BgmManager___c_TypeInfo;
        }
        _9__78_3 = (System_Action_object__o *)v36->static_fields->__9__78_3;
        if ( !_9__78_3 )
        {
          if ( !v36->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v36);
            v36 = BgmManager___c_TypeInfo;
          }
          v38 = (Il2CppObject *)v36->static_fields->__9;
          _9__78_3 = (System_Action_object__o *)sub_1C942E4(System_Action_BgmPlayArgs__TypeInfo);
          System_Action_object____ctor(_9__78_3, v38, Method_BgmManager___c__FixedUpdate_b__78_3__, 0);
          v39 = BgmManager___c_TypeInfo->static_fields;
          v39->__9__78_3 = (struct System_Action_BgmPlayArgs__o *)_9__78_3;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v39->__9__78_3, (int32_t)_9__78_3, v40, v41, v42, v43, v44, v45);
        }
        BasicHelper__ForEach_object_(
          v35,
          (System_Action_T__o *)_9__78_3,
          (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_BgmPlayArgs___);
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        BgmManager__PlayBgm_41947908((BgmPlayArgsGroup_o *)v33, 0, v46);
      }
    }
    if ( !v7 )
      v2->fields.isBgmStopJingle = 0;
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
    v47 = *p_bgmPlayers;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v48 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 10);
    if ( !v48 )
    {
      if ( !LODWORD(this[2].fields.mainBgmPlayer) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (BgmManager_o *)BgmManager___c_TypeInfo;
      }
      v49 = *(Il2CppObject **)this[2].monitor;
      v48 = (System_Action_object__o *)sub_1C942E4(System_Action_BgmPlayerBase__TypeInfo);
      System_Action_object____ctor(v48, v49, Method_BgmManager___c__FixedUpdate_b__78_2__, 0);
      v50 = BgmManager___c_TypeInfo->static_fields;
      v50->__9__78_2 = (struct System_Action_BgmPlayerBase__o *)v48;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v50->__9__78_2, (int32_t)v48, v51, v52, v53, v54, v55, v56);
    }
    if ( v47 )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)v47,
        (System_Action_T__o *)v48,
        (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
      return;
    }
LABEL_47:
    sub_1C942F0(this, method);
  }
}


void BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4D2BE6C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C942F0(v2, v3);
    LODWORD(Instance[4].monitor) = 0;
  }
}


CriAtomSource_o *BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4D2BE7D & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
    byte_4D2BE7D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v4);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_object_(
                              gameObject,
                              (const MethodInfo_31F46A8 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *CueSheet; // x0
  SoundManager_c *v6; // x8
  System_String_o *v7; // x19

  if ( (byte_4D2BE52 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C94098(&SoundManager_TypeInfo);
    byte_4D2BE52 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
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

  if ( (byte_4D2BE64 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE64 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality(Instance, 0, 0);
  result = 0;
  if ( !v3 )
  {
    if ( !Instance || (klass = Instance[2].klass) == 0 )
      sub_1C942F0(0, v2);
    return (System_String_o *)klass->_1.namespaze;
  }
  return result;
}


System_String_o *BgmManager__GetMainBgmName(bool isFormation, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t UiFlag; // w20
  System_Collections_ICollection_o *ClearWarIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  BalanceConfig_c *v9; // x0
  BalanceConfig_c *v10; // x0
  System_String_o **p_bgmName; // x8
  BalanceConfig_c *v12; // x0
  BgmManager_c *v13; // x0
  BgmManager_c *v14; // x0
  TerminalOverwriteEntity_o *v16; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *bgmName; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2BE80 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&ServantCommentManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_19468/*"excludeFormation"*/);
    byte_4D2BE80 = 1;
  }
  v16 = 0;
  bgmName = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( !MasterData_object )
    goto LABEL_9;
  Instance = (Il2CppObject *)TerminalOverwriteMaster__TryGetOverwriteMainBgmName(
                               (TerminalOverwriteMaster_o *)MasterData_object,
                               &bgmName,
                               &v16,
                               0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_9;
  if ( !isFormation )
  {
LABEL_26:
    p_bgmName = &bgmName;
    return *p_bgmName;
  }
  if ( !v16 )
LABEL_31:
    sub_1C942F0(Instance, v4);
  if ( EntityScriptUtil__GetIntValue(v16->fields.script, (System_String_o *)StringLiteral_19468/*"excludeFormation"*/, 0, 0) != 1 )
    goto LABEL_26;
LABEL_9:
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  UiFlag = ServantCommentManager__GetUiFlag(0);
  ClearWarIdList = (System_Collections_ICollection_o *)ServantCommentManager__GetClearWarIdList(0);
  if ( UiFlag == 2 )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    p_bgmName = &v12->static_fields->AfterPart2TerminalBgmName;
  }
  else if ( UiFlag == 1 )
  {
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList;
    if ( BasicHelper__IsNullOrEmpty(ClearWarIdList, 0) )
      goto LABEL_27;
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            v8,
            v9->static_fields->OrdealCallWarId,
            (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
LABEL_27:
      v14 = BgmManager_TypeInfo;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        v14 = BgmManager_TypeInfo;
      }
      p_bgmName = &v14->static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
    }
    else
    {
      v10 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v10 = BalanceConfig_TypeInfo;
      }
      p_bgmName = &v10->static_fields->OrdealCallClearBgmName;
    }
  }
  else
  {
    v13 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v13 = BgmManager_TypeInfo;
    }
    p_bgmName = &v13->static_fields->DEFAULT_MAIN_BGM_NAME;
  }
  return *p_bgmName;
}


float BgmManager__GetMasterVolume(const MethodInfo *method)
{
  BgmManager_c *v1; // x0

  if ( (byte_4D2BE56 & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    byte_4D2BE56 = 1;
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  JinglePlayer_c *klass; // x9
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 bgmName_low; // x10
  __int64 v26; // x8

  if ( (byte_4D2BE7C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_OfType_JinglePlayer___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
    sub_1C94098(&JinglePlayer_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    byte_4D2BE7C = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_31CBB8C *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  v4 = (JinglePlayer_o *)System_Linq_Enumerable__ToArray_object_(
                           v3,
                           (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !v4 )
    goto LABEL_15;
  bgmName = v4->fields.bgmName;
  if ( !bgmName )
  {
    v8 = (JinglePlayer_o *)sub_1C942E4(JinglePlayer_TypeInfo);
    JinglePlayer___ctor(v8, 0);
    this->fields.jinglePlayer = v8;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.jinglePlayer, (int32_t)v8, v9, v10, v11, v12, v13, v14);
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
          v23 = *(_QWORD *)&v4->fields.index;
          v24 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++HIDWORD(v4->fields.bgmName);
          if ( v23 )
          {
            bgmName_low = SLODWORD(v4->fields.bgmName);
            if ( (unsigned int)bgmName_low >= *(_DWORD *)(v23 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)v4,
                jinglePlayer,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = v23 + 8 * bgmName_low;
              LODWORD(v4->fields.bgmName) = bgmName_low + 1;
              *(_QWORD *)(v26 + 32) = jinglePlayer;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)(v26 + 32),
                (int32_t)jinglePlayer,
                v17,
                v18,
                v19,
                v20,
                v21,
                v22);
            }
            return *p_jinglePlayer;
          }
        }
      }
    }
LABEL_15:
    sub_1C942F0(v4, jinglePlayer);
  }
  if ( !(_DWORD)bgmName )
    sub_1C942F8(v4);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Object_array *v15; // x20
  System_Func_object__bool__o *v16; // x22
  SubBgmPlayer_o *object; // x21
  BgmManager___c_c *v18; // x0
  System_Func_object__bool__o *_9__72_1; // x21
  Il2CppObject *v20; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  SubBgmPlayer_c *klass; // x9
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x8

  if ( (byte_4D2BE7B & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Find_SubBgmPlayer___);
    sub_1C94098(&Method_System_Linq_Enumerable_First_SubBgmPlayer___);
    sub_1C94098(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
    sub_1C94098(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1C94098(&SubBgmPlayer_TypeInfo);
    sub_1C94098(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__);
    sub_1C94098(&Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__);
    sub_1C94098(&BgmManager___c__DisplayClass72_0_TypeInfo);
    sub_1C94098(&BgmManager___c_TypeInfo);
    byte_4D2BE7B = 1;
  }
  v5 = sub_1C942E4(BgmManager___c__DisplayClass72_0_TypeInfo);
  BgmManager___c__DisplayClass72_0___ctor((BgmManager___c__DisplayClass72_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)bgmName, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_31CBB8C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v15 = System_Linq_Enumerable__ToArray_object_(
          v14,
          (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v16 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__,
    0);
  object = (SubBgmPlayer_o *)BasicHelper__Find_object_(
                               v15,
                               (System_Func_T__bool__o *)v16,
                               (const MethodInfo_3186034 *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( object )
    return object;
  v18 = BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v18 = BgmManager___c_TypeInfo;
  }
  _9__72_1 = (System_Func_object__bool__o *)v18->static_fields->__9__72_1;
  if ( !_9__72_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = BgmManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__72_1 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__72_1, v20, Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__72_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__72_1;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__72_1,
      (int32_t)_9__72_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v6 = (System_Collections_Generic_List_object__o *)BasicHelper__Find_object_(
                                                      v15,
                                                      (System_Func_T__bool__o *)_9__72_1,
                                                      (const MethodInfo_3186034 *)Method_BasicHelper_Find_SubBgmPlayer___);
  object = (SubBgmPlayer_o *)v6;
  if ( v6 )
    return object;
  if ( !v15 )
LABEL_23:
    sub_1C942F0(v6, v7);
  if ( SLODWORD(v15->max_length) <= 1 )
  {
    object = (SubBgmPlayer_o *)sub_1C942E4(SubBgmPlayer_TypeInfo);
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
          v38 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++v6->fields._version;
          if ( items )
          {
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)object,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v40[4] = (Il2CppClass *)object;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)object, v31, v32, v33, v34, v35, v36);
            }
            return object;
          }
        }
      }
    }
    goto LABEL_23;
  }
  return (SubBgmPlayer_o *)System_Linq_Enumerable__First_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                             (const MethodInfo_31C2D80 *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
}


void BgmManager__Initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D2BE51 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C942F0(v2, v3);
    BgmManager__InitializeLocal((BgmManager_o *)Instance, v3);
  }
}


void BgmManager__InitializeLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x19
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  MainBgmPlayer_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v18; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v20; // x8
  System_Collections_Generic_List_object__o *v21; // x19
  System_Action_object__o *v22; // x20
  Il2CppObject *v23; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  BgmManager_c *v31; // x0

  v2 = this;
  if ( (byte_4D2BE6D & 1) == 0 )
  {
    sub_1C94098(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1C94098(&MainBgmPlayer_TypeInfo);
    sub_1C94098(&Method_BgmManager___c__InitializeLocal_b__50_0__);
    this = (BgmManager_o *)sub_1C94098(&BgmManager___c_TypeInfo);
    byte_4D2BE6D = 1;
  }
  bgmPlayers = v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_21;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v4 = (MainBgmPlayer_o *)sub_1C942E4(MainBgmPlayer_TypeInfo);
    MainBgmPlayer___ctor(v4, 0);
    v2->fields.mainBgmPlayer = v4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.mainBgmPlayer, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    method = (const MethodInfo *)v2->fields.mainBgmPlayer;
    if ( !method )
      goto LABEL_21;
    LODWORD(method->invoker_method) = 0;
    this = (BgmManager_o *)v2->fields.bgmPlayers;
    if ( !this )
      goto LABEL_21;
    m_CachedPtr = this->fields.m_CachedPtr;
    v18 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_21;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)method,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v20 + 32) = method;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)method, v11, v12, v13, v14, v15, v16);
    }
  }
  v21 = (System_Collections_Generic_List_object__o *)v2->fields.bgmPlayers;
  this = (BgmManager_o *)BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
  }
  v22 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 1);
  if ( !v22 )
  {
    if ( !LODWORD(this[2].fields.mainBgmPlayer) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v23 = *(Il2CppObject **)this[2].monitor;
    v22 = (System_Action_object__o *)sub_1C942E4(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(v22, v23, Method_BgmManager___c__InitializeLocal_b__50_0__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)v22;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__50_0, (int32_t)v22, v25, v26, v27, v28, v29, v30);
  }
  if ( !v21 )
LABEL_21:
    sub_1C942F0(this, method);
  System_Collections_Generic_List_object___ForEach(
    v21,
    (System_Action_T__o *)v22,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v31 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v31);
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
  if ( (byte_4D2BE77 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    this = (BgmManager_o *)sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4D2BE77 = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)v4->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_object___Contains(
               loadingBgmCueNameList,
               (Il2CppObject *)this,
               (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_1C942F0(this, name);
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

  if ( (byte_4D2BE59 & 1) == 0 )
  {
    sub_1C94098(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_318D858 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D2BE65 & 1) == 0 )
  {
    sub_1C94098(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE65 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_318D858 *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0
  __int64 v7; // x1

  if ( (byte_4D2BE76 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4D2BE76 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName((BgmManager_o *)Instance, bgmName, v5);
  if ( !Instance )
    sub_1C942F0(CueName, v7);
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0) != 0;
}


void BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  bool v6; // w19

  if ( (byte_4D2BE6A & 1) == 0 )
  {
    sub_1C94098(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    sub_1C94098(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE6A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C942F0(v4, v5);
    v6 = isPause;
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v6,
      0,
      (const MethodInfo_318DB7C *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v6,
      0,
      (const MethodInfo_318DB7C *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


void BgmManager__PauseBgmLocal_object_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_318DB7C *method)
{
  long double v4; // q0
  const MethodInfo_318DB7C_RGCTXs *rgctx_data; // x8
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
    sub_1C6A188(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass70_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_;
  if ( (*(&rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_BgmManager___c__DisplayClass70_0_T = sub_1C6A12C(v4);
  v10 = (BgmManager___c__DisplayClass70_0_T__o *)sub_1C942E4(_0_BgmManager___c__DisplayClass70_0_T);
  BgmManager___c__DisplayClass70_0_object____ctor(
    v10,
    (const MethodInfo_337404C *)method->rgctx_data->_1_BgmManager___c__DisplayClass70_0_T___ctor);
  if ( !v10 )
    sub_1C942F0(v11, v12);
  v10->fields.isPause = isPause;
  v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                         (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                         (const MethodInfo_31CBB8C *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  _5_System_Action_T = method->rgctx_data->_5_System_Action_T_;
  if ( (*(&_5_System_Action_T->_2.bitflags2 + 2) & 1) == 0 )
    _5_System_Action_T = (Il2CppClass *)sub_1C6A12C(v14);
  v16 = (System_Action_object__o *)sub_1C942E4(_5_System_Action_T);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass70_0_T___PauseBgmLocal_b__0,
    (const MethodInfo_34CC448 *)method->rgctx_data->_6_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v13,
    (System_Action_T__o *)v16,
    (const MethodInfo_3188088 *)method->rgctx_data->_7_BasicHelper_ForEach_T_);
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

  if ( (byte_4D2BE5B & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&BgmPlayArgsGroup_TypeInfo);
    sub_1C94098(&Method_System_Nullable_float___ctor__);
    byte_4D2BE5B = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
  v12 = (BgmPlayArgsGroup_o *)sub_1C942E4(BgmPlayArgsGroup_TypeInfo);
  v13 = volumeNullable;
  v14 = v12;
  BgmPlayArgsGroup___ctor_41965876(v12, name, v13, fadeTime, startTime, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_41947908(v14, finishCallback, v15);
}


void BgmManager__PlayBgm_41947908(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_4D2BE5D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE5D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
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
      sub_1C942F0(v6, v7);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, 1, v8);
  }
}


void BgmManager__PlayBgm_41948104(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *v7; // x22
  const MethodInfo *v8; // x2

  if ( (byte_4D2BE5C & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&BgmPlayArgsGroup_TypeInfo);
    byte_4D2BE5C = 1;
  }
  v7 = (BgmPlayArgsGroup_o *)sub_1C942E4(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor(v7, main, (BgmPlayArgs_array *)subArray, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_41947908(v7, finishCallback, v8);
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

  if ( (byte_4D2BE66 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE66 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C942F0(v8, v9);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_String_o *v30; // x20
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x3

  if ( (byte_4D2BE7A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__);
    sub_1C94098(&BgmManager___c__DisplayClass71_0_TypeInfo);
    byte_4D2BE7A = 1;
  }
  v9 = sub_1C942E4(BgmManager___c__DisplayClass71_0_TypeInfo);
  BgmManager___c__DisplayClass71_0___ctor((BgmManager___c__DisplayClass71_0_o *)v9, 0);
  if ( !v9 )
    sub_1C942F0(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)name, v18, v19, v20, v21, v22, v23);
  *(float *)(v9 + 32) = volume;
  *(_QWORD *)(v9 + 40) = callbackFunc;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)callbackFunc, v24, v25, v26, v27, v28, v29);
  v30 = *(System_String_o **)(v9 + 24);
  v31 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v9, Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, 0);
  BgmManager__PreloadBgm(this, v30, v31, v32);
}


void BgmManager__PlayJingle_41952072(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4D2BE67 & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    byte_4D2BE67 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, 0, v3);
}


void BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2BE5E & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    byte_4D2BE5E = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_41948104(args, 0, 0, v2);
}


void BgmManager__PlayPreloadBgms(BgmManager_o *this, const MethodInfo *method)
{
  BgmPlayArgsGroup_o *cacheArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v4; // x0
  System_Object_array *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v14; // x21
  unsigned __int64 v15; // x22

  if ( (byte_4D2BE72 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    byte_4D2BE72 = 1;
  }
  cacheArgsGroup = this->fields.cacheArgsGroup;
  if ( cacheArgsGroup )
  {
    v4 = BgmPlayArgsGroup__AllArgsListNullExcluded(cacheArgsGroup, 0);
    v5 = System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4,
           (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    if ( !v5 )
      sub_1C942F0(0, v6);
    max_length = v5->max_length;
    v14 = v5;
    if ( (int)max_length >= 1 )
    {
      v15 = 0;
      do
      {
        if ( v15 >= (unsigned int)max_length )
          sub_1C942F8(v5);
        BgmManager__PlayPreloadedBgm(this, (BgmPlayArgs_o *)v14->m_Items[v15], v7);
        LODWORD(max_length) = v14->max_length;
        ++v15;
      }
      while ( (__int64)v15 < (int)max_length );
    }
    this->fields.cacheArgsGroup = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.cacheArgsGroup, 0, (int32_t)v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4D2BE73 & 1) == 0 )
  {
    sub_1C94098(&MainBgmPlayArgs_TypeInfo);
    sub_1C94098(&SubBgmPlayArgs_TypeInfo);
    byte_4D2BE73 = 1;
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
          sub_1C942F0(0, v6);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x21
  Il2CppObject *Instance; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *v20; // x22
  System_String_o *v21; // x21
  BgmManager_o *v22; // x20
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3

  if ( (byte_4D2BE5F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C94098(&Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__);
    sub_1C94098(&BgmManager___c__DisplayClass36_0_TypeInfo);
    byte_4D2BE5F = 1;
  }
  v3 = sub_1C942E4(BgmManager___c__DisplayClass36_0_TypeInfo);
  BgmManager___c__DisplayClass36_0___ctor((BgmManager___c__DisplayClass36_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = args;
  v12 = v3 + 24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)args, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v3 + 16) = Instance;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Instance, v14, v15, v16, v17, v18, v19);
  v20 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(v20, 0, 0);
  if ( !v4 )
  {
    if ( *(_QWORD *)v12 )
    {
      v21 = *(System_String_o **)(*(_QWORD *)v12 + 16LL);
      v22 = *(BgmManager_o **)(v3 + 16);
      v23 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)v3, Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, 0);
      if ( v22 )
      {
        BgmManager__PreloadBgm(v22, v21, v23, v24);
        return;
      }
    }
LABEL_10:
    sub_1C942F0(v4, v5);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  bool v18; // w24
  BgmPlayArgsGroup_o **v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct BgmPlayArgsGroup_o *v38; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v39; // x0
  System_Object_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_List_object__o *v47; // x20
  __int64 v48; // x23
  unsigned __int64 v49; // x24
  __int64 v50; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  __int64 v63; // x1
  System_Action_object__o *v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  System_Object_array *v75; // x21
  ChainableActionParallel_o *v76; // x20
  __int64 v77; // x21
  System_Action_o *v78; // x22
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7

  if ( (byte_4D2BE71 & 1) == 0 )
  {
    sub_1C94098(&System_Action___TypeInfo);
    sub_1C94098(&System_Action_Action__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ChainableActionParallel_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1C94098(&Method_System_Collections_Generic_List_Action_Action___Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Action_Action___ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_Action_Action____ctor__);
    sub_1C94098(&System_Collections_Generic_List_Action_Action___TypeInfo);
    sub_1C94098(&Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__);
    sub_1C94098(&BgmManager___c__DisplayClass57_0_TypeInfo);
    sub_1C94098(&Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__);
    sub_1C94098(&BgmManager___c__DisplayClass57_1_TypeInfo);
    byte_4D2BE71 = 1;
  }
  v9 = sub_1C942E4(BgmManager___c__DisplayClass57_0_TypeInfo);
  BgmManager___c__DisplayClass57_0___ctor((BgmManager___c__DisplayClass57_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 16) = this;
  v18 = isPlay;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = argsGroup;
  v19 = (BgmPlayArgsGroup_o **)(v9 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)argsGroup, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v9 + 48) = finishCallback;
  *(_BYTE *)(v9 + 32) = v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)finishCallback, v26, v27, v28, v29, v30, v31);
  v38 = *(struct BgmPlayArgsGroup_o **)(v9 + 24);
  if ( v38 )
  {
    this->fields.cacheArgsGroup = v38;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.cacheArgsGroup, (int32_t)v38, v32, v33, v34, v35, v36, v37);
    v10 = *v19;
    if ( !*v19 )
      goto LABEL_24;
    v39 = BgmPlayArgsGroup__AllArgsListNullExcluded(v10, 0);
    v40 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v39,
            (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v9 + 40) = v40;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)v40, v41, v42, v43, v44, v45, v46);
    v47 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_Action_Action___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v47,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v48 = *(_QWORD *)(v9 + 40);
    if ( !v48 )
      goto LABEL_24;
    if ( *(int *)(v48 + 24) >= 1 )
    {
      v49 = 0;
      while ( 1 )
      {
        v50 = sub_1C942E4(BgmManager___c__DisplayClass57_1_TypeInfo);
        BgmManager___c__DisplayClass57_1___ctor((BgmManager___c__DisplayClass57_1_o *)v50, 0);
        if ( !v50 )
          break;
        *(_QWORD *)(v50 + 24) = v9;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v50 + 24), v9, v51, v52, v53, v54, v55, v56);
        if ( v49 >= *(unsigned int *)(v48 + 24) )
          goto LABEL_25;
        v63 = *(_QWORD *)(v48 + 32 + 8 * v49);
        *(_QWORD *)(v50 + 16) = v63;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v50 + 16), v63, v57, v58, v59, v60, v61, v62);
        v64 = (System_Action_object__o *)sub_1C942E4(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v64,
          (Il2CppObject *)v50,
          Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__,
          0);
        if ( !v47 )
          break;
        items = v47->fields._items;
        v72 = Method_System_Collections_Generic_List_Action_Action___Add__;
        ++v47->fields._version;
        if ( !items )
          break;
        size = v47->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v47,
            (Il2CppObject *)v64,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &items->obj.klass + size;
          v47->fields._size = size + 1;
          v74[4] = (Il2CppClass *)v64;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v74 + 4), (int32_t)v64, v65, v66, v67, v68, v69, v70);
        }
        if ( (__int64)++v49 >= *(int *)(v48 + 24) )
          goto LABEL_17;
      }
LABEL_24:
      sub_1C942F0(v10, v11);
    }
LABEL_17:
    if ( !v47 )
      goto LABEL_24;
    v75 = System_Collections_Generic_List_object___ToArray(
            v47,
            (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v76 = (ChainableActionParallel_o *)sub_1C942E4(ChainableActionParallel_TypeInfo);
    ChainableActionParallel___ctor_49732720(v76, (System_Action_Action__array *)v75, 0);
    v77 = sub_1C94140(System_Action___TypeInfo, 1);
    v78 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v78, (Il2CppObject *)v9, Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__, 0);
    if ( !v77 )
      goto LABEL_24;
    if ( !*(_DWORD *)(v77 + 24) )
LABEL_25:
      sub_1C942F8(v10);
    *(_QWORD *)(v77 + 32) = v78;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v77 + 32), (int32_t)v78, v79, v80, v81, v82, v83, v84);
    if ( !v76 )
      goto LABEL_24;
    v10 = (BgmPlayArgsGroup_o *)ChainableActionBase__Final((ChainableActionBase_o *)v76, (System_Action_array *)v77, 0);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BgmManager_o *v22; // x0
  const MethodInfo *v23; // x2
  System_String_o *CueName; // x0
  Il2CppObject **v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_String_o *CueSheet; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  bool IsNullOrEmpty; // w22
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x3
  System_Collections_IEnumerator_o *v42; // x0

  if ( (byte_4D2BE74 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Insert__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C94098(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__);
    sub_1C94098(&BgmManager___c__DisplayClass61_0_TypeInfo);
    byte_4D2BE74 = 1;
  }
  v7 = sub_1C942E4(BgmManager___c__DisplayClass61_0_TypeInfo);
  BgmManager___c__DisplayClass61_0___ctor((BgmManager___c__DisplayClass61_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = finishCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  CueName = BgmManager__ExtractCueName(v22, name, v23);
  *(_QWORD *)(v7 + 24) = CueName;
  v25 = (Il2CppObject **)(v7 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)CueName, v26, v27, v28, v29, v30, v31);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CueSheet = SoundManager__GetCueSheet(Instance, *(System_String_o **)(v7 + 24), 0);
  *(_QWORD *)(v7 + 16) = CueSheet;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)CueSheet, v33, v34, v35, v36, v37, v38);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0);
  if ( !IsNullOrEmpty )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)Instance,
              *v25,
              (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
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
          *v25,
          (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
        Instance = (SoundManager_o *)this->fields.addBindList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            *v25,
            (const MethodInfo_386BBE4 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_12;
        }
      }
    }
LABEL_14:
    sub_1C942F0(Instance, v9);
  }
  v40 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v7, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, 0);
  v42 = BgmManager__CoWaitSameAudioLoading(this, name, v40, v41);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v42, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2BE70 & 1) == 0 )
  {
    sub_1C94098(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C94098(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__);
    sub_1C94098(&BgmManager___c_TypeInfo);
    byte_4D2BE70 = 1;
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
    _9__53_0 = (System_Action_object__o *)sub_1C942E4(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__53_0, v6, Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Action_BgmPlayerBase__o *)_9__53_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !bgmPlayers )
    sub_1C942F0(v3, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__53_0,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
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
  if ( (byte_4D2BE7E & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_string__UnionWith__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (BgmManager_o *)sub_1C94098(&SoundManager_TypeInfo);
    byte_4D2BE7E = 1;
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
    v6 = (System_Collections_Generic_HashSet_T__o *)sub_1C942E4(System_Collections_Generic_HashSet_string__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v6,
      (const MethodInfo_371E7A8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = v2[8];
    if ( !this )
      goto LABEL_59;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v38 = v37;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v38.fields._current )
        sub_1C942F0(0, v7);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v38.fields._current,
                                                                       0);
      if ( !v6 )
        sub_1C942F0(UsingCueNames, UsingCueNames);
      System_Collections_Generic_HashSet_object___UnionWith(
        v6,
        UsingCueNames,
        (const MethodInfo_371F99C *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
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
        v13 = sub_1C6A420(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
      }
      v15 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
      if ( !v15 )
        sub_1C942F0(0, v14);
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
          v19 = sub_1C6A420(v15, System_Collections_IEnumerator_TypeInfo, 0);
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
          v23 = sub_1C6A420(v15, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
        if ( !v24 )
          sub_1C942F0(0, v25);
        CueName = (Il2CppObject *)BgmManager__ExtractCueName((BgmManager_o *)v24, *(System_String_o **)(v24 + 16), v26);
        if ( !v6 )
          sub_1C942F0(CueName, CueName);
        System_Collections_Generic_HashSet_object___Add(
          v6,
          CueName,
          (const MethodInfo_371F98C *)Method_System_Collections_Generic_HashSet_string__Add__);
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
        v31 = sub_1C6A420(v15, System_IDisposable_TypeInfo, 0);
      }
      this = (BgmManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v15, *(_QWORD *)(v31 + 8));
    }
    v32 = (System_Collections_Generic_List_object__o *)v2[4];
    if ( !v32 )
LABEL_59:
      sub_1C942F0(this, method);
    v33 = v32->fields._size - 1;
    if ( v33 >= 1 )
    {
      do
      {
        this = (BgmManager_o *)System_Collections_Generic_List_object___get_Item(
                                 v32,
                                 v33,
                                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v6 )
          break;
        this = (BgmManager_o *)System_Collections_Generic_HashSet_object___Contains(
                                 v6,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_371EE9C *)Method_System_Collections_Generic_HashSet_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v33,
                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__releaseAudioAssetStorage((System_String_o *)Item, 0);
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this,
            v33,
            (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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

  if ( (byte_4D2BE53 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE53 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C942F0(v2, v3);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2BE6E & 1) == 0 )
  {
    sub_1C94098(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C94098(&Method_BgmManager___c__ResetLocal_b__51_0__);
    sub_1C94098(&BgmManager___c_TypeInfo);
    byte_4D2BE6E = 1;
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
    _9__51_0 = (System_Action_object__o *)sub_1C942E4(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__51_0, v6, Method_BgmManager___c__ResetLocal_b__51_0__, 0);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_BgmPlayerBase__o *)_9__51_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !bgmPlayers )
    sub_1C942F0(v3, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void BgmManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  BgmManager_c *v3; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4D2BE57 & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE57 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v6 )
    {
      if ( !Instance )
        sub_1C942F0(v6, v7);
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

  if ( (byte_4D2BE55 & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE55 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v7 )
    {
      if ( !Instance )
        sub_1C942F0(v7, v8);
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

  if ( (byte_4D2BE6F & 1) == 0 )
  {
    sub_1C94098(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1C94098(&Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__);
    sub_1C94098(&BgmManager___c__DisplayClass52_0_TypeInfo);
    byte_4D2BE6F = 1;
  }
  v5 = (BgmManager___c__DisplayClass52_0_o *)sub_1C942E4(BgmManager___c__DisplayClass52_0_TypeInfo);
  BgmManager___c__DisplayClass52_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.isMute = isMute,
        bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers,
        v9 = (System_Action_object__o *)sub_1C942E4(System_Action_BgmPlayerBase__TypeInfo),
        System_Action_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__,
          0),
        !bgmPlayers) )
  {
    sub_1C942F0(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v9,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D2BE62 & 1) == 0 )
  {
    sub_1C94098(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
    sub_1C94098(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C942F0(v4, v5);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        0,
        (const MethodInfo_318DC4C *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        0,
        (const MethodInfo_318DA60 *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
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

  if ( (byte_4D2BE61 & 1) == 0 )
  {
    sub_1C94098(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
    sub_1C94098(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_1C94098(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
    sub_1C94098(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE61 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C942F0(v8, v9);
    if ( fadeoutTime <= 0.0 )
    {
      v10 = BgmManager__StopBgmLocal_object_(
              (BgmManager_o *)Instance,
              name,
              (const MethodInfo_318DC4C *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
      if ( name && !v10 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__StopBgmLocal_object_(
          (BgmManager_o *)Instance,
          0,
          (const MethodInfo_318DC4C *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      v10 = BgmManager__FadeoutBgmLocal_object_(
              (BgmManager_o *)Instance,
              fadeoutTime,
              name,
              (const MethodInfo_318DA60 *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
      if ( name && !v10 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__FadeoutBgmLocal_object_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0,
          (const MethodInfo_318DA60 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    if ( v10 )
      ActionExtensions__Call(successCallback, 0);
  }
}


bool BgmManager__StopBgmLocal_object_(BgmManager_o *this, System_String_o *name, const MethodInfo_318DC4C *method)
{
  const MethodInfo_318D68C **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__68_T; // x8
  Il2CppClass *v10; // x0
  System_Func_object__bool__o *v11; // x21
  Il2CppClass *v12; // x0
  const MethodInfo_318DC4C_RGCTXs *v13; // x8
  __int64 v14; // x0
  __int64 _3_System_Func_T__bool; // x8
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  long double v23; // q0
  Il2CppClass *v24; // x0
  Il2CppClass *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  rgctx_data = (const MethodInfo_318D68C **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_bool___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_bool___);
    rgctx_data = (const MethodInfo_318D68C **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C6A188(method);
      rgctx_data = (const MethodInfo_318D68C **)method->rgctx_data;
    }
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, name, *rgctx_data);
  _4_BgmManager___c__68_T = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (*(&_4_BgmManager___c__68_T->_2.bitflags2 + 2) & 1) == 0 )
    _4_BgmManager___c__68_T = (Il2CppClass *)sub_1C6A12C(inited);
  if ( !_4_BgmManager___c__68_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__68_T);
  v10 = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (*(&v10->_2.bitflags2 + 2) & 1) == 0 )
    v10 = (Il2CppClass *)sub_1C6A12C(inited);
  v11 = (System_Func_object__bool__o *)*((_QWORD *)v10->static_fields + 1);
  if ( !v11 )
  {
    v12 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (*(&v12->_2.bitflags2 + 2) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1C6A12C(inited);
    if ( !v12->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = method->rgctx_data;
    v14 = (__int64)v13->_4_BgmManager___c__68_T_;
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    {
      v14 = sub_1C6A12C(inited);
      v13 = method->rgctx_data;
    }
    _3_System_Func_T__bool = (__int64)v13->_3_System_Func_T__bool_;
    v16 = **(Il2CppObject ***)(v14 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__bool + 309) & 1) == 0 )
      _3_System_Func_T__bool = sub_1C6A12C(inited);
    v11 = (System_Func_object__bool__o *)sub_1C942E4(_3_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v11,
      v16,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__68_T___StopBgmLocal_b__68_0,
      (const MethodInfo_36FB138 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
    v24 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (*(&v24->_2.bitflags2 + 2) & 1) == 0 )
      v24 = (Il2CppClass *)sub_1C6A12C(v23);
    *((_QWORD *)v24->static_fields + 1) = v11;
    v25 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (*(&v25->_2.bitflags2 + 2) & 1) == 0 )
      v25 = (Il2CppClass *)sub_1C6A12C(v23);
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)((char *)v25->static_fields + 8),
      (int32_t)v11,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TResult__o *)v11,
                                                               (const MethodInfo_31D2228 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v26,
                                                               (const MethodInfo_31DC57C *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v27, (const MethodInfo_31A777C *)Method_System_Linq_Enumerable_Any_bool___);
}


void BgmManager__StopJingle(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4D2BE68 & 1) == 0 )
  {
    sub_1C94098(&Method_BgmManager_StopBgmLocal_JinglePlayer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE68 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C942F0(v2, v3);
    BgmManager__StopBgmLocal_object_(
      (BgmManager_o *)Instance,
      0,
      (const MethodInfo_318DC4C *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D2BE63 & 1) == 0 )
  {
    sub_1C94098(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_1C94098(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE63 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C942F0(v6, v7);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        name,
        (const MethodInfo_318DC4C *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        name,
        (const MethodInfo_318DA60 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_object__bool__o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  BgmManager___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_T__o *v30; // x19
  System_Action_object__o *_9__69_2; // x20
  Il2CppObject *v32; // x21
  struct BgmManager___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7

  if ( (byte_4D2BE79 & 1) == 0 )
  {
    sub_1C94098(&System_Action_SubBgmPlayer__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_SubBgmPlayer___);
    sub_1C94098(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    sub_1C94098(&System_Func_SubBgmPlayArgs__string__TypeInfo);
    sub_1C94098(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_1C94098(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__);
    sub_1C94098(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__);
    sub_1C94098(&Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__);
    sub_1C94098(&BgmManager___c__DisplayClass69_0_TypeInfo);
    sub_1C94098(&BgmManager___c_TypeInfo);
    byte_4D2BE79 = 1;
  }
  v5 = sub_1C942E4(BgmManager___c__DisplayClass69_0_TypeInfo);
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
      _9__69_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_SubBgmPlayArgs__string__TypeInfo);
      System_Func_object__object____ctor(_9__69_0, v11, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, 0);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__69_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__69_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__69_0,
        (int32_t)_9__69_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__69_0,
                                                                 (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v6 = System_Linq_Enumerable__ToArray_object_(
           v19,
           (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v5 )
LABEL_19:
      sub_1C942F0(v6, v7);
    *(_QWORD *)(v5 + 16) = v6;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v6, v20, v21, v22, v23, v24, v25);
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_31CBB8C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v27 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v27,
      (Il2CppObject *)v5,
      Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__,
      0);
    v28 = System_Linq_Enumerable__Where_object_(
            v26,
            (System_Func_TSource__bool__o *)v27,
            (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v29 = BgmManager___c_TypeInfo;
    v30 = (System_Collections_Generic_IEnumerable_T__o *)v28;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v29 = BgmManager___c_TypeInfo;
    }
    _9__69_2 = (System_Action_object__o *)v29->static_fields->__9__69_2;
    if ( !_9__69_2 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = BgmManager___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v29->static_fields->__9;
      _9__69_2 = (System_Action_object__o *)sub_1C942E4(System_Action_SubBgmPlayer__TypeInfo);
      System_Action_object____ctor(_9__69_2, v32, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, 0);
      v33 = BgmManager___c_TypeInfo->static_fields;
      v33->__9__69_2 = (struct System_Action_SubBgmPlayer__o *)_9__69_2;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v33->__9__69_2, (int32_t)_9__69_2, v34, v35, v36, v37, v38, v39);
    }
    BasicHelper__ForEach_object_(
      v30,
      (System_Action_T__o *)_9__69_2,
      (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_SubBgmPlayer___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


System_String_o *BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_1C942F0(this, method);
  return mainBgmPlayer->fields.bgmName;
}


bool BgmManager__get_IsBusy(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4D2BE4F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE4F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v2 )
    sub_1C942F0(0, v3);
  return BgmManager__IsLoadingLocal((BgmManager_o *)v2, 0, v4);
}


bool BgmManager__get_IsMute(const MethodInfo *method)
{
  BgmManager_c *v1; // x0

  if ( (byte_4D2BE54 & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    byte_4D2BE54 = 1;
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

  if ( (byte_4D2BE5A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2BE5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct BgmManager_o *v14; // x1
  struct System_String_o *bgmName; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Func_bool__o *v22; // x21
  UnityEngine_WaitWhile_o *v23; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_4D2BE8C & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__);
    sub_1C94098(&BgmManager___c__DisplayClass63_0_TypeInfo);
    sub_1C94098(&UnityEngine_WaitWhile_TypeInfo);
    byte_4D2BE8C = 1;
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
    v5 = sub_1C942E4(BgmManager___c__DisplayClass63_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !v5
      || (v14 = this->fields.__4__this,
          *(_QWORD *)(v5 + 16) = v14,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v14, v8, v9, v10, v11, v12, v13),
          bgmName = this->fields.bgmName,
          *(_QWORD *)(v5 + 24) = bgmName,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)bgmName, v16, v17, v18, v19, v20, v21),
          !_4__this) )
    {
      sub_1C942F0(v6, v7);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v5 + 24), 0) )
    {
      v22 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v22,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__,
        0);
      v23 = (UnityEngine_WaitWhile_o *)sub_1C942E4(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v23, v22, 0);
      this->fields.__2__current = (Il2CppObject *)v23;
      p__2__current = &this->fields.__2__current;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v23, v25, v26, v27, v28, v29, v30);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BgmManager__CoWaitSameAudioLoading_d__63_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2BE87 & 1) == 0 )
  {
    sub_1C94098(&BgmManager___c_TypeInfo);
    byte_4D2BE87 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BgmManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BgmManager___c_TypeInfo->static_fields->__9 = (struct BgmManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BgmManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BgmManager___c___ctor(BgmManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c___FixedUpdate_b__78_0(BgmManager___c_o *this, GeneralBgmPlayer_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, (const MethodInfo *)x);
}


void BgmManager___c___FixedUpdate_b__78_1(BgmManager___c_o *this, GeneralBgmPlayer_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  ((void (__fastcall *)(GeneralBgmPlayer_o *, __int64, const MethodInfo *))x->klass->vtable._11_StopBgm.methodPtr)(
    x,
    1,
    x->klass->vtable._11_StopBgm.method);
}


void BgmManager___c___FixedUpdate_b__78_2(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._13_FixedUpdate.methodPtr)(
    x,
    x->klass->vtable._13_FixedUpdate.method);
}


void BgmManager___c___FixedUpdate_b__78_3(BgmManager___c_o *this, BgmPlayArgs_o *x, const MethodInfo *method)
{
  System_Nullable_float__o p_fadeTime; // x0
  const MethodInfo_3993B78 *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  System_Nullable_float__o v9; // x2
  System_Nullable_float__o v10; // x1
  System_Nullable_long__o v11; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_long__o v13; // 0:x0.16

  if ( (byte_4D2BE88 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_long___ctor__);
    sub_1C94098(&Method_System_Nullable_float___ctor__);
    byte_4D2BE88 = 1;
  }
  p_fadeTime = (System_Nullable_float__o)&fadeTime;
  fadeTime = 0;
  *(_QWORD *)&v11.fields.hasValue = 0;
  v11.fields.value = 0;
  System_Nullable_float____ctor(p_fadeTime, 0.0, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
  *(_QWORD *)&v13.fields.hasValue = &v11;
  v13.fields.value = 0;
  System_Nullable_long____ctor(v13, Method_System_Nullable_long___ctor__, v5);
  if ( !x )
    sub_1C942F0(v6, v7);
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
    sub_1C942F0(this, 0);
  return x->fields.bgmName == 0;
}


void BgmManager___c___InitializeLocal_b__50_0(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._8_ReflectMasterVolume.methodPtr)(
    x,
    x->klass->vtable._8_ReflectMasterVolume.method);
}


void BgmManager___c___ResetLocal_b__51_0(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
  return x->fields._BgmName_k__BackingField;
}


void BgmManager___c___StopUnrequestedSubBgm_b__69_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, const MethodInfo *))x->klass->vtable._11_StopBgm.methodPtr)(
    x,
    0,
    x->klass->vtable._11_StopBgm.method);
}


void BgmManager___c__54_object____cctor(const MethodInfo_336C4AC *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C6A12C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C6A12C();
  v4 = (Il2CppObject *)sub_1C942E4(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C6A12C();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C6A12C();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C6A12C();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C6A12C();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C6A12C();
  sub_1C9403C(*(GrandQuestFolderBoardItem_o **)(v14 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void BgmManager___c__54_object____ctor(BgmManager___c__54_T__o *this, const MethodInfo_336C568 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__54_object____EnumeratePlayersHavingBgmName_b__54_0(
        BgmManager___c__54_T__o *this,
        Il2CppObject *x,
        const MethodInfo_336C570 *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x[1].monitor != 0;
}


void BgmManager___c__68_object____cctor(const MethodInfo_336C7DC *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C6A12C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C6A12C();
  v4 = (Il2CppObject *)sub_1C942E4(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C6A12C();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C6A12C();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C6A12C();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C6A12C();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C6A12C();
  sub_1C9403C(*(GrandQuestFolderBoardItem_o **)(v14 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void BgmManager___c__68_object____ctor(BgmManager___c__68_T__o *this, const MethodInfo_336C898 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__68_object____StopBgmLocal_b__68_0(
        BgmManager___c__68_T__o *this,
        Il2CppObject *x,
        const MethodInfo_336C8A0 *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))x->klass->vtable[11].methodPtr)(
           x,
           0,
           x->klass->vtable[11].method);
}


void BgmManager___c__76_object____cctor(const MethodInfo_336C8C4 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C6A12C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C6A12C();
  v4 = (Il2CppObject *)sub_1C942E4(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C6A12C();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C6A12C();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C6A12C();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C6A12C();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C6A12C();
  sub_1C9403C(*(GrandQuestFolderBoardItem_o **)(v14 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void BgmManager___c__76_object____ctor(BgmManager___c__76_T__o *this, const MethodInfo_336C980 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BgmPlayArgs_o *BgmManager___c__76_object____ExportPlayArgsGroupLocal_b__76_0(
        BgmManager___c__76_T__o *this,
        Il2CppObject *x,
        const MethodInfo_336C988 *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(0, method);
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
    sub_1C942F0(this, 0);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, const MethodInfo *))x->klass->vtable._7_SetMute.methodPtr)(
    x,
    this->fields.isMute,
    x->klass->vtable._7_SetMute.method);
}


void BgmManager___c__DisplayClass54_0_object____ctor(
        BgmManager___c__DisplayClass54_0_T__o *this,
        const MethodInfo_3371690 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass54_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass54_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3371698 *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct BgmPlayArgs_array *nonNullArgsAll; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x21

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
        v12 = 0;
        while ( 1 )
        {
          if ( v12 >= (unsigned int)max_length )
            sub_1C942F8(_4__this);
          _4__this = this->fields.__4__this;
          if ( !_4__this )
            break;
          BgmManager__PlayPreloadedBgm(_4__this, nonNullArgsAll->m_Items[v12], 0);
          LODWORD(max_length) = nonNullArgsAll->max_length;
          if ( (__int64)++v12 >= (int)max_length )
            goto LABEL_10;
        }
LABEL_14:
        sub_1C942F0(_4__this, method);
      }
LABEL_10:
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_14;
      _4__this->fields.cacheArgsGroup = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.cacheArgsGroup, 0, v4, v5, v6, v7, v8, v9);
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
    sub_1C942F0(this, callback);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o *cueName; // x1
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x0
  Il2CppObject *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct BgmManager_o *_4__this; // x8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D2BE89 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&SoundManager_TypeInfo);
    sub_1C94098(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__);
    byte_4D2BE89 = 1;
  }
  cueName = this->fields.cueName;
  this->fields.tempCueSheetName = cueName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)cueName, v2, v3, v4, v5, v6, v7);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.loadingBgmCueNameList) == 0
    || (v11 = (Il2CppObject *)this->fields.cueName,
        items = loadingBgmCueNameList->fields._items,
        v20 = Method_System_Collections_Generic_List_string__Add__,
        ++loadingBgmCueNameList->fields._version,
        !items) )
  {
    sub_1C942F0(loadingBgmCueNameList, v11);
  }
  size = loadingBgmCueNameList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      loadingBgmCueNameList,
      v11,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    loadingBgmCueNameList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v11;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, 0);
    this->fields.__9__1 = _9__1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v25, v26, v27, v28, v29, v30);
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
  if ( (byte_4D2BE8A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Insert__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    this = (BgmManager___c__DisplayClass61_0_o *)sub_1C94098(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4D2BE8A = 1;
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
    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
                                                   (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__);
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
            (const MethodInfo_386BBE4 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_1C942F0(this, method);
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
    sub_1C942F0(0, method);
  return BgmManager__IsLoadingLocal(_4__this, this->fields.bgmName, 0);
}


void BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_3372BF4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass67_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3372BFC *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
  if ( (byte_4D2BE8B & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass69_0_o *)sub_1C94098(&Method_System_Array_IndexOf_string___);
    byte_4D2BE8B = 1;
  }
  if ( !x )
    sub_1C942F0(this, x);
  return (unsigned int)System_Array__IndexOf_object_(
                         (System_Object_array *)v4->fields.subBgmNamesToPlay,
                         (Il2CppObject *)x->fields.bgmName,
                         (const MethodInfo_32A4C80 *)Method_System_Array_IndexOf_string___) >> 31;
}


void BgmManager___c__DisplayClass70_0_object____ctor(
        BgmManager___c__DisplayClass70_0_T__o *this,
        const MethodInfo_337404C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass70_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass70_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3374054 *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(_4__this, method);
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
    sub_1C942F0(this, 0);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0);
}