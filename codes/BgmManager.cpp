void __fastcall BgmManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  struct BgmManager_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct BgmManager_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct BgmManager_StaticFields *v12; // x8

  if ( (byte_49FBA70 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_2996/*"BGM_CHALDEA_1"*/, v4);
    sub_1B640C8(&StringLiteral_2997/*"BGM_CHALDEA_2"*/, v5);
    byte_49FBA70 = 1;
  }
  static_fields = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_VOLUME = 0x3DCCCCCD3F800000LL;
  v7 = StringLiteral_2996/*"BGM_CHALDEA_1"*/;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_2996/*"BGM_CHALDEA_1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v7, v2, v3);
  v8 = StringLiteral_2997/*"BGM_CHALDEA_2"*/;
  v9 = BgmManager_TypeInfo->static_fields;
  v9->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_2997/*"BGM_CHALDEA_2"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v8, v10, v11);
  v12 = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&v12->ADD_BIND_MAX = 0x400000005LL;
  v12->isMute = 0;
  v12->masterVolume = 1.0;
}


void __fastcall BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FBA6F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager___ctor__, v7);
    byte_49FBA6F = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.addBindList, (int32_t)v8, v9, v10);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadingBgmCueNameList, (int32_t)v13, v14, v15);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BgmPlayerBase__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgmPlayers, (int32_t)v18, v19, v20);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void __fastcall BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  _BOOL8 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Instance; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v19; // x21
  BgmPlayerBase_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_49FBA46 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&System_Predicate_BgmPlayerBase__TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v8);
    sub_1B640C8(&Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__, v9);
    sub_1B640C8(&BgmManager___c__DisplayClass29_0_TypeInfo, v10);
    byte_49FBA46 = 1;
  }
  v11 = sub_1B64314(BgmManager___c__DisplayClass29_0_TypeInfo, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = bgmName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)bgmName, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v12 )
  {
    if ( Instance )
    {
      klass = (System_Collections_Generic_List_object__o *)Instance[4].klass;
      v19 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BgmPlayerBase__TypeInfo, v16, v17);
      System_Predicate_object____ctor(
        v19,
        (Il2CppObject *)v11,
        Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__,
        0LL);
      if ( klass )
      {
        v20 = (BgmPlayerBase_o *)System_Collections_Generic_List_object___Find(
                                   klass,
                                   (System_Predicate_T__o *)v19,
                                   (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v20 )
        {
          v20->fields.bgmVolume = volume;
          BgmPlayerBase__UpdateVolume(v20, v21);
        }
        return;
      }
    }
LABEL_12:
    sub_1B64324(v12);
  }
}


System_Collections_IEnumerator_o *__fastcall BgmManager__CoWaitSameAudioLoading(
        BgmManager_o *this,
        System_String_o *bgmName,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FBA63 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo, bgmName);
    byte_49FBA63 = 1;
  }
  v7 = sub_1B64314(BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo, bgmName, finishCallback);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)bgmName, v10, v11);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BgmManager__Enable_KeepSubBgm(bool value, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  int v6; // w9

  if ( (byte_49FBA59 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_49FBA59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B64324(v5);
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
        const MethodInfo_2E2B220 *method)
{
  const MethodInfo_2E2B220_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass54_0_T; // x0
  __int64 v8; // x22
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo_2E2B220_RGCTXs *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  __int64 _5_System_Func_T__bool; // x0
  System_Func_object__bool__o *v19; // x21
  __int64 _6_BgmManager___c__54_T; // x0
  Il2CppClass *v21; // x0
  Il2CppClass *v22; // x0
  const MethodInfo_2E2B220_RGCTXs *v23; // x8
  __int64 v24; // x0
  __int64 v25; // x8
  Il2CppObject *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppClass *v29; // x0
  Il2CppClass *v30; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6000(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass54_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass54_0_T = sub_1BB5FA4(_0_BgmManager___c__DisplayClass54_0_T);
  v8 = sub_1B64314(_0_BgmManager___c__DisplayClass54_0_T, bgmNameFilter, method);
  BgmManager___c__DisplayClass54_0_object____ctor(
    (BgmManager___c__DisplayClass54_0_T__o *)v8,
    (const MethodInfo_2FFFB74 *)method->rgctx_data->_1_BgmManager___c__DisplayClass54_0_T___ctor);
  if ( !v8 )
    sub_1B64324(v9);
  *(_QWORD *)(v8 + 16) = bgmNameFilter;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)bgmNameFilter, v10, v11);
  v12 = *(_QWORD *)(v8 + 16);
  v13 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
          (const MethodInfo_2E62C20 *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  v16 = method->rgctx_data;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( v12 )
  {
    _5_System_Func_T__bool = (__int64)v16->_5_System_Func_T__bool_;
    if ( (*(_BYTE *)(_5_System_Func_T__bool + 309) & 1) == 0 )
      _5_System_Func_T__bool = sub_1BB5FA4(_5_System_Func_T__bool);
    v19 = (System_Func_object__bool__o *)sub_1B64314(_5_System_Func_T__bool, v14, v15);
    System_Func_object__bool____ctor(
      v19,
      (Il2CppObject *)v8,
      (intptr_t)method->rgctx_data->_10_BgmManager___c__DisplayClass54_0_T___EnumeratePlayersHavingBgmName_b__1,
      (const MethodInfo_3323110 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
  }
  else
  {
    _6_BgmManager___c__54_T = (__int64)v16->_6_BgmManager___c__54_T_;
    if ( (*(_BYTE *)(_6_BgmManager___c__54_T + 309) & 1) == 0 )
      _6_BgmManager___c__54_T = sub_1BB5FA4(_6_BgmManager___c__54_T);
    if ( !*(_DWORD *)(_6_BgmManager___c__54_T + 224) )
      j_il2cpp_runtime_class_init_0(_6_BgmManager___c__54_T);
    v21 = method->rgctx_data->_6_BgmManager___c__54_T_;
    if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
      v21 = (Il2CppClass *)sub_1BB5FA4(v21);
    v19 = (System_Func_object__bool__o *)*((_QWORD *)v21->static_fields + 1);
    if ( !v19 )
    {
      v22 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v22->vtable[0].methodPtr) & 1) == 0 )
        v22 = (Il2CppClass *)sub_1BB5FA4(v22);
      if ( !v22->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v22);
      v23 = method->rgctx_data;
      v24 = (__int64)v23->_6_BgmManager___c__54_T_;
      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      {
        v24 = sub_1BB5FA4(v24);
        v23 = method->rgctx_data;
      }
      v25 = (__int64)v23->_5_System_Func_T__bool_;
      v26 = **(Il2CppObject ***)(v24 + 184);
      if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
        v25 = sub_1BB5FA4(v25);
      v19 = (System_Func_object__bool__o *)sub_1B64314(v25, v14, v15);
      System_Func_object__bool____ctor(
        v19,
        v26,
        (intptr_t)method->rgctx_data->_7_BgmManager___c__54_T___EnumeratePlayersHavingBgmName_b__54_0,
        (const MethodInfo_3323110 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
      v29 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v29->vtable[0].methodPtr) & 1) == 0 )
        v29 = (Il2CppClass *)sub_1BB5FA4(v29);
      *((_QWORD *)v29->static_fields + 1) = v19;
      v30 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v30->vtable[0].methodPtr) & 1) == 0 )
        v30 = (Il2CppClass *)sub_1BB5FA4(v30);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v30->static_fields + 8), (int32_t)v19, v27, v28);
    }
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          v17,
                                                          (System_Func_TSource__bool__o *)v19,
                                                          (const MethodInfo_2E7709C *)method->rgctx_data->_9_System_Linq_Enumerable_Where_T_);
}


bool __fastcall BgmManager__ExistsPlayerHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_2E2B3EC *method)
{
  const MethodInfo_2E2B220 **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  rgctx_data = (const MethodInfo_2E2B220 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6000(method);
    rgctx_data = (const MethodInfo_2E2B220 **)method->rgctx_data;
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, bgmNameFilter, *rgctx_data);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_2E46A94 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v5; // x0

  if ( (byte_49FBA3E & 1) == 0 )
  {
    sub_1B640C8(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___, v1);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_49FBA3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1B64324(v5);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_2E2B438 *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroupLocal_object_(
        BgmManager_o *this,
        const MethodInfo_2E2B438 *method)
{
  const MethodInfo_2E2B220 **rgctx_data; // x8
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_IEnumerable_T__o *v8; // x20
  Il2CppClass *_4_BgmManager___c__76_T; // x8
  Il2CppClass *v10; // x0
  System_Func_object__object__o *v11; // x21
  Il2CppClass *v12; // x0
  const MethodInfo_2E2B438_RGCTXs *v13; // x8
  __int64 v14; // x0
  __int64 _3_System_Func_T__BgmPlayArgs; // x8
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppClass *v19; // x0
  Il2CppClass *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  BgmPlayArgsGroup_o *v25; // x20

  rgctx_data = (const MethodInfo_2E2B220 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&BgmPlayArgsGroup_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v5);
    rgctx_data = (const MethodInfo_2E2B220 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000(method);
      rgctx_data = (const MethodInfo_2E2B220 **)method->rgctx_data;
    }
  }
  v8 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, 0LL, *rgctx_data);
  _4_BgmManager___c__76_T = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (BYTE5(_4_BgmManager___c__76_T->vtable[0].methodPtr) & 1) == 0 )
    _4_BgmManager___c__76_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_4_BgmManager___c__76_T_);
  if ( !_4_BgmManager___c__76_T->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_4_BgmManager___c__76_T);
  v10 = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
    v10 = (Il2CppClass *)sub_1BB5FA4(v10);
  v11 = (System_Func_object__object__o *)*((_QWORD *)v10->static_fields + 1);
  if ( !v11 )
  {
    v12 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1BB5FA4(v12);
    if ( !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    v13 = method->rgctx_data;
    v14 = (__int64)v13->_4_BgmManager___c__76_T_;
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    {
      v14 = sub_1BB5FA4(v14);
      v13 = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = (__int64)v13->_3_System_Func_T__BgmPlayArgs_;
    v16 = **(Il2CppObject ***)(v14 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__BgmPlayArgs + 309) & 1) == 0 )
      _3_System_Func_T__BgmPlayArgs = sub_1BB5FA4(_3_System_Func_T__BgmPlayArgs);
    v11 = (System_Func_object__object__o *)sub_1B64314(_3_System_Func_T__BgmPlayArgs, v6, v7);
    System_Func_object__object____ctor(
      v11,
      v16,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__76_T___ExportPlayArgsGroupLocal_b__76_0,
      (const MethodInfo_33237B8 *)method->rgctx_data->_6_System_Func_T__BgmPlayArgs___ctor);
    v19 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v19->vtable[0].methodPtr) & 1) == 0 )
      v19 = (Il2CppClass *)sub_1BB5FA4(v19);
    *((_QWORD *)v19->static_fields + 1) = v11;
    v20 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v20->vtable[0].methodPtr) & 1) == 0 )
      v20 = (Il2CppClass *)sub_1BB5FA4(v20);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v20->static_fields + 8), (int32_t)v11, v17, v18);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                               (System_Func_TSource__TResult__o *)v11,
                                                               (const MethodInfo_2E693AC *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__BgmPlayArgs_);
  v22 = System_Linq_Enumerable__ToArray_object_(
          v21,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v25 = (BgmPlayArgsGroup_o *)sub_1B64314(BgmPlayArgsGroup_TypeInfo, v23, v24);
  BgmPlayArgsGroup___ctor_38017092(v25, (BgmPlayArgs_array *)v22, 0LL);
  return v25;
}


System_String_o *__fastcall BgmManager__ExtractCueName(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  __int64 v6; // x8

  if ( (byte_49FBA66 & 1) == 0 )
  {
    sub_1B640C8(&char___TypeInfo, name);
    byte_49FBA66 = 1;
  }
  v4 = (System_Char_array *)sub_1B64170(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  v4->m_Items[2] = 47;
  if ( !name || (v4 = (System_Char_array *)System_String__Split_61397544(name, v4, 0LL)) == 0LL )
LABEL_9:
    sub_1B64324(v4);
  v6 = *(_QWORD *)&v4->max_length;
  if ( !(_DWORD)v6 )
LABEL_10:
    sub_1B6432C(v4, v5);
  return *(System_String_o **)((char *)&v4->m_Items[2] + (((v6 << 32) - 0x100000000LL) >> 29));
}


void __fastcall BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_49FBA4E & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    byte_49FBA4E = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopBgm(0LL, fadeoutTime, callback, v3);
}


bool __fastcall BgmManager__FadeoutBgmLocal_object_(
        BgmManager_o *this,
        float fadeoutTime,
        System_String_o *name,
        const MethodInfo_2E2B5F4 *method)
{
  const MethodInfo_2E2B5F4_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 _0_BgmManager___c__DisplayClass67_0_T; // x0
  BgmManager___c__DisplayClass67_0_T__o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_T__o *v15; // x20
  Il2CppClass *_5_System_Func_T__bool; // x8
  System_Func_object__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_bool___, name);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_bool___, v9);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_BgmManager___c__DisplayClass67_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass67_0_T = sub_1BB5FA4(_0_BgmManager___c__DisplayClass67_0_T);
  v11 = (BgmManager___c__DisplayClass67_0_T__o *)sub_1B64314(_0_BgmManager___c__DisplayClass67_0_T, name, method);
  BgmManager___c__DisplayClass67_0_object____ctor(
    v11,
    (const MethodInfo_30007B8 *)method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor);
  if ( !v11 )
    sub_1B64324(v12);
  v11->fields.fadeoutTime = fadeoutTime;
  v15 = BgmManager__EnumeratePlayersHavingBgmName_object_(
          this,
          name,
          (const MethodInfo_2E2B220 *)method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_);
  _5_System_Func_T__bool = method->rgctx_data->_5_System_Func_T__bool_;
  if ( (BYTE5(_5_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
    _5_System_Func_T__bool = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_5_System_Func_T__bool_);
  v17 = (System_Func_object__bool__o *)sub_1B64314(_5_System_Func_T__bool, v13, v14);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass67_0_T___FadeoutBgmLocal_b__0,
    (const MethodInfo_3323110 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                               (System_Func_TSource__TResult__o *)v17,
                                                               (const MethodInfo_2E684E8 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v18,
                                                               (const MethodInfo_2E71094 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v19, (const MethodInfo_2E462CC *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0

  if ( (byte_49FBA57 & 1) == 0 )
  {
    sub_1B640C8(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___, v2);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_49FBA57 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B64324(v7);
    BgmManager__FadeoutBgmLocal_object_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0LL,
      (const MethodInfo_2E2B5F4 *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__FixedUpdate(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x19
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
  System_Collections_IEnumerable_o *bgmPlayers; // x8
  System_Collections_IEnumerable_o **p_bgmPlayers; // x25
  BgmPlayerBase_o *jinglePlayer; // x0
  bool IsPlaying; // w0
  int v26; // w26
  System_Collections_Generic_IEnumerable_TResult__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  BgmManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_object__bool__o *_9__78_0; // x21
  Il2CppObject *v33; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  _BOOL4 v37; // w0
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_IEnumerable_TResult__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  BgmManager___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_T__o *v44; // x20
  System_Action_object__o *_9__78_1; // x21
  Il2CppObject *v46; // x22
  struct BgmManager___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  const MethodInfo *v50; // x1
  BgmManager_o *v51; // x20
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v52; // x0
  System_Collections_Generic_IEnumerable_T__o *v53; // x21
  BgmManager___c_c *v54; // x0
  System_Action_object__o *_9__78_3; // x22
  Il2CppObject *v56; // x23
  struct BgmManager___c_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  const MethodInfo *v60; // x2
  System_Collections_IEnumerable_o *v61; // x19
  System_Action_object__o *v62; // x20
  Il2CppObject *v63; // x21
  struct BgmManager___c_StaticFields *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3

  v2 = this;
  if ( (byte_49FBA6D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GeneralBgmPlayer__TypeInfo, method);
    sub_1B640C8(&System_Action_BgmPlayerBase__TypeInfo, v3);
    sub_1B640C8(&System_Action_BgmPlayArgs__TypeInfo, v4);
    sub_1B640C8(&Method_BasicHelper_ForEach_BgmPlayArgs___, v5);
    sub_1B640C8(&Method_BasicHelper_ForEach_GeneralBgmPlayer___, v6);
    sub_1B640C8(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, v7);
    sub_1B640C8(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___, v8);
    sub_1B640C8(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___, v9);
    sub_1B640C8(&BgmManager_TypeInfo, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v13);
    sub_1B640C8(&System_Func_GeneralBgmPlayer__bool__TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v16);
    sub_1B640C8(&Method_BgmManager___c__FixedUpdate_b__78_0__, v17);
    sub_1B640C8(&Method_BgmManager___c__FixedUpdate_b__78_1__, v18);
    sub_1B640C8(&Method_BgmManager___c__FixedUpdate_b__78_2__, v19);
    sub_1B640C8(&Method_BgmManager___c__FixedUpdate_b__78_3__, v20);
    this = (BgmManager_o *)sub_1B640C8(&BgmManager___c_TypeInfo, v21);
    byte_49FBA6D = 1;
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
      IsPlaying = BgmPlayerBase__IsPlaying(jinglePlayer, method);
      bgmPlayers = *p_bgmPlayers;
      v26 = IsPlaying;
    }
    else
    {
      v26 = 0;
    }
    v27 = System_Linq_Enumerable__OfType_object_(
            bgmPlayers,
            (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    v30 = BgmManager___c_TypeInfo;
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v30 = BgmManager___c_TypeInfo;
    }
    _9__78_0 = (System_Func_object__bool__o *)v30->static_fields->__9__78_0;
    if ( !_9__78_0 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = BgmManager___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v30->static_fields->__9;
      _9__78_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GeneralBgmPlayer__bool__TypeInfo, v28, v29);
      System_Func_object__bool____ctor(_9__78_0, v33, Method_BgmManager___c__FixedUpdate_b__78_0__, 0LL);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__78_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__78_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__78_0, (int32_t)_9__78_0, v35, v36);
    }
    v37 = System_Linq_Enumerable__Any_object__48531816(
            v31,
            (System_Func_TSource__bool__o *)_9__78_0,
            (const MethodInfo_2E48968 *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v37 & v26) != 0 )
    {
      v40 = System_Linq_Enumerable__OfType_object_(
              *p_bgmPlayers,
              (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
      v43 = BgmManager___c_TypeInfo;
      v44 = (System_Collections_Generic_IEnumerable_T__o *)v40;
      if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
        v43 = BgmManager___c_TypeInfo;
      }
      _9__78_1 = (System_Action_object__o *)v43->static_fields->__9__78_1;
      if ( !_9__78_1 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = BgmManager___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v43->static_fields->__9;
        _9__78_1 = (System_Action_object__o *)sub_1B64314(System_Action_GeneralBgmPlayer__TypeInfo, v41, v42);
        System_Action_object____ctor(_9__78_1, v46, Method_BgmManager___c__FixedUpdate_b__78_1__, 0LL);
        v47 = BgmManager___c_TypeInfo->static_fields;
        v47->__9__78_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__78_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->__9__78_1, (int32_t)_9__78_1, v48, v49);
      }
      BasicHelper__ForEach_object_(
        v44,
        (System_Action_T__o *)_9__78_1,
        (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v2->fields.isBgmStopJingle = 1;
    }
    else if ( !v37
           && v2->fields.isBgmStopJingle
           && v26 == 0
           && BgmManager__ExistsPlayerHavingBgmName_object_(
                v2,
                0LL,
                (const MethodInfo_2E2B3EC *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
    {
      this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                               v2,
                               (const MethodInfo_2E2B438 *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
      if ( !this )
        goto LABEL_47;
      v51 = this;
      v52 = BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, v50);
      v53 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                                                             (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      this = (BgmManager_o *)BgmManager__StopBgmLocal_object_(
                               v2,
                               0LL,
                               (const MethodInfo_2E2B7E0 *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
      if ( !v53 )
        goto LABEL_47;
      if ( v53[1].monitor )
      {
        v54 = BgmManager___c_TypeInfo;
        if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
          v54 = BgmManager___c_TypeInfo;
        }
        _9__78_3 = (System_Action_object__o *)v54->static_fields->__9__78_3;
        if ( !_9__78_3 )
        {
          if ( !v54->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v54);
            v54 = BgmManager___c_TypeInfo;
          }
          v56 = (Il2CppObject *)v54->static_fields->__9;
          _9__78_3 = (System_Action_object__o *)sub_1B64314(System_Action_BgmPlayArgs__TypeInfo, v38, v39);
          System_Action_object____ctor(_9__78_3, v56, Method_BgmManager___c__FixedUpdate_b__78_3__, 0LL);
          v57 = BgmManager___c_TypeInfo->static_fields;
          v57->__9__78_3 = (struct System_Action_BgmPlayArgs__o *)_9__78_3;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v57->__9__78_3, (int32_t)_9__78_3, v58, v59);
        }
        BasicHelper__ForEach_object_(
          v53,
          (System_Action_T__o *)_9__78_3,
          (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BgmPlayArgs___);
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        BgmManager__PlayBgm_37999816((BgmPlayArgsGroup_o *)v51, 0LL, v60);
      }
    }
    if ( !v26 )
      v2->fields.isBgmStopJingle = 0;
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
    v61 = *p_bgmPlayers;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v62 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 10);
    if ( !v62 )
    {
      if ( !LODWORD(this[2].fields.mainBgmPlayer) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (BgmManager_o *)BgmManager___c_TypeInfo;
      }
      v63 = *(Il2CppObject **)this[2].monitor;
      v62 = (System_Action_object__o *)sub_1B64314(System_Action_BgmPlayerBase__TypeInfo, v38, v39);
      System_Action_object____ctor(v62, v63, Method_BgmManager___c__FixedUpdate_b__78_2__, 0LL);
      v64 = BgmManager___c_TypeInfo->static_fields;
      v64->__9__78_2 = (struct System_Action_BgmPlayerBase__o *)v62;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v64->__9__78_2, (int32_t)v62, v65, v66);
    }
    if ( v61 )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)v61,
        (System_Action_T__o *)v62,
        (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
      return;
    }
LABEL_47:
    sub_1B64324(this);
  }
}


void __fastcall BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0

  if ( (byte_49FBA5A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_49FBA5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B64324(v4);
    LODWORD(Instance[4].monitor) = 0;
  }
}


CriAtomSource_o *__fastcall BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49FBA6B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___, method);
    byte_49FBA6B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_object_(
                              gameObject,
                              (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t __fastcall BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  System_String_o *CueSheet; // x0
  SoundManager_c *v6; // x8
  System_String_o *v7; // x19

  if ( (byte_49FBA40 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    sub_1B640C8(&SoundManager_TypeInfo, v3);
    byte_49FBA40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  bool v4; // w8
  System_String_o *result; // x0
  UnityEngine_Object_c *klass; // x8

  if ( (byte_49FBA52 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_49FBA52 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v4 )
  {
    if ( !Instance || (klass = Instance[2].klass) == 0LL )
      sub_1B64324(0LL);
    return (System_String_o *)klass->_1.namespaze;
  }
  return result;
}


System_String_o *__fastcall BgmManager__GetMainBgmName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  System_String_o **p_COSMOS_IN_THE_LOSTBELT_BGM_NAME; // x19
  int32_t UiFlag; // w19
  System_Collections_ICollection_o *ClearWarIdList; // x20
  BalanceConfig_c *v12; // x0
  BalanceConfig_c *v13; // x0
  BgmManager_c *v14; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  System_String_o *bgmName; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FBA6E & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, v1);
    sub_1B640C8(&BgmManager_TypeInfo, v2);
    sub_1B640C8(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v4);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FBA6E = 1;
  }
  bgmName = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
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
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
            v12->static_fields->OrdealCallWarId,
            (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
LABEL_15:
      v14 = BgmManager_TypeInfo;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        v14 = BgmManager_TypeInfo;
      }
      static_fields = v14->static_fields;
      if ( UiFlag == 1 )
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
      else
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &static_fields->DEFAULT_MAIN_BGM_NAME;
    }
    else
    {
      v13 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v13->static_fields->OrdealCallClearBgmName;
    }
  }
  return *p_COSMOS_IN_THE_LOSTBELT_BGM_NAME;
}


float __fastcall BgmManager__GetMasterVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  BgmManager_c *v2; // x0

  if ( (byte_49FBA44 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, v1);
    byte_49FBA44 = 1;
  }
  v2 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v2 = BgmManager_TypeInfo;
  }
  return v2->static_fields->masterVolume;
}


JinglePlayer_o *__fastcall BgmManager__GetOrCreateJinglePlayer(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  JinglePlayer_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_String_o *bgmName; // x8
  JinglePlayer_o **p_jinglePlayer; // x20
  __int64 v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  JinglePlayer_c *klass; // x9
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *jinglePlayer; // x1
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 bgmName_low; // x10
  __int64 v24; // x8

  if ( (byte_49FBA6A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_JinglePlayer___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___, v3);
    sub_1B640C8(&JinglePlayer_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v6);
    byte_49FBA6A = 1;
  }
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  v8 = (JinglePlayer_o *)System_Linq_Enumerable__ToArray_object_(
                           v7,
                           (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !v8 )
    goto LABEL_15;
  bgmName = v8->fields.bgmName;
  if ( !bgmName )
  {
    v13 = sub_1B64314(JinglePlayer_TypeInfo, v9, v10);
    *(_DWORD *)(v13 + 36) = -1082130432;
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    this->fields.jinglePlayer = (struct JinglePlayer_o *)v13;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.jinglePlayer, v13, v14, v15);
    bgmPlayers = this->fields.bgmPlayers;
    if ( bgmPlayers )
    {
      v8 = *p_jinglePlayer;
      if ( *p_jinglePlayer )
      {
        klass = v8->klass;
        v8->fields.index = bgmPlayers->fields._size;
        ((void (__fastcall *)(JinglePlayer_o *, Il2CppMethodPointer))klass->vtable._5_Initialize.method)(
          v8,
          klass->vtable._6_Reset.methodPtr);
        v8 = (JinglePlayer_o *)this->fields.bgmPlayers;
        if ( v8 )
        {
          jinglePlayer = (Il2CppObject *)this->fields.jinglePlayer;
          v21 = *(_QWORD *)&v8->fields.index;
          v22 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++HIDWORD(v8->fields.bgmName);
          if ( v21 )
          {
            bgmName_low = SLODWORD(v8->fields.bgmName);
            if ( (unsigned int)bgmName_low >= *(_DWORD *)(v21 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)v8,
                jinglePlayer,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = v21 + 8 * bgmName_low;
              LODWORD(v8->fields.bgmName) = bgmName_low + 1;
              *(_QWORD *)(v24 + 32) = jinglePlayer;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)jinglePlayer, v18, v19);
            }
            return *p_jinglePlayer;
          }
        }
      }
    }
LABEL_15:
    sub_1B64324(v8);
  }
  if ( !(_DWORD)bgmName )
    sub_1B6432C(v8, v9);
  p_jinglePlayer = (JinglePlayer_o **)&v8->fields.bgmVolume;
  return *p_jinglePlayer;
}


SubBgmPlayer_o *__fastcall BgmManager__GetOrCreateSubBgmPlayer(
        BgmManager_o *this,
        System_String_o *bgmName,
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
  __int64 v16; // x21
  System_Collections_Generic_List_object__o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Func_object__bool__o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *object; // x21
  BgmManager___c_c *v28; // x0
  System_Func_object__bool__o *_9__72_1; // x21
  Il2CppObject *v30; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x2
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  Il2CppClass *klass; // x9
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8

  if ( (byte_49FBA69 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_SubBgmPlayer___, bgmName);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_SubBgmPlayer___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___, v7);
    sub_1B640C8(&System_Func_SubBgmPlayer__bool__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v10);
    sub_1B640C8(&SubBgmPlayer_TypeInfo, v11);
    sub_1B640C8(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, v12);
    sub_1B640C8(&Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__, v13);
    sub_1B640C8(&BgmManager___c__DisplayClass72_0_TypeInfo, v14);
    sub_1B640C8(&BgmManager___c_TypeInfo, v15);
    byte_49FBA69 = 1;
  }
  v16 = sub_1B64314(BgmManager___c__DisplayClass72_0_TypeInfo, bgmName, method);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_22;
  *(_QWORD *)(v16 + 16) = bgmName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)bgmName, v18, v19);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v21 = System_Linq_Enumerable__ToArray_object_(
          v20,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v24 = (System_Func_object__bool__o *)sub_1B64314(System_Func_SubBgmPlayer__bool__TypeInfo, v22, v23);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v16,
    Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             v21,
             (System_Func_T__bool__o *)v24,
             (const MethodInfo_2E2543C *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( object )
    return (SubBgmPlayer_o *)object;
  v28 = BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v28 = BgmManager___c_TypeInfo;
  }
  _9__72_1 = (System_Func_object__bool__o *)v28->static_fields->__9__72_1;
  if ( !_9__72_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = BgmManager___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__72_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_SubBgmPlayer__bool__TypeInfo, v25, v26);
    System_Func_object__bool____ctor(_9__72_1, v30, Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__72_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__72_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__72_1, (int32_t)_9__72_1, v32, v33);
  }
  v17 = (System_Collections_Generic_List_object__o *)BasicHelper__Find_object_(
                                                       v21,
                                                       (System_Func_T__bool__o *)_9__72_1,
                                                       (const MethodInfo_2E2543C *)Method_BasicHelper_Find_SubBgmPlayer___);
  object = (Il2CppObject *)v17;
  if ( v17 )
    return (SubBgmPlayer_o *)object;
  if ( !v21 )
LABEL_22:
    sub_1B64324(v17);
  if ( (int)v21->max_length <= 1 )
  {
    object = (Il2CppObject *)sub_1B64314(SubBgmPlayer_TypeInfo, v34, v35);
    HIDWORD(object[2].klass) = -1082130432;
    System_Object___ctor(object, 0LL);
    bgmPlayers = this->fields.bgmPlayers;
    if ( bgmPlayers )
    {
      klass = object->klass;
      LODWORD(object[1].klass) = bgmPlayers->fields._size;
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))klass->vtable[5].method)(
        object,
        klass->vtable[6].methodPtr);
      v17 = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
      if ( v17 )
      {
        items = v17->fields._items;
        v42 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
        ++v17->fields._version;
        if ( items )
        {
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              object,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v44[4] = (Il2CppClass *)object;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)object, v39, v40);
          }
          return (SubBgmPlayer_o *)object;
        }
      }
    }
    goto LABEL_22;
  }
  return (SubBgmPlayer_o *)System_Linq_Enumerable__First_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                             (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
}


void __fastcall BgmManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FBA3F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_49FBA3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B64324(v4);
    BgmManager__InitializeLocal((BgmManager_o *)Instance, v5);
  }
}


void __fastcall BgmManager__InitializeLocal(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BgmManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  __int64 v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct MainBgmPlayer_o *mainBgmPlayer; // x1
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v21; // x8
  System_Collections_Generic_List_object__o *v22; // x19
  System_Action_object__o *v23; // x20
  Il2CppObject *v24; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  BgmManager_c *v28; // x0

  v3 = this;
  if ( (byte_49FBA5B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BgmPlayerBase__TypeInfo, method);
    sub_1B640C8(&BgmManager_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v7);
    sub_1B640C8(&MainBgmPlayer_TypeInfo, v8);
    sub_1B640C8(&Method_BgmManager___c__InitializeLocal_b__50_0__, v9);
    this = (BgmManager_o *)sub_1B640C8(&BgmManager___c_TypeInfo, v10);
    byte_49FBA5B = 1;
  }
  bgmPlayers = v3->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_21;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v12 = sub_1B64314(MainBgmPlayer_TypeInfo, method, v2);
    *(_DWORD *)(v12 + 36) = -1082130432;
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    v3->fields.mainBgmPlayer = (struct MainBgmPlayer_o *)v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.mainBgmPlayer, v12, v13, v14);
    mainBgmPlayer = v3->fields.mainBgmPlayer;
    if ( !mainBgmPlayer )
      goto LABEL_21;
    mainBgmPlayer->fields.index = 0;
    this = (BgmManager_o *)v3->fields.bgmPlayers;
    if ( !this )
      goto LABEL_21;
    v18 = *(_QWORD *)&this->fields.m_CachedPtr;
    v19 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v18 )
      goto LABEL_21;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v18 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)mainBgmPlayer,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = v18 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v21 + 32) = mainBgmPlayer;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)mainBgmPlayer, v15, v16);
    }
  }
  v22 = (System_Collections_Generic_List_object__o *)v3->fields.bgmPlayers;
  this = (BgmManager_o *)BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
  }
  v23 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 1);
  if ( !v23 )
  {
    if ( !LODWORD(this[2].fields.mainBgmPlayer) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v24 = *(Il2CppObject **)this[2].monitor;
    v23 = (System_Action_object__o *)sub_1B64314(System_Action_BgmPlayerBase__TypeInfo, method, v2);
    System_Action_object____ctor(v23, v24, Method_BgmManager___c__InitializeLocal_b__50_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__50_0, (int32_t)v23, v26, v27);
  }
  if ( !v22 )
LABEL_21:
    sub_1B64324(this);
  System_Collections_Generic_List_object___ForEach(
    v22,
    (System_Action_T__o *)v23,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v28 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v28);
}


bool __fastcall BgmManager__IsKeepSubBgm(BgmManager_o *this, const MethodInfo *method)
{
  return this->fields.enableCounter_KeepSubBgm > 0;
}


bool __fastcall BgmManager__IsLoadingLocal(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  BgmManager_o *v4; // x19
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x8
  struct System_Collections_Generic_List_string__o *v8; // x8

  v4 = this;
  if ( (byte_49FBA65 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, name);
    this = (BgmManager_o *)sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    byte_49FBA65 = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)v4->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_object___Contains(
               loadingBgmCueNameList,
               (Il2CppObject *)this,
               (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_1B64324(this);
  }
  v8 = v4->fields.loadingBgmCueNameList;
  if ( !v8 )
    goto LABEL_8;
  return v8->fields._size > 0;
}


bool __fastcall BgmManager__IsPlayBgm(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0

  if ( (byte_49FBA47 & 1) == 0 )
  {
    sub_1B640C8(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_49FBA47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1B64324(v6);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_2E2B3EC *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool __fastcall BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0

  if ( (byte_49FBA53 & 1) == 0 )
  {
    sub_1B640C8(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_49FBA53 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1B64324(v6);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_2E2B3EC *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool __fastcall BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0

  if ( (byte_49FBA64 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, bgmName);
    byte_49FBA64 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName((BgmManager_o *)Instance, bgmName, v5);
  if ( !Instance )
    sub_1B64324(CueName);
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0LL) != 0LL;
}


void __fastcall BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v7; // x0
  bool v8; // w19

  if ( (byte_49FBA58 & 1) == 0 )
  {
    sub_1B640C8(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___, method);
    sub_1B640C8(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_49FBA58 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B64324(v7);
    v8 = isPause;
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v8,
      0LL,
      (const MethodInfo_2E2B710 *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v8,
      0LL,
      (const MethodInfo_2E2B710 *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmManager__PauseBgmLocal_object_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_2E2B710 *method)
{
  const MethodInfo_2E2B710_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass70_0_T; // x0
  BgmManager___c__DisplayClass70_0_T__o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  Il2CppClass *_5_System_Action_T; // x8
  System_Action_object__o *v15; // x21

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6000(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass70_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass70_0_T = sub_1BB5FA4(_0_BgmManager___c__DisplayClass70_0_T);
  v9 = (BgmManager___c__DisplayClass70_0_T__o *)sub_1B64314(_0_BgmManager___c__DisplayClass70_0_T, isPause, name);
  BgmManager___c__DisplayClass70_0_object____ctor(
    v9,
    (const MethodInfo_30019D8 *)method->rgctx_data->_1_BgmManager___c__DisplayClass70_0_T___ctor);
  if ( !v9 )
    sub_1B64324(v10);
  v9->fields.isPause = isPause;
  v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                         (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                         (const MethodInfo_2E62C20 *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  _5_System_Action_T = method->rgctx_data->_5_System_Action_T_;
  if ( (BYTE5(_5_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    _5_System_Action_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_5_System_Action_T_);
  v15 = (System_Action_object__o *)sub_1B64314(_5_System_Action_T, v11, v12);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)v9,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass70_0_T___PauseBgmLocal_b__0,
    (const MethodInfo_31461EC *)method->rgctx_data->_6_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v13,
    (System_Action_T__o *)v15,
    (const MethodInfo_2E26860 *)method->rgctx_data->_7_BasicHelper_ForEach_T_);
}


void __fastcall BgmManager__PlayBgm(
        System_String_o *name,
        float volume,
        float fadeTime,
        int64_t startTime,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  BgmPlayArgsGroup_o *v15; // x0
  BgmPlayArgsGroup_o *v16; // x22
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x2
  System_Nullable_float__o volumeNullable; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_float__o p_volumeNullable; // 0:x0.8
  System_Nullable_float__o v21; // 0:x2.8

  if ( (byte_49FBA49 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, startTime);
    sub_1B640C8(&BgmPlayArgsGroup_TypeInfo, v11);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v12);
    byte_49FBA49 = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0LL;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
  v15 = (BgmPlayArgsGroup_o *)sub_1B64314(BgmPlayArgsGroup_TypeInfo, v13, v14);
  v21 = volumeNullable;
  v16 = v15;
  BgmPlayArgsGroup___ctor_37999712(v15, name, v21, fadeTime, startTime, v17);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_37999816(v16, finishCallback, v18);
}


void __fastcall BgmManager__PlayBgm_37999816(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x4

  if ( (byte_49FBA4B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, finishCallback);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_49FBA4B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !Instance )
      sub_1B64324(v7);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, 1, v8);
  }
}


void __fastcall BgmManager__PlayBgm_38000012(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BgmPlayArgsGroup_o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49FBA4A & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, subArray);
    sub_1B640C8(&BgmPlayArgsGroup_TypeInfo, v7);
    byte_49FBA4A = 1;
  }
  v8 = (BgmPlayArgsGroup_o *)sub_1B64314(BgmPlayArgsGroup_TypeInfo, subArray, finishCallback);
  BgmPlayArgsGroup___ctor(v8, main, (BgmPlayArgs_array *)subArray, v9);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_37999816(v8, finishCallback, v10);
}


void __fastcall BgmManager__PlayJingle(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_49FBA54 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    byte_49FBA54 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1B64324(v9);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_49FBA68 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, name);
    sub_1B640C8(&Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, v9);
    sub_1B640C8(&BgmManager___c__DisplayClass71_0_TypeInfo, v10);
    byte_49FBA68 = 1;
  }
  v11 = sub_1B64314(BgmManager___c__DisplayClass71_0_TypeInfo, name, callbackFunc);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)name, v15, v16);
  *(float *)(v11 + 32) = volume;
  *(_QWORD *)(v11 + 40) = callbackFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 40), (int32_t)callbackFunc, v17, v18);
  v19 = *(System_String_o **)(v11 + 24);
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)v11, Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, 0LL);
  BgmManager__PreloadBgm(this, v19, v22, v23);
}


void __fastcall BgmManager__PlayJingle_38004412(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_49FBA55 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    byte_49FBA55 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, 0LL, v3);
}


void __fastcall BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FBA4C & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    byte_49FBA4C = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_38000012(args, 0LL, 0LL, v2);
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

  if ( (byte_49FBA60 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, method);
    byte_49FBA60 = 1;
  }
  cacheArgsGroup = this->fields.cacheArgsGroup;
  if ( cacheArgsGroup )
  {
    v4 = BgmPlayArgsGroup__AllArgsListNullExcluded(cacheArgsGroup, method);
    v5 = System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4,
           (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    if ( !v5 )
      sub_1B64324(0LL);
    v9 = *(_QWORD *)&v5->max_length;
    v10 = v5;
    if ( (int)v9 >= 1 )
    {
      v11 = 0LL;
      do
      {
        if ( v11 >= (unsigned int)v9 )
          sub_1B6432C(v5, v6);
        BgmManager__PlayPreloadedBgm(this, (BgmPlayArgs_o *)v10->m_Items[v11], v7);
        LODWORD(v9) = v10->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)v9 );
    }
    this->fields.cacheArgsGroup = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cacheArgsGroup, 0, (int32_t)v7, v8);
  }
}


void __fastcall BgmManager__PlayPreloadedBgm(BgmManager_o *this, BgmPlayArgs_o *args, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *BgmName_k__BackingField; // x20
  const MethodInfo *v7; // x2
  BgmPlayArgs_c *klass; // x8
  unsigned int methodPtr_low; // w9
  __int64 v10; // x11
  __int64 v11; // x11
  void *mainBgmPlayer; // x0

  if ( (byte_49FBA61 & 1) == 0 )
  {
    sub_1B640C8(&MainBgmPlayArgs_TypeInfo, args);
    sub_1B640C8(&SubBgmPlayArgs_TypeInfo, v5);
    byte_49FBA61 = 1;
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
          sub_1B64324(0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  _BOOL8 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x21
  Il2CppObject *Instance; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Object_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x21
  BgmManager_o *v20; // x20
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3

  if ( (byte_49FBA4D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    sub_1B640C8(&Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, v6);
    sub_1B640C8(&BgmManager___c__DisplayClass36_0_TypeInfo, v7);
    byte_49FBA4D = 1;
  }
  v8 = sub_1B64314(BgmManager___c__DisplayClass36_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_QWORD *)(v8 + 24) = args;
  v12 = v8 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)args, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v8 + 16) = Instance;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)Instance, v14, v15);
  v16 = *(UnityEngine_Object_o **)(v8 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
  if ( !v9 )
  {
    if ( *(_QWORD *)v12 )
    {
      v19 = *(System_String_o **)(*(_QWORD *)v12 + 16LL);
      v20 = *(BgmManager_o **)(v8 + 16);
      v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
      System_Action___ctor(v21, (Il2CppObject *)v8, Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, 0LL);
      if ( v20 )
      {
        BgmManager__PreloadBgm(v20, v19, v21, v22);
        return;
      }
    }
LABEL_10:
    sub_1B64324(v9);
  }
}


void __fastcall BgmManager__PreloadAndPlayBgms(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        bool isPlay,
        const MethodInfo *method)
{
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
  __int64 v21; // x19
  BgmPlayArgsGroup_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  bool v25; // w24
  BgmPlayArgsGroup_o **v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  struct BgmPlayArgsGroup_o *v33; // x1
  const MethodInfo *v34; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v35; // x0
  System_Object_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_object__o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x23
  unsigned __int64 v45; // x24
  __int64 v46; // x22
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x2
  System_Action_object__o *v55; // x21
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  System_Object_array *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  ChainableActionParallel_o *v65; // x20
  __int64 v66; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  System_Action_o *v69; // x22
  int32_t v70; // w2
  int32_t v71; // w3

  if ( (byte_49FBA5F & 1) == 0 )
  {
    sub_1B640C8(&System_Action___TypeInfo, argsGroup);
    sub_1B640C8(&System_Action_Action__TypeInfo, v9);
    sub_1B640C8(&System_Action_TypeInfo, v10);
    sub_1B640C8(&ChainableActionParallel_TypeInfo, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Action_Action___Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Action_Action___ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Action_Action____ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_Action_Action___TypeInfo, v16);
    sub_1B640C8(&Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__, v17);
    sub_1B640C8(&BgmManager___c__DisplayClass57_0_TypeInfo, v18);
    sub_1B640C8(&Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__, v19);
    sub_1B640C8(&BgmManager___c__DisplayClass57_1_TypeInfo, v20);
    byte_49FBA5F = 1;
  }
  v21 = sub_1B64314(BgmManager___c__DisplayClass57_0_TypeInfo, argsGroup, finishCallback);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_24;
  *(_QWORD *)(v21 + 16) = this;
  v25 = isPlay;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)this, v23, v24);
  *(_QWORD *)(v21 + 24) = argsGroup;
  v26 = (BgmPlayArgsGroup_o **)(v21 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)argsGroup, v27, v28);
  *(_QWORD *)(v21 + 48) = finishCallback;
  *(_BYTE *)(v21 + 32) = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 48), (int32_t)finishCallback, v29, v30);
  v33 = *(struct BgmPlayArgsGroup_o **)(v21 + 24);
  if ( v33 )
  {
    this->fields.cacheArgsGroup = v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cacheArgsGroup, (int32_t)v33, v31, v32);
    v22 = *v26;
    if ( !*v26 )
      goto LABEL_24;
    v35 = BgmPlayArgsGroup__AllArgsListNullExcluded(v22, v34);
    v36 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v35,
            (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v21 + 40) = v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 40), (int32_t)v36, v37, v38);
    v41 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_Action_Action___TypeInfo,
                                                         v39,
                                                         v40);
    System_Collections_Generic_List_object____ctor(
      v41,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v44 = *(_QWORD *)(v21 + 40);
    if ( !v44 )
      goto LABEL_24;
    if ( *(int *)(v44 + 24) >= 1 )
    {
      v45 = 0LL;
      while ( 1 )
      {
        v46 = sub_1B64314(BgmManager___c__DisplayClass57_1_TypeInfo, v42, v43);
        System_Object___ctor((Il2CppObject *)v46, 0LL);
        if ( !v46 )
          break;
        *(_QWORD *)(v46 + 24) = v21;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 24), v21, v47, v48);
        if ( v45 >= *(unsigned int *)(v44 + 24) )
          goto LABEL_25;
        v52 = *(_QWORD *)(v44 + 32 + 8 * v45);
        *(_QWORD *)(v46 + 16) = v52;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 16), v52, v50, v51);
        v55 = (System_Action_object__o *)sub_1B64314(System_Action_Action__TypeInfo, v53, v54);
        System_Action_object____ctor(
          v55,
          (Il2CppObject *)v46,
          Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__,
          0LL);
        if ( !v41 )
          break;
        items = v41->fields._items;
        v59 = Method_System_Collections_Generic_List_Action_Action___Add__;
        ++v41->fields._version;
        if ( !items )
          break;
        size = v41->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v41,
            (Il2CppObject *)v55,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &items->obj.klass + size;
          v41->fields._size = size + 1;
          v61[4] = (Il2CppClass *)v55;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v55, v56, v57);
        }
        if ( (__int64)++v45 >= *(int *)(v44 + 24) )
          goto LABEL_17;
      }
LABEL_24:
      sub_1B64324(v22);
    }
LABEL_17:
    if ( !v41 )
      goto LABEL_24;
    v62 = System_Collections_Generic_List_object___ToArray(
            v41,
            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v65 = (ChainableActionParallel_o *)sub_1B64314(ChainableActionParallel_TypeInfo, v63, v64);
    ChainableActionParallel___ctor_46279192(v65, (System_Action_Action__array *)v62, 0LL);
    v66 = sub_1B64170(System_Action___TypeInfo, 1LL);
    v69 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v67, v68);
    System_Action___ctor(
      v69,
      (Il2CppObject *)v21,
      Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__,
      0LL);
    if ( !v66 )
      goto LABEL_24;
    if ( !*(_DWORD *)(v66 + 24) )
LABEL_25:
      sub_1B6432C(v22, v49);
    *(_QWORD *)(v66 + 32) = v69;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v66 + 32), (int32_t)v69, v70, v71);
    if ( !v65 )
      goto LABEL_24;
    v22 = (BgmPlayArgsGroup_o *)ChainableActionBase__Final(
                                  (ChainableActionBase_o *)v65,
                                  (System_Action_array *)v66,
                                  0LL);
    if ( !v22 )
      goto LABEL_24;
    ChainableActionBase__Execute((ChainableActionBase_o *)v22, 0LL);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v21 + 48), 0LL);
  }
}


bool __fastcall BgmManager__PreloadBgm(
        BgmManager_o *this,
        System_String_o *name,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  SoundManager_o *Instance; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  BgmManager_o *v19; // x0
  const MethodInfo *v20; // x2
  System_String_o *CueName; // x0
  Il2CppObject **v22; // x24
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *CueSheet; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  bool IsNullOrEmpty; // w22
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x3
  System_Collections_IEnumerator_o *v33; // x0

  if ( (byte_49FBA62 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, name);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Insert__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v10);
    sub_1B640C8(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, v11);
    sub_1B640C8(&BgmManager___c__DisplayClass61_0_TypeInfo, v12);
    byte_49FBA62 = 1;
  }
  v13 = sub_1B64314(BgmManager___c__DisplayClass61_0_TypeInfo, name, finishCallback);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 40) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)finishCallback, v17, v18);
  CueName = BgmManager__ExtractCueName(v19, name, v20);
  *(_QWORD *)(v13 + 24) = CueName;
  v22 = (Il2CppObject **)(v13 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)CueName, v23, v24);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CueSheet = SoundManager__GetCueSheet(Instance, *(System_String_o **)(v13 + 24), 0LL);
  *(_QWORD *)(v13 + 16) = CueSheet;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)CueSheet, v26, v27);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v13 + 16), 0LL);
  if ( !IsNullOrEmpty )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)Instance,
              *v22,
              (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_12:
        ActionExtensions__Call(*(System_Action_o **)(v13 + 40), 0LL);
        return !IsNullOrEmpty;
      }
      Instance = (SoundManager_o *)this->fields.addBindList;
      if ( Instance )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)Instance,
          *v22,
          (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
        Instance = (SoundManager_o *)this->fields.addBindList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            *v22,
            (const MethodInfo_34AE524 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_12;
        }
      }
    }
LABEL_14:
    sub_1B64324(Instance);
  }
  v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(v31, (Il2CppObject *)v13, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, 0LL);
  v33 = BgmManager__CoWaitSameAudioLoading(this, name, v31, v32);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BgmManager___c_c *v7; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *_9__53_0; // x20
  Il2CppObject *v10; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FBA5E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BgmPlayerBase__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v4);
    sub_1B640C8(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, v5);
    sub_1B640C8(&BgmManager___c_TypeInfo, v6);
    byte_49FBA5E = 1;
  }
  v7 = BgmManager___c_TypeInfo;
  bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v7 = BgmManager___c_TypeInfo;
  }
  _9__53_0 = (System_Action_object__o *)v7->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BgmManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__53_0 = (System_Action_object__o *)sub_1B64314(System_Action_BgmPlayerBase__TypeInfo, method, v2);
    System_Action_object____ctor(_9__53_0, v10, Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Action_BgmPlayerBase__o *)_9__53_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v12, v13);
  }
  if ( !bgmPlayers )
    sub_1B64324(v7);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__53_0,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__RemoveUnusedOldFromBindList(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BgmManager_o **v3; // x19
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
  BgmManager_o *v21; // x8
  int32_t m_CancellationTokenSource; // w20
  BgmManager_c *v23; // x0
  System_Collections_Generic_HashSet_T__o *v24; // x20
  const MethodInfo *v25; // x1
  System_Collections_Generic_IEnumerable_T__o *UsingCueNames; // x0
  const MethodInfo *v27; // x1
  BgmManager_c *klass; // x8
  BgmManager_o *v29; // x21
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  __int64 v33; // x21
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  const MethodInfo *v43; // x2
  Il2CppObject *CueName; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  System_Collections_Generic_List_object__o *v49; // x8
  int32_t v50; // w21
  Il2CppObject *Item; // x22
  BgmManager_o *v52; // x8
  int v53; // w22
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-70h] BYREF

  v3 = (BgmManager_o **)this;
  if ( (byte_49FBA6C & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_string__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_string__Contains__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_string__UnionWith__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_string___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_HashSet_string__TypeInfo, v11);
    sub_1B640C8(&System_IDisposable_TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v14);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveAt__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    this = (BgmManager_o *)sub_1B640C8(&SoundManager_TypeInfo, v20);
    byte_49FBA6C = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v21 = v3[4];
  if ( !v21 )
    goto LABEL_59;
  m_CancellationTokenSource = (int32_t)v21->fields.m_CancellationTokenSource;
  v23 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v23 = BgmManager_TypeInfo;
  }
  if ( m_CancellationTokenSource > v23->static_fields->ADD_BIND_MAX )
  {
    v24 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_string__TypeInfo,
                                                       method,
                                                       v2);
    System_Collections_Generic_HashSet_object____ctor(
      v24,
      (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = v3[8];
    if ( !this )
      goto LABEL_59;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v55 = v54;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v55,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v55.fields._current )
        sub_1B64324(0LL);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v55.fields._current,
                                                                       v25);
      if ( !v24 )
        sub_1B64324(UsingCueNames);
      System_Collections_Generic_HashSet_object___UnionWith(
        v24,
        UsingCueNames,
        (const MethodInfo_336AFC4 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v55,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    this = v3[10];
    if ( this )
    {
      this = (BgmManager_o *)BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, v27);
      if ( !this )
        goto LABEL_59;
      klass = this->klass;
      v29 = this;
      v30 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v30;
          p_offset += 4;
          if ( !v30 )
            goto LABEL_19;
        }
        v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_19:
        v32 = sub_1BB60A8(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v33 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
      if ( !v33 )
        sub_1B64324(0LL);
      while ( 1 )
      {
        v34 = *(_QWORD *)v33;
        v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
        {
          v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v35;
            v36 += 4;
            if ( !v35 )
              goto LABEL_26;
          }
          v37 = v34 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_26:
          v37 = sub_1BB60A8(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
          break;
        v38 = *(_QWORD *)v33;
        v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
        {
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v39;
            v40 += 4;
            if ( !v39 )
              goto LABEL_33;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_33:
          v41 = sub_1BB60A8(v33, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
        if ( !v42 )
          sub_1B64324(0LL);
        CueName = (Il2CppObject *)BgmManager__ExtractCueName((BgmManager_o *)v42, *(System_String_o **)(v42 + 16), v43);
        if ( !v24 )
          sub_1B64324(CueName);
        System_Collections_Generic_HashSet_object___Add(
          v24,
          CueName,
          (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
      v45 = *(_QWORD *)v33;
      v46 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
      {
        v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
        {
          --v46;
          v47 += 4;
          if ( !v46 )
            goto LABEL_42;
        }
        v48 = v45 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_42:
        v48 = sub_1BB60A8(v33, System_IDisposable_TypeInfo, 0LL);
      }
      this = (BgmManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v33, *(_QWORD *)(v48 + 8));
    }
    v49 = (System_Collections_Generic_List_object__o *)v3[4];
    if ( !v49 )
LABEL_59:
      sub_1B64324(this);
    v50 = v49->fields._size - 1;
    if ( v50 >= 1 )
    {
      do
      {
        this = (BgmManager_o *)System_Collections_Generic_List_object___get_Item(
                                 v49,
                                 v50,
                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v24 )
          break;
        this = (BgmManager_o *)System_Collections_Generic_HashSet_object___Contains(
                                 v24,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_336A4C4 *)Method_System_Collections_Generic_HashSet_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = v3[4];
          if ( !this )
            goto LABEL_59;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v50,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__releaseAudioAssetStorage((System_String_o *)Item, 0LL);
          this = v3[4];
          if ( !this )
            goto LABEL_59;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this,
            v50,
            (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_string__RemoveAt__);
          v52 = v3[4];
          if ( !v52 )
            goto LABEL_59;
          this = (BgmManager_o *)BgmManager_TypeInfo;
          v53 = (int)v52->fields.m_CancellationTokenSource;
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            this = (BgmManager_o *)BgmManager_TypeInfo;
          }
          if ( v53 <= *((_DWORD *)this[2].monitor + 6) )
            return;
        }
        if ( --v50 < 1 )
          return;
        v49 = (System_Collections_Generic_List_object__o *)v3[4];
      }
      while ( v49 );
      goto LABEL_59;
    }
  }
}


void __fastcall BgmManager__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FBA41 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_49FBA41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B64324(v4);
    BgmManager__ResetLocal((BgmManager_o *)Instance, v5);
  }
}


void __fastcall BgmManager__ResetLocal(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BgmManager___c_c *v7; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *_9__51_0; // x20
  Il2CppObject *v10; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FBA5C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BgmPlayerBase__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v4);
    sub_1B640C8(&Method_BgmManager___c__ResetLocal_b__51_0__, v5);
    sub_1B640C8(&BgmManager___c_TypeInfo, v6);
    byte_49FBA5C = 1;
  }
  v7 = BgmManager___c_TypeInfo;
  bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v7 = BgmManager___c_TypeInfo;
  }
  _9__51_0 = (System_Action_object__o *)v7->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BgmManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__51_0 = (System_Action_object__o *)sub_1B64314(System_Action_BgmPlayerBase__TypeInfo, method, v2);
    System_Action_object____ctor(_9__51_0, v10, Method_BgmManager___c__ResetLocal_b__51_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_BgmPlayerBase__o *)_9__51_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v12, v13);
  }
  if ( !bgmPlayers )
    sub_1B64324(v7);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BgmManager_c *v6; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_49FBA45 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, v2);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_49FBA45 = 1;
  }
  v6 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v6 = BgmManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( static_fields->masterVolume != volume )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = BgmManager_TypeInfo->static_fields;
    }
    static_fields->masterVolume = volume;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( !v9 )
    {
      if ( !Instance )
        sub_1B64324(v9);
      BgmManager__ReflectMasterVolumeLocal((BgmManager_o *)Instance, v10);
    }
  }
}


void __fastcall BgmManager__SetMute(bool isMute, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BgmManager_c *v5; // x0
  _BOOL4 v6; // w21
  struct BgmManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x20
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_49FBA43 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_49FBA43 = 1;
  }
  v5 = BgmManager_TypeInfo;
  v6 = isMute;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v5 = BgmManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( static_fields->isMute != v6 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BgmManager_TypeInfo->static_fields;
    }
    static_fields->isMute = v6;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( !v9 )
    {
      if ( !Instance )
        sub_1B64324(v9);
      BgmManager__SetMuteLocal((BgmManager_o *)Instance, isMute, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmManager__SetMuteLocal(BgmManager_o *this, bool isMute, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *v13; // x20

  if ( (byte_49FBA5D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BgmPlayerBase__TypeInfo, isMute);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v5);
    sub_1B640C8(&Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__, v6);
    sub_1B640C8(&BgmManager___c__DisplayClass52_0_TypeInfo, v7);
    byte_49FBA5D = 1;
  }
  v8 = sub_1B64314(BgmManager___c__DisplayClass52_0_TypeInfo, isMute, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_BYTE *)(v8 + 16) = isMute,
        bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers,
        v13 = (System_Action_object__o *)sub_1B64314(System_Action_BgmPlayerBase__TypeInfo, v10, v11),
        System_Action_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__,
          0LL),
        !bgmPlayers) )
  {
    sub_1B64324(v9);
  }
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v13,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v8; // x0

  if ( (byte_49FBA50 & 1) == 0 )
  {
    sub_1B640C8(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___, v2);
    sub_1B640C8(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v6);
    byte_49FBA50 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1B64324(v8);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        0LL,
        (const MethodInfo_2E2B7E0 *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        0LL,
        (const MethodInfo_2E2B5F4 *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
  }
}


void __fastcall BgmManager__StopBgm(
        System_String_o *name,
        float fadeoutTime,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v13; // x0
  bool v14; // w22

  if ( (byte_49FBA4F & 1) == 0 )
  {
    sub_1B640C8(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___, successCallback);
    sub_1B640C8(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, v7);
    sub_1B640C8(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___, v8);
    sub_1B640C8(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v11);
    byte_49FBA4F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v13 )
  {
    if ( !Instance )
      sub_1B64324(v13);
    if ( fadeoutTime <= 0.0 )
    {
      v14 = BgmManager__StopBgmLocal_object_(
              (BgmManager_o *)Instance,
              name,
              (const MethodInfo_2E2B7E0 *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
      if ( name && !v14 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__StopBgmLocal_object_(
          (BgmManager_o *)Instance,
          0LL,
          (const MethodInfo_2E2B7E0 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      v14 = BgmManager__FadeoutBgmLocal_object_(
              (BgmManager_o *)Instance,
              fadeoutTime,
              name,
              (const MethodInfo_2E2B5F4 *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
      if ( name && !v14 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__FadeoutBgmLocal_object_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0LL,
          (const MethodInfo_2E2B5F4 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    if ( v14 )
      ActionExtensions__Call(successCallback, 0LL);
  }
}


bool __fastcall BgmManager__StopBgmLocal_object_(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo_2E2B7E0 *method)
{
  const MethodInfo_2E2B220 **rgctx_data; // x8
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_T__o *v10; // x20
  Il2CppClass *_4_BgmManager___c__68_T; // x8
  Il2CppClass *v12; // x0
  System_Func_object__bool__o *v13; // x21
  Il2CppClass *v14; // x0
  const MethodInfo_2E2B7E0_RGCTXs *v15; // x8
  __int64 v16; // x0
  __int64 _3_System_Func_T__bool; // x8
  Il2CppObject *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppClass *v21; // x0
  Il2CppClass *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  rgctx_data = (const MethodInfo_2E2B220 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_bool___, name);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_bool___, v7);
    rgctx_data = (const MethodInfo_2E2B220 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000(method);
      rgctx_data = (const MethodInfo_2E2B220 **)method->rgctx_data;
    }
  }
  v10 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, name, *rgctx_data);
  _4_BgmManager___c__68_T = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (BYTE5(_4_BgmManager___c__68_T->vtable[0].methodPtr) & 1) == 0 )
    _4_BgmManager___c__68_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_4_BgmManager___c__68_T_);
  if ( !_4_BgmManager___c__68_T->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_4_BgmManager___c__68_T);
  v12 = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
    v12 = (Il2CppClass *)sub_1BB5FA4(v12);
  v13 = (System_Func_object__bool__o *)*((_QWORD *)v12->static_fields + 1);
  if ( !v13 )
  {
    v14 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1BB5FA4(v14);
    if ( !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    v15 = method->rgctx_data;
    v16 = (__int64)v15->_4_BgmManager___c__68_T_;
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    {
      v16 = sub_1BB5FA4(v16);
      v15 = method->rgctx_data;
    }
    _3_System_Func_T__bool = (__int64)v15->_3_System_Func_T__bool_;
    v18 = **(Il2CppObject ***)(v16 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__bool + 309) & 1) == 0 )
      _3_System_Func_T__bool = sub_1BB5FA4(_3_System_Func_T__bool);
    v13 = (System_Func_object__bool__o *)sub_1B64314(_3_System_Func_T__bool, v8, v9);
    System_Func_object__bool____ctor(
      v13,
      v18,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__68_T___StopBgmLocal_b__68_0,
      (const MethodInfo_3323110 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
    v21 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
      v21 = (Il2CppClass *)sub_1BB5FA4(v21);
    *((_QWORD *)v21->static_fields + 1) = v13;
    v22 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v22->vtable[0].methodPtr) & 1) == 0 )
      v22 = (Il2CppClass *)sub_1BB5FA4(v22);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v22->static_fields + 8), (int32_t)v13, v19, v20);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                                                               (System_Func_TSource__TResult__o *)v13,
                                                               (const MethodInfo_2E684E8 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v23,
                                                               (const MethodInfo_2E71094 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v24, (const MethodInfo_2E462CC *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__StopJingle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v5; // x0

  if ( (byte_49FBA56 & 1) == 0 )
  {
    sub_1B640C8(&Method_BgmManager_StopBgmLocal_JinglePlayer___, v1);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_49FBA56 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B64324(v5);
    BgmManager__StopBgmLocal_object_(
      (BgmManager_o *)Instance,
      0LL,
      (const MethodInfo_2E2B7E0 *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v9; // x0

  if ( (byte_49FBA51 & 1) == 0 )
  {
    sub_1B640C8(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, method);
    sub_1B640C8(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    byte_49FBA51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1B64324(v9);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        name,
        (const MethodInfo_2E2B7E0 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        name,
        (const MethodInfo_2E2B5F4 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__StopUnrequestedSubBgm(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *requestedBgmArgs,
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
  __int64 v17; // x20
  System_Object_array *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *SubArgsList_k__BackingField; // x21
  BgmManager___c_c *v22; // x0
  System_Func_object__object__o *_9__69_0; // x22
  Il2CppObject *v24; // x23
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  System_Func_object__bool__o *v34; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  BgmManager___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_T__o *v39; // x19
  System_Action_object__o *_9__69_2; // x20
  Il2CppObject *v41; // x21
  struct BgmManager___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3

  if ( (byte_49FBA67 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_SubBgmPlayer__TypeInfo, requestedBgmArgs);
    sub_1B640C8(&Method_BasicHelper_ForEach_SubBgmPlayer___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_string___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___, v9);
    sub_1B640C8(&System_Func_SubBgmPlayArgs__string__TypeInfo, v10);
    sub_1B640C8(&System_Func_SubBgmPlayer__bool__TypeInfo, v11);
    sub_1B640C8(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, v12);
    sub_1B640C8(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, v13);
    sub_1B640C8(&Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__, v14);
    sub_1B640C8(&BgmManager___c__DisplayClass69_0_TypeInfo, v15);
    sub_1B640C8(&BgmManager___c_TypeInfo, v16);
    byte_49FBA67 = 1;
  }
  v17 = sub_1B64314(BgmManager___c__DisplayClass69_0_TypeInfo, requestedBgmArgs, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( this->fields.enableCounter_KeepSubBgm <= 0 )
  {
    if ( !requestedBgmArgs )
      goto LABEL_19;
    SubArgsList_k__BackingField = requestedBgmArgs->fields._SubArgsList_k__BackingField;
    v22 = BgmManager___c_TypeInfo;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v22 = BgmManager___c_TypeInfo;
    }
    _9__69_0 = (System_Func_object__object__o *)v22->static_fields->__9__69_0;
    if ( !_9__69_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = BgmManager___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__69_0 = (System_Func_object__object__o *)sub_1B64314(System_Func_SubBgmPlayArgs__string__TypeInfo, v19, v20);
      System_Func_object__object____ctor(_9__69_0, v24, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, 0LL);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__69_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__69_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__69_0, (int32_t)_9__69_0, v26, v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__69_0,
                                                                 (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v18 = System_Linq_Enumerable__ToArray_object_(
            v28,
            (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v17 )
LABEL_19:
      sub_1B64324(v18);
    *(_QWORD *)(v17 + 16) = v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v18, v29, v30);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v34 = (System_Func_object__bool__o *)sub_1B64314(System_Func_SubBgmPlayer__bool__TypeInfo, v32, v33);
    System_Func_object__bool____ctor(
      v34,
      (Il2CppObject *)v17,
      Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__,
      0LL);
    v35 = System_Linq_Enumerable__Where_object_(
            v31,
            (System_Func_TSource__bool__o *)v34,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v38 = BgmManager___c_TypeInfo;
    v39 = (System_Collections_Generic_IEnumerable_T__o *)v35;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v38 = BgmManager___c_TypeInfo;
    }
    _9__69_2 = (System_Action_object__o *)v38->static_fields->__9__69_2;
    if ( !_9__69_2 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = BgmManager___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v38->static_fields->__9;
      _9__69_2 = (System_Action_object__o *)sub_1B64314(System_Action_SubBgmPlayer__TypeInfo, v36, v37);
      System_Action_object____ctor(_9__69_2, v41, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, 0LL);
      v42 = BgmManager___c_TypeInfo->static_fields;
      v42->__9__69_2 = (struct System_Action_SubBgmPlayer__o *)_9__69_2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42->__9__69_2, (int32_t)_9__69_2, v43, v44);
    }
    BasicHelper__ForEach_object_(
      v39,
      (System_Action_T__o *)_9__69_2,
      (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_SubBgmPlayer___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_String_o *__fastcall BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_1B64324(this);
  return mainBgmPlayer->fields.bgmName;
}


bool __fastcall BgmManager__get_IsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49FBA3D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_49FBA3D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v4 )
    sub_1B64324(0LL);
  return BgmManager__IsLoadingLocal((BgmManager_o *)v4, 0LL, v5);
}


bool __fastcall BgmManager__get_IsMute(const MethodInfo *method)
{
  __int64 v1; // x1
  BgmManager_c *v2; // x0

  if ( (byte_49FBA42 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, v1);
    byte_49FBA42 = 1;
  }
  v2 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v2 = BgmManager_TypeInfo;
  }
  return v2->static_fields->isMute;
}


bool __fastcall BgmManager__isLoading(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FBA48 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_49FBA48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1B64324(v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  BgmManager_o *_4__this; // x21
  __int64 v9; // x20
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct BgmManager_o *v13; // x1
  struct System_String_o *bgmName; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Func_bool__o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_WaitWhile_o *v23; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_49FBA76 & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, method);
    sub_1B640C8(&Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__, v4);
    sub_1B640C8(&BgmManager___c__DisplayClass63_0_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_WaitWhile_TypeInfo, v6);
    byte_49FBA76 = 1;
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
    v9 = sub_1B64314(BgmManager___c__DisplayClass63_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    if ( !v9
      || (v13 = this->fields.__4__this,
          *(_QWORD *)(v9 + 16) = v13,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)v13, v11, v12),
          bgmName = this->fields.bgmName,
          *(_QWORD *)(v9 + 24) = bgmName,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)bgmName, v15, v16),
          !_4__this) )
    {
      sub_1B64324(v10);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v9 + 24), v17) )
    {
      v20 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v18, v19);
      System_Func_bool____ctor(
        v20,
        (Il2CppObject *)v9,
        Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__,
        0LL);
      v23 = (UnityEngine_WaitWhile_o *)sub_1B64314(UnityEngine_WaitWhile_TypeInfo, v21, v22);
      UnityEngine_WaitWhile___ctor(v23, v20, 0LL);
      this->fields.__2__current = (Il2CppObject *)v23;
      p__2__current = &this->fields.__2__current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v23, v25, v26);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BgmManager__CoWaitSameAudioLoading_d__63_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBA71 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager___c_TypeInfo, v1);
    byte_49FBA71 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BgmManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BgmManager___c_TypeInfo->static_fields->__9 = (struct BgmManager___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BgmManager___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, (const MethodInfo *)x);
}


void __fastcall BgmManager___c___FixedUpdate_b__78_1(
        BgmManager___c_o *this,
        GeneralBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
  ((void (__fastcall *)(BgmPlayerBase_o *, void *))x->klass->vtable._13_FixedUpdate.method)(x, x->klass[1]._1.image);
}


void __fastcall BgmManager___c___FixedUpdate_b__78_3(
        BgmManager___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  const MethodInfo_35CE514 *v5; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x5
  System_Nullable_long__o v8; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_float__o p_fadeTime; // 0:x0.8
  System_Nullable_float__o v11; // 0:x1.8
  System_Nullable_float__o v12; // 0:x2.8
  System_Nullable_long__o v13; // 0:x0.16

  if ( (byte_49FBA72 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Nullable_long___ctor__, x);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v4);
    byte_49FBA72 = 1;
  }
  p_fadeTime = (System_Nullable_float__o)&fadeTime;
  fadeTime = 0LL;
  *(_QWORD *)&v8.fields.hasValue = 0LL;
  v8.fields.value = 0LL;
  System_Nullable_float____ctor(p_fadeTime, 0.0, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
  *(_QWORD *)&v13.fields.hasValue = &v8;
  v13.fields.value = 0LL;
  System_Nullable_long____ctor(v13, Method_System_Nullable_long___ctor__, v5);
  if ( !x )
    sub_1B64324(v6);
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
    sub_1B64324(this);
  return x->fields.bgmName == 0LL;
}


void __fastcall BgmManager___c___InitializeLocal_b__50_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields._BgmName_k__BackingField;
}


void __fastcall BgmManager___c___StopUnrequestedSubBgm_b__69_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._11_StopBgm.method)(
    x,
    0LL,
    x->klass->vtable._12_ExportPlayArgs.methodPtr);
}


void __fastcall BgmManager___c__54_object____cctor(const MethodInfo_2FFA04C *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BgmManager___c__54_T__c *klass; // x0
  __int64 _0_BgmManager___c__54_T; // x0
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  BgmManager___c__54_T__c *v9; // x0
  __int64 _2_BgmManager___c__54_T; // x0
  BgmManager___c__54_T__c *v11; // x0
  __int64 v12; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BgmManager___c__54_T__c *)sub_1BB5FA4(klass);
  _0_BgmManager___c__54_T = (__int64)klass->rgctx_data->_0_BgmManager___c__54_T_;
  if ( (*(_BYTE *)(_0_BgmManager___c__54_T + 309) & 1) == 0 )
    _0_BgmManager___c__54_T = sub_1BB5FA4(_0_BgmManager___c__54_T);
  v6 = (Il2CppObject *)sub_1B64314(_0_BgmManager___c__54_T, v1, v2);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BB5FA4(method->klass);
  System_Object___ctor(v6, 0LL);
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BgmManager___c__54_T__c *)sub_1BB5FA4(v9);
  _2_BgmManager___c__54_T = (__int64)v9->rgctx_data->_2_BgmManager___c__54_T_;
  if ( (*(_BYTE *)(_2_BgmManager___c__54_T + 309) & 1) == 0 )
    _2_BgmManager___c__54_T = sub_1BB5FA4(_2_BgmManager___c__54_T);
  **(_QWORD **)(_2_BgmManager___c__54_T + 184) = v6;
  v11 = method->klass;
  if ( (BYTE5(v11->vtable._0_Equals.methodPtr) & 1) == 0 )
    v11 = (BgmManager___c__54_T__c *)sub_1BB5FA4(v11);
  v12 = (__int64)v11->rgctx_data->_2_BgmManager___c__54_T_;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  sub_1B6406C(*(ServantStatusBattleListViewItem_o **)(v12 + 184), (int32_t)v6, v7, v8);
}


void __fastcall BgmManager___c__54_object____ctor(BgmManager___c__54_T__o *this, const MethodInfo_2FFA108 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__54_object____EnumeratePlayersHavingBgmName_b__54_0(
        BgmManager___c__54_T__o *this,
        Il2CppObject *x,
        const MethodInfo_2FFA110 *method)
{
  if ( !x )
    sub_1B64324(this);
  return x[1].monitor != 0LL;
}


void __fastcall BgmManager___c__68_object____cctor(const MethodInfo_2FFA484 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BgmManager___c__68_T__c *klass; // x0
  __int64 _0_BgmManager___c__68_T; // x0
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  BgmManager___c__68_T__c *v9; // x0
  __int64 _2_BgmManager___c__68_T; // x0
  BgmManager___c__68_T__c *v11; // x0
  __int64 v12; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BgmManager___c__68_T__c *)sub_1BB5FA4(klass);
  _0_BgmManager___c__68_T = (__int64)klass->rgctx_data->_0_BgmManager___c__68_T_;
  if ( (*(_BYTE *)(_0_BgmManager___c__68_T + 309) & 1) == 0 )
    _0_BgmManager___c__68_T = sub_1BB5FA4(_0_BgmManager___c__68_T);
  v6 = (Il2CppObject *)sub_1B64314(_0_BgmManager___c__68_T, v1, v2);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BB5FA4(method->klass);
  System_Object___ctor(v6, 0LL);
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BgmManager___c__68_T__c *)sub_1BB5FA4(v9);
  _2_BgmManager___c__68_T = (__int64)v9->rgctx_data->_2_BgmManager___c__68_T_;
  if ( (*(_BYTE *)(_2_BgmManager___c__68_T + 309) & 1) == 0 )
    _2_BgmManager___c__68_T = sub_1BB5FA4(_2_BgmManager___c__68_T);
  **(_QWORD **)(_2_BgmManager___c__68_T + 184) = v6;
  v11 = method->klass;
  if ( (BYTE5(v11->vtable._0_Equals.methodPtr) & 1) == 0 )
    v11 = (BgmManager___c__68_T__c *)sub_1BB5FA4(v11);
  v12 = (__int64)v11->rgctx_data->_2_BgmManager___c__68_T_;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  sub_1B6406C(*(ServantStatusBattleListViewItem_o **)(v12 + 184), (int32_t)v6, v7, v8);
}


void __fastcall BgmManager___c__68_object____ctor(BgmManager___c__68_T__o *this, const MethodInfo_2FFA540 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__68_object____StopBgmLocal_b__68_0(
        BgmManager___c__68_T__o *this,
        Il2CppObject *x,
        const MethodInfo_2FFA548 *method)
{
  if ( !x )
    sub_1B64324(this);
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))x->klass->vtable[11].method)(
           x,
           0LL,
           x->klass->vtable[12].methodPtr);
}


void __fastcall BgmManager___c__76_object____cctor(const MethodInfo_2FFA56C *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BgmManager___c__76_T__c *klass; // x0
  __int64 _0_BgmManager___c__76_T; // x0
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  BgmManager___c__76_T__c *v9; // x0
  __int64 _2_BgmManager___c__76_T; // x0
  BgmManager___c__76_T__c *v11; // x0
  __int64 v12; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BgmManager___c__76_T__c *)sub_1BB5FA4(klass);
  _0_BgmManager___c__76_T = (__int64)klass->rgctx_data->_0_BgmManager___c__76_T_;
  if ( (*(_BYTE *)(_0_BgmManager___c__76_T + 309) & 1) == 0 )
    _0_BgmManager___c__76_T = sub_1BB5FA4(_0_BgmManager___c__76_T);
  v6 = (Il2CppObject *)sub_1B64314(_0_BgmManager___c__76_T, v1, v2);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BB5FA4(method->klass);
  System_Object___ctor(v6, 0LL);
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BgmManager___c__76_T__c *)sub_1BB5FA4(v9);
  _2_BgmManager___c__76_T = (__int64)v9->rgctx_data->_2_BgmManager___c__76_T_;
  if ( (*(_BYTE *)(_2_BgmManager___c__76_T + 309) & 1) == 0 )
    _2_BgmManager___c__76_T = sub_1BB5FA4(_2_BgmManager___c__76_T);
  **(_QWORD **)(_2_BgmManager___c__76_T + 184) = v6;
  v11 = method->klass;
  if ( (BYTE5(v11->vtable._0_Equals.methodPtr) & 1) == 0 )
    v11 = (BgmManager___c__76_T__c *)sub_1BB5FA4(v11);
  v12 = (__int64)v11->rgctx_data->_2_BgmManager___c__76_T_;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  sub_1B6406C(*(ServantStatusBattleListViewItem_o **)(v12 + 184), (int32_t)v6, v7, v8);
}


void __fastcall BgmManager___c__76_object____ctor(BgmManager___c__76_T__o *this, const MethodInfo_2FFA628 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall BgmManager___c__76_object____ExportPlayArgsGroupLocal_b__76_0(
        BgmManager___c__76_T__o *this,
        Il2CppObject *x,
        const MethodInfo_2FFA630 *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.ins )
    sub_1B64324(this);
  BgmManager__PlayPreloadedBgm(this->fields.ins, (BgmPlayArgs_o *)this->fields.args, v2);
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
    sub_1B64324(this);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, Il2CppMethodPointer))x->klass->vtable._7_SetMute.method)(
    x,
    this->fields.isMute,
    x->klass->vtable._8_ReflectMasterVolume.methodPtr);
}


void __fastcall BgmManager___c__DisplayClass54_0_object____ctor(
        BgmManager___c__DisplayClass54_0_T__o *this,
        const MethodInfo_2FFFB74 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass54_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass54_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_2FFFB7C *method)
{
  if ( !x )
    sub_1B64324(this);
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
  const MethodInfo *v2; // x2
  struct BgmManager_o *_4__this; // x0
  BgmPlayArgsGroup_o *argsGroup; // x1
  const MethodInfo *v6; // x2
  int32_t v7; // w3
  struct BgmPlayArgs_array *nonNullArgsAll; // x20
  __int64 v9; // x8
  unsigned __int64 v10; // x21

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  argsGroup = this->fields.argsGroup;
  if ( _4__this->fields.cacheArgsGroup == argsGroup )
  {
    BgmManager__StopUnrequestedSubBgm(_4__this, argsGroup, v2);
    if ( this->fields.isPlay )
    {
      nonNullArgsAll = this->fields.nonNullArgsAll;
      if ( !nonNullArgsAll )
        goto LABEL_14;
      v9 = *(_QWORD *)&nonNullArgsAll->max_length;
      if ( (int)v9 >= 1 )
      {
        v10 = 0LL;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)v9 )
            sub_1B6432C(_4__this, argsGroup);
          _4__this = this->fields.__4__this;
          if ( !_4__this )
            break;
          BgmManager__PlayPreloadedBgm(_4__this, nonNullArgsAll->m_Items[v10], v6);
          LODWORD(v9) = nonNullArgsAll->max_length;
          if ( (__int64)++v10 >= (int)v9 )
            goto LABEL_10;
        }
LABEL_14:
        sub_1B64324(_4__this);
      }
LABEL_10:
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_14;
      _4__this->fields.cacheArgsGroup = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.cacheArgsGroup, 0, (int32_t)v6, v7);
    }
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BgmManager__RemoveUnusedOldFromBindList(_4__this, (const MethodInfo *)argsGroup);
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
  const MethodInfo *v3; // x3
  struct BgmManager___c__DisplayClass57_0_o *CS___8__locals1; // x9
  struct BgmPlayArgs_o *args; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (args = this->fields.args) == 0LL
    || (this = (BgmManager___c__DisplayClass57_1_o *)CS___8__locals1->fields.__4__this) == 0LL )
  {
    sub_1B64324(this);
  }
  BgmManager__PreloadBgm((BgmManager_o *)this, args->fields._BgmName_k__BackingField, callback, v3);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_String_o *cueName; // x1
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct BgmManager_o *_4__this; // x8
  Il2CppObject *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_49FBA73 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1B640C8(&SoundManager_TypeInfo, v6);
    sub_1B640C8(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, v7);
    byte_49FBA73 = 1;
  }
  cueName = this->fields.cueName;
  this->fields.tempCueSheetName = cueName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)cueName, v2, v3);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.loadingBgmCueNameList) == 0LL
    || (v13 = (Il2CppObject *)this->fields.cueName,
        items = loadingBgmCueNameList->fields._items,
        v15 = Method_System_Collections_Generic_List_string__Add__,
        ++loadingBgmCueNameList->fields._version,
        !items) )
  {
    sub_1B64324(loadingBgmCueNameList);
  }
  size = loadingBgmCueNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      loadingBgmCueNameList,
      v13,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    loadingBgmCueNameList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v13, v10, v11);
  }
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, 0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v22, v23);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BgmManager_o *_4__this; // x8
  struct BgmManager_o *v7; // x8
  struct BgmManager_o *v8; // x8

  v2 = this;
  if ( (byte_49FBA74 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Insert__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v4);
    this = (BgmManager___c__DisplayClass61_0_o *)sub_1B640C8(
                                                   &Method_SingletonMonoBehaviour_SoundManager__get_Instance__,
                                                   v5);
    byte_49FBA74 = 1;
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
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass61_0_o *)SoundManager__GetCueSheet(
                                                 (SoundManager_o *)this,
                                                 v2->fields.cueName,
                                                 0LL);
  if ( this )
  {
    v7 = v2->fields.__4__this;
    if ( !v7 )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass61_0_o *)v7->fields.addBindList;
    if ( !this )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass61_0_o *)System_Collections_Generic_List_object___Contains(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   (Il2CppObject *)v2->fields.cueName,
                                                   (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v8 = v2->fields.__4__this;
      if ( v8 )
      {
        this = (BgmManager___c__DisplayClass61_0_o *)v8->fields.addBindList;
        if ( this )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)this,
            0,
            (Il2CppObject *)v2->fields.cueName,
            (const MethodInfo_34AE524 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_1B64324(this);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  return BgmManager__IsLoadingLocal(this->fields.__4__this, this->fields.bgmName, v2);
}


void __fastcall BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_30007B8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass67_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30007C0 *method)
{
  if ( !x )
    sub_1B64324(this);
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
  if ( (byte_49FBA75 & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass69_0_o *)sub_1B640C8(&Method_System_Array_IndexOf_string___, x);
    byte_49FBA75 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  return (unsigned int)System_Array__IndexOf_object_(
                         (System_Object_array *)v4->fields.subBgmNamesToPlay,
                         (Il2CppObject *)x->fields.bgmName,
                         (const MethodInfo_2F32000 *)Method_System_Array_IndexOf_string___) >> 31;
}


void __fastcall BgmManager___c__DisplayClass70_0_object____ctor(
        BgmManager___c__DisplayClass70_0_T__o *this,
        const MethodInfo_30019D8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass70_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass70_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30019E0 *method)
{
  if ( !x )
    sub_1B64324(this);
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
  if ( !_4__this || (_4__this = (BgmManager_o *)BgmManager__GetOrCreateJinglePlayer(_4__this, method)) == 0LL )
    sub_1B64324(_4__this);
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
    sub_1B64324(this);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0LL);
}