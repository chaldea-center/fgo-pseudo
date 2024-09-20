void __fastcall BgmManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct BgmManager_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct BgmManager_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct BgmManager_StaticFields *v9; // x8

  if ( (byte_4A5A7A9 & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3016/*"BGM_CHALDEA_1"*/);
    sub_1B885B0(&StringLiteral_3017/*"BGM_CHALDEA_2"*/);
    byte_4A5A7A9 = 1;
  }
  static_fields = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_VOLUME = 0x3DCCCCCD3F800000LL;
  v4 = StringLiteral_3016/*"BGM_CHALDEA_1"*/;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_3016/*"BGM_CHALDEA_1"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v4, v1, v2);
  v5 = StringLiteral_3017/*"BGM_CHALDEA_2"*/;
  v6 = BgmManager_TypeInfo->static_fields;
  v6->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_3017/*"BGM_CHALDEA_2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v5, v7, v8);
  v9 = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&v9->ADD_BIND_MAX = 0x400000005LL;
  v9->isMute = 0;
  v9->masterVolume = 1.0;
}


void __fastcall BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5A7A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager___ctor__);
    byte_4A5A7A8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.addBindList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadingBgmCueNameList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bgmPlayers, (int32_t)v9, v10, v11);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void __fastcall BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x20
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v12; // x21
  Il2CppObject *v13; // x0

  if ( (byte_4A5A77F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_BgmPlayerBase__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1B885B0(&Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__);
    sub_1B885B0(&BgmManager___c__DisplayClass29_0_TypeInfo);
    byte_4A5A77F = 1;
  }
  v5 = sub_1B887FC(BgmManager___c__DisplayClass29_0_TypeInfo);
  BgmManager___c__DisplayClass29_0___ctor((BgmManager___c__DisplayClass29_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)bgmName, v8, v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( Instance )
    {
      klass = (System_Collections_Generic_List_object__o *)Instance[4].klass;
      v12 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BgmPlayerBase__TypeInfo);
      System_Predicate_object____ctor(
        v12,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__,
        0LL);
      if ( klass )
      {
        v13 = System_Collections_Generic_List_object___Find(
                klass,
                (System_Predicate_T__o *)v12,
                (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v13 )
          BgmPlayerBase__set_BgmVolume((BgmPlayerBase_o *)v13, volume, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B8880C(v6, v7);
  }
}


System_Collections_IEnumerator_o *__fastcall BgmManager__CoWaitSameAudioLoading(
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5A79C & 1) == 0 )
  {
    sub_1B885B0(&BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo);
    byte_4A5A79C = 1;
  }
  v7 = sub_1B887FC(BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo);
  BgmManager__CoWaitSameAudioLoading_d__63___ctor((BgmManager__CoWaitSameAudioLoading_d__63_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)bgmName, v12, v13);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v14, v15);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BgmManager__Enable_KeepSubBgm(bool value, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int v6; // w9

  if ( (byte_4A5A792 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A792 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B8880C(v4, v5);
    if ( value )
      v6 = 1;
    else
      v6 = -1;
    LODWORD(Instance[4].monitor) = (LODWORD(Instance[4].monitor) + v6) & ~((LODWORD(Instance[4].monitor) + v6) >> 31);
  }
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BgmManager__EnumeratePlayersHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_2E7173C *method)
{
  const MethodInfo_2E7173C_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass54_0_T; // x0
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  const MethodInfo_2E7173C_RGCTXs *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  __int64 _5_System_Func_T__bool; // x0
  System_Func_object__bool__o *v18; // x21
  __int64 _6_BgmManager___c__54_T; // x0
  Il2CppClass *v20; // x0
  Il2CppClass *v21; // x0
  const MethodInfo_2E7173C_RGCTXs *v22; // x8
  __int64 v23; // x0
  __int64 v24; // x8
  Il2CppObject *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppClass *v28; // x0
  Il2CppClass *v29; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BDA4E8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass54_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass54_0_T = sub_1BDA48C(_0_BgmManager___c__DisplayClass54_0_T);
  v8 = sub_1B887FC(_0_BgmManager___c__DisplayClass54_0_T);
  BgmManager___c__DisplayClass54_0_object____ctor(
    (BgmManager___c__DisplayClass54_0_T__o *)v8,
    (const MethodInfo_3047538 *)method->rgctx_data->_1_BgmManager___c__DisplayClass54_0_T___ctor);
  if ( !v8 )
    sub_1B8880C(v9, v10);
  *(_QWORD *)(v8 + 16) = bgmNameFilter;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)bgmNameFilter, v11, v12);
  v13 = *(_QWORD *)(v8 + 16);
  v14 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
          (const MethodInfo_2EA998C *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  v15 = method->rgctx_data;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( v13 )
  {
    _5_System_Func_T__bool = (__int64)v15->_5_System_Func_T__bool_;
    if ( (*(_BYTE *)(_5_System_Func_T__bool + 309) & 1) == 0 )
      _5_System_Func_T__bool = sub_1BDA48C(_5_System_Func_T__bool);
    v18 = (System_Func_object__bool__o *)sub_1B887FC(_5_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v8,
      (intptr_t)method->rgctx_data->_10_BgmManager___c__DisplayClass54_0_T___EnumeratePlayersHavingBgmName_b__1,
      (const MethodInfo_3371EB4 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
  }
  else
  {
    _6_BgmManager___c__54_T = (__int64)v15->_6_BgmManager___c__54_T_;
    if ( (*(_BYTE *)(_6_BgmManager___c__54_T + 309) & 1) == 0 )
      _6_BgmManager___c__54_T = sub_1BDA48C(_6_BgmManager___c__54_T);
    if ( !*(_DWORD *)(_6_BgmManager___c__54_T + 224) )
      j_il2cpp_runtime_class_init_0(_6_BgmManager___c__54_T);
    v20 = method->rgctx_data->_6_BgmManager___c__54_T_;
    if ( (BYTE5(v20->vtable[0].methodPtr) & 1) == 0 )
      v20 = (Il2CppClass *)sub_1BDA48C(v20);
    v18 = (System_Func_object__bool__o *)*((_QWORD *)v20->static_fields + 1);
    if ( !v18 )
    {
      v21 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
        v21 = (Il2CppClass *)sub_1BDA48C(v21);
      if ( !v21->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v21);
      v22 = method->rgctx_data;
      v23 = (__int64)v22->_6_BgmManager___c__54_T_;
      if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      {
        v23 = sub_1BDA48C(v23);
        v22 = method->rgctx_data;
      }
      v24 = (__int64)v22->_5_System_Func_T__bool_;
      v25 = **(Il2CppObject ***)(v23 + 184);
      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
        v24 = sub_1BDA48C(v24);
      v18 = (System_Func_object__bool__o *)sub_1B887FC(v24);
      System_Func_object__bool____ctor(
        v18,
        v25,
        (intptr_t)method->rgctx_data->_7_BgmManager___c__54_T___EnumeratePlayersHavingBgmName_b__54_0,
        (const MethodInfo_3371EB4 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
      v28 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v28->vtable[0].methodPtr) & 1) == 0 )
        v28 = (Il2CppClass *)sub_1BDA48C(v28);
      *((_QWORD *)v28->static_fields + 1) = v18;
      v29 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v29->vtable[0].methodPtr) & 1) == 0 )
        v29 = (Il2CppClass *)sub_1BDA48C(v29);
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v29->static_fields + 8), (int32_t)v18, v26, v27);
    }
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          v16,
                                                          (System_Func_TSource__bool__o *)v18,
                                                          (const MethodInfo_2EBE07C *)method->rgctx_data->_9_System_Linq_Enumerable_Where_T_);
}


bool __fastcall BgmManager__ExistsPlayerHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_2E71908 *method)
{
  const MethodInfo_2E7173C **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  rgctx_data = (const MethodInfo_2E7173C **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BDA4E8(method);
    rgctx_data = (const MethodInfo_2E7173C **)method->rgctx_data;
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, bgmNameFilter, *rgctx_data);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_2E8D2DC *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4A5A777 & 1) == 0 )
  {
    sub_1B885B0(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A777 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v2 )
    return 0LL;
  if ( !Instance )
    sub_1B8880C(v2, v3);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_2E71954 *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroupLocal_object_(
        BgmManager_o *this,
        const MethodInfo_2E71954 *method)
{
  const MethodInfo_2E7173C **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x20
  Il2CppClass *_4_BgmManager___c__76_T; // x8
  Il2CppClass *v7; // x0
  System_Func_object__object__o *v8; // x21
  Il2CppClass *v9; // x0
  const MethodInfo_2E71954_RGCTXs *v10; // x8
  __int64 v11; // x0
  __int64 _3_System_Func_T__BgmPlayArgs; // x8
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppClass *v16; // x0
  Il2CppClass *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Object_array *v19; // x19
  BgmPlayArgsGroup_o *v20; // x20

  rgctx_data = (const MethodInfo_2E7173C **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&BgmPlayArgsGroup_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    rgctx_data = (const MethodInfo_2E7173C **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8(method);
      rgctx_data = (const MethodInfo_2E7173C **)method->rgctx_data;
    }
  }
  v5 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, 0LL, *rgctx_data);
  _4_BgmManager___c__76_T = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (BYTE5(_4_BgmManager___c__76_T->vtable[0].methodPtr) & 1) == 0 )
    _4_BgmManager___c__76_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_4_BgmManager___c__76_T_);
  if ( !_4_BgmManager___c__76_T->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_4_BgmManager___c__76_T);
  v7 = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (BYTE5(v7->vtable[0].methodPtr) & 1) == 0 )
    v7 = (Il2CppClass *)sub_1BDA48C(v7);
  v8 = (System_Func_object__object__o *)*((_QWORD *)v7->static_fields + 1);
  if ( !v8 )
  {
    v9 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
      v9 = (Il2CppClass *)sub_1BDA48C(v9);
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    v10 = method->rgctx_data;
    v11 = (__int64)v10->_4_BgmManager___c__76_T_;
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    {
      v11 = sub_1BDA48C(v11);
      v10 = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = (__int64)v10->_3_System_Func_T__BgmPlayArgs_;
    v13 = **(Il2CppObject ***)(v11 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__BgmPlayArgs + 309) & 1) == 0 )
      _3_System_Func_T__BgmPlayArgs = sub_1BDA48C(_3_System_Func_T__BgmPlayArgs);
    v8 = (System_Func_object__object__o *)sub_1B887FC(_3_System_Func_T__BgmPlayArgs);
    System_Func_object__object____ctor(
      v8,
      v13,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__76_T___ExportPlayArgsGroupLocal_b__76_0,
      (const MethodInfo_337255C *)method->rgctx_data->_6_System_Func_T__BgmPlayArgs___ctor);
    v16 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
      v16 = (Il2CppClass *)sub_1BDA48C(v16);
    *((_QWORD *)v16->static_fields + 1) = v8;
    v17 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1BDA48C(v17);
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v17->static_fields + 8), (int32_t)v8, v14, v15);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TResult__o *)v8,
                                                               (const MethodInfo_2EB040C *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__BgmPlayArgs_);
  v19 = System_Linq_Enumerable__ToArray_object_(
          v18,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v20 = (BgmPlayArgsGroup_o *)sub_1B887FC(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_38331104(v20, (BgmPlayArgs_array *)v19, 0LL);
  return v20;
}


System_String_o *__fastcall BgmManager__ExtractCueName(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  __int64 v6; // x8

  if ( (byte_4A5A79F & 1) == 0 )
  {
    sub_1B885B0(&char___TypeInfo);
    byte_4A5A79F = 1;
  }
  v4 = (System_Char_array *)sub_1B88658(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  v4->m_Items[2] = 47;
  if ( !name || (v4 = (System_Char_array *)System_String__Split_61729188(name, v4, 0LL)) == 0LL )
LABEL_9:
    sub_1B8880C(v4, v5);
  v6 = *(_QWORD *)&v4->max_length;
  if ( !(_DWORD)v6 )
LABEL_10:
    sub_1B88814(v4, v5);
  return *(System_String_o **)((char *)&v4->m_Items[2] + (((v6 << 32) - 0x100000000LL) >> 29));
}


void __fastcall BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4A5A787 & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    byte_4A5A787 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopBgm(0LL, fadeoutTime, callback, v3);
}


bool __fastcall BgmManager__FadeoutBgmLocal_object_(
        BgmManager_o *this,
        float fadeoutTime,
        System_String_o *name,
        const MethodInfo_2E71B10 *method)
{
  const MethodInfo_2E71B10_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass67_0_T; // x0
  BgmManager___c__DisplayClass67_0_T__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  Il2CppClass *_5_System_Func_T__bool; // x8
  System_Func_object__bool__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_bool___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_bool___);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_BgmManager___c__DisplayClass67_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass67_0_T = sub_1BDA48C(_0_BgmManager___c__DisplayClass67_0_T);
  v10 = (BgmManager___c__DisplayClass67_0_T__o *)sub_1B887FC(_0_BgmManager___c__DisplayClass67_0_T);
  BgmManager___c__DisplayClass67_0_object____ctor(
    v10,
    (const MethodInfo_3048328 *)method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor);
  if ( !v10 )
    sub_1B8880C(v11, v12);
  v10->fields.fadeoutTime = fadeoutTime;
  v13 = BgmManager__EnumeratePlayersHavingBgmName_object_(
          this,
          name,
          (const MethodInfo_2E7173C *)method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_);
  _5_System_Func_T__bool = method->rgctx_data->_5_System_Func_T__bool_;
  if ( (BYTE5(_5_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
    _5_System_Func_T__bool = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_5_System_Func_T__bool_);
  v15 = (System_Func_object__bool__o *)sub_1B887FC(_5_System_Func_T__bool);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass67_0_T___FadeoutBgmLocal_b__0,
    (const MethodInfo_3371EB4 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                               (System_Func_TSource__TResult__o *)v15,
                                                               (const MethodInfo_2EAF548 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v16,
                                                               (const MethodInfo_2EB83B4 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v17, (const MethodInfo_2E8CB14 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A5A790 & 1) == 0 )
  {
    sub_1B885B0(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A790 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B8880C(v4, v5);
    BgmManager__FadeoutBgmLocal_object_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0LL,
      (const MethodInfo_2E71B10 *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__FixedUpdate(BgmManager_o *this, const MethodInfo *method)
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
  _BOOL4 v16; // w0
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0
  BgmManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_T__o *v19; // x20
  System_Action_object__o *_9__78_1; // x21
  Il2CppObject *v21; // x22
  struct BgmManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  BgmManager_o *v25; // x20
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *v27; // x21
  BgmManager___c_c *v28; // x0
  System_Action_object__o *_9__78_3; // x22
  Il2CppObject *v30; // x23
  struct BgmManager___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x2
  System_Collections_IEnumerable_o *v35; // x19
  System_Action_object__o *v36; // x20
  Il2CppObject *v37; // x21
  struct BgmManager___c_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3

  v2 = this;
  if ( (byte_4A5A7A6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_GeneralBgmPlayer__TypeInfo);
    sub_1B885B0(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1B885B0(&System_Action_BgmPlayArgs__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BgmPlayArgs___);
    sub_1B885B0(&Method_BasicHelper_ForEach_GeneralBgmPlayer___);
    sub_1B885B0(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_1B885B0(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
    sub_1B885B0(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1B885B0(&System_Func_GeneralBgmPlayer__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1B885B0(&Method_BgmManager___c__FixedUpdate_b__78_0__);
    sub_1B885B0(&Method_BgmManager___c__FixedUpdate_b__78_1__);
    sub_1B885B0(&Method_BgmManager___c__FixedUpdate_b__78_2__);
    sub_1B885B0(&Method_BgmManager___c__FixedUpdate_b__78_3__);
    this = (BgmManager_o *)sub_1B885B0(&BgmManager___c_TypeInfo);
    byte_4A5A7A6 = 1;
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
      IsPlaying = BgmPlayerBase__IsPlaying(jinglePlayer, 0LL);
      bgmPlayers = *p_bgmPlayers;
      v7 = IsPlaying;
    }
    else
    {
      v7 = 0;
    }
    v8 = System_Linq_Enumerable__OfType_object_(
           bgmPlayers,
           (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
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
      _9__78_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GeneralBgmPlayer__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__78_0, v12, Method_BgmManager___c__FixedUpdate_b__78_0__, 0LL);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__78_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__78_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__78_0, (int32_t)_9__78_0, v14, v15);
    }
    v16 = System_Linq_Enumerable__Any_object__48820656(
            v10,
            (System_Func_TSource__bool__o *)_9__78_0,
            (const MethodInfo_2E8F1B0 *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v16 & v7) != 0 )
    {
      v17 = System_Linq_Enumerable__OfType_object_(
              *p_bgmPlayers,
              (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
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
        _9__78_1 = (System_Action_object__o *)sub_1B887FC(System_Action_GeneralBgmPlayer__TypeInfo);
        System_Action_object____ctor(_9__78_1, v21, Method_BgmManager___c__FixedUpdate_b__78_1__, 0LL);
        v22 = BgmManager___c_TypeInfo->static_fields;
        v22->__9__78_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__78_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->__9__78_1, (int32_t)_9__78_1, v23, v24);
      }
      BasicHelper__ForEach_object_(
        v19,
        (System_Action_T__o *)_9__78_1,
        (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v2->fields.isBgmStopJingle = 1;
    }
    else if ( !v16
           && v2->fields.isBgmStopJingle
           && v7 == 0
           && BgmManager__ExistsPlayerHavingBgmName_object_(
                v2,
                0LL,
                (const MethodInfo_2E71908 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
    {
      this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                               v2,
                               (const MethodInfo_2E71954 *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
      if ( !this )
        goto LABEL_47;
      v25 = this;
      v26 = BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0LL);
      v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                             (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      this = (BgmManager_o *)BgmManager__StopBgmLocal_object_(
                               v2,
                               0LL,
                               (const MethodInfo_2E71CFC *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
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
          _9__78_3 = (System_Action_object__o *)sub_1B887FC(System_Action_BgmPlayArgs__TypeInfo);
          System_Action_object____ctor(_9__78_3, v30, Method_BgmManager___c__FixedUpdate_b__78_3__, 0LL);
          v31 = BgmManager___c_TypeInfo->static_fields;
          v31->__9__78_3 = (struct System_Action_BgmPlayArgs__o *)_9__78_3;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v31->__9__78_3, (int32_t)_9__78_3, v32, v33);
        }
        BasicHelper__ForEach_object_(
          v27,
          (System_Action_T__o *)_9__78_3,
          (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BgmPlayArgs___);
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        BgmManager__PlayBgm_38314408((BgmPlayArgsGroup_o *)v25, 0LL, v34);
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
      v36 = (System_Action_object__o *)sub_1B887FC(System_Action_BgmPlayerBase__TypeInfo);
      System_Action_object____ctor(v36, v37, Method_BgmManager___c__FixedUpdate_b__78_2__, 0LL);
      v38 = BgmManager___c_TypeInfo->static_fields;
      v38->__9__78_2 = (struct System_Action_BgmPlayerBase__o *)v36;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v38->__9__78_2, (int32_t)v36, v39, v40);
    }
    if ( v35 )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)v35,
        (System_Action_T__o *)v36,
        (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
      return;
    }
LABEL_47:
    sub_1B8880C(this, method);
  }
}


void __fastcall BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4A5A793 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A793 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1B8880C(v2, v3);
    LODWORD(Instance[4].monitor) = 0;
  }
}


CriAtomSource_o *__fastcall BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4A5A7A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
    byte_4A5A7A4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_object_(
                              gameObject,
                              (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t __fastcall BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *CueSheet; // x0
  SoundManager_c *v6; // x8
  System_String_o *v7; // x19

  if ( (byte_4A5A779 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5A779 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, name, 0LL);
  v6 = SoundManager_TypeInfo;
  v7 = CueSheet;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v6 = SoundManager_TypeInfo;
  }
  return System_String__op_Equality(v7, v6->static_fields->RESIDENT_RESOURCE_SOUND_NAME, 0LL);
}


System_String_o *__fastcall BgmManager__GetBgmName(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  __int64 v2; // x1
  bool v3; // w8
  System_String_o *result; // x0
  UnityEngine_Object_c *klass; // x8

  if ( (byte_4A5A78B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A78B = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v3 )
  {
    if ( !Instance || (klass = Instance[2].klass) == 0LL )
      sub_1B8880C(0LL, v2);
    return (System_String_o *)klass->_1.namespaze;
  }
  return result;
}


System_String_o *__fastcall BgmManager__GetMainBgmName(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o **p_COSMOS_IN_THE_LOSTBELT_BGM_NAME; // x19
  int32_t UiFlag; // w19
  System_Collections_ICollection_o *ClearWarIdList; // x20
  BalanceConfig_c *v7; // x0
  BalanceConfig_c *v8; // x0
  BgmManager_c *v9; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  System_String_o *bgmName; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A7A7 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A7A7 = 1;
  }
  bgmName = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( !MasterData_object
    || (p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &bgmName,
        !TerminalOverwriteMaster__TryGetOverwriteMainBgmName(
           (TerminalOverwriteMaster_o *)MasterData_object,
           &bgmName,
           0LL)) )
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    UiFlag = ServantCommentManager__GetUiFlag(0LL);
    ClearWarIdList = (System_Collections_ICollection_o *)ServantCommentManager__GetClearWarIdList(0LL);
    if ( BasicHelper__IsNullOrEmpty(ClearWarIdList, 0LL) )
      goto LABEL_15;
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
            v7->static_fields->OrdealCallWarId,
            (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
LABEL_15:
      v9 = BgmManager_TypeInfo;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        v9 = BgmManager_TypeInfo;
      }
      static_fields = v9->static_fields;
      if ( UiFlag == 1 )
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
      else
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &static_fields->DEFAULT_MAIN_BGM_NAME;
    }
    else
    {
      v8 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v8 = BalanceConfig_TypeInfo;
      }
      p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v8->static_fields->OrdealCallClearBgmName;
    }
  }
  return *p_COSMOS_IN_THE_LOSTBELT_BGM_NAME;
}


float __fastcall BgmManager__GetMasterVolume(const MethodInfo *method)
{
  BgmManager_c *v1; // x0

  if ( (byte_4A5A77D & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    byte_4A5A77D = 1;
  }
  v1 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v1 = BgmManager_TypeInfo;
  }
  return v1->static_fields->masterVolume;
}


JinglePlayer_o *__fastcall BgmManager__GetOrCreateJinglePlayer(BgmManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0
  JinglePlayer_o *v4; // x0
  Il2CppObject *jinglePlayer; // x1
  struct System_String_o *bgmName; // x8
  JinglePlayer_o **p_jinglePlayer; // x20
  JinglePlayer_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  JinglePlayer_c *klass; // x9
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 bgmName_low; // x10
  __int64 v18; // x8

  if ( (byte_4A5A7A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_JinglePlayer___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
    sub_1B885B0(&JinglePlayer_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    byte_4A5A7A3 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  v4 = (JinglePlayer_o *)System_Linq_Enumerable__ToArray_object_(
                           v3,
                           (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !v4 )
    goto LABEL_15;
  bgmName = v4->fields.bgmName;
  if ( !bgmName )
  {
    v8 = (JinglePlayer_o *)sub_1B887FC(JinglePlayer_TypeInfo);
    JinglePlayer___ctor(v8, 0LL);
    this->fields.jinglePlayer = v8;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.jinglePlayer, (int32_t)v8, v9, v10);
    bgmPlayers = this->fields.bgmPlayers;
    if ( bgmPlayers )
    {
      v4 = *p_jinglePlayer;
      if ( *p_jinglePlayer )
      {
        klass = v4->klass;
        v4->fields.index = bgmPlayers->fields._size;
        ((void (__fastcall *)(JinglePlayer_o *, Il2CppMethodPointer))klass->vtable._5_Initialize.method)(
          v4,
          klass->vtable._6_Reset.methodPtr);
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
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = v15 + 8 * bgmName_low;
              LODWORD(v4->fields.bgmName) = bgmName_low + 1;
              *(_QWORD *)(v18 + 32) = jinglePlayer;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)jinglePlayer, v13, v14);
            }
            return *p_jinglePlayer;
          }
        }
      }
    }
LABEL_15:
    sub_1B8880C(v4, jinglePlayer);
  }
  if ( !(_DWORD)bgmName )
    sub_1B88814(v4, jinglePlayer);
  p_jinglePlayer = (JinglePlayer_o **)&v4->fields.bgmVolume;
  return *p_jinglePlayer;
}


SubBgmPlayer_o *__fastcall BgmManager__GetOrCreateSubBgmPlayer(
        BgmManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Object_array *v11; // x20
  System_Func_object__bool__o *v12; // x22
  SubBgmPlayer_o *object; // x21
  BgmManager___c_c *v14; // x0
  System_Func_object__bool__o *_9__72_1; // x21
  Il2CppObject *v16; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  SubBgmPlayer_c *klass; // x9
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8

  if ( (byte_4A5A7A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Find_SubBgmPlayer___);
    sub_1B885B0(&Method_System_Linq_Enumerable_First_SubBgmPlayer___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
    sub_1B885B0(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1B885B0(&SubBgmPlayer_TypeInfo);
    sub_1B885B0(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__);
    sub_1B885B0(&Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__);
    sub_1B885B0(&BgmManager___c__DisplayClass72_0_TypeInfo);
    sub_1B885B0(&BgmManager___c_TypeInfo);
    byte_4A5A7A2 = 1;
  }
  v5 = sub_1B887FC(BgmManager___c__DisplayClass72_0_TypeInfo);
  BgmManager___c__DisplayClass72_0___ctor((BgmManager___c__DisplayClass72_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)bgmName, v8, v9);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v11 = System_Linq_Enumerable__ToArray_object_(
          v10,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__,
    0LL);
  object = (SubBgmPlayer_o *)BasicHelper__Find_object_(
                               v11,
                               (System_Func_T__bool__o *)v12,
                               (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_SubBgmPlayer___);
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
    _9__72_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__72_1, v16, Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__72_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__72_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__72_1, (int32_t)_9__72_1, v18, v19);
  }
  v6 = (System_Collections_Generic_List_object__o *)BasicHelper__Find_object_(
                                                      v11,
                                                      (System_Func_T__bool__o *)_9__72_1,
                                                      (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_SubBgmPlayer___);
  object = (SubBgmPlayer_o *)v6;
  if ( v6 )
    return object;
  if ( !v11 )
LABEL_23:
    sub_1B8880C(v6, v7);
  if ( (int)v11->max_length <= 1 )
  {
    object = (SubBgmPlayer_o *)sub_1B887FC(SubBgmPlayer_TypeInfo);
    SubBgmPlayer___ctor(object, 0LL);
    bgmPlayers = this->fields.bgmPlayers;
    if ( bgmPlayers )
    {
      if ( object )
      {
        klass = object->klass;
        object->fields.index = bgmPlayers->fields._size;
        ((void (__fastcall *)(SubBgmPlayer_o *, Il2CppMethodPointer))klass->vtable._5_Initialize.method)(
          object,
          klass->vtable._6_Reset.methodPtr);
        v6 = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
        if ( v6 )
        {
          items = v6->fields._items;
          v26 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++v6->fields._version;
          if ( items )
          {
            size = v6->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)object,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v28[4] = (Il2CppClass *)object;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)object, v23, v24);
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
                             (const MethodInfo_2EA17D4 *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
}


void __fastcall BgmManager__Initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A5A778 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A778 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1B8880C(v2, v3);
    BgmManager__InitializeLocal((BgmManager_o *)Instance, v3);
  }
}


void __fastcall BgmManager__InitializeLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x19
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  MainBgmPlayer_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x8
  _QWORD *v10; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v12; // x8
  System_Collections_Generic_List_object__o *v13; // x19
  System_Action_object__o *v14; // x20
  Il2CppObject *v15; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  BgmManager_c *v19; // x0

  v2 = this;
  if ( (byte_4A5A794 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_1B885B0(&MainBgmPlayer_TypeInfo);
    sub_1B885B0(&Method_BgmManager___c__InitializeLocal_b__50_0__);
    this = (BgmManager_o *)sub_1B885B0(&BgmManager___c_TypeInfo);
    byte_4A5A794 = 1;
  }
  bgmPlayers = v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_21;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v4 = (MainBgmPlayer_o *)sub_1B887FC(MainBgmPlayer_TypeInfo);
    MainBgmPlayer___ctor(v4, 0LL);
    v2->fields.mainBgmPlayer = v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.mainBgmPlayer, (int32_t)v4, v5, v6);
    method = (const MethodInfo *)v2->fields.mainBgmPlayer;
    if ( !method )
      goto LABEL_21;
    LODWORD(method->invoker_method) = 0;
    this = (BgmManager_o *)v2->fields.bgmPlayers;
    if ( !this )
      goto LABEL_21;
    v9 = *(_QWORD *)&this->fields.m_CachedPtr;
    v10 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v9 )
      goto LABEL_21;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v9 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)method,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      v12 = v9 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v12 + 32) = method;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)method, v7, v8);
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
    v14 = (System_Action_object__o *)sub_1B887FC(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(v14, v15, Method_BgmManager___c__InitializeLocal_b__50_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__50_0, (int32_t)v14, v17, v18);
  }
  if ( !v13 )
LABEL_21:
    sub_1B8880C(this, method);
  System_Collections_Generic_List_object___ForEach(
    v13,
    (System_Action_T__o *)v14,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v19 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v19);
}


bool __fastcall BgmManager__IsKeepSubBgm(BgmManager_o *this, const MethodInfo *method)
{
  return this->fields.enableCounter_KeepSubBgm > 0;
}


bool __fastcall BgmManager__IsLoadingLocal(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  BgmManager_o *v4; // x19
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x8
  struct System_Collections_Generic_List_string__o *v7; // x8

  v4 = this;
  if ( (byte_4A5A79E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    this = (BgmManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4A5A79E = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)v4->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_object___Contains(
               loadingBgmCueNameList,
               (Il2CppObject *)this,
               (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_1B8880C(this, name);
  }
  v7 = v4->fields.loadingBgmCueNameList;
  if ( !v7 )
    goto LABEL_8;
  return v7->fields._size > 0;
}


bool __fastcall BgmManager__IsPlayBgm(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A5A780 & 1) == 0 )
  {
    sub_1B885B0(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A780 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1B8880C(v4, v5);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_2E71908 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool __fastcall BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A5A78C & 1) == 0 )
  {
    sub_1B885B0(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A78C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1B8880C(v4, v5);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_2E71908 *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool __fastcall BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0
  __int64 v7; // x1

  if ( (byte_4A5A79D & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4A5A79D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName((BgmManager_o *)Instance, bgmName, v5);
  if ( !Instance )
    sub_1B8880C(CueName, v7);
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0LL) != 0LL;
}


void __fastcall BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  bool v6; // w19

  if ( (byte_4A5A791 & 1) == 0 )
  {
    sub_1B885B0(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    sub_1B885B0(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A791 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B8880C(v4, v5);
    v6 = isPause;
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v6,
      0LL,
      (const MethodInfo_2E71C2C *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v6,
      0LL,
      (const MethodInfo_2E71C2C *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__PauseBgmLocal_object_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_2E71C2C *method)
{
  const MethodInfo_2E71C2C_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass70_0_T; // x0
  BgmManager___c__DisplayClass70_0_T__o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  Il2CppClass *_5_System_Action_T; // x8
  System_Action_object__o *v14; // x21

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BDA4E8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass70_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass70_0_T = sub_1BDA48C(_0_BgmManager___c__DisplayClass70_0_T);
  v9 = (BgmManager___c__DisplayClass70_0_T__o *)sub_1B887FC(_0_BgmManager___c__DisplayClass70_0_T);
  BgmManager___c__DisplayClass70_0_object____ctor(
    v9,
    (const MethodInfo_3049548 *)method->rgctx_data->_1_BgmManager___c__DisplayClass70_0_T___ctor);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  v9->fields.isPause = isPause;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                         (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                         (const MethodInfo_2EA998C *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  _5_System_Action_T = method->rgctx_data->_5_System_Action_T_;
  if ( (BYTE5(_5_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    _5_System_Action_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_5_System_Action_T_);
  v14 = (System_Action_object__o *)sub_1B887FC(_5_System_Action_T);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)v9,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass70_0_T___PauseBgmLocal_b__0,
    (const MethodInfo_318E888 *)method->rgctx_data->_6_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)v14,
    (const MethodInfo_2E6CCC0 *)method->rgctx_data->_7_BasicHelper_ForEach_T_);
}


void __fastcall BgmManager__PlayBgm(
        System_String_o *name,
        float volume,
        float fadeTime,
        int64_t startTime,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *v11; // x0
  BgmPlayArgsGroup_o *v12; // x22
  const MethodInfo *v13; // x2
  System_Nullable_float__o volumeNullable; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_float__o p_volumeNullable; // 0:x0.8
  System_Nullable_float__o v16; // 0:x2.8

  if ( (byte_4A5A782 & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&BgmPlayArgsGroup_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    byte_4A5A782 = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0LL;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
  v11 = (BgmPlayArgsGroup_o *)sub_1B887FC(BgmPlayArgsGroup_TypeInfo);
  v16 = volumeNullable;
  v12 = v11;
  BgmPlayArgsGroup___ctor_38332224(v11, name, v16, fadeTime, startTime, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_38314408(v12, finishCallback, v13);
}


void __fastcall BgmManager__PlayBgm_38314408(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_4A5A784 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A784 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v6 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !Instance )
      sub_1B8880C(v6, v7);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, 1, v8);
  }
}


void __fastcall BgmManager__PlayBgm_38314604(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *v7; // x22
  const MethodInfo *v8; // x2

  if ( (byte_4A5A783 & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&BgmPlayArgsGroup_TypeInfo);
    byte_4A5A783 = 1;
  }
  v7 = (BgmPlayArgsGroup_o *)sub_1B887FC(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor(v7, main, (BgmPlayArgs_array *)subArray, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_38314408(v7, finishCallback, v8);
}


void __fastcall BgmManager__PlayJingle(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4A5A78D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A78D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1B8880C(v8, v9);
    BgmManager__PlayJingleLocal((BgmManager_o *)Instance, name, volume, callbackFunc, v10);
  }
}


void __fastcall BgmManager__PlayJingleLocal(
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x20
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x3

  if ( (byte_4A5A7A1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__);
    sub_1B885B0(&BgmManager___c__DisplayClass71_0_TypeInfo);
    byte_4A5A7A1 = 1;
  }
  v9 = sub_1B887FC(BgmManager___c__DisplayClass71_0_TypeInfo);
  BgmManager___c__DisplayClass71_0___ctor((BgmManager___c__DisplayClass71_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)name, v14, v15);
  *(float *)(v9 + 32) = volume;
  *(_QWORD *)(v9 + 40) = callbackFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)callbackFunc, v16, v17);
  v18 = *(System_String_o **)(v9 + 24);
  v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v9, Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, 0LL);
  BgmManager__PreloadBgm(this, v18, v19, v20);
}


void __fastcall BgmManager__PlayJingle_38318572(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4A5A78E & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    byte_4A5A78E = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, 0LL, v3);
}


void __fastcall BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5A785 & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    byte_4A5A785 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_38314604(args, 0LL, 0LL, v2);
}


void __fastcall BgmManager__PlayPreloadBgms(BgmManager_o *this, const MethodInfo *method)
{
  BgmPlayArgsGroup_o *cacheArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v4; // x0
  System_Object_array *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  __int64 v9; // x8
  System_Object_array *v10; // x21
  unsigned __int64 v11; // x22

  if ( (byte_4A5A799 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    byte_4A5A799 = 1;
  }
  cacheArgsGroup = this->fields.cacheArgsGroup;
  if ( cacheArgsGroup )
  {
    v4 = BgmPlayArgsGroup__AllArgsListNullExcluded(cacheArgsGroup, 0LL);
    v5 = System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4,
           (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    if ( !v5 )
      sub_1B8880C(0LL, v6);
    v9 = *(_QWORD *)&v5->max_length;
    v10 = v5;
    if ( (int)v9 >= 1 )
    {
      v11 = 0LL;
      do
      {
        if ( v11 >= (unsigned int)v9 )
          sub_1B88814(v5, v6);
        BgmManager__PlayPreloadedBgm(this, (BgmPlayArgs_o *)v10->m_Items[v11], v7);
        LODWORD(v9) = v10->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)v9 );
    }
    this->fields.cacheArgsGroup = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cacheArgsGroup, 0, (int32_t)v7, v8);
  }
}


void __fastcall BgmManager__PlayPreloadedBgm(BgmManager_o *this, BgmPlayArgs_o *args, const MethodInfo *method)
{
  System_String_o *BgmName_k__BackingField; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BgmPlayArgs_c *klass; // x8
  unsigned int methodPtr_low; // w9
  __int64 v10; // x11
  __int64 v11; // x11
  void *mainBgmPlayer; // x0

  if ( (byte_4A5A79A & 1) == 0 )
  {
    sub_1B885B0(&MainBgmPlayArgs_TypeInfo);
    sub_1B885B0(&SubBgmPlayArgs_TypeInfo);
    byte_4A5A79A = 1;
  }
  if ( args )
  {
    BgmName_k__BackingField = args->fields._BgmName_k__BackingField;
    if ( BgmName_k__BackingField )
    {
      if ( BgmManager__IsPreloadSucceeded(this, args->fields._BgmName_k__BackingField, method) )
      {
        klass = args->klass;
        methodPtr_low = LOBYTE(args->klass->vtable._0_Equals.methodPtr);
        v10 = LOBYTE(MainBgmPlayArgs_TypeInfo->vtable._0_Equals.methodPtr);
        if ( methodPtr_low >= (unsigned int)v10
          && (MainBgmPlayArgs_c *)klass->_2.typeHierarchy[v10 - 1] == MainBgmPlayArgs_TypeInfo )
        {
          mainBgmPlayer = this->fields.mainBgmPlayer;
        }
        else
        {
          v11 = LOBYTE(SubBgmPlayArgs_TypeInfo->vtable._0_Equals.methodPtr);
          if ( methodPtr_low < (unsigned int)v11
            || (SubBgmPlayArgs_c *)klass->_2.typeHierarchy[v11 - 1] != SubBgmPlayArgs_TypeInfo )
          {
            return;
          }
          mainBgmPlayer = BgmManager__GetOrCreateSubBgmPlayer(this, BgmName_k__BackingField, v7);
        }
        if ( !mainBgmPlayer )
          sub_1B8880C(0LL, v6);
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


void __fastcall BgmManager__PlaySubBgm(SubBgmPlayArgs_o *args, const MethodInfo *method)
{
  __int64 v3; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x21
  Il2CppObject *Instance; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *v12; // x22
  System_String_o *v13; // x21
  BgmManager_o *v14; // x20
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3

  if ( (byte_4A5A786 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1B885B0(&Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__);
    sub_1B885B0(&BgmManager___c__DisplayClass36_0_TypeInfo);
    byte_4A5A786 = 1;
  }
  v3 = sub_1B887FC(BgmManager___c__DisplayClass36_0_TypeInfo);
  BgmManager___c__DisplayClass36_0___ctor((BgmManager___c__DisplayClass36_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = args;
  v8 = v3 + 24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)args, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v3 + 16) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)Instance, v10, v11);
  v12 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
  if ( !v4 )
  {
    if ( *(_QWORD *)v8 )
    {
      v13 = *(System_String_o **)(*(_QWORD *)v8 + 16LL);
      v14 = *(BgmManager_o **)(v3 + 16);
      v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)v3, Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, 0LL);
      if ( v14 )
      {
        BgmManager__PreloadBgm(v14, v13, v15, v16);
        return;
      }
    }
LABEL_10:
    sub_1B8880C(v4, v5);
  }
}


void __fastcall BgmManager__PreloadAndPlayBgms(
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
  bool v14; // w24
  BgmPlayArgsGroup_o **v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  struct BgmPlayArgsGroup_o *v22; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v23; // x0
  System_Object_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_object__o *v27; // x20
  __int64 v28; // x23
  unsigned __int64 v29; // x24
  __int64 v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x1
  System_Action_object__o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Object_array *v43; // x21
  ChainableActionParallel_o *v44; // x20
  __int64 v45; // x21
  System_Action_o *v46; // x22
  int32_t v47; // w2
  int32_t v48; // w3

  if ( (byte_4A5A798 & 1) == 0 )
  {
    sub_1B885B0(&System_Action___TypeInfo);
    sub_1B885B0(&System_Action_Action__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ChainableActionParallel_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Action_Action___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Action_Action___ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Action_Action____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Action_Action___TypeInfo);
    sub_1B885B0(&Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__);
    sub_1B885B0(&BgmManager___c__DisplayClass57_0_TypeInfo);
    sub_1B885B0(&Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__);
    sub_1B885B0(&BgmManager___c__DisplayClass57_1_TypeInfo);
    byte_4A5A798 = 1;
  }
  v9 = sub_1B887FC(BgmManager___c__DisplayClass57_0_TypeInfo);
  BgmManager___c__DisplayClass57_0___ctor((BgmManager___c__DisplayClass57_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 16) = this;
  v14 = isPlay;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = argsGroup;
  v15 = (BgmPlayArgsGroup_o **)(v9 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)argsGroup, v16, v17);
  *(_QWORD *)(v9 + 48) = finishCallback;
  *(_BYTE *)(v9 + 32) = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)finishCallback, v18, v19);
  v22 = *(struct BgmPlayArgsGroup_o **)(v9 + 24);
  if ( v22 )
  {
    this->fields.cacheArgsGroup = v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cacheArgsGroup, (int32_t)v22, v20, v21);
    v10 = *v15;
    if ( !*v15 )
      goto LABEL_24;
    v23 = BgmPlayArgsGroup__AllArgsListNullExcluded(v10, 0LL);
    v24 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v23,
            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v9 + 40) = v24;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)v24, v25, v26);
    v27 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Action_Action___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v28 = *(_QWORD *)(v9 + 40);
    if ( !v28 )
      goto LABEL_24;
    if ( *(int *)(v28 + 24) >= 1 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        v30 = sub_1B887FC(BgmManager___c__DisplayClass57_1_TypeInfo);
        BgmManager___c__DisplayClass57_1___ctor((BgmManager___c__DisplayClass57_1_o *)v30, 0LL);
        if ( !v30 )
          break;
        *(_QWORD *)(v30 + 24) = v9;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 24), v9, v31, v32);
        if ( v29 >= *(unsigned int *)(v28 + 24) )
          goto LABEL_25;
        v35 = *(_QWORD *)(v28 + 32 + 8 * v29);
        *(_QWORD *)(v30 + 16) = v35;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 16), v35, v33, v34);
        v36 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v36,
          (Il2CppObject *)v30,
          Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__,
          0LL);
        if ( !v27 )
          break;
        items = v27->fields._items;
        v40 = Method_System_Collections_Generic_List_Action_Action___Add__;
        ++v27->fields._version;
        if ( !items )
          break;
        size = v27->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v36,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v27->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v36;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v36, v37, v38);
        }
        if ( (__int64)++v29 >= *(int *)(v28 + 24) )
          goto LABEL_17;
      }
LABEL_24:
      sub_1B8880C(v10, v11);
    }
LABEL_17:
    if ( !v27 )
      goto LABEL_24;
    v43 = System_Collections_Generic_List_object___ToArray(
            v27,
            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v44 = (ChainableActionParallel_o *)sub_1B887FC(ChainableActionParallel_TypeInfo);
    ChainableActionParallel___ctor_46557384(v44, (System_Action_Action__array *)v43, 0LL);
    v45 = sub_1B88658(System_Action___TypeInfo, 1LL);
    v46 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v9,
      Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__,
      0LL);
    if ( !v45 )
      goto LABEL_24;
    if ( !*(_DWORD *)(v45 + 24) )
LABEL_25:
      sub_1B88814(v10, v11);
    *(_QWORD *)(v45 + 32) = v46;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 32), (int32_t)v46, v47, v48);
    if ( !v44 )
      goto LABEL_24;
    v10 = (BgmPlayArgsGroup_o *)ChainableActionBase__Final(
                                  (ChainableActionBase_o *)v44,
                                  (System_Action_array *)v45,
                                  0LL);
    if ( !v10 )
      goto LABEL_24;
    ChainableActionBase__Execute((ChainableActionBase_o *)v10, 0LL);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0LL);
  }
}


bool __fastcall BgmManager__PreloadBgm(
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
  int32_t v12; // w2
  int32_t v13; // w3
  BgmManager_o *v14; // x0
  const MethodInfo *v15; // x2
  System_String_o *CueName; // x0
  Il2CppObject **v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *CueSheet; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  bool IsNullOrEmpty; // w22
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x3
  System_Collections_IEnumerator_o *v26; // x0

  if ( (byte_4A5A79B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Insert__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1B885B0(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__);
    sub_1B885B0(&BgmManager___c__DisplayClass61_0_TypeInfo);
    byte_4A5A79B = 1;
  }
  v7 = sub_1B887FC(BgmManager___c__DisplayClass61_0_TypeInfo);
  BgmManager___c__DisplayClass61_0___ctor((BgmManager___c__DisplayClass61_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)finishCallback, v12, v13);
  CueName = BgmManager__ExtractCueName(v14, name, v15);
  *(_QWORD *)(v7 + 24) = CueName;
  v17 = (Il2CppObject **)(v7 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)CueName, v18, v19);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CueSheet = SoundManager__GetCueSheet(Instance, *(System_String_o **)(v7 + 24), 0LL);
  *(_QWORD *)(v7 + 16) = CueSheet;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)CueSheet, v21, v22);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0LL);
  if ( !IsNullOrEmpty )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)Instance,
              *v17,
              (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_12:
        ActionExtensions__Call(*(System_Action_o **)(v7 + 40), 0LL);
        return !IsNullOrEmpty;
      }
      Instance = (SoundManager_o *)this->fields.addBindList;
      if ( Instance )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)Instance,
          *v17,
          (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_string__Remove__);
        Instance = (SoundManager_o *)this->fields.addBindList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            *v17,
            (const MethodInfo_34FE5E4 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_12;
        }
      }
    }
LABEL_14:
    sub_1B8880C(Instance, v9);
  }
  v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v7, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, 0LL);
  v26 = BgmManager__CoWaitSameAudioLoading(this, name, v24, v25);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
  return !IsNullOrEmpty;
}


void __fastcall BgmManager__PreloadBgms(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  BgmManager__PreloadAndPlayBgms(this, argsGroup, finishCallback, 0, v4);
}


void __fastcall BgmManager__ReflectMasterVolumeLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager___c_c *v3; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *_9__53_0; // x20
  Il2CppObject *v6; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5A797 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1B885B0(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__);
    sub_1B885B0(&BgmManager___c_TypeInfo);
    byte_4A5A797 = 1;
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
    _9__53_0 = (System_Action_object__o *)sub_1B887FC(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__53_0, v6, Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Action_BgmPlayerBase__o *)_9__53_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v8, v9);
  }
  if ( !bgmPlayers )
    sub_1B8880C(v3, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__53_0,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__RemoveUnusedOldFromBindList(BgmManager_o *this, const MethodInfo *method)
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
  if ( (byte_4A5A7A5 & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string__UnionWith__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (BgmManager_o *)sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5A7A5 = 1;
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
    v6 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_string__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v6,
      (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = v2[8];
    if ( !this )
      goto LABEL_59;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v38 = v37;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v38.fields._current )
        sub_1B8880C(0LL, v7);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v38.fields._current,
                                                                       0LL);
      if ( !v6 )
        sub_1B8880C(UsingCueNames, UsingCueNames);
      System_Collections_Generic_HashSet_object___UnionWith(
        v6,
        UsingCueNames,
        (const MethodInfo_33BA378 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    this = v2[10];
    if ( this )
    {
      this = (BgmManager_o *)BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0LL);
      if ( !this )
        goto LABEL_59;
      klass = this->klass;
      v10 = this;
      v11 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_19;
        }
        v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_19:
        v13 = sub_1BDA590(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v15 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
      if ( !v15 )
        sub_1B8880C(0LL, v14);
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
          v19 = sub_1BDA590(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          v23 = sub_1BDA590(v15, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
        if ( !v24 )
          sub_1B8880C(0LL, v25);
        CueName = (Il2CppObject *)BgmManager__ExtractCueName((BgmManager_o *)v24, *(System_String_o **)(v24 + 16), v26);
        if ( !v6 )
          sub_1B8880C(CueName, CueName);
        System_Collections_Generic_HashSet_object___Add(
          v6,
          CueName,
          (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
        v31 = sub_1BDA590(v15, System_IDisposable_TypeInfo, 0LL);
      }
      this = (BgmManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v15, *(_QWORD *)(v31 + 8));
    }
    v32 = (System_Collections_Generic_List_object__o *)v2[4];
    if ( !v32 )
LABEL_59:
      sub_1B8880C(this, method);
    v33 = v32->fields._size - 1;
    if ( v33 >= 1 )
    {
      do
      {
        this = (BgmManager_o *)System_Collections_Generic_List_object___get_Item(
                                 v32,
                                 v33,
                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v6 )
          break;
        this = (BgmManager_o *)System_Collections_Generic_HashSet_object___Contains(
                                 v6,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_33B9878 *)Method_System_Collections_Generic_HashSet_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v33,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__releaseAudioAssetStorage((System_String_o *)Item, 0LL);
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this,
            v33,
            (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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


void __fastcall BgmManager__Reset(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A5A77A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A77A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1B8880C(v2, v3);
    BgmManager__ResetLocal((BgmManager_o *)Instance, v3);
  }
}


void __fastcall BgmManager__ResetLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager___c_c *v3; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *_9__51_0; // x20
  Il2CppObject *v6; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5A795 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1B885B0(&Method_BgmManager___c__ResetLocal_b__51_0__);
    sub_1B885B0(&BgmManager___c_TypeInfo);
    byte_4A5A795 = 1;
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
    _9__51_0 = (System_Action_object__o *)sub_1B887FC(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__51_0, v6, Method_BgmManager___c__ResetLocal_b__51_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_BgmPlayerBase__o *)_9__51_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v8, v9);
  }
  if ( !bgmPlayers )
    sub_1B8880C(v3, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  BgmManager_c *v3; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A5A77E & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A77E = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( !v6 )
    {
      if ( !Instance )
        sub_1B8880C(v6, v7);
      BgmManager__ReflectMasterVolumeLocal((BgmManager_o *)Instance, v7);
    }
  }
}


void __fastcall BgmManager__SetMute(bool isMute, const MethodInfo *method)
{
  BgmManager_c *v3; // x0
  _BOOL4 v4; // w21
  struct BgmManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4A5A77C & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A77C = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( !v7 )
    {
      if ( !Instance )
        sub_1B8880C(v7, v8);
      BgmManager__SetMuteLocal((BgmManager_o *)Instance, isMute, v9);
    }
  }
}


void __fastcall BgmManager__SetMuteLocal(BgmManager_o *this, bool isMute, const MethodInfo *method)
{
  BgmManager___c__DisplayClass52_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_4A5A796 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BgmPlayerBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_1B885B0(&Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__);
    sub_1B885B0(&BgmManager___c__DisplayClass52_0_TypeInfo);
    byte_4A5A796 = 1;
  }
  v5 = (BgmManager___c__DisplayClass52_0_o *)sub_1B887FC(BgmManager___c__DisplayClass52_0_TypeInfo);
  BgmManager___c__DisplayClass52_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.isMute = isMute,
        bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers,
        v9 = (System_Action_object__o *)sub_1B887FC(System_Action_BgmPlayerBase__TypeInfo),
        System_Action_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__,
          0LL),
        !bgmPlayers) )
  {
    sub_1B8880C(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v9,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A5A789 & 1) == 0 )
  {
    sub_1B885B0(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
    sub_1B885B0(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A789 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B8880C(v4, v5);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        0LL,
        (const MethodInfo_2E71CFC *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        0LL,
        (const MethodInfo_2E71B10 *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
  }
}


void __fastcall BgmManager__StopBgm(
        System_String_o *name,
        float fadeoutTime,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  bool v10; // w22

  if ( (byte_4A5A788 & 1) == 0 )
  {
    sub_1B885B0(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
    sub_1B885B0(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_1B885B0(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
    sub_1B885B0(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A788 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1B8880C(v8, v9);
    if ( fadeoutTime <= 0.0 )
    {
      v10 = BgmManager__StopBgmLocal_object_(
              (BgmManager_o *)Instance,
              name,
              (const MethodInfo_2E71CFC *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
      if ( name && !v10 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__StopBgmLocal_object_(
          (BgmManager_o *)Instance,
          0LL,
          (const MethodInfo_2E71CFC *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      v10 = BgmManager__FadeoutBgmLocal_object_(
              (BgmManager_o *)Instance,
              fadeoutTime,
              name,
              (const MethodInfo_2E71B10 *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
      if ( name && !v10 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__FadeoutBgmLocal_object_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0LL,
          (const MethodInfo_2E71B10 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    if ( v10 )
      ActionExtensions__Call(successCallback, 0LL);
  }
}


bool __fastcall BgmManager__StopBgmLocal_object_(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo_2E71CFC *method)
{
  const MethodInfo_2E7173C **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  Il2CppClass *_4_BgmManager___c__68_T; // x8
  Il2CppClass *v9; // x0
  System_Func_object__bool__o *v10; // x21
  Il2CppClass *v11; // x0
  const MethodInfo_2E71CFC_RGCTXs *v12; // x8
  __int64 v13; // x0
  __int64 _3_System_Func_T__bool; // x8
  Il2CppObject *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppClass *v18; // x0
  Il2CppClass *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  rgctx_data = (const MethodInfo_2E7173C **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_bool___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_bool___);
    rgctx_data = (const MethodInfo_2E7173C **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8(method);
      rgctx_data = (const MethodInfo_2E7173C **)method->rgctx_data;
    }
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, name, *rgctx_data);
  _4_BgmManager___c__68_T = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (BYTE5(_4_BgmManager___c__68_T->vtable[0].methodPtr) & 1) == 0 )
    _4_BgmManager___c__68_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_4_BgmManager___c__68_T_);
  if ( !_4_BgmManager___c__68_T->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_4_BgmManager___c__68_T);
  v9 = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1BDA48C(v9);
  v10 = (System_Func_object__bool__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1BDA48C(v11);
    if ( !v11->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v11);
    v12 = method->rgctx_data;
    v13 = (__int64)v12->_4_BgmManager___c__68_T_;
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    {
      v13 = sub_1BDA48C(v13);
      v12 = method->rgctx_data;
    }
    _3_System_Func_T__bool = (__int64)v12->_3_System_Func_T__bool_;
    v15 = **(Il2CppObject ***)(v13 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__bool + 309) & 1) == 0 )
      _3_System_Func_T__bool = sub_1BDA48C(_3_System_Func_T__bool);
    v10 = (System_Func_object__bool__o *)sub_1B887FC(_3_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v10,
      v15,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__68_T___StopBgmLocal_b__68_0,
      (const MethodInfo_3371EB4 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
    v18 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1BDA48C(v18);
    *((_QWORD *)v18->static_fields + 1) = v10;
    v19 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v19->vtable[0].methodPtr) & 1) == 0 )
      v19 = (Il2CppClass *)sub_1BDA48C(v19);
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v19->static_fields + 8), (int32_t)v10, v16, v17);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TResult__o *)v10,
                                                               (const MethodInfo_2EAF548 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v20,
                                                               (const MethodInfo_2EB83B4 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v21, (const MethodInfo_2E8CB14 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__StopJingle(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4A5A78F & 1) == 0 )
  {
    sub_1B885B0(&Method_BgmManager_StopBgmLocal_JinglePlayer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A78F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1B8880C(v2, v3);
    BgmManager__StopBgmLocal_object_(
      (BgmManager_o *)Instance,
      0LL,
      (const MethodInfo_2E71CFC *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5A78A & 1) == 0 )
  {
    sub_1B885B0(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_1B885B0(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A78A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1B8880C(v6, v7);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        name,
        (const MethodInfo_2E71CFC *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        name,
        (const MethodInfo_2E71B10 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__StopUnrequestedSubBgm(
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
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__bool__o *v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  BgmManager___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_T__o *v22; // x19
  System_Action_object__o *_9__69_2; // x20
  Il2CppObject *v24; // x21
  struct BgmManager___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A5A7A0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_SubBgmPlayer__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_SubBgmPlayer___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    sub_1B885B0(&System_Func_SubBgmPlayArgs__string__TypeInfo);
    sub_1B885B0(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_1B885B0(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__);
    sub_1B885B0(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__);
    sub_1B885B0(&Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__);
    sub_1B885B0(&BgmManager___c__DisplayClass69_0_TypeInfo);
    sub_1B885B0(&BgmManager___c_TypeInfo);
    byte_4A5A7A0 = 1;
  }
  v5 = sub_1B887FC(BgmManager___c__DisplayClass69_0_TypeInfo);
  BgmManager___c__DisplayClass69_0___ctor((BgmManager___c__DisplayClass69_0_o *)v5, 0LL);
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
      _9__69_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_SubBgmPlayArgs__string__TypeInfo);
      System_Func_object__object____ctor(_9__69_0, v11, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, 0LL);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__69_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__69_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__69_0, (int32_t)_9__69_0, v13, v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__69_0,
                                                                 (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v6 = System_Linq_Enumerable__ToArray_object_(
           v15,
           (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v5 )
LABEL_19:
      sub_1B8880C(v6, v7);
    *(_QWORD *)(v5 + 16) = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v6, v16, v17);
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v19 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v19,
      (Il2CppObject *)v5,
      Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__,
      0LL);
    v20 = System_Linq_Enumerable__Where_object_(
            v18,
            (System_Func_TSource__bool__o *)v19,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
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
      _9__69_2 = (System_Action_object__o *)sub_1B887FC(System_Action_SubBgmPlayer__TypeInfo);
      System_Action_object____ctor(_9__69_2, v24, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, 0LL);
      v25 = BgmManager___c_TypeInfo->static_fields;
      v25->__9__69_2 = (struct System_Action_SubBgmPlayer__o *)_9__69_2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->__9__69_2, (int32_t)_9__69_2, v26, v27);
    }
    BasicHelper__ForEach_object_(
      v22,
      (System_Action_T__o *)_9__69_2,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__WaitSameAudioLoading(
        BgmManager_o *this,
        System_String_o *bgmName,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BgmManager__CoWaitSameAudioLoading(this, bgmName, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_String_o *__fastcall BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_1B8880C(this, method);
  return mainBgmPlayer->fields.bgmName;
}


bool __fastcall BgmManager__get_IsBusy(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4A5A776 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A776 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v2 )
    sub_1B8880C(0LL, v3);
  return BgmManager__IsLoadingLocal((BgmManager_o *)v2, 0LL, v4);
}


bool __fastcall BgmManager__get_IsMute(const MethodInfo *method)
{
  BgmManager_c *v1; // x0

  if ( (byte_4A5A77B & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    byte_4A5A77B = 1;
  }
  v1 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v1 = BgmManager_TypeInfo;
  }
  return v1->static_fields->isMute;
}


bool __fastcall BgmManager__isLoading(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4A5A781 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5A781 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1B8880C(v4, v5);
  return BgmManager__IsLoadingLocal((BgmManager_o *)Instance, name, v6);
}


void __fastcall BgmManager__CoWaitSameAudioLoading_d__63___ctor(
        BgmManager__CoWaitSameAudioLoading_d__63_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BgmManager__CoWaitSameAudioLoading_d__63__MoveNext(
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
  struct BgmManager_o *v10; // x1
  struct System_String_o *bgmName; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitWhile_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_4A5A7B2 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__);
    sub_1B885B0(&BgmManager___c__DisplayClass63_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitWhile_TypeInfo);
    byte_4A5A7B2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    finishCallback = this->fields.finishCallback;
    this->fields.__1__state = -1;
LABEL_11:
    ActionExtensions__Call(finishCallback, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    v5 = sub_1B887FC(BgmManager___c__DisplayClass63_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    if ( !v5
      || (v10 = this->fields.__4__this,
          *(_QWORD *)(v5 + 16) = v10,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v10, v8, v9),
          bgmName = this->fields.bgmName,
          *(_QWORD *)(v5 + 24) = bgmName,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)bgmName, v12, v13),
          !_4__this) )
    {
      sub_1B8880C(v6, v7);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v5 + 24), 0LL) )
    {
      v14 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v14,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__,
        0LL);
      v15 = (UnityEngine_WaitWhile_o *)sub_1B887FC(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v15, v14, 0LL);
      this->fields.__2__current = (Il2CppObject *)v15;
      p__2__current = &this->fields.__2__current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v15, v17, v18);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    finishCallback = this->fields.finishCallback;
    goto LABEL_11;
  }
  return 0;
}


Il2CppObject *__fastcall BgmManager__CoWaitSameAudioLoading_d__63__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BgmManager__CoWaitSameAudioLoading_d__63_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BgmManager__CoWaitSameAudioLoading_d__63__System_Collections_IEnumerator_Reset(
        BgmManager__CoWaitSameAudioLoading_d__63_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BgmManager__CoWaitSameAudioLoading_d__63_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BgmManager__CoWaitSameAudioLoading_d__63__System_Collections_IEnumerator_get_Current(
        BgmManager__CoWaitSameAudioLoading_d__63_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BgmManager__CoWaitSameAudioLoading_d__63__System_IDisposable_Dispose(
        BgmManager__CoWaitSameAudioLoading_d__63_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BgmManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5A7AD & 1) == 0 )
  {
    sub_1B885B0(&BgmManager___c_TypeInfo);
    byte_4A5A7AD = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BgmManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BgmManager___c_TypeInfo->static_fields->__9 = (struct BgmManager___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BgmManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall BgmManager___c___ctor(BgmManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c___FixedUpdate_b__78_0(
        BgmManager___c_o *this,
        GeneralBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, (const MethodInfo *)x);
}


void __fastcall BgmManager___c___FixedUpdate_b__78_1(
        BgmManager___c_o *this,
        GeneralBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(GeneralBgmPlayer_o *, __int64, Il2CppMethodPointer))x->klass->vtable._11_StopBgm.method)(
    x,
    1LL,
    x->klass->vtable._12_unknown.methodPtr);
}


void __fastcall BgmManager___c___FixedUpdate_b__78_2(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, void *))x->klass->vtable._13_FixedUpdate.method)(x, x->klass[1]._1.image);
}


void __fastcall BgmManager___c___FixedUpdate_b__78_3(
        BgmManager___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  const MethodInfo_361AA4C *v4; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x5
  System_Nullable_long__o v8; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_float__o p_fadeTime; // 0:x0.8
  System_Nullable_float__o v11; // 0:x1.8
  System_Nullable_float__o v12; // 0:x2.8
  System_Nullable_long__o v13; // 0:x0.16

  if ( (byte_4A5A7AE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_long___ctor__);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    byte_4A5A7AE = 1;
  }
  p_fadeTime = (System_Nullable_float__o)&fadeTime;
  fadeTime = 0LL;
  *(_QWORD *)&v8.fields.hasValue = 0LL;
  v8.fields.value = 0LL;
  System_Nullable_float____ctor(p_fadeTime, 0.0, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
  *(_QWORD *)&v13.fields.hasValue = &v8;
  v13.fields.value = 0LL;
  System_Nullable_long____ctor(v13, Method_System_Nullable_long___ctor__, v4);
  if ( !x )
    sub_1B8880C(v5, v6);
  v12 = fadeTime;
  v11 = 0LL;
  BgmPlayArgs__Update(x, v11, v12, v8, v7);
}


bool __fastcall BgmManager___c___GetOrCreateSubBgmPlayer_b__72_1(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.bgmName == 0LL;
}


void __fastcall BgmManager___c___InitializeLocal_b__50_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))x->klass->vtable._5_Initialize.method)(
    x,
    x->klass->vtable._6_Reset.methodPtr);
}


void __fastcall BgmManager___c___ReflectMasterVolumeLocal_b__53_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))x->klass->vtable._8_ReflectMasterVolume.method)(
    x,
    x->klass->vtable._9_PlayBgm.methodPtr);
}


void __fastcall BgmManager___c___ResetLocal_b__51_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))x->klass->vtable._6_Reset.method)(
    x,
    x->klass->vtable._7_SetMute.methodPtr);
}


System_String_o *__fastcall BgmManager___c___StopUnrequestedSubBgm_b__69_0(
        BgmManager___c_o *this,
        SubBgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields._BgmName_k__BackingField;
}


void __fastcall BgmManager___c___StopUnrequestedSubBgm_b__69_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._11_StopBgm.method)(
    x,
    0LL,
    x->klass->vtable._12_ExportPlayArgs.methodPtr);
}


void __fastcall BgmManager___c__54_object____cctor(const MethodInfo_3041A14 *method)
{
  BgmManager___c__54_T__c *klass; // x0
  __int64 _0_BgmManager___c__54_T; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  BgmManager___c__54_T__c *v7; // x0
  __int64 _2_BgmManager___c__54_T; // x0
  BgmManager___c__54_T__c *v9; // x0
  __int64 v10; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BgmManager___c__54_T__c *)sub_1BDA48C(klass);
  _0_BgmManager___c__54_T = (__int64)klass->rgctx_data->_0_BgmManager___c__54_T_;
  if ( (*(_BYTE *)(_0_BgmManager___c__54_T + 309) & 1) == 0 )
    _0_BgmManager___c__54_T = sub_1BDA48C(_0_BgmManager___c__54_T);
  v4 = (Il2CppObject *)sub_1B887FC(_0_BgmManager___c__54_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BDA48C(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (BgmManager___c__54_T__c *)sub_1BDA48C(v7);
  _2_BgmManager___c__54_T = (__int64)v7->rgctx_data->_2_BgmManager___c__54_T_;
  if ( (*(_BYTE *)(_2_BgmManager___c__54_T + 309) & 1) == 0 )
    _2_BgmManager___c__54_T = sub_1BDA48C(_2_BgmManager___c__54_T);
  **(_QWORD **)(_2_BgmManager___c__54_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BgmManager___c__54_T__c *)sub_1BDA48C(v9);
  v10 = (__int64)v9->rgctx_data->_2_BgmManager___c__54_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  sub_1B88554(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BgmManager___c__54_object____ctor(BgmManager___c__54_T__o *this, const MethodInfo_3041AD0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__54_object____EnumeratePlayersHavingBgmName_b__54_0(
        BgmManager___c__54_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3041AD8 *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x[1].monitor != 0LL;
}


void __fastcall BgmManager___c__68_object____cctor(const MethodInfo_3041E4C *method)
{
  BgmManager___c__68_T__c *klass; // x0
  __int64 _0_BgmManager___c__68_T; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  BgmManager___c__68_T__c *v7; // x0
  __int64 _2_BgmManager___c__68_T; // x0
  BgmManager___c__68_T__c *v9; // x0
  __int64 v10; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BgmManager___c__68_T__c *)sub_1BDA48C(klass);
  _0_BgmManager___c__68_T = (__int64)klass->rgctx_data->_0_BgmManager___c__68_T_;
  if ( (*(_BYTE *)(_0_BgmManager___c__68_T + 309) & 1) == 0 )
    _0_BgmManager___c__68_T = sub_1BDA48C(_0_BgmManager___c__68_T);
  v4 = (Il2CppObject *)sub_1B887FC(_0_BgmManager___c__68_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BDA48C(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (BgmManager___c__68_T__c *)sub_1BDA48C(v7);
  _2_BgmManager___c__68_T = (__int64)v7->rgctx_data->_2_BgmManager___c__68_T_;
  if ( (*(_BYTE *)(_2_BgmManager___c__68_T + 309) & 1) == 0 )
    _2_BgmManager___c__68_T = sub_1BDA48C(_2_BgmManager___c__68_T);
  **(_QWORD **)(_2_BgmManager___c__68_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BgmManager___c__68_T__c *)sub_1BDA48C(v9);
  v10 = (__int64)v9->rgctx_data->_2_BgmManager___c__68_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  sub_1B88554(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BgmManager___c__68_object____ctor(BgmManager___c__68_T__o *this, const MethodInfo_3041F08 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__68_object____StopBgmLocal_b__68_0(
        BgmManager___c__68_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3041F10 *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))x->klass->vtable[11].method)(
           x,
           0LL,
           x->klass->vtable[12].methodPtr);
}


void __fastcall BgmManager___c__76_object____cctor(const MethodInfo_3041F34 *method)
{
  BgmManager___c__76_T__c *klass; // x0
  __int64 _0_BgmManager___c__76_T; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  BgmManager___c__76_T__c *v7; // x0
  __int64 _2_BgmManager___c__76_T; // x0
  BgmManager___c__76_T__c *v9; // x0
  __int64 v10; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BgmManager___c__76_T__c *)sub_1BDA48C(klass);
  _0_BgmManager___c__76_T = (__int64)klass->rgctx_data->_0_BgmManager___c__76_T_;
  if ( (*(_BYTE *)(_0_BgmManager___c__76_T + 309) & 1) == 0 )
    _0_BgmManager___c__76_T = sub_1BDA48C(_0_BgmManager___c__76_T);
  v4 = (Il2CppObject *)sub_1B887FC(_0_BgmManager___c__76_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BDA48C(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (BgmManager___c__76_T__c *)sub_1BDA48C(v7);
  _2_BgmManager___c__76_T = (__int64)v7->rgctx_data->_2_BgmManager___c__76_T_;
  if ( (*(_BYTE *)(_2_BgmManager___c__76_T + 309) & 1) == 0 )
    _2_BgmManager___c__76_T = sub_1BDA48C(_2_BgmManager___c__76_T);
  **(_QWORD **)(_2_BgmManager___c__76_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BgmManager___c__76_T__c *)sub_1BDA48C(v9);
  v10 = (__int64)v9->rgctx_data->_2_BgmManager___c__76_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  sub_1B88554(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BgmManager___c__76_object____ctor(BgmManager___c__76_T__o *this, const MethodInfo_3041FF0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall BgmManager___c__76_object____ExportPlayArgsGroupLocal_b__76_0(
        BgmManager___c__76_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3041FF8 *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[12].method)(
                            x,
                            x->klass->vtable[13].methodPtr);
}


void __fastcall BgmManager___c__DisplayClass29_0___ctor(
        BgmManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass29_0___ChangePlayerVolume_b__0(
        BgmManager___c__DisplayClass29_0_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0LL);
}


void __fastcall BgmManager___c__DisplayClass36_0___ctor(
        BgmManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass36_0___PlaySubBgm_b__0(
        BgmManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  BgmManager_o *ins; // x0

  ins = this->fields.ins;
  if ( !ins )
    sub_1B8880C(0LL, method);
  BgmManager__PlayPreloadedBgm(ins, (BgmPlayArgs_o *)this->fields.args, 0LL);
}


void __fastcall BgmManager___c__DisplayClass52_0___ctor(
        BgmManager___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass52_0___SetMuteLocal_b__0(
        BgmManager___c__DisplayClass52_0_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, Il2CppMethodPointer))x->klass->vtable._7_SetMute.method)(
    x,
    this->fields.isMute,
    x->klass->vtable._8_ReflectMasterVolume.methodPtr);
}


void __fastcall BgmManager___c__DisplayClass54_0_object____ctor(
        BgmManager___c__DisplayClass54_0_T__o *this,
        const MethodInfo_3047538 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass54_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass54_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3047540 *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return System_String__op_Equality((System_String_o *)x[1].monitor, this->fields.bgmNameFilter, 0LL);
}


void __fastcall BgmManager___c__DisplayClass57_0___ctor(
        BgmManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass57_0___PreloadAndPlayBgms_b__0(
        BgmManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  struct BgmManager_o *_4__this; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  struct BgmPlayArgs_array *nonNullArgsAll; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x21

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  method = (const MethodInfo *)this->fields.argsGroup;
  if ( (const MethodInfo *)_4__this->fields.cacheArgsGroup == method )
  {
    BgmManager__StopUnrequestedSubBgm(_4__this, (BgmPlayArgsGroup_o *)method, 0LL);
    if ( this->fields.isPlay )
    {
      nonNullArgsAll = this->fields.nonNullArgsAll;
      if ( !nonNullArgsAll )
        goto LABEL_14;
      v7 = *(_QWORD *)&nonNullArgsAll->max_length;
      if ( (int)v7 >= 1 )
      {
        v8 = 0LL;
        while ( 1 )
        {
          if ( v8 >= (unsigned int)v7 )
            sub_1B88814(_4__this, method);
          _4__this = this->fields.__4__this;
          if ( !_4__this )
            break;
          BgmManager__PlayPreloadedBgm(_4__this, nonNullArgsAll->m_Items[v8], 0LL);
          LODWORD(v7) = nonNullArgsAll->max_length;
          if ( (__int64)++v8 >= (int)v7 )
            goto LABEL_10;
        }
LABEL_14:
        sub_1B8880C(_4__this, method);
      }
LABEL_10:
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_14;
      _4__this->fields.cacheArgsGroup = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.cacheArgsGroup, 0, v4, v5);
    }
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BgmManager__RemoveUnusedOldFromBindList(_4__this, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall BgmManager___c__DisplayClass57_1___ctor(
        BgmManager___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass57_1___PreloadAndPlayBgms_b__1(
        BgmManager___c__DisplayClass57_1_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct BgmManager___c__DisplayClass57_0_o *CS___8__locals1; // x9
  struct BgmPlayArgs_o *args; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (args = this->fields.args) == 0LL
    || (this = (BgmManager___c__DisplayClass57_1_o *)CS___8__locals1->fields.__4__this) == 0LL )
  {
    sub_1B8880C(this, callback);
  }
  BgmManager__PreloadBgm((BgmManager_o *)this, args->fields._BgmName_k__BackingField, callback, 0LL);
}


void __fastcall BgmManager___c__DisplayClass61_0___ctor(
        BgmManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass61_0___PreloadBgm_b__0(
        BgmManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_String_o *cueName; // x1
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x0
  Il2CppObject *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BgmManager_o *_4__this; // x8
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5A7AF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__);
    byte_4A5A7AF = 1;
  }
  cueName = this->fields.cueName;
  this->fields.tempCueSheetName = cueName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)cueName, v2, v3);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.loadingBgmCueNameList) == 0LL
    || (v7 = (Il2CppObject *)this->fields.cueName,
        items = loadingBgmCueNameList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++loadingBgmCueNameList->fields._version,
        !items) )
  {
    sub_1B8880C(loadingBgmCueNameList, v7);
  }
  size = loadingBgmCueNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      loadingBgmCueNameList,
      v7,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    loadingBgmCueNameList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v7, v8, v9);
  }
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, 0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v17, v18);
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(tempCueSheetName, _9__1, 1, 0LL);
}


void __fastcall BgmManager___c__DisplayClass61_0___PreloadBgm_b__1(
        BgmManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  BgmManager___c__DisplayClass61_0_o *v2; // x19
  struct BgmManager_o *_4__this; // x8
  struct BgmManager_o *v4; // x8
  struct BgmManager_o *v5; // x8

  v2 = this;
  if ( (byte_4A5A7B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Insert__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Remove__);
    this = (BgmManager___c__DisplayClass61_0_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4A5A7B0 = 1;
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
    (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass61_0_o *)SoundManager__GetCueSheet(
                                                 (SoundManager_o *)this,
                                                 v2->fields.cueName,
                                                 0LL);
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
                                                   (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__);
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
            (const MethodInfo_34FE5E4 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_1B8880C(this, method);
    }
  }
LABEL_13:
  ActionExtensions__Call(v2->fields.finishCallback, 0LL);
}


void __fastcall BgmManager___c__DisplayClass63_0___ctor(
        BgmManager___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass63_0___CoWaitSameAudioLoading_b__0(
        BgmManager___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  BgmManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  return BgmManager__IsLoadingLocal(_4__this, this->fields.bgmName, 0LL);
}


void __fastcall BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_3048328 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass67_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3048330 *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, float))x->klass->vtable[10].method)(
           x,
           x->klass->vtable[11].methodPtr,
           this->fields.fadeoutTime);
}


void __fastcall BgmManager___c__DisplayClass69_0___ctor(
        BgmManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass69_0___StopUnrequestedSubBgm_b__1(
        BgmManager___c__DisplayClass69_0_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  BgmManager___c__DisplayClass69_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A5A7B1 & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass69_0_o *)sub_1B885B0(&Method_System_Array_IndexOf_string___);
    byte_4A5A7B1 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  return (unsigned int)System_Array__IndexOf_object_(
                         (System_Object_array *)v4->fields.subBgmNamesToPlay,
                         (Il2CppObject *)x->fields.bgmName,
                         (const MethodInfo_2F7A570 *)Method_System_Array_IndexOf_string___) >> 31;
}


void __fastcall BgmManager___c__DisplayClass70_0_object____ctor(
        BgmManager___c__DisplayClass70_0_T__o *this,
        const MethodInfo_3049548 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass70_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass70_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3049550 *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  BgmPlayerBase__PauseBgm((BgmPlayerBase_o *)x, this->fields.isPause, 0LL);
}


void __fastcall BgmManager___c__DisplayClass71_0___ctor(
        BgmManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass71_0___PlayJingleLocal_b__0(
        BgmManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  BgmManager_o *_4__this; // x0
  const MethodInfo *v4; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BgmManager_o *)BgmManager__GetOrCreateJinglePlayer(_4__this, 0LL)) == 0LL )
    sub_1B8880C(_4__this, method);
  JinglePlayer__PlayBgm(
    (JinglePlayer_o *)_4__this,
    this->fields.name,
    this->fields.volume,
    this->fields.callbackFunc,
    v4);
}


void __fastcall BgmManager___c__DisplayClass72_0___ctor(
        BgmManager___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass72_0___GetOrCreateSubBgmPlayer_b__0(
        BgmManager___c__DisplayClass72_0_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0LL);
}