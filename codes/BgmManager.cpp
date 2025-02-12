void __fastcall BgmManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  struct BgmManager_StaticFields *static_fields; // x0
  int64_t v11; // x1
  int64_t v12; // x1
  struct BgmManager_StaticFields *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct BgmManager_StaticFields *v20; // x8

  if ( (byte_4BB3CE9 & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_3049/*"BG/BackButton"*/, v8);
    sub_1C13D24(&StringLiteral_3050/*"BGM"*/, v9);
    byte_4BB3CE9 = 1;
  }
  static_fields = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_VOLUME = 0x3DCCCCCD3F800000LL;
  v11 = StringLiteral_3049/*"BG/BackButton"*/;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_3049/*"BG/BackButton"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_3050/*"BGM"*/;
  v13 = BgmManager_TypeInfo->static_fields;
  v13->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_3050/*"BGM"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v13->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v12, v14, v15, v16, v17, v18, v19);
  v20 = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&v20->ADD_BIND_MAX = 0x400000005LL;
  v20->isMute = 0;
  v20->masterVolume = 1.0;
}


void __fastcall BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BB3CE8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo, v4);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager___ctor__, v6);
    byte_4BB3CE8 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.addBindList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v14;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.loadingBgmCueNameList,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v21;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.bgmPlayers, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3869FF0 *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *Instance; // x20
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v21; // x21
  Il2CppObject *v22; // x0

  if ( (byte_4BB3CBF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&System_Predicate_BgmPlayerBase__TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    sub_1C13D24(&Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__, v8);
    sub_1C13D24(&BgmManager___c__DisplayClass29_0_TypeInfo, v9);
    byte_4BB3CBF = 1;
  }
  v10 = sub_1C13F70(BgmManager___c__DisplayClass29_0_TypeInfo);
  BgmManager___c__DisplayClass29_0___ctor((BgmManager___c__DisplayClass29_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  *(_QWORD *)(v10 + 16) = bgmName;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)bgmName, v13, v14, v15, v16, v17, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( Instance )
    {
      klass = (System_Collections_Generic_List_object__o *)Instance[4].klass;
      v21 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_BgmPlayerBase__TypeInfo);
      System_Predicate_object____ctor(
        v21,
        (Il2CppObject *)v10,
        Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__,
        0LL);
      if ( klass )
      {
        v22 = System_Collections_Generic_List_object___Find(
                klass,
                (System_Predicate_T__o *)v21,
                (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v22 )
          BgmPlayerBase__set_BgmVolume((BgmPlayerBase_o *)v22, volume, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1C13F80(v11, v12);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BB3CDC & 1) == 0 )
  {
    sub_1C13D24(&BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo, bgmName);
    byte_4BB3CDC = 1;
  }
  v7 = sub_1C13F70(BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo);
  BgmManager__CoWaitSameAudioLoading_d__63___ctor((BgmManager__CoWaitSameAudioLoading_d__63_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1C13F80(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)bgmName, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)finishCallback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BgmManager__Enable_KeepSubBgm(bool value, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int v7; // w9

  if ( (byte_4BB3CD2 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_4BB3CD2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C13F80(v5, v6);
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
        const MethodInfo_2F8101C *method)
{
  long double v3; // q0
  const MethodInfo_2F8101C_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass54_0_T; // x0
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x0
  long double inited; // q0
  const MethodInfo_2F8101C_RGCTXs *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  __int64 _5_System_Func_T__bool; // x0
  System_Func_object__bool__o *v24; // x21
  __int64 _6_BgmManager___c__54_T; // x0
  Il2CppClass *v26; // x0
  Il2CppClass *v27; // x0
  const MethodInfo_2F8101C_RGCTXs *v28; // x8
  __int64 v29; // x0
  __int64 v30; // x8
  Il2CppObject *v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  long double v38; // q0
  Il2CppClass *v39; // x0
  Il2CppClass *v40; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C65C5C(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass54_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass54_0_T = sub_1C65C00(v3);
  v9 = sub_1C13F70(_0_BgmManager___c__DisplayClass54_0_T);
  BgmManager___c__DisplayClass54_0_object____ctor(
    (BgmManager___c__DisplayClass54_0_T__o *)v9,
    (const MethodInfo_315A658 *)method->rgctx_data->_1_BgmManager___c__DisplayClass54_0_T___ctor);
  if ( !v9 )
    sub_1C13F80(v10, v11);
  *(_QWORD *)(v9 + 16) = bgmNameFilter;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)bgmNameFilter, v12, v13, v14, v15, v16, v17);
  v18 = *(_QWORD *)(v9 + 16);
  v19 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
          (const MethodInfo_2FB7F8C *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  v21 = method->rgctx_data;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( v18 )
  {
    _5_System_Func_T__bool = (__int64)v21->_5_System_Func_T__bool_;
    if ( (*(_BYTE *)(_5_System_Func_T__bool + 309) & 1) == 0 )
      _5_System_Func_T__bool = sub_1C65C00(inited);
    v24 = (System_Func_object__bool__o *)sub_1C13F70(_5_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v24,
      (Il2CppObject *)v9,
      (intptr_t)method->rgctx_data->_10_BgmManager___c__DisplayClass54_0_T___EnumeratePlayersHavingBgmName_b__1,
      (const MethodInfo_34C67E4 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
  }
  else
  {
    _6_BgmManager___c__54_T = (__int64)v21->_6_BgmManager___c__54_T_;
    if ( (*(_BYTE *)(_6_BgmManager___c__54_T + 309) & 1) == 0 )
      _6_BgmManager___c__54_T = sub_1C65C00(inited);
    if ( !*(_DWORD *)(_6_BgmManager___c__54_T + 224) )
      inited = j_il2cpp_runtime_class_init_0(_6_BgmManager___c__54_T);
    v26 = method->rgctx_data->_6_BgmManager___c__54_T_;
    if ( (BYTE5(v26->vtable[0].methodPtr) & 1) == 0 )
      v26 = (Il2CppClass *)sub_1C65C00(inited);
    v24 = (System_Func_object__bool__o *)*((_QWORD *)v26->static_fields + 1);
    if ( !v24 )
    {
      v27 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v27->vtable[0].methodPtr) & 1) == 0 )
        v27 = (Il2CppClass *)sub_1C65C00(inited);
      if ( !v27->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(v27);
      v28 = method->rgctx_data;
      v29 = (__int64)v28->_6_BgmManager___c__54_T_;
      if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      {
        v29 = sub_1C65C00(inited);
        v28 = method->rgctx_data;
      }
      v30 = (__int64)v28->_5_System_Func_T__bool_;
      v31 = **(Il2CppObject ***)(v29 + 184);
      if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
        v30 = sub_1C65C00(inited);
      v24 = (System_Func_object__bool__o *)sub_1C13F70(v30);
      System_Func_object__bool____ctor(
        v24,
        v31,
        (intptr_t)method->rgctx_data->_7_BgmManager___c__54_T___EnumeratePlayersHavingBgmName_b__54_0,
        (const MethodInfo_34C67E4 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
      v39 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v39->vtable[0].methodPtr) & 1) == 0 )
        v39 = (Il2CppClass *)sub_1C65C00(v38);
      *((_QWORD *)v39->static_fields + 1) = v24;
      v40 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v40->vtable[0].methodPtr) & 1) == 0 )
        v40 = (Il2CppClass *)sub_1C65C00(v38);
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)((char *)v40->static_fields + 8),
        (int64_t)v24,
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
                                                          (const MethodInfo_2FCEBC0 *)method->rgctx_data->_9_System_Linq_Enumerable_Where_T_);
}


bool __fastcall BgmManager__ExistsPlayerHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_2F811E8 *method)
{
  const MethodInfo_2F8101C **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  rgctx_data = (const MethodInfo_2F8101C **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C65C5C(method);
    rgctx_data = (const MethodInfo_2F8101C **)method->rgctx_data;
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, bgmNameFilter, *rgctx_data);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_2F9A90C *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BB3CB7 & 1) == 0 )
  {
    sub_1C13D24(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___, v1);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v2);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_4BB3CB7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1C13F80(v5, v6);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_2F81234 *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroupLocal_object_(
        BgmManager_o *this,
        const MethodInfo_2F81234 *method)
{
  const MethodInfo_2F8101C **rgctx_data; // x8
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *v6; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__76_T; // x8
  Il2CppClass *v9; // x0
  System_Func_object__object__o *v10; // x21
  Il2CppClass *v11; // x0
  const MethodInfo_2F81234_RGCTXs *v12; // x8
  __int64 v13; // x0
  __int64 _3_System_Func_T__BgmPlayArgs; // x8
  Il2CppObject *v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  long double v22; // q0
  Il2CppClass *v23; // x0
  Il2CppClass *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Object_array *v26; // x19
  BgmPlayArgsGroup_o *v27; // x20

  rgctx_data = (const MethodInfo_2F8101C **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C13D24(&BgmPlayArgsGroup_TypeInfo, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v5);
    rgctx_data = (const MethodInfo_2F8101C **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C65C5C(method);
      rgctx_data = (const MethodInfo_2F8101C **)method->rgctx_data;
    }
  }
  v6 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, 0LL, *rgctx_data);
  _4_BgmManager___c__76_T = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (BYTE5(_4_BgmManager___c__76_T->vtable[0].methodPtr) & 1) == 0 )
    _4_BgmManager___c__76_T = (Il2CppClass *)sub_1C65C00(inited);
  if ( !_4_BgmManager___c__76_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__76_T);
  v9 = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1C65C00(inited);
  v10 = (System_Func_object__object__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1C65C00(inited);
    if ( !v11->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = method->rgctx_data;
    v13 = (__int64)v12->_4_BgmManager___c__76_T_;
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    {
      v13 = sub_1C65C00(inited);
      v12 = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = (__int64)v12->_3_System_Func_T__BgmPlayArgs_;
    v15 = **(Il2CppObject ***)(v13 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__BgmPlayArgs + 309) & 1) == 0 )
      _3_System_Func_T__BgmPlayArgs = sub_1C65C00(inited);
    v10 = (System_Func_object__object__o *)sub_1C13F70(_3_System_Func_T__BgmPlayArgs);
    System_Func_object__object____ctor(
      v10,
      v15,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__76_T___ExportPlayArgsGroupLocal_b__76_0,
      (const MethodInfo_34C6E8C *)method->rgctx_data->_6_System_Func_T__BgmPlayArgs___ctor);
    v23 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v23->vtable[0].methodPtr) & 1) == 0 )
      v23 = (Il2CppClass *)sub_1C65C00(v22);
    *((_QWORD *)v23->static_fields + 1) = v10;
    v24 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v24->vtable[0].methodPtr) & 1) == 0 )
      v24 = (Il2CppClass *)sub_1C65C00(v22);
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)((char *)v24->static_fields + 8),
      (int64_t)v10,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TResult__o *)v10,
                                                               (const MethodInfo_2FC0B08 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__BgmPlayArgs_);
  v26 = System_Linq_Enumerable__ToArray_object_(
          v25,
          (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v27 = (BgmPlayArgsGroup_o *)sub_1C13F70(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_39475544(v27, (BgmPlayArgs_array *)v26, 0LL);
  return v27;
}


System_String_o *__fastcall BgmManager__ExtractCueName(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  __int64 v6; // x8

  if ( (byte_4BB3CDF & 1) == 0 )
  {
    sub_1C13D24(&char___TypeInfo, name);
    byte_4BB3CDF = 1;
  }
  v4 = (System_Char_array *)sub_1C13DCC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  v4->m_Items[2] = 47;
  if ( !name || (v4 = (System_Char_array *)System_String__Split_62990100(name, v4, 0LL)) == 0LL )
LABEL_9:
    sub_1C13F80(v4, v5);
  v6 = *(_QWORD *)&v4->max_length;
  if ( !(_DWORD)v6 )
LABEL_10:
    sub_1C13F88(v4, v5);
  return *(System_String_o **)((char *)&v4->m_Items[2] + (((v6 << 32) - 0x100000000LL) >> 29));
}


void __fastcall BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4BB3CC7 & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, method);
    byte_4BB3CC7 = 1;
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
        const MethodInfo_2F813F0 *method)
{
  const MethodInfo_2F813F0_RGCTXs *rgctx_data; // x8
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
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_bool___, name);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_bool___, v9);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C65C5C(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_BgmManager___c__DisplayClass67_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass67_0_T = sub_1C65C00(*(long double *)&fadeoutTime);
  v11 = (BgmManager___c__DisplayClass67_0_T__o *)sub_1C13F70(_0_BgmManager___c__DisplayClass67_0_T);
  BgmManager___c__DisplayClass67_0_object____ctor(
    v11,
    (const MethodInfo_315BB34 *)method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor);
  if ( !v11 )
    sub_1C13F80(v12, v13);
  v11->fields.fadeoutTime = fadeoutTime;
  v14 = BgmManager__EnumeratePlayersHavingBgmName_object_(
          this,
          name,
          (const MethodInfo_2F8101C *)method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_);
  _5_System_Func_T__bool = method->rgctx_data->_5_System_Func_T__bool_;
  if ( (BYTE5(_5_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
    _5_System_Func_T__bool = (Il2CppClass *)sub_1C65C00(v15);
  v17 = (System_Func_object__bool__o *)sub_1C13F70(_5_System_Func_T__bool);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass67_0_T___FadeoutBgmLocal_b__0,
    (const MethodInfo_34C67E4 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                               (System_Func_TSource__TResult__o *)v17,
                                                               (const MethodInfo_2FBFC44 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v18,
                                                               (const MethodInfo_2FC8A04 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v19, (const MethodInfo_2F9A144 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BB3CD0 & 1) == 0 )
  {
    sub_1C13D24(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___, v2);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_4BB3CD0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1C13F80(v7, v8);
    BgmManager__FadeoutBgmLocal_object_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0LL,
      (const MethodInfo_2F813F0 *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL4 v39; // w0
  System_Collections_Generic_IEnumerable_TResult__o *v40; // x0
  BgmManager___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_T__o *v42; // x20
  System_Action_object__o *_9__78_1; // x21
  Il2CppObject *v44; // x22
  struct BgmManager___c_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  BgmManager_o *v52; // x20
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v53; // x0
  System_Collections_Generic_IEnumerable_T__o *v54; // x21
  BgmManager___c_c *v55; // x0
  System_Action_object__o *_9__78_3; // x22
  Il2CppObject *v57; // x23
  struct BgmManager___c_StaticFields *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // x2
  System_Collections_IEnumerable_o *v66; // x19
  System_Action_object__o *v67; // x20
  Il2CppObject *v68; // x21
  struct BgmManager___c_StaticFields *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7

  v2 = this;
  if ( (byte_4BB3CE6 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_GeneralBgmPlayer__TypeInfo, method);
    sub_1C13D24(&System_Action_BgmPlayerBase__TypeInfo, v3);
    sub_1C13D24(&System_Action_BgmPlayArgs__TypeInfo, v4);
    sub_1C13D24(&Method_BasicHelper_ForEach_BgmPlayArgs___, v5);
    sub_1C13D24(&Method_BasicHelper_ForEach_GeneralBgmPlayer___, v6);
    sub_1C13D24(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, v7);
    sub_1C13D24(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___, v8);
    sub_1C13D24(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___, v9);
    sub_1C13D24(&BgmManager_TypeInfo, v10);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___, v11);
    sub_1C13D24(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___, v12);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v13);
    sub_1C13D24(&System_Func_GeneralBgmPlayer__bool__TypeInfo, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v16);
    sub_1C13D24(&Method_BgmManager___c__FixedUpdate_b__78_0__, v17);
    sub_1C13D24(&Method_BgmManager___c__FixedUpdate_b__78_1__, v18);
    sub_1C13D24(&Method_BgmManager___c__FixedUpdate_b__78_2__, v19);
    sub_1C13D24(&Method_BgmManager___c__FixedUpdate_b__78_3__, v20);
    this = (BgmManager_o *)sub_1C13D24(&BgmManager___c_TypeInfo, v21);
    byte_4BB3CE6 = 1;
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
            (const MethodInfo_2FB7F8C *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
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
      _9__78_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_GeneralBgmPlayer__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__78_0, v31, Method_BgmManager___c__FixedUpdate_b__78_0__, 0LL);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__78_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__78_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__78_0,
        (int64_t)_9__78_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = System_Linq_Enumerable__Any_object__49924064(
            v29,
            (System_Func_TSource__bool__o *)_9__78_0,
            (const MethodInfo_2F9C7E0 *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v39 & v26) != 0 )
    {
      v40 = System_Linq_Enumerable__OfType_object_(
              *p_bgmPlayers,
              (const MethodInfo_2FB7F8C *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
      v41 = BgmManager___c_TypeInfo;
      v42 = (System_Collections_Generic_IEnumerable_T__o *)v40;
      if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
        v41 = BgmManager___c_TypeInfo;
      }
      _9__78_1 = (System_Action_object__o *)v41->static_fields->__9__78_1;
      if ( !_9__78_1 )
      {
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v41 = BgmManager___c_TypeInfo;
        }
        v44 = (Il2CppObject *)v41->static_fields->__9;
        _9__78_1 = (System_Action_object__o *)sub_1C13F70(System_Action_GeneralBgmPlayer__TypeInfo);
        System_Action_object____ctor(_9__78_1, v44, Method_BgmManager___c__FixedUpdate_b__78_1__, 0LL);
        v45 = BgmManager___c_TypeInfo->static_fields;
        v45->__9__78_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__78_1;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v45->__9__78_1, (int64_t)_9__78_1, v46, v47, v48, v49, v50, v51);
      }
      BasicHelper__ForEach_object_(
        v42,
        (System_Action_T__o *)_9__78_1,
        (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v2->fields.isBgmStopJingle = 1;
    }
    else if ( !v39
           && v2->fields.isBgmStopJingle
           && v26 == 0
           && BgmManager__ExistsPlayerHavingBgmName_object_(
                v2,
                0LL,
                (const MethodInfo_2F811E8 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
    {
      this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                               v2,
                               (const MethodInfo_2F81234 *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
      if ( !this )
        goto LABEL_47;
      v52 = this;
      v53 = BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0LL);
      v54 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v53,
                                                             (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      this = (BgmManager_o *)BgmManager__StopBgmLocal_object_(
                               v2,
                               0LL,
                               (const MethodInfo_2F815DC *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
      if ( !v54 )
        goto LABEL_47;
      if ( v54[1].monitor )
      {
        v55 = BgmManager___c_TypeInfo;
        if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
          v55 = BgmManager___c_TypeInfo;
        }
        _9__78_3 = (System_Action_object__o *)v55->static_fields->__9__78_3;
        if ( !_9__78_3 )
        {
          if ( !v55->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v55);
            v55 = BgmManager___c_TypeInfo;
          }
          v57 = (Il2CppObject *)v55->static_fields->__9;
          _9__78_3 = (System_Action_object__o *)sub_1C13F70(System_Action_BgmPlayArgs__TypeInfo);
          System_Action_object____ctor(_9__78_3, v57, Method_BgmManager___c__FixedUpdate_b__78_3__, 0LL);
          v58 = BgmManager___c_TypeInfo->static_fields;
          v58->__9__78_3 = (struct System_Action_BgmPlayArgs__o *)_9__78_3;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v58->__9__78_3, (int64_t)_9__78_3, v59, v60, v61, v62, v63, v64);
        }
        BasicHelper__ForEach_object_(
          v54,
          (System_Action_T__o *)_9__78_3,
          (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_BgmPlayArgs___);
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        BgmManager__PlayBgm_39458848((BgmPlayArgsGroup_o *)v52, 0LL, v65);
      }
    }
    if ( !v26 )
      v2->fields.isBgmStopJingle = 0;
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
    v66 = *p_bgmPlayers;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v67 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 10);
    if ( !v67 )
    {
      if ( !LODWORD(this[2].fields.mainBgmPlayer) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (BgmManager_o *)BgmManager___c_TypeInfo;
      }
      v68 = *(Il2CppObject **)this[2].monitor;
      v67 = (System_Action_object__o *)sub_1C13F70(System_Action_BgmPlayerBase__TypeInfo);
      System_Action_object____ctor(v67, v68, Method_BgmManager___c__FixedUpdate_b__78_2__, 0LL);
      v69 = BgmManager___c_TypeInfo->static_fields;
      v69->__9__78_2 = (struct System_Action_BgmPlayerBase__o *)v67;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v69->__9__78_2, (int64_t)v67, v70, v71, v72, v73, v74, v75);
    }
    if ( v66 )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)v66,
        (System_Action_T__o *)v67,
        (const MethodInfo_362DC0C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
      return;
    }
LABEL_47:
    sub_1C13F80(this, method);
  }
}


void __fastcall BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BB3CD3 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v1);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_4BB3CD3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C13F80(v4, v5);
    LODWORD(Instance[4].monitor) = 0;
  }
}


CriAtomSource_o *__fastcall BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4BB3CE4 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___, method);
    byte_4BB3CE4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v4);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_object_(
                              gameObject,
                              (const MethodInfo_2FDF914 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t __fastcall BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *CueSheet; // x0
  SoundManager_c *v7; // x8
  System_String_o *v8; // x19

  if ( (byte_4BB3CB9 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    sub_1C13D24(&SoundManager_TypeInfo, v3);
    byte_4BB3CB9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v5);
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

  if ( (byte_4BB3CCB & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v1);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_4BB3CCB = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v5 )
  {
    if ( !Instance || (klass = Instance[2].klass) == 0LL )
      sub_1C13F80(0LL, v4);
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

  if ( (byte_4BB3CE7 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, v1);
    sub_1C13D24(&BgmManager_TypeInfo, v2);
    sub_1C13D24(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v4);
    sub_1C13D24(&ServantCommentManager_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BB3CE7 = 1;
  }
  bgmName = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v8);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
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
            (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___) )
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

  if ( (byte_4BB3CBD & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, v1);
    byte_4BB3CBD = 1;
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  JinglePlayer_c *klass; // x9
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 bgmName_low; // x10
  __int64 v30; // x8

  if ( (byte_4BB3CE3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_OfType_JinglePlayer___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___, v3);
    sub_1C13D24(&JinglePlayer_TypeInfo, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v6);
    byte_4BB3CE3 = 1;
  }
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_2FB7F8C *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  v8 = (JinglePlayer_o *)System_Linq_Enumerable__ToArray_object_(
                           v7,
                           (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !v8 )
    goto LABEL_15;
  bgmName = v8->fields.bgmName;
  if ( !bgmName )
  {
    v12 = (JinglePlayer_o *)sub_1C13F70(JinglePlayer_TypeInfo);
    JinglePlayer___ctor(v12, 0LL);
    this->fields.jinglePlayer = v12;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.jinglePlayer, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
          v27 = *(_QWORD *)&v8->fields.index;
          v28 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++HIDWORD(v8->fields.bgmName);
          if ( v27 )
          {
            bgmName_low = SLODWORD(v8->fields.bgmName);
            if ( (unsigned int)bgmName_low >= *(_DWORD *)(v27 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)v8,
                jinglePlayer,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = v27 + 8 * bgmName_low;
              LODWORD(v8->fields.bgmName) = bgmName_low + 1;
              *(_QWORD *)(v30 + 32) = jinglePlayer;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)jinglePlayer, v21, v22, v23, v24, v25, v26);
            }
            return *p_jinglePlayer;
          }
        }
      }
    }
LABEL_15:
    sub_1C13F80(v8, jinglePlayer);
  }
  if ( !(_DWORD)bgmName )
    sub_1C13F88(v8, jinglePlayer);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Object_array *v26; // x20
  System_Func_object__bool__o *v27; // x22
  SubBgmPlayer_o *object; // x21
  BgmManager___c_c *v29; // x0
  System_Func_object__bool__o *_9__72_1; // x21
  Il2CppObject *v31; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  SubBgmPlayer_c *klass; // x9
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x8

  if ( (byte_4BB3CE2 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Find_SubBgmPlayer___, bgmName);
    sub_1C13D24(&Method_System_Linq_Enumerable_First_SubBgmPlayer___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___, v7);
    sub_1C13D24(&System_Func_SubBgmPlayer__bool__TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v10);
    sub_1C13D24(&SubBgmPlayer_TypeInfo, v11);
    sub_1C13D24(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, v12);
    sub_1C13D24(&Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__, v13);
    sub_1C13D24(&BgmManager___c__DisplayClass72_0_TypeInfo, v14);
    sub_1C13D24(&BgmManager___c_TypeInfo, v15);
    byte_4BB3CE2 = 1;
  }
  v16 = sub_1C13F70(BgmManager___c__DisplayClass72_0_TypeInfo);
  BgmManager___c__DisplayClass72_0___ctor((BgmManager___c__DisplayClass72_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  *(_QWORD *)(v16 + 16) = bgmName;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)bgmName, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_2FB7F8C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v26 = System_Linq_Enumerable__ToArray_object_(
          v25,
          (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v27 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v16,
    Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__,
    0LL);
  object = (SubBgmPlayer_o *)BasicHelper__Find_object_(
                               v26,
                               (System_Func_T__bool__o *)v27,
                               (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( object )
    return object;
  v29 = BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v29 = BgmManager___c_TypeInfo;
  }
  _9__72_1 = (System_Func_object__bool__o *)v29->static_fields->__9__72_1;
  if ( !_9__72_1 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = BgmManager___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__72_1 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__72_1, v31, Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__72_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__72_1;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__72_1,
      (int64_t)_9__72_1,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v17 = (System_Collections_Generic_List_object__o *)BasicHelper__Find_object_(
                                                       v26,
                                                       (System_Func_T__bool__o *)_9__72_1,
                                                       (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_SubBgmPlayer___);
  object = (SubBgmPlayer_o *)v17;
  if ( v17 )
    return object;
  if ( !v26 )
LABEL_23:
    sub_1C13F80(v17, v18);
  if ( (int)v26->max_length <= 1 )
  {
    object = (SubBgmPlayer_o *)sub_1C13F70(SubBgmPlayer_TypeInfo);
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
          v49 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++v17->fields._version;
          if ( items )
          {
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                (Il2CppObject *)object,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v51[4] = (Il2CppClass *)object;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)object, v42, v43, v44, v45, v46, v47);
            }
            return object;
          }
        }
      }
    }
    goto LABEL_23;
  }
  return (SubBgmPlayer_o *)System_Linq_Enumerable__First_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                             (const MethodInfo_2FAFDD4 *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
}


void __fastcall BgmManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BB3CB8 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v1);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_4BB3CB8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C13F80(v4, v5);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v27; // x8
  System_Collections_Generic_List_object__o *v28; // x19
  System_Action_object__o *v29; // x20
  Il2CppObject *v30; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  BgmManager_c *v38; // x0

  v2 = this;
  if ( (byte_4BB3CD4 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BgmPlayerBase__TypeInfo, method);
    sub_1C13D24(&BgmManager_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v6);
    sub_1C13D24(&MainBgmPlayer_TypeInfo, v7);
    sub_1C13D24(&Method_BgmManager___c__InitializeLocal_b__50_0__, v8);
    this = (BgmManager_o *)sub_1C13D24(&BgmManager___c_TypeInfo, v9);
    byte_4BB3CD4 = 1;
  }
  bgmPlayers = v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_21;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v11 = (MainBgmPlayer_o *)sub_1C13F70(MainBgmPlayer_TypeInfo);
    MainBgmPlayer___ctor(v11, 0LL);
    v2->fields.mainBgmPlayer = v11;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.mainBgmPlayer, (int64_t)v11, v12, v13, v14, v15, v16, v17);
    method = (const MethodInfo *)v2->fields.mainBgmPlayer;
    if ( !method )
      goto LABEL_21;
    LODWORD(method->invoker_method) = 0;
    this = (BgmManager_o *)v2->fields.bgmPlayers;
    if ( !this )
      goto LABEL_21;
    v24 = *(_QWORD *)&this->fields.m_CachedPtr;
    v25 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v24 )
      goto LABEL_21;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)method,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = v24 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v27 + 32) = method;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)method, v18, v19, v20, v21, v22, v23);
    }
  }
  v28 = (System_Collections_Generic_List_object__o *)v2->fields.bgmPlayers;
  this = (BgmManager_o *)BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
  }
  v29 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 1);
  if ( !v29 )
  {
    if ( !LODWORD(this[2].fields.mainBgmPlayer) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v30 = *(Il2CppObject **)this[2].monitor;
    v29 = (System_Action_object__o *)sub_1C13F70(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(v29, v30, Method_BgmManager___c__InitializeLocal_b__50_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)v29;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__50_0, (int64_t)v29, v32, v33, v34, v35, v36, v37);
  }
  if ( !v28 )
LABEL_21:
    sub_1C13F80(this, method);
  System_Collections_Generic_List_object___ForEach(
    v28,
    (System_Action_T__o *)v29,
    (const MethodInfo_362DC0C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v38 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v38);
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
  if ( (byte_4BB3CDE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Contains__, name);
    this = (BgmManager_o *)sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    byte_4BB3CDE = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)v4->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_object___Contains(
               loadingBgmCueNameList,
               (Il2CppObject *)this,
               (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_1C13F80(this, name);
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

  if ( (byte_4BB3CC0 & 1) == 0 )
  {
    sub_1C13D24(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_4BB3CC0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C13F80(v6, v7);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_2F811E8 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool __fastcall BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BB3CCC & 1) == 0 )
  {
    sub_1C13D24(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_4BB3CCC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C13F80(v6, v7);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_2F811E8 *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool __fastcall BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0
  __int64 v7; // x1

  if ( (byte_4BB3CDD & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, bgmName);
    byte_4BB3CDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName((BgmManager_o *)Instance, bgmName, v5);
  if ( !Instance )
    sub_1C13F80(CueName, v7);
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

  if ( (byte_4BB3CD1 & 1) == 0 )
  {
    sub_1C13D24(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___, method);
    sub_1C13D24(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_4BB3CD1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1C13F80(v7, v8);
    v9 = isPause;
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v9,
      0LL,
      (const MethodInfo_2F8150C *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v9,
      0LL,
      (const MethodInfo_2F8150C *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__PauseBgmLocal_object_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_2F8150C *method)
{
  long double v4; // q0
  const MethodInfo_2F8150C_RGCTXs *rgctx_data; // x8
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
    sub_1C65C5C(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass70_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass70_0_T = sub_1C65C00(v4);
  v10 = (BgmManager___c__DisplayClass70_0_T__o *)sub_1C13F70(_0_BgmManager___c__DisplayClass70_0_T);
  BgmManager___c__DisplayClass70_0_object____ctor(
    v10,
    (const MethodInfo_315CD54 *)method->rgctx_data->_1_BgmManager___c__DisplayClass70_0_T___ctor);
  if ( !v10 )
    sub_1C13F80(v11, v12);
  v10->fields.isPause = isPause;
  v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                         (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                         (const MethodInfo_2FB7F8C *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  _5_System_Action_T = method->rgctx_data->_5_System_Action_T_;
  if ( (BYTE5(_5_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    _5_System_Action_T = (Il2CppClass *)sub_1C65C00(v14);
  v16 = (System_Action_object__o *)sub_1C13F70(_5_System_Action_T);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass70_0_T___PauseBgmLocal_b__0,
    (const MethodInfo_32A84AC *)method->rgctx_data->_6_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v13,
    (System_Action_T__o *)v16,
    (const MethodInfo_2F7C3C8 *)method->rgctx_data->_7_BasicHelper_ForEach_T_);
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

  if ( (byte_4BB3CC2 & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, startTime);
    sub_1C13D24(&BgmPlayArgsGroup_TypeInfo, v11);
    sub_1C13D24(&Method_System_Nullable_float___ctor__, v12);
    byte_4BB3CC2 = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0LL;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_374B620 *)Method_System_Nullable_float___ctor__);
  v13 = (BgmPlayArgsGroup_o *)sub_1C13F70(BgmPlayArgsGroup_TypeInfo);
  v18 = volumeNullable;
  v14 = v13;
  BgmPlayArgsGroup___ctor_39476664(v13, name, v18, fadeTime, startTime, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_39458848(v14, finishCallback, v15);
}


void __fastcall BgmManager__PlayBgm_39458848(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4BB3CC4 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, finishCallback);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_4BB3CC4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
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
      sub_1C13F80(v7, v8);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, 1, v9);
  }
}


void __fastcall BgmManager__PlayBgm_39459044(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BgmPlayArgsGroup_o *v8; // x22
  const MethodInfo *v9; // x2

  if ( (byte_4BB3CC3 & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, subArray);
    sub_1C13D24(&BgmPlayArgsGroup_TypeInfo, v7);
    byte_4BB3CC3 = 1;
  }
  v8 = (BgmPlayArgsGroup_o *)sub_1C13F70(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor(v8, main, (BgmPlayArgs_array *)subArray, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_39458848(v8, finishCallback, v9);
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

  if ( (byte_4BB3CCD & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    byte_4BB3CCD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1C13F80(v9, v10);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_String_o *v32; // x20
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x3

  if ( (byte_4BB3CE1 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, name);
    sub_1C13D24(&Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, v9);
    sub_1C13D24(&BgmManager___c__DisplayClass71_0_TypeInfo, v10);
    byte_4BB3CE1 = 1;
  }
  v11 = sub_1C13F70(BgmManager___c__DisplayClass71_0_TypeInfo);
  BgmManager___c__DisplayClass71_0___ctor((BgmManager___c__DisplayClass71_0_o *)v11, 0LL);
  if ( !v11 )
    sub_1C13F80(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = name;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)name, v20, v21, v22, v23, v24, v25);
  *(float *)(v11 + 32) = volume;
  *(_QWORD *)(v11 + 40) = callbackFunc;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 40), (int64_t)callbackFunc, v26, v27, v28, v29, v30, v31);
  v32 = *(System_String_o **)(v11 + 24);
  v33 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v11, Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, 0LL);
  BgmManager__PreloadBgm(this, v32, v33, v34);
}


void __fastcall BgmManager__PlayJingle_39463012(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4BB3CCE & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, method);
    byte_4BB3CCE = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, 0LL, v3);
}


void __fastcall BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB3CC5 & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, method);
    byte_4BB3CC5 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_39459044(args, 0LL, 0LL, v2);
}


void __fastcall BgmManager__PlayPreloadBgms(BgmManager_o *this, const MethodInfo *method)
{
  BgmPlayArgsGroup_o *cacheArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v4; // x0
  System_Object_array *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x8
  System_Object_array *v14; // x21
  unsigned __int64 v15; // x22

  if ( (byte_4BB3CD9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, method);
    byte_4BB3CD9 = 1;
  }
  cacheArgsGroup = this->fields.cacheArgsGroup;
  if ( cacheArgsGroup )
  {
    v4 = BgmPlayArgsGroup__AllArgsListNullExcluded(cacheArgsGroup, 0LL);
    v5 = System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4,
           (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    if ( !v5 )
      sub_1C13F80(0LL, v6);
    v13 = *(_QWORD *)&v5->max_length;
    v14 = v5;
    if ( (int)v13 >= 1 )
    {
      v15 = 0LL;
      do
      {
        if ( v15 >= (unsigned int)v13 )
          sub_1C13F88(v5, v6);
        BgmManager__PlayPreloadedBgm(this, (BgmPlayArgs_o *)v14->m_Items[v15], v7);
        LODWORD(v13) = v14->max_length;
        ++v15;
      }
      while ( (__int64)v15 < (int)v13 );
    }
    this->fields.cacheArgsGroup = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.cacheArgsGroup, 0LL, (int64_t)v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4BB3CDA & 1) == 0 )
  {
    sub_1C13D24(&MainBgmPlayArgs_TypeInfo, args);
    sub_1C13D24(&SubBgmPlayArgs_TypeInfo, v5);
    byte_4BB3CDA = 1;
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
          sub_1C13F80(0LL, v7);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x21
  Il2CppObject *Instance; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Object_o *v24; // x22
  System_String_o *v25; // x21
  BgmManager_o *v26; // x20
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x3

  if ( (byte_4BB3CC6 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    sub_1C13D24(&Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, v5);
    sub_1C13D24(&BgmManager___c__DisplayClass36_0_TypeInfo, v6);
    byte_4BB3CC6 = 1;
  }
  v7 = sub_1C13F70(BgmManager___c__DisplayClass36_0_TypeInfo);
  BgmManager___c__DisplayClass36_0___ctor((BgmManager___c__DisplayClass36_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 24) = args;
  v16 = v7 + 24;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)args, v10, v11, v12, v13, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v7 + 16) = Instance;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)Instance, v18, v19, v20, v21, v22, v23);
  v24 = *(UnityEngine_Object_o **)(v7 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
  if ( !v8 )
  {
    if ( *(_QWORD *)v16 )
    {
      v25 = *(System_String_o **)(*(_QWORD *)v16 + 16LL);
      v26 = *(BgmManager_o **)(v7 + 16);
      v27 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)v7, Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, 0LL);
      if ( v26 )
      {
        BgmManager__PreloadBgm(v26, v25, v27, v28);
        return;
      }
    }
LABEL_10:
    sub_1C13F80(v8, v9);
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
  int64_t v21; // x19
  BgmPlayArgsGroup_o *v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  bool v30; // w24
  BgmPlayArgsGroup_o **v31; // x23
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct BgmPlayArgsGroup_o *v50; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v51; // x0
  System_Object_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_List_object__o *v59; // x20
  __int64 v60; // x23
  unsigned __int64 v61; // x24
  __int64 v62; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x1
  System_Action_object__o *v76; // x21
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x0
  System_Object_array *v87; // x21
  ChainableActionParallel_o *v88; // x20
  __int64 v89; // x21
  System_Action_o *v90; // x22
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7

  if ( (byte_4BB3CD8 & 1) == 0 )
  {
    sub_1C13D24(&System_Action___TypeInfo, argsGroup);
    sub_1C13D24(&System_Action_Action__TypeInfo, v9);
    sub_1C13D24(&System_Action_TypeInfo, v10);
    sub_1C13D24(&ChainableActionParallel_TypeInfo, v11);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Action_Action___Add__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_Action_Action___ToArray__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_Action_Action____ctor__, v15);
    sub_1C13D24(&System_Collections_Generic_List_Action_Action___TypeInfo, v16);
    sub_1C13D24(&Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__, v17);
    sub_1C13D24(&BgmManager___c__DisplayClass57_0_TypeInfo, v18);
    sub_1C13D24(&Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__, v19);
    sub_1C13D24(&BgmManager___c__DisplayClass57_1_TypeInfo, v20);
    byte_4BB3CD8 = 1;
  }
  v21 = sub_1C13F70(BgmManager___c__DisplayClass57_0_TypeInfo);
  BgmManager___c__DisplayClass57_0___ctor((BgmManager___c__DisplayClass57_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_24;
  *(_QWORD *)(v21 + 16) = this;
  v30 = isPlay;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = argsGroup;
  v31 = (BgmPlayArgsGroup_o **)(v21 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)argsGroup, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v21 + 48) = finishCallback;
  *(_BYTE *)(v21 + 32) = v30;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v21 + 48), (int64_t)finishCallback, v38, v39, v40, v41, v42, v43);
  v50 = *(struct BgmPlayArgsGroup_o **)(v21 + 24);
  if ( v50 )
  {
    this->fields.cacheArgsGroup = v50;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.cacheArgsGroup, (int64_t)v50, v44, v45, v46, v47, v48, v49);
    v22 = *v31;
    if ( !*v31 )
      goto LABEL_24;
    v51 = BgmPlayArgsGroup__AllArgsListNullExcluded(v22, 0LL);
    v52 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v51,
            (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v21 + 40) = v52;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v21 + 40), (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_Action_Action___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v59,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v60 = *(_QWORD *)(v21 + 40);
    if ( !v60 )
      goto LABEL_24;
    if ( *(int *)(v60 + 24) >= 1 )
    {
      v61 = 0LL;
      while ( 1 )
      {
        v62 = sub_1C13F70(BgmManager___c__DisplayClass57_1_TypeInfo);
        BgmManager___c__DisplayClass57_1___ctor((BgmManager___c__DisplayClass57_1_o *)v62, 0LL);
        if ( !v62 )
          break;
        *(_QWORD *)(v62 + 24) = v21;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v62 + 24), v21, v63, v64, v65, v66, v67, v68);
        if ( v61 >= *(unsigned int *)(v60 + 24) )
          goto LABEL_25;
        v75 = *(_QWORD *)(v60 + 32 + 8 * v61);
        *(_QWORD *)(v62 + 16) = v75;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v62 + 16), v75, v69, v70, v71, v72, v73, v74);
        v76 = (System_Action_object__o *)sub_1C13F70(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v76,
          (Il2CppObject *)v62,
          Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__,
          0LL);
        if ( !v59 )
          break;
        items = v59->fields._items;
        v84 = Method_System_Collections_Generic_List_Action_Action___Add__;
        ++v59->fields._version;
        if ( !items )
          break;
        size = v59->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v59,
            (Il2CppObject *)v76,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
        }
        else
        {
          v86 = &items->obj.klass + size;
          v59->fields._size = size + 1;
          v86[4] = (Il2CppClass *)v76;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v86 + 4), (int64_t)v76, v77, v78, v79, v80, v81, v82);
        }
        if ( (__int64)++v61 >= *(int *)(v60 + 24) )
          goto LABEL_17;
      }
LABEL_24:
      sub_1C13F80(v22, v23);
    }
LABEL_17:
    if ( !v59 )
      goto LABEL_24;
    v87 = System_Collections_Generic_List_object___ToArray(
            v59,
            (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v88 = (ChainableActionParallel_o *)sub_1C13F70(ChainableActionParallel_TypeInfo);
    ChainableActionParallel___ctor_47598496(v88, (System_Action_Action__array *)v87, 0LL);
    v89 = sub_1C13DCC(System_Action___TypeInfo, 1LL);
    v90 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v90,
      (Il2CppObject *)v21,
      Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__,
      0LL);
    if ( !v89 )
      goto LABEL_24;
    if ( !*(_DWORD *)(v89 + 24) )
LABEL_25:
      sub_1C13F88(v22, v23);
    *(_QWORD *)(v89 + 32) = v90;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v89 + 32), (int64_t)v90, v91, v92, v93, v94, v95, v96);
    if ( !v88 )
      goto LABEL_24;
    v22 = (BgmPlayArgsGroup_o *)ChainableActionBase__Final(
                                  (ChainableActionBase_o *)v88,
                                  (System_Action_array *)v89,
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BgmManager_o *v28; // x0
  const MethodInfo *v29; // x2
  System_String_o *CueName; // x0
  Il2CppObject **v31; // x24
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_String_o *CueSheet; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  bool IsNullOrEmpty; // w22
  System_Action_o *v46; // x21
  const MethodInfo *v47; // x3
  System_Collections_IEnumerator_o *v48; // x0

  if ( (byte_4BB3CDB & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, name);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Contains__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Insert__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Remove__, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v10);
    sub_1C13D24(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, v11);
    sub_1C13D24(&BgmManager___c__DisplayClass61_0_TypeInfo, v12);
    byte_4BB3CDB = 1;
  }
  v13 = sub_1C13F70(BgmManager___c__DisplayClass61_0_TypeInfo);
  BgmManager___c__DisplayClass61_0___ctor((BgmManager___c__DisplayClass61_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = finishCallback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)finishCallback, v22, v23, v24, v25, v26, v27);
  CueName = BgmManager__ExtractCueName(v28, name, v29);
  *(_QWORD *)(v13 + 24) = CueName;
  v31 = (Il2CppObject **)(v13 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)CueName, v32, v33, v34, v35, v36, v37);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CueSheet = SoundManager__GetCueSheet(Instance, *(System_String_o **)(v13 + 24), 0LL);
  *(_QWORD *)(v13 + 16) = CueSheet;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)CueSheet, v39, v40, v41, v42, v43, v44);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v13 + 16), 0LL);
  if ( !IsNullOrEmpty )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)Instance,
              *v31,
              (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_string__Contains__) )
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
          *v31,
          (const MethodInfo_362E6F4 *)Method_System_Collections_Generic_List_string__Remove__);
        Instance = (SoundManager_o *)this->fields.addBindList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            *v31,
            (const MethodInfo_362DF7C *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_12;
        }
      }
    }
LABEL_14:
    sub_1C13F80(Instance, v15);
  }
  v46 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)v13, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, 0LL);
  v48 = BgmManager__CoWaitSameAudioLoading(this, name, v46, v47);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v48, 0LL);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BB3CD7 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BgmPlayerBase__TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v3);
    sub_1C13D24(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, v4);
    sub_1C13D24(&BgmManager___c_TypeInfo, v5);
    byte_4BB3CD7 = 1;
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
    _9__53_0 = (System_Action_object__o *)sub_1C13F70(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__53_0, v9, Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Action_BgmPlayerBase__o *)_9__53_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__53_0,
      (int64_t)_9__53_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !bgmPlayers )
    sub_1C13F80(v6, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__53_0,
    (const MethodInfo_362DC0C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
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
  if ( (byte_4BB3CE5 & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_string__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_string__Contains__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_string__UnionWith__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_string___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_HashSet_string__TypeInfo, v10);
    sub_1C13D24(&System_IDisposable_TypeInfo, v11);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v12);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v13);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__RemoveAt__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Count__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Item__, v18);
    this = (BgmManager_o *)sub_1C13D24(&SoundManager_TypeInfo, v19);
    byte_4BB3CE5 = 1;
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
    v23 = (System_Collections_Generic_HashSet_T__o *)sub_1C13F70(System_Collections_Generic_HashSet_string__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v23,
      (const MethodInfo_34E66FC *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = v2[8];
    if ( !this )
      goto LABEL_59;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v55 = v54;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v55,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v55.fields._current )
        sub_1C13F80(0LL, v24);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v55.fields._current,
                                                                       0LL);
      if ( !v23 )
        sub_1C13F80(UsingCueNames, UsingCueNames);
      System_Collections_Generic_HashSet_object___UnionWith(
        v23,
        UsingCueNames,
        (const MethodInfo_34E78F0 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v55,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
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
        v30 = sub_1C65D04(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v32 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
      if ( !v32 )
        sub_1C13F80(0LL, v31);
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
          v36 = sub_1C65D04(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          v40 = sub_1C65D04(v32, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
        if ( !v41 )
          sub_1C13F80(0LL, v42);
        CueName = (Il2CppObject *)BgmManager__ExtractCueName((BgmManager_o *)v41, *(System_String_o **)(v41 + 16), v43);
        if ( !v23 )
          sub_1C13F80(CueName, CueName);
        System_Collections_Generic_HashSet_object___Add(
          v23,
          CueName,
          (const MethodInfo_34E78E0 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
        v48 = sub_1C65D04(v32, System_IDisposable_TypeInfo, 0LL);
      }
      this = (BgmManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v32, *(_QWORD *)(v48 + 8));
    }
    v49 = (System_Collections_Generic_List_object__o *)v2[4];
    if ( !v49 )
LABEL_59:
      sub_1C13F80(this, method);
    v50 = v49->fields._size - 1;
    if ( v50 >= 1 )
    {
      do
      {
        this = (BgmManager_o *)System_Collections_Generic_List_object___get_Item(
                                 v49,
                                 v50,
                                 (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v23 )
          break;
        this = (BgmManager_o *)System_Collections_Generic_HashSet_object___Contains(
                                 v23,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_34E6DF0 *)Method_System_Collections_Generic_HashSet_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v50,
                   (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__releaseAudioAssetStorage((System_String_o *)Item, 0LL);
          this = v2[4];
          if ( !this )
            goto LABEL_59;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this,
            v50,
            (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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

  if ( (byte_4BB3CBA & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v1);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_4BB3CBA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C13F80(v4, v5);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BB3CD5 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BgmPlayerBase__TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v3);
    sub_1C13D24(&Method_BgmManager___c__ResetLocal_b__51_0__, v4);
    sub_1C13D24(&BgmManager___c_TypeInfo, v5);
    byte_4BB3CD5 = 1;
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
    _9__51_0 = (System_Action_object__o *)sub_1C13F70(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__51_0, v9, Method_BgmManager___c__ResetLocal_b__51_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_BgmPlayerBase__o *)_9__51_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__51_0,
      (int64_t)_9__51_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !bgmPlayers )
    sub_1C13F80(v6, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_362DC0C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
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

  if ( (byte_4BB3CBE & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, v2);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_4BB3CBE = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( !v9 )
    {
      if ( !Instance )
        sub_1C13F80(v9, v10);
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

  if ( (byte_4BB3CBC & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_4BB3CBC = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( !v9 )
    {
      if ( !Instance )
        sub_1C13F80(v9, v10);
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

  if ( (byte_4BB3CD6 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BgmPlayerBase__TypeInfo, isMute);
    sub_1C13D24(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v5);
    sub_1C13D24(&Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__, v6);
    sub_1C13D24(&BgmManager___c__DisplayClass52_0_TypeInfo, v7);
    byte_4BB3CD6 = 1;
  }
  v8 = (BgmManager___c__DisplayClass52_0_o *)sub_1C13F70(BgmManager___c__DisplayClass52_0_TypeInfo);
  BgmManager___c__DisplayClass52_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.isMute = isMute,
        bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers,
        v12 = (System_Action_object__o *)sub_1C13F70(System_Action_BgmPlayerBase__TypeInfo),
        System_Action_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__,
          0LL),
        !bgmPlayers) )
  {
    sub_1C13F80(v9, v10);
  }
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v12,
    (const MethodInfo_362DC0C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
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

  if ( (byte_4BB3CC9 & 1) == 0 )
  {
    sub_1C13D24(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___, v2);
    sub_1C13D24(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___, v4);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v6);
    byte_4BB3CC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C13F80(v8, v9);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        0LL,
        (const MethodInfo_2F815DC *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        0LL,
        (const MethodInfo_2F813F0 *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
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

  if ( (byte_4BB3CC8 & 1) == 0 )
  {
    sub_1C13D24(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___, successCallback);
    sub_1C13D24(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, v7);
    sub_1C13D24(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___, v8);
    sub_1C13D24(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v9);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v11);
    byte_4BB3CC8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v13 )
  {
    if ( !Instance )
      sub_1C13F80(v13, v14);
    if ( fadeoutTime <= 0.0 )
    {
      v15 = BgmManager__StopBgmLocal_object_(
              (BgmManager_o *)Instance,
              name,
              (const MethodInfo_2F815DC *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
      if ( name && !v15 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__StopBgmLocal_object_(
          (BgmManager_o *)Instance,
          0LL,
          (const MethodInfo_2F815DC *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      v15 = BgmManager__FadeoutBgmLocal_object_(
              (BgmManager_o *)Instance,
              fadeoutTime,
              name,
              (const MethodInfo_2F813F0 *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
      if ( name && !v15 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__FadeoutBgmLocal_object_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0LL,
          (const MethodInfo_2F813F0 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    if ( v15 )
      ActionExtensions__Call(successCallback, 0LL);
  }
}


bool __fastcall BgmManager__StopBgmLocal_object_(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo_2F815DC *method)
{
  const MethodInfo_2F8101C **rgctx_data; // x8
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__68_T; // x8
  Il2CppClass *v11; // x0
  System_Func_object__bool__o *v12; // x21
  Il2CppClass *v13; // x0
  const MethodInfo_2F815DC_RGCTXs *v14; // x8
  __int64 v15; // x0
  __int64 _3_System_Func_T__bool; // x8
  Il2CppObject *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  long double v24; // q0
  Il2CppClass *v25; // x0
  Il2CppClass *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  rgctx_data = (const MethodInfo_2F8101C **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_bool___, name);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_bool___, v7);
    rgctx_data = (const MethodInfo_2F8101C **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C65C5C(method);
      rgctx_data = (const MethodInfo_2F8101C **)method->rgctx_data;
    }
  }
  v8 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, name, *rgctx_data);
  _4_BgmManager___c__68_T = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (BYTE5(_4_BgmManager___c__68_T->vtable[0].methodPtr) & 1) == 0 )
    _4_BgmManager___c__68_T = (Il2CppClass *)sub_1C65C00(inited);
  if ( !_4_BgmManager___c__68_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__68_T);
  v11 = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
    v11 = (Il2CppClass *)sub_1C65C00(inited);
  v12 = (System_Func_object__bool__o *)*((_QWORD *)v11->static_fields + 1);
  if ( !v12 )
  {
    v13 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
      v13 = (Il2CppClass *)sub_1C65C00(inited);
    if ( !v13->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v13);
    v14 = method->rgctx_data;
    v15 = (__int64)v14->_4_BgmManager___c__68_T_;
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    {
      v15 = sub_1C65C00(inited);
      v14 = method->rgctx_data;
    }
    _3_System_Func_T__bool = (__int64)v14->_3_System_Func_T__bool_;
    v17 = **(Il2CppObject ***)(v15 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__bool + 309) & 1) == 0 )
      _3_System_Func_T__bool = sub_1C65C00(inited);
    v12 = (System_Func_object__bool__o *)sub_1C13F70(_3_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v12,
      v17,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__68_T___StopBgmLocal_b__68_0,
      (const MethodInfo_34C67E4 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
    v25 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v25->vtable[0].methodPtr) & 1) == 0 )
      v25 = (Il2CppClass *)sub_1C65C00(v24);
    *((_QWORD *)v25->static_fields + 1) = v12;
    v26 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v26->vtable[0].methodPtr) & 1) == 0 )
      v26 = (Il2CppClass *)sub_1C65C00(v24);
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)((char *)v26->static_fields + 8),
      (int64_t)v12,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_2FBFC44 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v27,
                                                               (const MethodInfo_2FC8A04 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v28, (const MethodInfo_2F9A144 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__StopJingle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BB3CCF & 1) == 0 )
  {
    sub_1C13D24(&Method_BgmManager_StopBgmLocal_JinglePlayer___, v1);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v2);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_4BB3CCF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C13F80(v5, v6);
    BgmManager__StopBgmLocal_object_(
      (BgmManager_o *)Instance,
      0LL,
      (const MethodInfo_2F815DC *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
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

  if ( (byte_4BB3CCA & 1) == 0 )
  {
    sub_1C13D24(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, method);
    sub_1C13D24(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    byte_4BB3CCA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1C13F80(v9, v10);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        name,
        (const MethodInfo_2F815DC *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        name,
        (const MethodInfo_2F813F0 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  System_Func_object__bool__o *v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  BgmManager___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_T__o *v42; // x19
  System_Action_object__o *_9__69_2; // x20
  Il2CppObject *v44; // x21
  struct BgmManager___c_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4BB3CE0 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_SubBgmPlayer__TypeInfo, requestedBgmArgs);
    sub_1C13D24(&Method_BasicHelper_ForEach_SubBgmPlayer___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_string___, v8);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___, v9);
    sub_1C13D24(&System_Func_SubBgmPlayArgs__string__TypeInfo, v10);
    sub_1C13D24(&System_Func_SubBgmPlayer__bool__TypeInfo, v11);
    sub_1C13D24(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, v12);
    sub_1C13D24(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, v13);
    sub_1C13D24(&Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__, v14);
    sub_1C13D24(&BgmManager___c__DisplayClass69_0_TypeInfo, v15);
    sub_1C13D24(&BgmManager___c_TypeInfo, v16);
    byte_4BB3CE0 = 1;
  }
  v17 = sub_1C13F70(BgmManager___c__DisplayClass69_0_TypeInfo);
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
      _9__69_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_SubBgmPlayArgs__string__TypeInfo);
      System_Func_object__object____ctor(_9__69_0, v23, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, 0LL);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__69_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__69_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__69_0,
        (int64_t)_9__69_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__69_0,
                                                                 (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v18 = System_Linq_Enumerable__ToArray_object_(
            v31,
            (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v17 )
LABEL_19:
      sub_1C13F80(v18, v19);
    *(_QWORD *)(v17 + 16) = v18;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)v18, v32, v33, v34, v35, v36, v37);
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_2FB7F8C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v39 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v39,
      (Il2CppObject *)v17,
      Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__,
      0LL);
    v40 = System_Linq_Enumerable__Where_object_(
            v38,
            (System_Func_TSource__bool__o *)v39,
            (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v41 = BgmManager___c_TypeInfo;
    v42 = (System_Collections_Generic_IEnumerable_T__o *)v40;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v41 = BgmManager___c_TypeInfo;
    }
    _9__69_2 = (System_Action_object__o *)v41->static_fields->__9__69_2;
    if ( !_9__69_2 )
    {
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = BgmManager___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v41->static_fields->__9;
      _9__69_2 = (System_Action_object__o *)sub_1C13F70(System_Action_SubBgmPlayer__TypeInfo);
      System_Action_object____ctor(_9__69_2, v44, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, 0LL);
      v45 = BgmManager___c_TypeInfo->static_fields;
      v45->__9__69_2 = (struct System_Action_SubBgmPlayer__o *)_9__69_2;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v45->__9__69_2, (int64_t)_9__69_2, v46, v47, v48, v49, v50, v51);
    }
    BasicHelper__ForEach_object_(
      v42,
      (System_Action_T__o *)_9__69_2,
      (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_SubBgmPlayer___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_String_o *__fastcall BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_1C13F80(this, method);
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

  if ( (byte_4BB3CB6 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v1);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_4BB3CB6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v4 )
    sub_1C13F80(0LL, v5);
  return BgmManager__IsLoadingLocal((BgmManager_o *)v4, 0LL, v6);
}


bool __fastcall BgmManager__get_IsMute(const MethodInfo *method)
{
  __int64 v1; // x1
  BgmManager_c *v2; // x0

  if ( (byte_4BB3CBB & 1) == 0 )
  {
    sub_1C13D24(&BgmManager_TypeInfo, v1);
    byte_4BB3CBB = 1;
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

  if ( (byte_4BB3CC1 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_4BB3CC1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1C13F80(v5, v6);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BgmManager_o *v17; // x1
  struct System_String_o *bgmName; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Func_bool__o *v25; // x21
  UnityEngine_WaitWhile_o *v26; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_4BB3CF2 & 1) == 0 )
  {
    sub_1C13D24(&System_Func_bool__TypeInfo, method);
    sub_1C13D24(&Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__, v3);
    sub_1C13D24(&BgmManager___c__DisplayClass63_0_TypeInfo, v4);
    sub_1C13D24(&UnityEngine_WaitWhile_TypeInfo, v5);
    byte_4BB3CF2 = 1;
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
    v8 = sub_1C13F70(BgmManager___c__DisplayClass63_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0LL);
    if ( !v8
      || (v17 = this->fields.__4__this,
          *(_QWORD *)(v8 + 16) = v17,
          sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)v17, v11, v12, v13, v14, v15, v16),
          bgmName = this->fields.bgmName,
          *(_QWORD *)(v8 + 24) = bgmName,
          sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)bgmName, v19, v20, v21, v22, v23, v24),
          !_4__this) )
    {
      sub_1C13F80(v9, v10);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v8 + 24), 0LL) )
    {
      v25 = (System_Func_bool__o *)sub_1C13F70(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v25,
        (Il2CppObject *)v8,
        Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__,
        0LL);
      v26 = (UnityEngine_WaitWhile_o *)sub_1C13F70(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v26, v25, 0LL);
      this->fields.__2__current = (Il2CppObject *)v26;
      p__2__current = &this->fields.__2__current;
      sub_1C13CC8((PartyOrganizationUtility_o *)p__2__current, (int64_t)v26, v28, v29, v30, v31, v32, v33);
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

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_BgmManager__CoWaitSameAudioLoading_d__63_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB3CED & 1) == 0 )
  {
    sub_1C13D24(&BgmManager___c_TypeInfo, v1);
    byte_4BB3CED = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BgmManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BgmManager___c_TypeInfo->static_fields->__9 = (struct BgmManager___c_o *)v2;
  sub_1C13CC8((PartyOrganizationUtility_o *)BgmManager___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
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
    sub_1C13F80(this, 0LL);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, (const MethodInfo *)x);
}


void __fastcall BgmManager___c___FixedUpdate_b__78_1(
        BgmManager___c_o *this,
        GeneralBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, void *))x->klass->vtable._13_FixedUpdate.method)(x, x->klass[1]._1.image);
}


void __fastcall BgmManager___c___FixedUpdate_b__78_3(
        BgmManager___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  const MethodInfo_3749B88 *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  System_Nullable_long__o v9; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_float__o p_fadeTime; // 0:x0.8
  System_Nullable_float__o v12; // 0:x1.8
  System_Nullable_float__o v13; // 0:x2.8
  System_Nullable_long__o v14; // 0:x0.16

  if ( (byte_4BB3CEE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Nullable_long___ctor__, x);
    sub_1C13D24(&Method_System_Nullable_float___ctor__, v4);
    byte_4BB3CEE = 1;
  }
  p_fadeTime = (System_Nullable_float__o)&fadeTime;
  fadeTime = 0LL;
  *(_QWORD *)&v9.fields.hasValue = 0LL;
  v9.fields.value = 0LL;
  System_Nullable_float____ctor(p_fadeTime, 0.0, (const MethodInfo_374B620 *)Method_System_Nullable_float___ctor__);
  *(_QWORD *)&v14.fields.hasValue = &v9;
  v14.fields.value = 0LL;
  System_Nullable_long____ctor(v14, Method_System_Nullable_long___ctor__, v5);
  if ( !x )
    sub_1C13F80(v6, v7);
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
    sub_1C13F80(this, 0LL);
  return x->fields.bgmName == 0LL;
}


void __fastcall BgmManager___c___InitializeLocal_b__50_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
  return x->fields._BgmName_k__BackingField;
}


void __fastcall BgmManager___c___StopUnrequestedSubBgm_b__69_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._11_StopBgm.method)(
    x,
    0LL,
    x->klass->vtable._12_ExportPlayArgs.methodPtr);
}


void __fastcall BgmManager___c__54_object____cctor(const MethodInfo_3154540 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C65C00();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C65C00();
  v4 = (Il2CppObject *)sub_1C13F70(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C65C00();
  System_Object___ctor(v4, 0LL);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C65C00();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C65C00();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C65C00();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C65C00();
  sub_1C13CC8(*(PartyOrganizationUtility_o **)(v14 + 184), (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall BgmManager___c__54_object____ctor(BgmManager___c__54_T__o *this, const MethodInfo_31545FC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__54_object____EnumeratePlayersHavingBgmName_b__54_0(
        BgmManager___c__54_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3154604 *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x[1].monitor != 0LL;
}


void __fastcall BgmManager___c__68_object____cctor(const MethodInfo_3154870 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C65C00();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C65C00();
  v4 = (Il2CppObject *)sub_1C13F70(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C65C00();
  System_Object___ctor(v4, 0LL);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C65C00();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C65C00();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C65C00();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C65C00();
  sub_1C13CC8(*(PartyOrganizationUtility_o **)(v14 + 184), (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall BgmManager___c__68_object____ctor(BgmManager___c__68_T__o *this, const MethodInfo_315492C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__68_object____StopBgmLocal_b__68_0(
        BgmManager___c__68_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3154934 *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))x->klass->vtable[11].method)(
           x,
           0LL,
           x->klass->vtable[12].methodPtr);
}


void __fastcall BgmManager___c__76_object____cctor(const MethodInfo_3154A60 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C65C00();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C65C00();
  v4 = (Il2CppObject *)sub_1C13F70(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C65C00();
  System_Object___ctor(v4, 0LL);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C65C00();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C65C00();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C65C00();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C65C00();
  sub_1C13CC8(*(PartyOrganizationUtility_o **)(v14 + 184), (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall BgmManager___c__76_object____ctor(BgmManager___c__76_T__o *this, const MethodInfo_3154B1C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall BgmManager___c__76_object____ExportPlayArgsGroupLocal_b__76_0(
        BgmManager___c__76_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3154B24 *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, Il2CppMethodPointer))x->klass->vtable._7_SetMute.method)(
    x,
    this->fields.isMute,
    x->klass->vtable._8_ReflectMasterVolume.methodPtr);
}


void __fastcall BgmManager___c__DisplayClass54_0_object____ctor(
        BgmManager___c__DisplayClass54_0_T__o *this,
        const MethodInfo_315A658 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass54_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass54_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_315A660 *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct BgmPlayArgs_array *nonNullArgsAll; // x20
  __int64 v11; // x8
  unsigned __int64 v12; // x21

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
      v11 = *(_QWORD *)&nonNullArgsAll->max_length;
      if ( (int)v11 >= 1 )
      {
        v12 = 0LL;
        while ( 1 )
        {
          if ( v12 >= (unsigned int)v11 )
            sub_1C13F88(_4__this, method);
          _4__this = this->fields.__4__this;
          if ( !_4__this )
            break;
          BgmManager__PlayPreloadedBgm(_4__this, nonNullArgsAll->m_Items[v12], 0LL);
          LODWORD(v11) = nonNullArgsAll->max_length;
          if ( (__int64)++v12 >= (int)v11 )
            goto LABEL_10;
        }
LABEL_14:
        sub_1C13F80(_4__this, method);
      }
LABEL_10:
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_14;
      _4__this->fields.cacheArgsGroup = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.cacheArgsGroup, 0LL, v4, v5, v6, v7, v8, v9);
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
    sub_1C13F80(this, callback);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_String_o *cueName; // x1
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x0
  Il2CppObject *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct BgmManager_o *_4__this; // x8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BB3CEF & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_1C13D24(&SoundManager_TypeInfo, v10);
    sub_1C13D24(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, v11);
    byte_4BB3CEF = 1;
  }
  cueName = this->fields.cueName;
  this->fields.tempCueSheetName = cueName;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)cueName, v2, v3, v4, v5, v6, v7);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.loadingBgmCueNameList) == 0LL
    || (v14 = (Il2CppObject *)this->fields.cueName,
        items = loadingBgmCueNameList->fields._items,
        v23 = Method_System_Collections_Generic_List_string__Add__,
        ++loadingBgmCueNameList->fields._version,
        !items) )
  {
    sub_1C13F80(loadingBgmCueNameList, v14);
  }
  size = loadingBgmCueNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      loadingBgmCueNameList,
      v14,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    loadingBgmCueNameList->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v14;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v14, v15, v16, v17, v18, v19, v20);
  }
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, 0LL);
    this->fields.__9__1 = _9__1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v28, v29, v30, v31, v32, v33);
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
  if ( (byte_4BB3CF0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Contains__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Insert__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Remove__, v4);
    this = (BgmManager___c__DisplayClass61_0_o *)sub_1C13D24(
                                                   &Method_SingletonMonoBehaviour_SoundManager__get_Instance__,
                                                   v5);
    byte_4BB3CF0 = 1;
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
    (const MethodInfo_362E6F4 *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
                                                   (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_string__Contains__);
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
            (const MethodInfo_362DF7C *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_1C13F80(this, method);
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
    sub_1C13F80(0LL, method);
  return BgmManager__IsLoadingLocal(_4__this, this->fields.bgmName, 0LL);
}


void __fastcall BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_315BB34 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass67_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_315BB3C *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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
  if ( (byte_4BB3CF1 & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass69_0_o *)sub_1C13D24(&Method_System_Array_IndexOf_string___, x);
    byte_4BB3CF1 = 1;
  }
  if ( !x )
    sub_1C13F80(this, x);
  return (unsigned int)System_Array__IndexOf_object_(
                         (System_Object_array *)v4->fields.subBgmNamesToPlay,
                         (Il2CppObject *)x->fields.bgmName,
                         (const MethodInfo_308C32C *)Method_System_Array_IndexOf_string___) >> 31;
}


void __fastcall BgmManager___c__DisplayClass70_0_object____ctor(
        BgmManager___c__DisplayClass70_0_T__o *this,
        const MethodInfo_315CD54 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass70_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass70_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_315CD5C *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(_4__this, method);
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
    sub_1C13F80(this, 0LL);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0LL);
}