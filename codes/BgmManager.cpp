void __fastcall BgmManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct BgmManager_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct BgmManager_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BgmManager_StaticFields *v12; // x8

  if ( (byte_49BA475 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_2909/*"BGM_CHALDEA_1"*/, v4);
    sub_1B4CF90(&StringLiteral_2910/*"BGM_CHALDEA_2"*/, v5);
    byte_49BA475 = 1;
  }
  static_fields = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_VOLUME = 0x3DCCCCCD3F800000LL;
  v7 = StringLiteral_2909/*"BGM_CHALDEA_1"*/;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_2909/*"BGM_CHALDEA_1"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v7, v2, v3);
  v8 = StringLiteral_2910/*"BGM_CHALDEA_2"*/;
  v9 = BgmManager_TypeInfo->static_fields;
  v9->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_2910/*"BGM_CHALDEA_2"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v9->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v8, v10, v11);
  v12 = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&v12->ADD_BIND_MAX = 0x400000005LL;
  v12->isMute = 0;
  v12->masterVolume = 1.0;
}


void __fastcall BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_49BA474 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo, v4);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager___ctor__, v6);
    byte_49BA474 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.addBindList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.loadingBgmCueNameList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v13;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bgmPlayers, (int32_t)v13, v14, v15);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37B4828 *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void __fastcall BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x20
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v17; // x21
  Il2CppObject *v18; // x0

  if ( (byte_49BA44B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&System_Predicate_BgmPlayerBase__TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    sub_1B4CF90(&Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__, v8);
    sub_1B4CF90(&BgmManager___c__DisplayClass29_0_TypeInfo, v9);
    byte_49BA44B = 1;
  }
  v10 = sub_1B4D1DC(BgmManager___c__DisplayClass29_0_TypeInfo);
  BgmManager___c__DisplayClass29_0___ctor((BgmManager___c__DisplayClass29_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  *(_QWORD *)(v10 + 16) = bgmName;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), (int32_t)bgmName, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( Instance )
    {
      klass = (System_Collections_Generic_List_object__o *)Instance[4].klass;
      v17 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_BgmPlayerBase__TypeInfo);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v10,
        Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__,
        0LL);
      if ( klass )
      {
        v18 = System_Collections_Generic_List_object___Find(
                klass,
                (System_Predicate_T__o *)v17,
                (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v18 )
          BgmPlayerBase__set_BgmVolume((BgmPlayerBase_o *)v18, volume, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B4D1EC(v11, v12);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_49BA468 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo, bgmName);
    byte_49BA468 = 1;
  }
  v7 = sub_1B4D1DC(BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo);
  BgmManager__CoWaitSameAudioLoading_d__63___ctor((BgmManager__CoWaitSameAudioLoading_d__63_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B4D1EC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 40), (int32_t)bgmName, v12, v13);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v14, v15);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BgmManager__Enable_KeepSubBgm(bool value, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int v7; // w9

  if ( (byte_49BA45E & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_49BA45E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B4D1EC(v5, v6);
    if ( value )
      v7 = 1;
    else
      v7 = -1;
    LODWORD(Instance[4].monitor) = (LODWORD(Instance[4].monitor) + v7) & ~((LODWORD(Instance[4].monitor) + v7) >> 31);
  }
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BgmManager__EnumeratePlayersHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_2EF33E4 *method)
{
  long double v3; // q0
  const MethodInfo_2EF33E4_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass54_0_T; // x0
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  long double inited; // q0
  const MethodInfo_2EF33E4_RGCTXs *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  __int64 _5_System_Func_T__bool; // x0
  System_Func_object__bool__o *v20; // x21
  __int64 _6_BgmManager___c__54_T; // x0
  Il2CppClass *v22; // x0
  Il2CppClass *v23; // x0
  const MethodInfo_2EF33E4_RGCTXs *v24; // x8
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
    sub_1B9D67C(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass54_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass54_0_T = sub_1B9D620(v3);
  v9 = sub_1B4D1DC(_0_BgmManager___c__DisplayClass54_0_T);
  BgmManager___c__DisplayClass54_0_object____ctor(
    (BgmManager___c__DisplayClass54_0_T__o *)v9,
    (const MethodInfo_30CB11C *)method->rgctx_data->_1_BgmManager___c__DisplayClass54_0_T___ctor);
  if ( !v9 )
    sub_1B4D1EC(v10, v11);
  *(_QWORD *)(v9 + 16) = bgmNameFilter;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 16), (int32_t)bgmNameFilter, v12, v13);
  v14 = *(_QWORD *)(v9 + 16);
  v15 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
          (const MethodInfo_2F2D660 *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  v17 = method->rgctx_data;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( v14 )
  {
    _5_System_Func_T__bool = (__int64)v17->_5_System_Func_T__bool_;
    if ( (*(_BYTE *)(_5_System_Func_T__bool + 309) & 1) == 0 )
      _5_System_Func_T__bool = sub_1B9D620(inited);
    v20 = (System_Func_object__bool__o *)sub_1B4D1DC(_5_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v9,
      (intptr_t)method->rgctx_data->_10_BgmManager___c__DisplayClass54_0_T___EnumeratePlayersHavingBgmName_b__1,
      (const MethodInfo_33FEDD4 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
  }
  else
  {
    _6_BgmManager___c__54_T = (__int64)v17->_6_BgmManager___c__54_T_;
    if ( (*(_BYTE *)(_6_BgmManager___c__54_T + 309) & 1) == 0 )
      _6_BgmManager___c__54_T = sub_1B9D620(inited);
    if ( !*(_DWORD *)(_6_BgmManager___c__54_T + 224) )
      inited = j_il2cpp_runtime_class_init_0(_6_BgmManager___c__54_T);
    v22 = method->rgctx_data->_6_BgmManager___c__54_T_;
    if ( (BYTE5(v22->vtable[0].methodPtr) & 1) == 0 )
      v22 = (Il2CppClass *)sub_1B9D620(inited);
    v20 = (System_Func_object__bool__o *)*((_QWORD *)v22->static_fields + 1);
    if ( !v20 )
    {
      v23 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v23->vtable[0].methodPtr) & 1) == 0 )
        v23 = (Il2CppClass *)sub_1B9D620(inited);
      if ( !v23->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(v23);
      v24 = method->rgctx_data;
      v25 = (__int64)v24->_6_BgmManager___c__54_T_;
      if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      {
        v25 = sub_1B9D620(inited);
        v24 = method->rgctx_data;
      }
      v26 = (__int64)v24->_5_System_Func_T__bool_;
      v27 = **(Il2CppObject ***)(v25 + 184);
      if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
        v26 = sub_1B9D620(inited);
      v20 = (System_Func_object__bool__o *)sub_1B4D1DC(v26);
      System_Func_object__bool____ctor(
        v20,
        v27,
        (intptr_t)method->rgctx_data->_7_BgmManager___c__54_T___EnumeratePlayersHavingBgmName_b__54_0,
        (const MethodInfo_33FEDD4 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
      v31 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v31->vtable[0].methodPtr) & 1) == 0 )
        v31 = (Il2CppClass *)sub_1B9D620(v30);
      *((_QWORD *)v31->static_fields + 1) = v20;
      v32 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v32->vtable[0].methodPtr) & 1) == 0 )
        v32 = (Il2CppClass *)sub_1B9D620(v30);
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)v32->static_fields + 8), (int32_t)v20, v28, v29);
    }
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          v18,
                                                          (System_Func_TSource__bool__o *)v20,
                                                          (const MethodInfo_2F42638 *)method->rgctx_data->_9_System_Linq_Enumerable_Where_T_);
}


bool __fastcall BgmManager__ExistsPlayerHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_2EF35B0 *method)
{
  const MethodInfo_2EF33E4 **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  rgctx_data = (const MethodInfo_2EF33E4 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B9D67C(method);
    rgctx_data = (const MethodInfo_2EF33E4 **)method->rgctx_data;
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, bgmNameFilter, *rgctx_data);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_2F0F4B0 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_49BA443 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___, v1);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v2);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_49BA443 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1B4D1EC(v5, v6);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_2EF35FC *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroupLocal_object_(
        BgmManager_o *this,
        const MethodInfo_2EF35FC *method)
{
  const MethodInfo_2EF33E4 **rgctx_data; // x8
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *v6; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__76_T; // x8
  Il2CppClass *v9; // x0
  System_Func_object__object__o *v10; // x21
  Il2CppClass *v11; // x0
  const MethodInfo_2EF35FC_RGCTXs *v12; // x8
  __int64 v13; // x0
  __int64 _3_System_Func_T__BgmPlayArgs; // x8
  Il2CppObject *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  long double v18; // q0
  Il2CppClass *v19; // x0
  Il2CppClass *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *v22; // x19
  BgmPlayArgsGroup_o *v23; // x20

  rgctx_data = (const MethodInfo_2EF33E4 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B4CF90(&BgmPlayArgsGroup_TypeInfo, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v5);
    rgctx_data = (const MethodInfo_2EF33E4 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1B9D67C(method);
      rgctx_data = (const MethodInfo_2EF33E4 **)method->rgctx_data;
    }
  }
  v6 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, 0LL, *rgctx_data);
  _4_BgmManager___c__76_T = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (BYTE5(_4_BgmManager___c__76_T->vtable[0].methodPtr) & 1) == 0 )
    _4_BgmManager___c__76_T = (Il2CppClass *)sub_1B9D620(inited);
  if ( !_4_BgmManager___c__76_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__76_T);
  v9 = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1B9D620(inited);
  v10 = (System_Func_object__object__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1B9D620(inited);
    if ( !v11->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = method->rgctx_data;
    v13 = (__int64)v12->_4_BgmManager___c__76_T_;
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    {
      v13 = sub_1B9D620(inited);
      v12 = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = (__int64)v12->_3_System_Func_T__BgmPlayArgs_;
    v15 = **(Il2CppObject ***)(v13 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__BgmPlayArgs + 309) & 1) == 0 )
      _3_System_Func_T__BgmPlayArgs = sub_1B9D620(inited);
    v10 = (System_Func_object__object__o *)sub_1B4D1DC(_3_System_Func_T__BgmPlayArgs);
    System_Func_object__object____ctor(
      v10,
      v15,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__76_T___ExportPlayArgsGroupLocal_b__76_0,
      (const MethodInfo_33FF47C *)method->rgctx_data->_6_System_Func_T__BgmPlayArgs___ctor);
    v19 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v19->vtable[0].methodPtr) & 1) == 0 )
      v19 = (Il2CppClass *)sub_1B9D620(v18);
    *((_QWORD *)v19->static_fields + 1) = v10;
    v20 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v20->vtable[0].methodPtr) & 1) == 0 )
      v20 = (Il2CppClass *)sub_1B9D620(v18);
    sub_1B4CF34((CGThumbnailListItem_o *)((char *)v20->static_fields + 8), (int32_t)v10, v16, v17);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TResult__o *)v10,
                                                               (const MethodInfo_2F341B8 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__BgmPlayArgs_);
  v22 = System_Linq_Enumerable__ToArray_object_(
          v21,
          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v23 = (BgmPlayArgsGroup_o *)sub_1B4D1DC(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_38872028(v23, (BgmPlayArgs_array *)v22, 0LL);
  return v23;
}


System_String_o *__fastcall BgmManager__ExtractCueName(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  __int64 v6; // x8

  if ( (byte_49BA46B & 1) == 0 )
  {
    sub_1B4CF90(&char___TypeInfo, name);
    byte_49BA46B = 1;
  }
  v4 = (System_Char_array *)sub_1B4D038(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  v4->m_Items[2] = 47;
  if ( !name || (v4 = (System_Char_array *)System_String__Split_61142544(name, v4, 0LL)) == 0LL )
LABEL_9:
    sub_1B4D1EC(v4, v5);
  v6 = *(_QWORD *)&v4->max_length;
  if ( !(_DWORD)v6 )
LABEL_10:
    sub_1B4D1F4(v4, v5);
  return *(System_String_o **)((char *)&v4->m_Items[2] + (((v6 << 32) - 0x100000000LL) >> 29));
}


void __fastcall BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_49BA453 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, method);
    byte_49BA453 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopBgm(0LL, fadeoutTime, callback, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BgmManager__FadeoutBgmLocal_object_(
        BgmManager_o *this,
        float fadeoutTime,
        System_String_o *name,
        const MethodInfo_2EF37B8 *method)
{
  const MethodInfo_2EF37B8_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 _0_BgmManager___c__DisplayClass67_0_T; // x0
  BgmManager___c__DisplayClass67_0_T__o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  long double v15; // q0
  Il2CppClass *_5_System_Func_T__bool; // x8
  System_Func_object__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_bool___, name);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_bool___, v9);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1B9D67C(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_BgmManager___c__DisplayClass67_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass67_0_T = sub_1B9D620(*(long double *)&fadeoutTime);
  v11 = (BgmManager___c__DisplayClass67_0_T__o *)sub_1B4D1DC(_0_BgmManager___c__DisplayClass67_0_T);
  BgmManager___c__DisplayClass67_0_object____ctor(
    v11,
    (const MethodInfo_30CC5F8 *)method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor);
  if ( !v11 )
    sub_1B4D1EC(v12, v13);
  v11->fields.fadeoutTime = fadeoutTime;
  v14 = BgmManager__EnumeratePlayersHavingBgmName_object_(
          this,
          name,
          (const MethodInfo_2EF33E4 *)method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_);
  _5_System_Func_T__bool = method->rgctx_data->_5_System_Func_T__bool_;
  if ( (BYTE5(_5_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
    _5_System_Func_T__bool = (Il2CppClass *)sub_1B9D620(v15);
  v17 = (System_Func_object__bool__o *)sub_1B4D1DC(_5_System_Func_T__bool);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass67_0_T___FadeoutBgmLocal_b__0,
    (const MethodInfo_33FEDD4 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                               (System_Func_TSource__TResult__o *)v17,
                                                               (const MethodInfo_2F332F4 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v18,
                                                               (const MethodInfo_2F3C0B4 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v19, (const MethodInfo_2F0ECE8 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_49BA45C & 1) == 0 )
  {
    sub_1B4CF90(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___, v2);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_49BA45C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B4D1EC(v7, v8);
    BgmManager__FadeoutBgmLocal_object_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0LL,
      (const MethodInfo_2EF37B8 *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
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
  BgmManager___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Func_object__bool__o *_9__78_0; // x21
  Il2CppObject *v31; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  _BOOL4 v35; // w0
  System_Collections_Generic_IEnumerable_TResult__o *v36; // x0
  BgmManager___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_T__o *v38; // x20
  System_Action_object__o *_9__78_1; // x21
  Il2CppObject *v40; // x22
  struct BgmManager___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  BgmManager_o *v44; // x20
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v45; // x0
  System_Collections_Generic_IEnumerable_T__o *v46; // x21
  BgmManager___c_c *v47; // x0
  System_Action_object__o *_9__78_3; // x22
  Il2CppObject *v49; // x23
  struct BgmManager___c_StaticFields *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x2
  System_Collections_IEnumerable_o *v54; // x19
  System_Action_object__o *v55; // x20
  Il2CppObject *v56; // x21
  struct BgmManager___c_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3

  v2 = this;
  if ( (byte_49BA472 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_GeneralBgmPlayer__TypeInfo, method);
    sub_1B4CF90(&System_Action_BgmPlayerBase__TypeInfo, v3);
    sub_1B4CF90(&System_Action_BgmPlayArgs__TypeInfo, v4);
    sub_1B4CF90(&Method_BasicHelper_ForEach_BgmPlayArgs___, v5);
    sub_1B4CF90(&Method_BasicHelper_ForEach_GeneralBgmPlayer___, v6);
    sub_1B4CF90(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, v7);
    sub_1B4CF90(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___, v8);
    sub_1B4CF90(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___, v9);
    sub_1B4CF90(&BgmManager_TypeInfo, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___, v11);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___, v12);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v13);
    sub_1B4CF90(&System_Func_GeneralBgmPlayer__bool__TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v16);
    sub_1B4CF90(&Method_BgmManager___c__FixedUpdate_b__78_0__, v17);
    sub_1B4CF90(&Method_BgmManager___c__FixedUpdate_b__78_1__, v18);
    sub_1B4CF90(&Method_BgmManager___c__FixedUpdate_b__78_2__, v19);
    sub_1B4CF90(&Method_BgmManager___c__FixedUpdate_b__78_3__, v20);
    this = (BgmManager_o *)sub_1B4CF90(&BgmManager___c_TypeInfo, v21);
    byte_49BA472 = 1;
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
      v26 = IsPlaying;
    }
    else
    {
      v26 = 0;
    }
    v27 = System_Linq_Enumerable__OfType_object_(
            bgmPlayers,
            (const MethodInfo_2F2D660 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    v28 = BgmManager___c_TypeInfo;
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v28 = BgmManager___c_TypeInfo;
    }
    _9__78_0 = (System_Func_object__bool__o *)v28->static_fields->__9__78_0;
    if ( !_9__78_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = BgmManager___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v28->static_fields->__9;
      _9__78_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_GeneralBgmPlayer__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__78_0, v31, Method_BgmManager___c__FixedUpdate_b__78_0__, 0LL);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__78_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__78_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__78_0, (int32_t)_9__78_0, v33, v34);
    }
    v35 = System_Linq_Enumerable__Any_object__49353604(
            v29,
            (System_Func_TSource__bool__o *)_9__78_0,
            (const MethodInfo_2F11384 *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v35 & v26) != 0 )
    {
      v36 = System_Linq_Enumerable__OfType_object_(
              *p_bgmPlayers,
              (const MethodInfo_2F2D660 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
      v37 = BgmManager___c_TypeInfo;
      v38 = (System_Collections_Generic_IEnumerable_T__o *)v36;
      if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
        v37 = BgmManager___c_TypeInfo;
      }
      _9__78_1 = (System_Action_object__o *)v37->static_fields->__9__78_1;
      if ( !_9__78_1 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = BgmManager___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v37->static_fields->__9;
        _9__78_1 = (System_Action_object__o *)sub_1B4D1DC(System_Action_GeneralBgmPlayer__TypeInfo);
        System_Action_object____ctor(_9__78_1, v40, Method_BgmManager___c__FixedUpdate_b__78_1__, 0LL);
        v41 = BgmManager___c_TypeInfo->static_fields;
        v41->__9__78_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__78_1;
        sub_1B4CF34((CGThumbnailListItem_o *)&v41->__9__78_1, (int32_t)_9__78_1, v42, v43);
      }
      BasicHelper__ForEach_object_(
        v38,
        (System_Action_T__o *)_9__78_1,
        (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v2->fields.isBgmStopJingle = 1;
    }
    else if ( !v35
           && v2->fields.isBgmStopJingle
           && v26 == 0
           && BgmManager__ExistsPlayerHavingBgmName_object_(
                v2,
                0LL,
                (const MethodInfo_2EF35B0 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
    {
      this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                               v2,
                               (const MethodInfo_2EF35FC *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
      if ( !this )
        goto LABEL_47;
      v44 = this;
      v45 = BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0LL);
      v46 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v45,
                                                             (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      this = (BgmManager_o *)BgmManager__StopBgmLocal_object_(
                               v2,
                               0LL,
                               (const MethodInfo_2EF39A4 *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
      if ( !v46 )
        goto LABEL_47;
      if ( v46[1].monitor )
      {
        v47 = BgmManager___c_TypeInfo;
        if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
          v47 = BgmManager___c_TypeInfo;
        }
        _9__78_3 = (System_Action_object__o *)v47->static_fields->__9__78_3;
        if ( !_9__78_3 )
        {
          if ( !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            v47 = BgmManager___c_TypeInfo;
          }
          v49 = (Il2CppObject *)v47->static_fields->__9;
          _9__78_3 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BgmPlayArgs__TypeInfo);
          System_Action_object____ctor(_9__78_3, v49, Method_BgmManager___c__FixedUpdate_b__78_3__, 0LL);
          v50 = BgmManager___c_TypeInfo->static_fields;
          v50->__9__78_3 = (struct System_Action_BgmPlayArgs__o *)_9__78_3;
          sub_1B4CF34((CGThumbnailListItem_o *)&v50->__9__78_3, (int32_t)_9__78_3, v51, v52);
        }
        BasicHelper__ForEach_object_(
          v46,
          (System_Action_T__o *)_9__78_3,
          (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_BgmPlayArgs___);
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        BgmManager__PlayBgm_38855332((BgmPlayArgsGroup_o *)v44, 0LL, v53);
      }
    }
    if ( !v26 )
      v2->fields.isBgmStopJingle = 0;
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
    v54 = *p_bgmPlayers;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v55 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 10);
    if ( !v55 )
    {
      if ( !LODWORD(this[2].fields.mainBgmPlayer) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (BgmManager_o *)BgmManager___c_TypeInfo;
      }
      v56 = *(Il2CppObject **)this[2].monitor;
      v55 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BgmPlayerBase__TypeInfo);
      System_Action_object____ctor(v55, v56, Method_BgmManager___c__FixedUpdate_b__78_2__, 0LL);
      v57 = BgmManager___c_TypeInfo->static_fields;
      v57->__9__78_2 = (struct System_Action_BgmPlayerBase__o *)v55;
      sub_1B4CF34((CGThumbnailListItem_o *)&v57->__9__78_2, (int32_t)v55, v58, v59);
    }
    if ( v54 )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)v54,
        (System_Action_T__o *)v55,
        (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
      return;
    }
LABEL_47:
    sub_1B4D1EC(this, method);
  }
}


void __fastcall BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_49BA45F & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v1);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_49BA45F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B4D1EC(v4, v5);
    LODWORD(Instance[4].monitor) = 0;
  }
}


CriAtomSource_o *__fastcall BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_49BA470 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___, method);
    byte_49BA470 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v4);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_object_(
                              gameObject,
                              (const MethodInfo_2F5335C *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t __fastcall BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *CueSheet; // x0
  SoundManager_c *v7; // x8
  System_String_o *v8; // x19

  if ( (byte_49BA445 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    sub_1B4CF90(&SoundManager_TypeInfo, v3);
    byte_49BA445 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v5);
  CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, name, 0LL);
  v7 = SoundManager_TypeInfo;
  v8 = CueSheet;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v7 = SoundManager_TypeInfo;
  }
  return System_String__op_Equality(v8, v7->static_fields->RESIDENT_RESOURCE_SOUND_NAME, 0LL);
}


System_String_o *__fastcall BgmManager__GetBgmName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  __int64 v4; // x1
  bool v5; // w8
  System_String_o *result; // x0
  UnityEngine_Object_c *klass; // x8

  if ( (byte_49BA457 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v1);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_49BA457 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v5 )
  {
    if ( !Instance || (klass = Instance[2].klass) == 0LL )
      sub_1B4D1EC(0LL, v4);
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
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o **p_COSMOS_IN_THE_LOSTBELT_BGM_NAME; // x19
  int32_t UiFlag; // w19
  System_Collections_ICollection_o *ClearWarIdList; // x20
  BalanceConfig_c *v13; // x0
  BalanceConfig_c *v14; // x0
  BgmManager_c *v15; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  System_String_o *bgmName; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BA473 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, v1);
    sub_1B4CF90(&BgmManager_TypeInfo, v2);
    sub_1B4CF90(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, v4);
    sub_1B4CF90(&ServantCommentManager_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49BA473 = 1;
  }
  bgmName = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v8);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
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
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
            v13->static_fields->OrdealCallWarId,
            (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
LABEL_15:
      v15 = BgmManager_TypeInfo;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        v15 = BgmManager_TypeInfo;
      }
      static_fields = v15->static_fields;
      if ( UiFlag == 1 )
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
      else
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &static_fields->DEFAULT_MAIN_BGM_NAME;
    }
    else
    {
      v14 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v14->static_fields->OrdealCallClearBgmName;
    }
  }
  return *p_COSMOS_IN_THE_LOSTBELT_BGM_NAME;
}


float __fastcall BgmManager__GetMasterVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  BgmManager_c *v2; // x0

  if ( (byte_49BA449 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, v1);
    byte_49BA449 = 1;
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
  Il2CppObject *jinglePlayer; // x1
  struct System_String_o *bgmName; // x8
  JinglePlayer_o **p_jinglePlayer; // x20
  JinglePlayer_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  JinglePlayer_c *klass; // x9
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 bgmName_low; // x10
  __int64 v22; // x8

  if ( (byte_49BA46F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_OfType_JinglePlayer___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___, v3);
    sub_1B4CF90(&JinglePlayer_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v6);
    byte_49BA46F = 1;
  }
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_2F2D660 *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  v8 = (JinglePlayer_o *)System_Linq_Enumerable__ToArray_object_(
                           v7,
                           (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !v8 )
    goto LABEL_15;
  bgmName = v8->fields.bgmName;
  if ( !bgmName )
  {
    v12 = (JinglePlayer_o *)sub_1B4D1DC(JinglePlayer_TypeInfo);
    JinglePlayer___ctor(v12, 0LL);
    this->fields.jinglePlayer = v12;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.jinglePlayer, (int32_t)v12, v13, v14);
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
          v19 = *(_QWORD *)&v8->fields.index;
          v20 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++HIDWORD(v8->fields.bgmName);
          if ( v19 )
          {
            bgmName_low = SLODWORD(v8->fields.bgmName);
            if ( (unsigned int)bgmName_low >= *(_DWORD *)(v19 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)v8,
                jinglePlayer,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = v19 + 8 * bgmName_low;
              LODWORD(v8->fields.bgmName) = bgmName_low + 1;
              *(_QWORD *)(v22 + 32) = jinglePlayer;
              sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 32), (int32_t)jinglePlayer, v17, v18);
            }
            return *p_jinglePlayer;
          }
        }
      }
    }
LABEL_15:
    sub_1B4D1EC(v8, jinglePlayer);
  }
  if ( !(_DWORD)bgmName )
    sub_1B4D1F4(v8, jinglePlayer);
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
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *v22; // x20
  System_Func_object__bool__o *v23; // x22
  SubBgmPlayer_o *object; // x21
  BgmManager___c_c *v25; // x0
  System_Func_object__bool__o *_9__72_1; // x21
  Il2CppObject *v27; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  SubBgmPlayer_c *klass; // x9
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8

  if ( (byte_49BA46E & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Find_SubBgmPlayer___, bgmName);
    sub_1B4CF90(&Method_System_Linq_Enumerable_First_SubBgmPlayer___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___, v7);
    sub_1B4CF90(&System_Func_SubBgmPlayer__bool__TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v10);
    sub_1B4CF90(&SubBgmPlayer_TypeInfo, v11);
    sub_1B4CF90(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, v12);
    sub_1B4CF90(&Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__, v13);
    sub_1B4CF90(&BgmManager___c__DisplayClass72_0_TypeInfo, v14);
    sub_1B4CF90(&BgmManager___c_TypeInfo, v15);
    byte_49BA46E = 1;
  }
  v16 = sub_1B4D1DC(BgmManager___c__DisplayClass72_0_TypeInfo);
  BgmManager___c__DisplayClass72_0___ctor((BgmManager___c__DisplayClass72_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  *(_QWORD *)(v16 + 16) = bgmName;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 16), (int32_t)bgmName, v19, v20);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_2F2D660 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v22 = System_Linq_Enumerable__ToArray_object_(
          v21,
          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v23 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__,
    0LL);
  object = (SubBgmPlayer_o *)BasicHelper__Find_object_(
                               v22,
                               (System_Func_T__bool__o *)v23,
                               (const MethodInfo_2EED060 *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( object )
    return object;
  v25 = BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v25 = BgmManager___c_TypeInfo;
  }
  _9__72_1 = (System_Func_object__bool__o *)v25->static_fields->__9__72_1;
  if ( !_9__72_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = BgmManager___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__72_1 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__72_1, v27, Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__72_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__72_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__72_1, (int32_t)_9__72_1, v29, v30);
  }
  v17 = (System_Collections_Generic_List_object__o *)BasicHelper__Find_object_(
                                                       v22,
                                                       (System_Func_T__bool__o *)_9__72_1,
                                                       (const MethodInfo_2EED060 *)Method_BasicHelper_Find_SubBgmPlayer___);
  object = (SubBgmPlayer_o *)v17;
  if ( v17 )
    return object;
  if ( !v22 )
LABEL_23:
    sub_1B4D1EC(v17, v18);
  if ( (int)v22->max_length <= 1 )
  {
    object = (SubBgmPlayer_o *)sub_1B4D1DC(SubBgmPlayer_TypeInfo);
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
        v17 = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
        if ( v17 )
        {
          items = v17->fields._items;
          v37 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++v17->fields._version;
          if ( items )
          {
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                (Il2CppObject *)object,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v39[4] = (Il2CppClass *)object;
              sub_1B4CF34((CGThumbnailListItem_o *)(v39 + 4), (int32_t)object, v34, v35);
            }
            return object;
          }
        }
      }
    }
    goto LABEL_23;
  }
  return (SubBgmPlayer_o *)System_Linq_Enumerable__First_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                             (const MethodInfo_2F24DEC *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
}


void __fastcall BgmManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49BA444 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v1);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_49BA444 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B4D1EC(v4, v5);
    BgmManager__InitializeLocal((BgmManager_o *)Instance, v5);
  }
}


void __fastcall BgmManager__InitializeLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  MainBgmPlayer_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v19; // x8
  System_Collections_Generic_List_object__o *v20; // x19
  System_Action_object__o *v21; // x20
  Il2CppObject *v22; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  BgmManager_c *v26; // x0

  v2 = this;
  if ( (byte_49BA460 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BgmPlayerBase__TypeInfo, method);
    sub_1B4CF90(&BgmManager_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v6);
    sub_1B4CF90(&MainBgmPlayer_TypeInfo, v7);
    sub_1B4CF90(&Method_BgmManager___c__InitializeLocal_b__50_0__, v8);
    this = (BgmManager_o *)sub_1B4CF90(&BgmManager___c_TypeInfo, v9);
    byte_49BA460 = 1;
  }
  bgmPlayers = v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_21;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v11 = (MainBgmPlayer_o *)sub_1B4D1DC(MainBgmPlayer_TypeInfo);
    MainBgmPlayer___ctor(v11, 0LL);
    v2->fields.mainBgmPlayer = v11;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.mainBgmPlayer, (int32_t)v11, v12, v13);
    method = (const MethodInfo *)v2->fields.mainBgmPlayer;
    if ( !method )
      goto LABEL_21;
    LODWORD(method->invoker_method) = 0;
    this = (BgmManager_o *)v2->fields.bgmPlayers;
    if ( !this )
      goto LABEL_21;
    v16 = *(_QWORD *)&this->fields.m_CachedPtr;
    v17 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v16 )
      goto LABEL_21;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v16 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)method,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = v16 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v19 + 32) = method;
      sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 32), (int32_t)method, v14, v15);
    }
  }
  v20 = (System_Collections_Generic_List_object__o *)v2->fields.bgmPlayers;
  this = (BgmManager_o *)BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
  }
  v21 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 1);
  if ( !v21 )
  {
    if ( !LODWORD(this[2].fields.mainBgmPlayer) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v22 = *(Il2CppObject **)this[2].monitor;
    v21 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(v21, v22, Method_BgmManager___c__InitializeLocal_b__50_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)v21;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__50_0, (int32_t)v21, v24, v25);
  }
  if ( !v20 )
LABEL_21:
    sub_1B4D1EC(this, method);
  System_Collections_Generic_List_object___ForEach(
    v20,
    (System_Action_T__o *)v21,
    (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v26 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v26);
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
  if ( (byte_49BA46A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Contains__, name);
    this = (BgmManager_o *)sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    byte_49BA46A = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)v4->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_object___Contains(
               loadingBgmCueNameList,
               (Il2CppObject *)this,
               (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_1B4D1EC(this, name);
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
  __int64 v7; // x1

  if ( (byte_49BA44C & 1) == 0 )
  {
    sub_1B4CF90(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_49BA44C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1B4D1EC(v6, v7);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_2EF35B0 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool __fastcall BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_49BA458 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_49BA458 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1B4D1EC(v6, v7);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_2EF35B0 *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool __fastcall BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0
  __int64 v7; // x1

  if ( (byte_49BA469 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, bgmName);
    byte_49BA469 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName((BgmManager_o *)Instance, bgmName, v5);
  if ( !Instance )
    sub_1B4D1EC(CueName, v7);
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0LL) != 0LL;
}


void __fastcall BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  bool v9; // w19

  if ( (byte_49BA45D & 1) == 0 )
  {
    sub_1B4CF90(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___, method);
    sub_1B4CF90(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_49BA45D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B4D1EC(v7, v8);
    v9 = isPause;
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v9,
      0LL,
      (const MethodInfo_2EF38D4 *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v9,
      0LL,
      (const MethodInfo_2EF38D4 *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__PauseBgmLocal_object_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_2EF38D4 *method)
{
  long double v4; // q0
  const MethodInfo_2EF38D4_RGCTXs *rgctx_data; // x8
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
    sub_1B9D67C(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass70_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass70_0_T = sub_1B9D620(v4);
  v10 = (BgmManager___c__DisplayClass70_0_T__o *)sub_1B4D1DC(_0_BgmManager___c__DisplayClass70_0_T);
  BgmManager___c__DisplayClass70_0_object____ctor(
    v10,
    (const MethodInfo_30CD818 *)method->rgctx_data->_1_BgmManager___c__DisplayClass70_0_T___ctor);
  if ( !v10 )
    sub_1B4D1EC(v11, v12);
  v10->fields.isPause = isPause;
  v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                         (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                         (const MethodInfo_2F2D660 *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  _5_System_Action_T = method->rgctx_data->_5_System_Action_T_;
  if ( (BYTE5(_5_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    _5_System_Action_T = (Il2CppClass *)sub_1B9D620(v14);
  v16 = (System_Action_object__o *)sub_1B4D1DC(_5_System_Action_T);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass70_0_T___PauseBgmLocal_b__0,
    (const MethodInfo_32170B8 *)method->rgctx_data->_6_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v13,
    (System_Action_T__o *)v16,
    (const MethodInfo_2EEE790 *)method->rgctx_data->_7_BasicHelper_ForEach_T_);
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
  BgmPlayArgsGroup_o *v13; // x0
  BgmPlayArgsGroup_o *v14; // x22
  const MethodInfo *v15; // x2
  System_Nullable_float__o volumeNullable; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_float__o p_volumeNullable; // 0:x0.8
  System_Nullable_float__o v18; // 0:x2.8

  if ( (byte_49BA44E & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, startTime);
    sub_1B4CF90(&BgmPlayArgsGroup_TypeInfo, v11);
    sub_1B4CF90(&Method_System_Nullable_float___ctor__, v12);
    byte_49BA44E = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0LL;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_369BE50 *)Method_System_Nullable_float___ctor__);
  v13 = (BgmPlayArgsGroup_o *)sub_1B4D1DC(BgmPlayArgsGroup_TypeInfo);
  v18 = volumeNullable;
  v14 = v13;
  BgmPlayArgsGroup___ctor_38873148(v13, name, v18, fadeTime, startTime, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_38855332(v14, finishCallback, v15);
}


void __fastcall BgmManager__PlayBgm_38855332(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_49BA450 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, finishCallback);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_49BA450 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
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
      sub_1B4D1EC(v7, v8);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, 1, v9);
  }
}


void __fastcall BgmManager__PlayBgm_38855528(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BgmPlayArgsGroup_o *v8; // x22
  const MethodInfo *v9; // x2

  if ( (byte_49BA44F & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, subArray);
    sub_1B4CF90(&BgmPlayArgsGroup_TypeInfo, v7);
    byte_49BA44F = 1;
  }
  v8 = (BgmPlayArgsGroup_o *)sub_1B4D1DC(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor(v8, main, (BgmPlayArgs_array *)subArray, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_38855332(v8, finishCallback, v9);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_49BA459 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    byte_49BA459 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1B4D1EC(v9, v10);
    BgmManager__PlayJingleLocal((BgmManager_o *)Instance, name, volume, callbackFunc, v11);
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
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x20
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x3

  if ( (byte_49BA46D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, name);
    sub_1B4CF90(&Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, v9);
    sub_1B4CF90(&BgmManager___c__DisplayClass71_0_TypeInfo, v10);
    byte_49BA46D = 1;
  }
  v11 = sub_1B4D1DC(BgmManager___c__DisplayClass71_0_TypeInfo);
  BgmManager___c__DisplayClass71_0___ctor((BgmManager___c__DisplayClass71_0_o *)v11, 0LL);
  if ( !v11 )
    sub_1B4D1EC(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = name;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 24), (int32_t)name, v16, v17);
  *(float *)(v11 + 32) = volume;
  *(_QWORD *)(v11 + 40) = callbackFunc;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 40), (int32_t)callbackFunc, v18, v19);
  v20 = *(System_String_o **)(v11 + 24);
  v21 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v11, Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, 0LL);
  BgmManager__PreloadBgm(this, v20, v21, v22);
}


void __fastcall BgmManager__PlayJingle_38859496(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_49BA45A & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, method);
    byte_49BA45A = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, 0LL, v3);
}


void __fastcall BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BA451 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, method);
    byte_49BA451 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_38855528(args, 0LL, 0LL, v2);
}


void __fastcall BgmManager__PlayPreloadBgms(BgmManager_o *this, const MethodInfo *method)
{
  BgmPlayArgsGroup_o *cacheArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v4; // x0
  System_Object_array *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  System_Object_array *v10; // x21
  unsigned __int64 v11; // x22

  if ( (byte_49BA465 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, method);
    byte_49BA465 = 1;
  }
  cacheArgsGroup = this->fields.cacheArgsGroup;
  if ( cacheArgsGroup )
  {
    v4 = BgmPlayArgsGroup__AllArgsListNullExcluded(cacheArgsGroup, 0LL);
    v5 = System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4,
           (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    if ( !v5 )
      sub_1B4D1EC(0LL, v6);
    v9 = *(_QWORD *)&v5->max_length;
    v10 = v5;
    if ( (int)v9 >= 1 )
    {
      v11 = 0LL;
      do
      {
        if ( v11 >= (unsigned int)v9 )
          sub_1B4D1F4(v5, v6);
        BgmManager__PlayPreloadedBgm(this, (BgmPlayArgs_o *)v10->m_Items[v11], v7);
        LODWORD(v9) = v10->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)v9 );
    }
    this->fields.cacheArgsGroup = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.cacheArgsGroup, 0, (int32_t)v7, v8);
  }
}


void __fastcall BgmManager__PlayPreloadedBgm(BgmManager_o *this, BgmPlayArgs_o *args, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *BgmName_k__BackingField; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  BgmPlayArgs_c *klass; // x8
  unsigned int methodPtr_low; // w9
  __int64 v11; // x11
  __int64 v12; // x11
  void *mainBgmPlayer; // x0

  if ( (byte_49BA466 & 1) == 0 )
  {
    sub_1B4CF90(&MainBgmPlayArgs_TypeInfo, args);
    sub_1B4CF90(&SubBgmPlayArgs_TypeInfo, v5);
    byte_49BA466 = 1;
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
        v11 = LOBYTE(MainBgmPlayArgs_TypeInfo->vtable._0_Equals.methodPtr);
        if ( methodPtr_low >= (unsigned int)v11
          && (MainBgmPlayArgs_c *)klass->_2.typeHierarchy[v11 - 1] == MainBgmPlayArgs_TypeInfo )
        {
          mainBgmPlayer = this->fields.mainBgmPlayer;
        }
        else
        {
          v12 = LOBYTE(SubBgmPlayArgs_TypeInfo->vtable._0_Equals.methodPtr);
          if ( methodPtr_low < (unsigned int)v12
            || (SubBgmPlayArgs_c *)klass->_2.typeHierarchy[v12 - 1] != SubBgmPlayArgs_TypeInfo )
          {
            return;
          }
          mainBgmPlayer = BgmManager__GetOrCreateSubBgmPlayer(this, BgmName_k__BackingField, v8);
        }
        if ( !mainBgmPlayer )
          sub_1B4D1EC(0LL, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x21
  Il2CppObject *Instance; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *v16; // x22
  System_String_o *v17; // x21
  BgmManager_o *v18; // x20
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3

  if ( (byte_49BA452 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    sub_1B4CF90(&Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, v5);
    sub_1B4CF90(&BgmManager___c__DisplayClass36_0_TypeInfo, v6);
    byte_49BA452 = 1;
  }
  v7 = sub_1B4D1DC(BgmManager___c__DisplayClass36_0_TypeInfo);
  BgmManager___c__DisplayClass36_0___ctor((BgmManager___c__DisplayClass36_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 24) = args;
  v12 = v7 + 24;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 24), (int32_t)args, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v7 + 16) = Instance;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 16), (int32_t)Instance, v14, v15);
  v16 = *(UnityEngine_Object_o **)(v7 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
  if ( !v8 )
  {
    if ( *(_QWORD *)v12 )
    {
      v17 = *(System_String_o **)(*(_QWORD *)v12 + 16LL);
      v18 = *(BgmManager_o **)(v7 + 16);
      v19 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)v7, Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, 0LL);
      if ( v18 )
      {
        BgmManager__PreloadBgm(v18, v17, v19, v20);
        return;
      }
    }
LABEL_10:
    sub_1B4D1EC(v8, v9);
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
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  bool v26; // w24
  BgmPlayArgsGroup_o **v27; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct BgmPlayArgsGroup_o *v34; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v35; // x0
  System_Object_array *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  __int64 v40; // x23
  unsigned __int64 v41; // x24
  __int64 v42; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  System_Action_object__o *v48; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  System_Object_array *v55; // x21
  ChainableActionParallel_o *v56; // x20
  __int64 v57; // x21
  System_Action_o *v58; // x22
  int32_t v59; // w2
  const MethodInfo *v60; // x3

  if ( (byte_49BA464 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action___TypeInfo, argsGroup);
    sub_1B4CF90(&System_Action_Action__TypeInfo, v9);
    sub_1B4CF90(&System_Action_TypeInfo, v10);
    sub_1B4CF90(&ChainableActionParallel_TypeInfo, v11);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Action_Action___Add__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Action_Action___ToArray__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Action_Action____ctor__, v15);
    sub_1B4CF90(&System_Collections_Generic_List_Action_Action___TypeInfo, v16);
    sub_1B4CF90(&Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__, v17);
    sub_1B4CF90(&BgmManager___c__DisplayClass57_0_TypeInfo, v18);
    sub_1B4CF90(&Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__, v19);
    sub_1B4CF90(&BgmManager___c__DisplayClass57_1_TypeInfo, v20);
    byte_49BA464 = 1;
  }
  v21 = sub_1B4D1DC(BgmManager___c__DisplayClass57_0_TypeInfo);
  BgmManager___c__DisplayClass57_0___ctor((BgmManager___c__DisplayClass57_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_24;
  *(_QWORD *)(v21 + 16) = this;
  v26 = isPlay;
  sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 16), (int32_t)this, v24, v25);
  *(_QWORD *)(v21 + 24) = argsGroup;
  v27 = (BgmPlayArgsGroup_o **)(v21 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 24), (int32_t)argsGroup, v28, v29);
  *(_QWORD *)(v21 + 48) = finishCallback;
  *(_BYTE *)(v21 + 32) = v26;
  sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 48), (int32_t)finishCallback, v30, v31);
  v34 = *(struct BgmPlayArgsGroup_o **)(v21 + 24);
  if ( v34 )
  {
    this->fields.cacheArgsGroup = v34;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.cacheArgsGroup, (int32_t)v34, v32, v33);
    v22 = *v27;
    if ( !*v27 )
      goto LABEL_24;
    v35 = BgmPlayArgsGroup__AllArgsListNullExcluded(v22, 0LL);
    v36 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v35,
            (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v21 + 40) = v36;
    sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 40), (int32_t)v36, v37, v38);
    v39 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_Action_Action___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v39,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v40 = *(_QWORD *)(v21 + 40);
    if ( !v40 )
      goto LABEL_24;
    if ( *(int *)(v40 + 24) >= 1 )
    {
      v41 = 0LL;
      while ( 1 )
      {
        v42 = sub_1B4D1DC(BgmManager___c__DisplayClass57_1_TypeInfo);
        BgmManager___c__DisplayClass57_1___ctor((BgmManager___c__DisplayClass57_1_o *)v42, 0LL);
        if ( !v42 )
          break;
        *(_QWORD *)(v42 + 24) = v21;
        sub_1B4CF34((CGThumbnailListItem_o *)(v42 + 24), v21, v43, v44);
        if ( v41 >= *(unsigned int *)(v40 + 24) )
          goto LABEL_25;
        v47 = *(_QWORD *)(v40 + 32 + 8 * v41);
        *(_QWORD *)(v42 + 16) = v47;
        sub_1B4CF34((CGThumbnailListItem_o *)(v42 + 16), v47, v45, v46);
        v48 = (System_Action_object__o *)sub_1B4D1DC(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v48,
          (Il2CppObject *)v42,
          Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__,
          0LL);
        if ( !v39 )
          break;
        items = v39->fields._items;
        v52 = Method_System_Collections_Generic_List_Action_Action___Add__;
        ++v39->fields._version;
        if ( !items )
          break;
        size = v39->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v39,
            (Il2CppObject *)v48,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          v39->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v48;
          sub_1B4CF34((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v48, v49, v50);
        }
        if ( (__int64)++v41 >= *(int *)(v40 + 24) )
          goto LABEL_17;
      }
LABEL_24:
      sub_1B4D1EC(v22, v23);
    }
LABEL_17:
    if ( !v39 )
      goto LABEL_24;
    v55 = System_Collections_Generic_List_object___ToArray(
            v39,
            (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v56 = (ChainableActionParallel_o *)sub_1B4D1DC(ChainableActionParallel_TypeInfo);
    ChainableActionParallel___ctor_47119180(v56, (System_Action_Action__array *)v55, 0LL);
    v57 = sub_1B4D038(System_Action___TypeInfo, 1LL);
    v58 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v58,
      (Il2CppObject *)v21,
      Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__,
      0LL);
    if ( !v57 )
      goto LABEL_24;
    if ( !*(_DWORD *)(v57 + 24) )
LABEL_25:
      sub_1B4D1F4(v22, v23);
    *(_QWORD *)(v57 + 32) = v58;
    sub_1B4CF34((CGThumbnailListItem_o *)(v57 + 32), (int32_t)v58, v59, v60);
    if ( !v56 )
      goto LABEL_24;
    v22 = (BgmPlayArgsGroup_o *)ChainableActionBase__Final(
                                  (ChainableActionBase_o *)v56,
                                  (System_Action_array *)v57,
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
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  BgmManager_o *v20; // x0
  const MethodInfo *v21; // x2
  System_String_o *CueName; // x0
  Il2CppObject **v23; // x24
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_o *CueSheet; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  bool IsNullOrEmpty; // w22
  System_Action_o *v30; // x21
  const MethodInfo *v31; // x3
  System_Collections_IEnumerator_o *v32; // x0

  if ( (byte_49BA467 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, name);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Contains__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Insert__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Remove__, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v10);
    sub_1B4CF90(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, v11);
    sub_1B4CF90(&BgmManager___c__DisplayClass61_0_TypeInfo, v12);
    byte_49BA467 = 1;
  }
  v13 = sub_1B4D1DC(BgmManager___c__DisplayClass61_0_TypeInfo);
  BgmManager___c__DisplayClass61_0___ctor((BgmManager___c__DisplayClass61_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 40) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 40), (int32_t)finishCallback, v18, v19);
  CueName = BgmManager__ExtractCueName(v20, name, v21);
  *(_QWORD *)(v13 + 24) = CueName;
  v23 = (Il2CppObject **)(v13 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 24), (int32_t)CueName, v24, v25);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CueSheet = SoundManager__GetCueSheet(Instance, *(System_String_o **)(v13 + 24), 0LL);
  *(_QWORD *)(v13 + 16) = CueSheet;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 16), (int32_t)CueSheet, v27, v28);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v13 + 16), 0LL);
  if ( !IsNullOrEmpty )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)Instance,
              *v23,
              (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__) )
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
          *v23,
          (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_string__Remove__);
        Instance = (SoundManager_o *)this->fields.addBindList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            *v23,
            (const MethodInfo_3580F8C *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_12;
        }
      }
    }
LABEL_14:
    sub_1B4D1EC(Instance, v15);
  }
  v30 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)v13, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, 0LL);
  v32 = BgmManager__CoWaitSameAudioLoading(this, name, v30, v31);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v32, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BgmManager___c_c *v6; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *_9__53_0; // x20
  Il2CppObject *v9; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49BA463 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BgmPlayerBase__TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v3);
    sub_1B4CF90(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, v4);
    sub_1B4CF90(&BgmManager___c_TypeInfo, v5);
    byte_49BA463 = 1;
  }
  v6 = BgmManager___c_TypeInfo;
  bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v6 = BgmManager___c_TypeInfo;
  }
  _9__53_0 = (System_Action_object__o *)v6->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BgmManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__53_0 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__53_0, v9, Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Action_BgmPlayerBase__o *)_9__53_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v11, v12);
  }
  if ( !bgmPlayers )
    sub_1B4D1EC(v6, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__53_0,
    (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__RemoveUnusedOldFromBindList(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o **v2; // x19
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
  BgmManager_o *v20; // x8
  int32_t m_CancellationTokenSource; // w20
  BgmManager_c *v22; // x0
  System_Collections_Generic_HashSet_T__o *v23; // x20
  __int64 v24; // x1
  System_Collections_Generic_IEnumerable_T__o *UsingCueNames; // x0
  BgmManager_c *klass; // x8
  BgmManager_o *v27; // x21
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x21
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
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

  v2 = (BgmManager_o **)this;
  if ( (byte_49BA471 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_string__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_string__Contains__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_string__UnionWith__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_string___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_HashSet_string__TypeInfo, v10);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v11);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v12);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v13);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__RemoveAt__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Count__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Item__, v18);
    this = (BgmManager_o *)sub_1B4CF90(&SoundManager_TypeInfo, v19);
    byte_49BA471 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v20 = v2[4];
  if ( !v20 )
    goto LABEL_59;
  m_CancellationTokenSource = (int32_t)v20->fields.m_CancellationTokenSource;
  v22 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v22 = BgmManager_TypeInfo;
  }
  if ( m_CancellationTokenSource > v22->static_fields->ADD_BIND_MAX )
  {
    v23 = (System_Collections_Generic_HashSet_T__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_string__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v23,
      (const MethodInfo_3444800 *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = v2[8];
    if ( !this )
      goto LABEL_59;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v55 = v54;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v55,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v55.fields._current )
        sub_1B4D1EC(0LL, v24);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v55.fields._current,
                                                                       0LL);
      if ( !v23 )
        sub_1B4D1EC(UsingCueNames, UsingCueNames);
      System_Collections_Generic_HashSet_object___UnionWith(
        v23,
        UsingCueNames,
        (const MethodInfo_34459F4 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v55,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    this = v2[10];
    if ( this )
    {
      this = (BgmManager_o *)BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0LL);
      if ( !this )
        goto LABEL_59;
      klass = this->klass;
      v27 = this;
      v28 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v28;
          p_offset += 4;
          if ( !v28 )
            goto LABEL_19;
        }
        v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_19:
        v30 = sub_1B9D724(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v32 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
      if ( !v32 )
        sub_1B4D1EC(0LL, v31);
      while ( 1 )
      {
        v33 = *(_QWORD *)v32;
        v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
        {
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v34;
            v35 += 4;
            if ( !v34 )
              goto LABEL_26;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_26:
          v36 = sub_1B9D724(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
          break;
        v37 = *(_QWORD *)v32;
        v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
        {
          v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v39 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v38;
            v39 += 4;
            if ( !v38 )
              goto LABEL_33;
          }
          v40 = v37 + 16LL * *v39 + 312;
        }
        else
        {
LABEL_33:
          v40 = sub_1B9D724(v32, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
        if ( !v41 )
          sub_1B4D1EC(0LL, v42);
        CueName = (Il2CppObject *)BgmManager__ExtractCueName((BgmManager_o *)v41, *(System_String_o **)(v41 + 16), v43);
        if ( !v23 )
          sub_1B4D1EC(CueName, CueName);
        System_Collections_Generic_HashSet_object___Add(
          v23,
          CueName,
          (const MethodInfo_34459E4 *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
      v45 = *(_QWORD *)v32;
      v46 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
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
        v48 = sub_1B9D724(v32, System_IDisposable_TypeInfo, 0LL);
      }
      this = (BgmManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v32, *(_QWORD *)(v48 + 8));
    }
    v49 = (System_Collections_Generic_List_object__o *)v2[4];
    if ( !v49 )
LABEL_59:
      sub_1B4D1EC(this, method);
    v50 = v49->fields._size - 1;
    if ( v50 >= 1 )
    {
      do
      {
        this = (BgmManager_o *)System_Collections_Generic_List_object___get_Item(
                                 v49,
                                 v50,
                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v23 )
          break;
        this = (BgmManager_o *)System_Collections_Generic_HashSet_object___Contains(
                                 v23,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_3444EF4 *)Method_System_Collections_Generic_HashSet_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v50,
                   (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__releaseAudioAssetStorage((System_String_o *)Item, 0LL);
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this,
            v50,
            (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_string__RemoveAt__);
          v52 = v2[4];
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
        v49 = (System_Collections_Generic_List_object__o *)v2[4];
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

  if ( (byte_49BA446 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v1);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_49BA446 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B4D1EC(v4, v5);
    BgmManager__ResetLocal((BgmManager_o *)Instance, v5);
  }
}


void __fastcall BgmManager__ResetLocal(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BgmManager___c_c *v6; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *_9__51_0; // x20
  Il2CppObject *v9; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49BA461 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BgmPlayerBase__TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v3);
    sub_1B4CF90(&Method_BgmManager___c__ResetLocal_b__51_0__, v4);
    sub_1B4CF90(&BgmManager___c_TypeInfo, v5);
    byte_49BA461 = 1;
  }
  v6 = BgmManager___c_TypeInfo;
  bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v6 = BgmManager___c_TypeInfo;
  }
  _9__51_0 = (System_Action_object__o *)v6->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BgmManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__51_0 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__51_0, v9, Method_BgmManager___c__ResetLocal_b__51_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_BgmPlayerBase__o *)_9__51_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v11, v12);
  }
  if ( !bgmPlayers )
    sub_1B4D1EC(v6, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
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

  if ( (byte_49BA44A & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, v2);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_49BA44A = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( !v9 )
    {
      if ( !Instance )
        sub_1B4D1EC(v9, v10);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_49BA448 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_49BA448 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( !v9 )
    {
      if ( !Instance )
        sub_1B4D1EC(v9, v10);
      BgmManager__SetMuteLocal((BgmManager_o *)Instance, isMute, v11);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmManager__SetMuteLocal(BgmManager_o *this, bool isMute, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BgmManager___c__DisplayClass52_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *v12; // x20

  if ( (byte_49BA462 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BgmPlayerBase__TypeInfo, isMute);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v5);
    sub_1B4CF90(&Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__, v6);
    sub_1B4CF90(&BgmManager___c__DisplayClass52_0_TypeInfo, v7);
    byte_49BA462 = 1;
  }
  v8 = (BgmManager___c__DisplayClass52_0_o *)sub_1B4D1DC(BgmManager___c__DisplayClass52_0_TypeInfo);
  BgmManager___c__DisplayClass52_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.isMute = isMute,
        bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers,
        v12 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BgmPlayerBase__TypeInfo),
        System_Action_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__,
          0LL),
        !bgmPlayers) )
  {
    sub_1B4D1EC(v9, v10);
  }
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v12,
    (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_49BA455 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___, v2);
    sub_1B4CF90(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v6);
    byte_49BA455 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1B4D1EC(v8, v9);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        0LL,
        (const MethodInfo_2EF39A4 *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        0LL,
        (const MethodInfo_2EF37B8 *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
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
  __int64 v14; // x1
  bool v15; // w22

  if ( (byte_49BA454 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___, successCallback);
    sub_1B4CF90(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, v7);
    sub_1B4CF90(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___, v8);
    sub_1B4CF90(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v11);
    byte_49BA454 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v13 )
  {
    if ( !Instance )
      sub_1B4D1EC(v13, v14);
    if ( fadeoutTime <= 0.0 )
    {
      v15 = BgmManager__StopBgmLocal_object_(
              (BgmManager_o *)Instance,
              name,
              (const MethodInfo_2EF39A4 *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
      if ( name && !v15 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__StopBgmLocal_object_(
          (BgmManager_o *)Instance,
          0LL,
          (const MethodInfo_2EF39A4 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      v15 = BgmManager__FadeoutBgmLocal_object_(
              (BgmManager_o *)Instance,
              fadeoutTime,
              name,
              (const MethodInfo_2EF37B8 *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
      if ( name && !v15 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__FadeoutBgmLocal_object_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0LL,
          (const MethodInfo_2EF37B8 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    if ( v15 )
      ActionExtensions__Call(successCallback, 0LL);
  }
}


bool __fastcall BgmManager__StopBgmLocal_object_(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo_2EF39A4 *method)
{
  const MethodInfo_2EF33E4 **rgctx_data; // x8
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__68_T; // x8
  Il2CppClass *v11; // x0
  System_Func_object__bool__o *v12; // x21
  Il2CppClass *v13; // x0
  const MethodInfo_2EF39A4_RGCTXs *v14; // x8
  __int64 v15; // x0
  __int64 _3_System_Func_T__bool; // x8
  Il2CppObject *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  long double v20; // q0
  Il2CppClass *v21; // x0
  Il2CppClass *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  rgctx_data = (const MethodInfo_2EF33E4 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_bool___, name);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_bool___, v7);
    rgctx_data = (const MethodInfo_2EF33E4 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1B9D67C(method);
      rgctx_data = (const MethodInfo_2EF33E4 **)method->rgctx_data;
    }
  }
  v8 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, name, *rgctx_data);
  _4_BgmManager___c__68_T = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (BYTE5(_4_BgmManager___c__68_T->vtable[0].methodPtr) & 1) == 0 )
    _4_BgmManager___c__68_T = (Il2CppClass *)sub_1B9D620(inited);
  if ( !_4_BgmManager___c__68_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__68_T);
  v11 = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
    v11 = (Il2CppClass *)sub_1B9D620(inited);
  v12 = (System_Func_object__bool__o *)*((_QWORD *)v11->static_fields + 1);
  if ( !v12 )
  {
    v13 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
      v13 = (Il2CppClass *)sub_1B9D620(inited);
    if ( !v13->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v13);
    v14 = method->rgctx_data;
    v15 = (__int64)v14->_4_BgmManager___c__68_T_;
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    {
      v15 = sub_1B9D620(inited);
      v14 = method->rgctx_data;
    }
    _3_System_Func_T__bool = (__int64)v14->_3_System_Func_T__bool_;
    v17 = **(Il2CppObject ***)(v15 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__bool + 309) & 1) == 0 )
      _3_System_Func_T__bool = sub_1B9D620(inited);
    v12 = (System_Func_object__bool__o *)sub_1B4D1DC(_3_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v12,
      v17,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__68_T___StopBgmLocal_b__68_0,
      (const MethodInfo_33FEDD4 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
    v21 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
      v21 = (Il2CppClass *)sub_1B9D620(v20);
    *((_QWORD *)v21->static_fields + 1) = v12;
    v22 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v22->vtable[0].methodPtr) & 1) == 0 )
      v22 = (Il2CppClass *)sub_1B9D620(v20);
    sub_1B4CF34((CGThumbnailListItem_o *)((char *)v22->static_fields + 8), (int32_t)v12, v18, v19);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_2F332F4 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v23,
                                                               (const MethodInfo_2F3C0B4 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v24, (const MethodInfo_2F0ECE8 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__StopJingle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_49BA45B & 1) == 0 )
  {
    sub_1B4CF90(&Method_BgmManager_StopBgmLocal_JinglePlayer___, v1);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v2);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_49BA45B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B4D1EC(v5, v6);
    BgmManager__StopBgmLocal_object_(
      (BgmManager_o *)Instance,
      0LL,
      (const MethodInfo_2EF39A4 *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_49BA456 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, method);
    sub_1B4CF90(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    byte_49BA456 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1B4D1EC(v9, v10);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        name,
        (const MethodInfo_2EF39A4 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        name,
        (const MethodInfo_2EF37B8 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
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
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *SubArgsList_k__BackingField; // x21
  BgmManager___c_c *v21; // x0
  System_Func_object__object__o *_9__69_0; // x22
  Il2CppObject *v23; // x23
  struct BgmManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x19
  System_Func_object__bool__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  BgmManager___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_T__o *v34; // x19
  System_Action_object__o *_9__69_2; // x20
  Il2CppObject *v36; // x21
  struct BgmManager___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_49BA46C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_SubBgmPlayer__TypeInfo, requestedBgmArgs);
    sub_1B4CF90(&Method_BasicHelper_ForEach_SubBgmPlayer___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_string___, v8);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___, v9);
    sub_1B4CF90(&System_Func_SubBgmPlayArgs__string__TypeInfo, v10);
    sub_1B4CF90(&System_Func_SubBgmPlayer__bool__TypeInfo, v11);
    sub_1B4CF90(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, v12);
    sub_1B4CF90(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, v13);
    sub_1B4CF90(&Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__, v14);
    sub_1B4CF90(&BgmManager___c__DisplayClass69_0_TypeInfo, v15);
    sub_1B4CF90(&BgmManager___c_TypeInfo, v16);
    byte_49BA46C = 1;
  }
  v17 = sub_1B4D1DC(BgmManager___c__DisplayClass69_0_TypeInfo);
  BgmManager___c__DisplayClass69_0___ctor((BgmManager___c__DisplayClass69_0_o *)v17, 0LL);
  if ( this->fields.enableCounter_KeepSubBgm <= 0 )
  {
    if ( !requestedBgmArgs )
      goto LABEL_19;
    SubArgsList_k__BackingField = requestedBgmArgs->fields._SubArgsList_k__BackingField;
    v21 = BgmManager___c_TypeInfo;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v21 = BgmManager___c_TypeInfo;
    }
    _9__69_0 = (System_Func_object__object__o *)v21->static_fields->__9__69_0;
    if ( !_9__69_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BgmManager___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__69_0 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_SubBgmPlayArgs__string__TypeInfo);
      System_Func_object__object____ctor(_9__69_0, v23, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, 0LL);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__69_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__69_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__69_0, (int32_t)_9__69_0, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__69_0,
                                                                 (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v18 = System_Linq_Enumerable__ToArray_object_(
            v27,
            (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v17 )
LABEL_19:
      sub_1B4D1EC(v18, v19);
    *(_QWORD *)(v17 + 16) = v18;
    sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 16), (int32_t)v18, v28, v29);
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_2F2D660 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v31 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)v17,
      Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__,
      0LL);
    v32 = System_Linq_Enumerable__Where_object_(
            v30,
            (System_Func_TSource__bool__o *)v31,
            (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v33 = BgmManager___c_TypeInfo;
    v34 = (System_Collections_Generic_IEnumerable_T__o *)v32;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v33 = BgmManager___c_TypeInfo;
    }
    _9__69_2 = (System_Action_object__o *)v33->static_fields->__9__69_2;
    if ( !_9__69_2 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = BgmManager___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v33->static_fields->__9;
      _9__69_2 = (System_Action_object__o *)sub_1B4D1DC(System_Action_SubBgmPlayer__TypeInfo);
      System_Action_object____ctor(_9__69_2, v36, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, 0LL);
      v37 = BgmManager___c_TypeInfo->static_fields;
      v37->__9__69_2 = (struct System_Action_SubBgmPlayer__o *)_9__69_2;
      sub_1B4CF34((CGThumbnailListItem_o *)&v37->__9__69_2, (int32_t)_9__69_2, v38, v39);
    }
    BasicHelper__ForEach_object_(
      v34,
      (System_Action_T__o *)_9__69_2,
      (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_SubBgmPlayer___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_String_o *__fastcall BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_1B4D1EC(this, method);
  return mainBgmPlayer->fields.bgmName;
}


bool __fastcall BgmManager__get_IsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_49BA442 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v1);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_49BA442 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v4 )
    sub_1B4D1EC(0LL, v5);
  return BgmManager__IsLoadingLocal((BgmManager_o *)v4, 0LL, v6);
}


bool __fastcall BgmManager__get_IsMute(const MethodInfo *method)
{
  __int64 v1; // x1
  BgmManager_c *v2; // x0

  if ( (byte_49BA447 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, v1);
    byte_49BA447 = 1;
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
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_49BA44D & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_49BA44D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1B4D1EC(v5, v6);
  return BgmManager__IsLoadingLocal((BgmManager_o *)Instance, name, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  BgmManager_o *_4__this; // x21
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BgmManager_o *v13; // x1
  struct System_String_o *bgmName; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitWhile_o *v18; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_49BA47E & 1) == 0 )
  {
    sub_1B4CF90(&System_Func_bool__TypeInfo, method);
    sub_1B4CF90(&Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__, v3);
    sub_1B4CF90(&BgmManager___c__DisplayClass63_0_TypeInfo, v4);
    sub_1B4CF90(&UnityEngine_WaitWhile_TypeInfo, v5);
    byte_49BA47E = 1;
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
    v8 = sub_1B4D1DC(BgmManager___c__DisplayClass63_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0LL);
    if ( !v8
      || (v13 = this->fields.__4__this,
          *(_QWORD *)(v8 + 16) = v13,
          sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)v13, v11, v12),
          bgmName = this->fields.bgmName,
          *(_QWORD *)(v8 + 24) = bgmName,
          sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 24), (int32_t)bgmName, v15, v16),
          !_4__this) )
    {
      sub_1B4D1EC(v9, v10);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v8 + 24), 0LL) )
    {
      v17 = (System_Func_bool__o *)sub_1B4D1DC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v17,
        (Il2CppObject *)v8,
        Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__,
        0LL);
      v18 = (UnityEngine_WaitWhile_o *)sub_1B4D1DC(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v18, v17, 0LL);
      this->fields.__2__current = (Il2CppObject *)v18;
      p__2__current = &this->fields.__2__current;
      sub_1B4CF34((CGThumbnailListItem_o *)p__2__current, (int32_t)v18, v20, v21);
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_BgmManager__CoWaitSameAudioLoading_d__63_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BA479 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager___c_TypeInfo, v1);
    byte_49BA479 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(BgmManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BgmManager___c_TypeInfo->static_fields->__9 = (struct BgmManager___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)BgmManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, 0LL);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, (const MethodInfo *)x);
}


void __fastcall BgmManager___c___FixedUpdate_b__78_1(
        BgmManager___c_o *this,
        GeneralBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, void *))x->klass->vtable._13_FixedUpdate.method)(x, x->klass[1]._1.image);
}


void __fastcall BgmManager___c___FixedUpdate_b__78_3(
        BgmManager___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  const MethodInfo_369A3B8 *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  System_Nullable_long__o v9; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_float__o p_fadeTime; // 0:x0.8
  System_Nullable_float__o v12; // 0:x1.8
  System_Nullable_float__o v13; // 0:x2.8
  System_Nullable_long__o v14; // 0:x0.16

  if ( (byte_49BA47A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Nullable_long___ctor__, x);
    sub_1B4CF90(&Method_System_Nullable_float___ctor__, v4);
    byte_49BA47A = 1;
  }
  p_fadeTime = (System_Nullable_float__o)&fadeTime;
  fadeTime = 0LL;
  *(_QWORD *)&v9.fields.hasValue = 0LL;
  v9.fields.value = 0LL;
  System_Nullable_float____ctor(p_fadeTime, 0.0, (const MethodInfo_369BE50 *)Method_System_Nullable_float___ctor__);
  *(_QWORD *)&v14.fields.hasValue = &v9;
  v14.fields.value = 0LL;
  System_Nullable_long____ctor(v14, Method_System_Nullable_long___ctor__, v5);
  if ( !x )
    sub_1B4D1EC(v6, v7);
  v13 = fadeTime;
  v12 = 0LL;
  BgmPlayArgs__Update(x, v12, v13, v9, v8);
}


bool __fastcall BgmManager___c___GetOrCreateSubBgmPlayer_b__72_1(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.bgmName == 0LL;
}


void __fastcall BgmManager___c___InitializeLocal_b__50_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
  return x->fields._BgmName_k__BackingField;
}


void __fastcall BgmManager___c___StopUnrequestedSubBgm_b__69_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._11_StopBgm.method)(
    x,
    0LL,
    x->klass->vtable._12_ExportPlayArgs.methodPtr);
}


void __fastcall BgmManager___c__54_object____cctor(const MethodInfo_30C5C04 *method)
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
    klass = sub_1B9D620();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1B9D620();
  v4 = (Il2CppObject *)sub_1B4D1DC(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1B9D620();
  System_Object___ctor(v4, 0LL);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1B9D620();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1B9D620();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1B9D620();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1B9D620();
  sub_1B4CF34(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BgmManager___c__54_object____ctor(BgmManager___c__54_T__o *this, const MethodInfo_30C5CC0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__54_object____EnumeratePlayersHavingBgmName_b__54_0(
        BgmManager___c__54_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30C5CC8 *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x[1].monitor != 0LL;
}


void __fastcall BgmManager___c__68_object____cctor(const MethodInfo_30C5F34 *method)
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
    klass = sub_1B9D620();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1B9D620();
  v4 = (Il2CppObject *)sub_1B4D1DC(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1B9D620();
  System_Object___ctor(v4, 0LL);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1B9D620();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1B9D620();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1B9D620();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1B9D620();
  sub_1B4CF34(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BgmManager___c__68_object____ctor(BgmManager___c__68_T__o *this, const MethodInfo_30C5FF0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__68_object____StopBgmLocal_b__68_0(
        BgmManager___c__68_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30C5FF8 *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))x->klass->vtable[11].method)(
           x,
           0LL,
           x->klass->vtable[12].methodPtr);
}


void __fastcall BgmManager___c__76_object____cctor(const MethodInfo_30C6124 *method)
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
    klass = sub_1B9D620();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1B9D620();
  v4 = (Il2CppObject *)sub_1B4D1DC(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1B9D620();
  System_Object___ctor(v4, 0LL);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1B9D620();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1B9D620();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1B9D620();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1B9D620();
  sub_1B4CF34(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BgmManager___c__76_object____ctor(BgmManager___c__76_T__o *this, const MethodInfo_30C61E0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall BgmManager___c__76_object____ExportPlayArgsGroupLocal_b__76_0(
        BgmManager___c__76_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30C61E8 *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, Il2CppMethodPointer))x->klass->vtable._7_SetMute.method)(
    x,
    this->fields.isMute,
    x->klass->vtable._8_ReflectMasterVolume.methodPtr);
}


void __fastcall BgmManager___c__DisplayClass54_0_object____ctor(
        BgmManager___c__DisplayClass54_0_T__o *this,
        const MethodInfo_30CB11C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass54_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass54_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30CB124 *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
  const MethodInfo *v5; // x3
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
            sub_1B4D1F4(_4__this, method);
          _4__this = this->fields.__4__this;
          if ( !_4__this )
            break;
          BgmManager__PlayPreloadedBgm(_4__this, nonNullArgsAll->m_Items[v8], 0LL);
          LODWORD(v7) = nonNullArgsAll->max_length;
          if ( (__int64)++v8 >= (int)v7 )
            goto LABEL_10;
        }
LABEL_14:
        sub_1B4D1EC(_4__this, method);
      }
LABEL_10:
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_14;
      _4__this->fields.cacheArgsGroup = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&_4__this->fields.cacheArgsGroup, 0, v4, v5);
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
    sub_1B4D1EC(this, callback);
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
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_String_o *cueName; // x1
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x0
  Il2CppObject *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BgmManager_o *_4__this; // x8
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_49BA47B & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1B4CF90(&SoundManager_TypeInfo, v6);
    sub_1B4CF90(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, v7);
    byte_49BA47B = 1;
  }
  cueName = this->fields.cueName;
  this->fields.tempCueSheetName = cueName;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)cueName, v2, v3);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.loadingBgmCueNameList) == 0LL
    || (v10 = (Il2CppObject *)this->fields.cueName,
        items = loadingBgmCueNameList->fields._items,
        v15 = Method_System_Collections_Generic_List_string__Add__,
        ++loadingBgmCueNameList->fields._version,
        !items) )
  {
    sub_1B4D1EC(loadingBgmCueNameList, v10);
  }
  size = loadingBgmCueNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      loadingBgmCueNameList,
      v10,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    loadingBgmCueNameList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v10;
    sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v10, v11, v12);
  }
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, 0LL);
    this->fields.__9__1 = _9__1;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v20, v21);
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
  if ( (byte_49BA47C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Contains__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Insert__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Remove__, v4);
    this = (BgmManager___c__DisplayClass61_0_o *)sub_1B4CF90(
                                                   &Method_SingletonMonoBehaviour_SoundManager__get_Instance__,
                                                   v5);
    byte_49BA47C = 1;
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
    (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
                                                   (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__);
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
            (const MethodInfo_3580F8C *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(0LL, method);
  return BgmManager__IsLoadingLocal(_4__this, this->fields.bgmName, 0LL);
}


void __fastcall BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_30CC5F8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass67_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30CC600 *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
  if ( (byte_49BA47D & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass69_0_o *)sub_1B4CF90(&Method_System_Array_IndexOf_string___, x);
    byte_49BA47D = 1;
  }
  if ( !x )
    sub_1B4D1EC(this, x);
  return (unsigned int)System_Array__IndexOf_object_(
                         (System_Object_array *)v4->fields.subBgmNamesToPlay,
                         (Il2CppObject *)x->fields.bgmName,
                         (const MethodInfo_2FFB44C *)Method_System_Array_IndexOf_string___) >> 31;
}


void __fastcall BgmManager___c__DisplayClass70_0_object____ctor(
        BgmManager___c__DisplayClass70_0_T__o *this,
        const MethodInfo_30CD818 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass70_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass70_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30CD820 *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(_4__this, method);
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
    sub_1B4D1EC(this, 0LL);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0LL);
}