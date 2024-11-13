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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct BgmManager_StaticFields *static_fields; // x0
  int64_t v13; // x1
  int64_t v14; // x1
  struct BgmManager_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct BgmManager_StaticFields *v22; // x8

  if ( (byte_4B15812 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3038/*"BGM_CHALDEA_1"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3039/*"BGM_CHALDEA_2"*/, v10, v11);
    byte_4B15812 = 1;
  }
  static_fields = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_VOLUME = 0x3DCCCCCD3F800000LL;
  v13 = StringLiteral_3038/*"BGM_CHALDEA_1"*/;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_3038/*"BGM_CHALDEA_1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_3039/*"BGM_CHALDEA_2"*/;
  v15 = BgmManager_TypeInfo->static_fields;
  v15->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_3039/*"BGM_CHALDEA_2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v14, v16, v17, v18, v19, v20, v21);
  v22 = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&v22->ADD_BIND_MAX = 0x400000005LL;
  v22->isMute = 0;
  v22->masterVolume = 1.0;
}


void __fastcall BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B15811 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager___ctor__, v11, v12);
    byte_4B15811 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.addBindList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v23;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.loadingBgmCueNameList,
    (int64_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BgmPlayerBase__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgmPlayers, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void __fastcall BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  Il2CppObject *Instance; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v31; // x21
  Il2CppObject *v32; // x0

  if ( (byte_4B157E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__, method, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Predicate_BgmPlayerBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__, v13, v14);
    sub_1BCA7E0(&BgmManager___c__DisplayClass29_0_TypeInfo, v15, v16);
    byte_4B157E8 = 1;
  }
  v17 = sub_1BCAA2C(BgmManager___c__DisplayClass29_0_TypeInfo, method, v3, v4);
  BgmManager___c__DisplayClass29_0___ctor((BgmManager___c__DisplayClass29_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_12;
  *(_QWORD *)(v17 + 16) = bgmName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)bgmName, v20, v21, v22, v23, v24, v25);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v18 )
  {
    if ( Instance )
    {
      klass = (System_Collections_Generic_List_object__o *)Instance[4].klass;
      v31 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BgmPlayerBase__TypeInfo, v19, v28, v29);
      System_Predicate_object____ctor(
        v31,
        (Il2CppObject *)v17,
        Method_BgmManager___c__DisplayClass29_0__ChangePlayerVolume_b__0__,
        0LL);
      if ( klass )
      {
        v32 = System_Collections_Generic_List_object___Find(
                klass,
                (System_Predicate_T__o *)v31,
                (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v32 )
          BgmPlayerBase__set_BgmVolume((BgmPlayerBase_o *)v32, volume, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(v18, v19);
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

  if ( (byte_4B15805 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo, bgmName, finishCallback);
    byte_4B15805 = 1;
  }
  v7 = sub_1BCAA2C(BgmManager__CoWaitSameAudioLoading_d__63_TypeInfo, bgmName, finishCallback, method);
  BgmManager__CoWaitSameAudioLoading_d__63___ctor((BgmManager__CoWaitSameAudioLoading_d__63_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)bgmName, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)finishCallback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BgmManager__Enable_KeepSubBgm(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int v10; // w9

  if ( (byte_4B157FB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4, v5);
    byte_4B157FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1BCAA3C(v8, v9);
    if ( value )
      v10 = 1;
    else
      v10 = -1;
    LODWORD(Instance[4].monitor) = (LODWORD(Instance[4].monitor) + v10) & ~((LODWORD(Instance[4].monitor) + v10) >> 31);
  }
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BgmManager__EnumeratePlayersHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_2F04840 *method)
{
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_2F04840_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass54_0_T; // x0
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  long double inited; // q0
  const MethodInfo_2F04840_RGCTXs *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  __int64 _5_System_Func_T__bool; // x0
  System_Func_object__bool__o *v28; // x21
  __int64 _6_BgmManager___c__54_T; // x0
  Il2CppClass *v30; // x0
  Il2CppClass *v31; // x0
  const MethodInfo_2F04840_RGCTXs *v32; // x8
  __int64 v33; // x0
  __int64 v34; // x8
  Il2CppObject *v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  long double v42; // q0
  Il2CppClass *v43; // x0
  Il2CppClass *v44; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, bgmNameFilter);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass54_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass54_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass54_0_T = sub_1C1C6BC(v4);
  v10 = sub_1BCAA2C(_0_BgmManager___c__DisplayClass54_0_T, bgmNameFilter, method, v3);
  BgmManager___c__DisplayClass54_0_object____ctor(
    (BgmManager___c__DisplayClass54_0_T__o *)v10,
    (const MethodInfo_30DCA0C *)method->rgctx_data->_1_BgmManager___c__DisplayClass54_0_T___ctor);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = bgmNameFilter;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)bgmNameFilter, v13, v14, v15, v16, v17, v18);
  v19 = *(_QWORD *)(v10 + 16);
  v20 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
          (const MethodInfo_2F3AEF4 *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  v25 = method->rgctx_data;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( v19 )
  {
    _5_System_Func_T__bool = (__int64)v25->_5_System_Func_T__bool_;
    if ( (*(_BYTE *)(_5_System_Func_T__bool + 309) & 1) == 0 )
      _5_System_Func_T__bool = sub_1C1C6BC(inited);
    v28 = (System_Func_object__bool__o *)sub_1BCAA2C(_5_System_Func_T__bool, v21, v22, v23);
    System_Func_object__bool____ctor(
      v28,
      (Il2CppObject *)v10,
      (intptr_t)method->rgctx_data->_10_BgmManager___c__DisplayClass54_0_T___EnumeratePlayersHavingBgmName_b__1,
      (const MethodInfo_3413A9C *)method->rgctx_data->_8_System_Func_T__bool___ctor);
  }
  else
  {
    _6_BgmManager___c__54_T = (__int64)v25->_6_BgmManager___c__54_T_;
    if ( (*(_BYTE *)(_6_BgmManager___c__54_T + 309) & 1) == 0 )
      _6_BgmManager___c__54_T = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(_6_BgmManager___c__54_T + 224) )
      inited = j_il2cpp_runtime_class_init_0(_6_BgmManager___c__54_T, v21);
    v30 = method->rgctx_data->_6_BgmManager___c__54_T_;
    if ( (BYTE5(v30->vtable[0].methodPtr) & 1) == 0 )
      v30 = (Il2CppClass *)sub_1C1C6BC(inited);
    v28 = (System_Func_object__bool__o *)*((_QWORD *)v30->static_fields + 1);
    if ( !v28 )
    {
      v31 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v31->vtable[0].methodPtr) & 1) == 0 )
        v31 = (Il2CppClass *)sub_1C1C6BC(inited);
      if ( !v31->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(v31, v21);
      v32 = method->rgctx_data;
      v33 = (__int64)v32->_6_BgmManager___c__54_T_;
      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
      {
        v33 = sub_1C1C6BC(inited);
        v32 = method->rgctx_data;
      }
      v34 = (__int64)v32->_5_System_Func_T__bool_;
      v35 = **(Il2CppObject ***)(v33 + 184);
      if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
        v34 = sub_1C1C6BC(inited);
      v28 = (System_Func_object__bool__o *)sub_1BCAA2C(v34, v21, v22, v23);
      System_Func_object__bool____ctor(
        v28,
        v35,
        (intptr_t)method->rgctx_data->_7_BgmManager___c__54_T___EnumeratePlayersHavingBgmName_b__54_0,
        (const MethodInfo_3413A9C *)method->rgctx_data->_8_System_Func_T__bool___ctor);
      v43 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v43->vtable[0].methodPtr) & 1) == 0 )
        v43 = (Il2CppClass *)sub_1C1C6BC(v42);
      *((_QWORD *)v43->static_fields + 1) = v28;
      v44 = method->rgctx_data->_6_BgmManager___c__54_T_;
      if ( (BYTE5(v44->vtable[0].methodPtr) & 1) == 0 )
        v44 = (Il2CppClass *)sub_1C1C6BC(v42);
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)v44->static_fields + 8),
        (int64_t)v28,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          v26,
                                                          (System_Func_TSource__bool__o *)v28,
                                                          (const MethodInfo_2F51894 *)method->rgctx_data->_9_System_Linq_Enumerable_Where_T_);
}


bool __fastcall BgmManager__ExistsPlayerHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_2F04A0C *method)
{
  const MethodInfo_2F04840 **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  rgctx_data = (const MethodInfo_2F04840 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, bgmNameFilter);
    rgctx_data = (const MethodInfo_2F04840 **)method->rgctx_data;
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, bgmNameFilter, *rgctx_data);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_2F1E844 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B157E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___, v1, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5, v6);
    byte_4B157E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0LL;
  if ( !Instance )
    sub_1BCAA3C(v9, v10);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_2F04A58 *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroupLocal_object_(
        BgmManager_o *this,
        const MethodInfo_2F04A58 *method)
{
  __int64 v2; // x2
  const MethodInfo_2F04840 **rgctx_data; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__76_T; // x8
  Il2CppClass *v15; // x0
  System_Func_object__object__o *v16; // x21
  Il2CppClass *v17; // x0
  const MethodInfo_2F04A58_RGCTXs *v18; // x8
  __int64 v19; // x0
  __int64 _3_System_Func_T__BgmPlayArgs; // x8
  Il2CppObject *v21; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  long double v28; // q0
  Il2CppClass *v29; // x0
  Il2CppClass *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Object_array *v32; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  BgmPlayArgsGroup_o *v36; // x20

  rgctx_data = (const MethodInfo_2F04840 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&BgmPlayArgsGroup_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v6, v7);
    rgctx_data = (const MethodInfo_2F04840 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, v8);
      rgctx_data = (const MethodInfo_2F04840 **)method->rgctx_data;
    }
  }
  v12 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, 0LL, *rgctx_data);
  _4_BgmManager___c__76_T = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (BYTE5(_4_BgmManager___c__76_T->vtable[0].methodPtr) & 1) == 0 )
    _4_BgmManager___c__76_T = (Il2CppClass *)sub_1C1C6BC(inited);
  if ( !_4_BgmManager___c__76_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__76_T, v9);
  v15 = method->rgctx_data->_4_BgmManager___c__76_T_;
  if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
    v15 = (Il2CppClass *)sub_1C1C6BC(inited);
  v16 = (System_Func_object__object__o *)*((_QWORD *)v15->static_fields + 1);
  if ( !v16 )
  {
    v17 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C1C6BC(inited);
    if ( !v17->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v17, v9);
    v18 = method->rgctx_data;
    v19 = (__int64)v18->_4_BgmManager___c__76_T_;
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    {
      v19 = sub_1C1C6BC(inited);
      v18 = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = (__int64)v18->_3_System_Func_T__BgmPlayArgs_;
    v21 = **(Il2CppObject ***)(v19 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__BgmPlayArgs + 309) & 1) == 0 )
      _3_System_Func_T__BgmPlayArgs = sub_1C1C6BC(inited);
    v16 = (System_Func_object__object__o *)sub_1BCAA2C(_3_System_Func_T__BgmPlayArgs, v9, v10, v11);
    System_Func_object__object____ctor(
      v16,
      v21,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__76_T___ExportPlayArgsGroupLocal_b__76_0,
      (const MethodInfo_3414144 *)method->rgctx_data->_6_System_Func_T__BgmPlayArgs___ctor);
    v29 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v29->vtable[0].methodPtr) & 1) == 0 )
      v29 = (Il2CppClass *)sub_1C1C6BC(v28);
    *((_QWORD *)v29->static_fields + 1) = v16;
    v30 = method->rgctx_data->_4_BgmManager___c__76_T_;
    if ( (BYTE5(v30->vtable[0].methodPtr) & 1) == 0 )
      v30 = (Il2CppClass *)sub_1C1C6BC(v28);
    sub_1BCA784(
      (PartyOrganizationUtility_o *)((char *)v30->static_fields + 8),
      (int64_t)v16,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                               (System_Func_TSource__TResult__o *)v16,
                                                               (const MethodInfo_2F43A70 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__BgmPlayArgs_);
  v32 = System_Linq_Enumerable__ToArray_object_(
          v31,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v36 = (BgmPlayArgsGroup_o *)sub_1BCAA2C(BgmPlayArgsGroup_TypeInfo, v33, v34, v35);
  BgmPlayArgsGroup___ctor_39041644(v36, (BgmPlayArgs_array *)v32, 0LL);
  return v36;
}


System_String_o *__fastcall BgmManager__ExtractCueName(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  __int64 v6; // x8

  if ( (byte_4B15808 & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, name, method);
    byte_4B15808 = 1;
  }
  v4 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  v4->m_Items[2] = 47;
  if ( !name || (v4 = (System_Char_array *)System_String__Split_62423376(name, v4, 0LL)) == 0LL )
LABEL_9:
    sub_1BCAA3C(v4, v5);
  v6 = *(_QWORD *)&v4->max_length;
  if ( !(_DWORD)v6 )
LABEL_10:
    sub_1BCAA44(v4, v5);
  return *(System_String_o **)((char *)&v4->m_Items[2] + (((v6 << 32) - 0x100000000LL) >> 29));
}


void __fastcall BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4B157F0 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v3);
    byte_4B157F0 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__StopBgm(0LL, fadeoutTime, callback, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BgmManager__FadeoutBgmLocal_object_(
        BgmManager_o *this,
        float fadeoutTime,
        System_String_o *name,
        const MethodInfo_2F04C14 *method)
{
  __int64 v4; // x3
  const MethodInfo_2F04C14_RGCTXs *rgctx_data; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 _0_BgmManager___c__DisplayClass67_0_T; // x0
  BgmManager___c__DisplayClass67_0_T__o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_IEnumerable_T__o *v19; // x20
  long double v20; // q0
  Il2CppClass *_5_System_Func_T__bool; // x8
  System_Func_object__bool__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_bool___, name, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_bool___, v10, v11);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, name);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_BgmManager___c__DisplayClass67_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass67_0_T = sub_1C1C6BC(*(long double *)&fadeoutTime);
  v13 = (BgmManager___c__DisplayClass67_0_T__o *)sub_1BCAA2C(_0_BgmManager___c__DisplayClass67_0_T, name, method, v4);
  BgmManager___c__DisplayClass67_0_object____ctor(
    v13,
    (const MethodInfo_30DDEE8 *)method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  v13->fields.fadeoutTime = fadeoutTime;
  v19 = BgmManager__EnumeratePlayersHavingBgmName_object_(
          this,
          name,
          (const MethodInfo_2F04840 *)method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_);
  _5_System_Func_T__bool = method->rgctx_data->_5_System_Func_T__bool_;
  if ( (BYTE5(_5_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
    _5_System_Func_T__bool = (Il2CppClass *)sub_1C1C6BC(v20);
  v22 = (System_Func_object__bool__o *)sub_1BCAA2C(_5_System_Func_T__bool, v16, v17, v18);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v13,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass67_0_T___FadeoutBgmLocal_b__0,
    (const MethodInfo_3413A9C *)method->rgctx_data->_6_System_Func_T__bool___ctor);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_2F42BAC *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v23,
                                                               (const MethodInfo_2F4B6D8 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v24, (const MethodInfo_2F1E07C *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B157F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___, v2, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7, v8);
    byte_4B157F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !Instance )
      sub_1BCAA3C(v11, v12);
    BgmManager__FadeoutBgmLocal_object_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0LL,
      (const MethodInfo_2F04C14 *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__FixedUpdate(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BgmManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_IEnumerable_o *bgmPlayers; // x8
  System_Collections_IEnumerable_o **p_bgmPlayers; // x25
  BgmPlayerBase_o *jinglePlayer; // x0
  bool IsPlaying; // w0
  int v46; // w26
  System_Collections_Generic_IEnumerable_TResult__o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  BgmManager___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x20
  System_Func_object__bool__o *_9__78_0; // x21
  Il2CppObject *v54; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  _BOOL4 v62; // w0
  __int64 v63; // x2
  __int64 v64; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  BgmManager___c_c *v69; // x8
  System_Collections_Generic_IEnumerable_T__o *v70; // x20
  System_Action_object__o *_9__78_1; // x21
  Il2CppObject *v72; // x22
  struct BgmManager___c_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  BgmManager_o *v80; // x20
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v81; // x0
  System_Collections_Generic_IEnumerable_T__o *v82; // x21
  BgmManager___c_c *v83; // x0
  System_Action_object__o *_9__78_3; // x22
  Il2CppObject *v85; // x23
  struct BgmManager___c_StaticFields *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  __int64 v93; // x1
  const MethodInfo *v94; // x2
  System_Collections_IEnumerable_o *v95; // x19
  System_Action_object__o *v96; // x20
  Il2CppObject *v97; // x21
  struct BgmManager___c_StaticFields *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7

  v3 = this;
  if ( (byte_4B1580F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GeneralBgmPlayer__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_BgmPlayerBase__TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Action_BgmPlayArgs__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BgmPlayArgs___, v8, v9);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_GeneralBgmPlayer___, v10, v11);
    sub_1BCA7E0(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, v12, v13);
    sub_1BCA7E0(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___, v14, v15);
    sub_1BCA7E0(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___, v16, v17);
    sub_1BCA7E0(&BgmManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___, v20, v21);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___, v22, v23);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v24, v25);
    sub_1BCA7E0(&System_Func_GeneralBgmPlayer__bool__TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v30, v31);
    sub_1BCA7E0(&Method_BgmManager___c__FixedUpdate_b__78_0__, v32, v33);
    sub_1BCA7E0(&Method_BgmManager___c__FixedUpdate_b__78_1__, v34, v35);
    sub_1BCA7E0(&Method_BgmManager___c__FixedUpdate_b__78_2__, v36, v37);
    sub_1BCA7E0(&Method_BgmManager___c__FixedUpdate_b__78_3__, v38, v39);
    this = (BgmManager_o *)sub_1BCA7E0(&BgmManager___c_TypeInfo, v40, v41);
    byte_4B1580F = 1;
  }
  p_bgmPlayers = (System_Collections_IEnumerable_o **)&v3->fields.bgmPlayers;
  bgmPlayers = (System_Collections_IEnumerable_o *)v3->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_47;
  if ( SLODWORD(bgmPlayers[1].monitor) >= 1 )
  {
    jinglePlayer = (BgmPlayerBase_o *)v3->fields.jinglePlayer;
    if ( jinglePlayer )
    {
      IsPlaying = BgmPlayerBase__IsPlaying(jinglePlayer, 0LL);
      bgmPlayers = *p_bgmPlayers;
      v46 = IsPlaying;
    }
    else
    {
      v46 = 0;
    }
    v47 = System_Linq_Enumerable__OfType_object_(
            bgmPlayers,
            (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    v51 = BgmManager___c_TypeInfo;
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, v48);
      v51 = BgmManager___c_TypeInfo;
    }
    _9__78_0 = (System_Func_object__bool__o *)v51->static_fields->__9__78_0;
    if ( !_9__78_0 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51, v48);
        v51 = BgmManager___c_TypeInfo;
      }
      v54 = (Il2CppObject *)v51->static_fields->__9;
      _9__78_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GeneralBgmPlayer__bool__TypeInfo, v48, v49, v50);
      System_Func_object__bool____ctor(_9__78_0, v54, Method_BgmManager___c__FixedUpdate_b__78_0__, 0LL);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__78_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__78_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__78_0,
        (int64_t)_9__78_0,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    v62 = System_Linq_Enumerable__Any_object__49415960(
            v52,
            (System_Func_TSource__bool__o *)_9__78_0,
            (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v62 & v46) != 0 )
    {
      v65 = System_Linq_Enumerable__OfType_object_(
              *p_bgmPlayers,
              (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
      v69 = BgmManager___c_TypeInfo;
      v70 = (System_Collections_Generic_IEnumerable_T__o *)v65;
      if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, v66);
        v69 = BgmManager___c_TypeInfo;
      }
      _9__78_1 = (System_Action_object__o *)v69->static_fields->__9__78_1;
      if ( !_9__78_1 )
      {
        if ( !v69->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v69, v66);
          v69 = BgmManager___c_TypeInfo;
        }
        v72 = (Il2CppObject *)v69->static_fields->__9;
        _9__78_1 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GeneralBgmPlayer__TypeInfo, v66, v67, v68);
        System_Action_object____ctor(_9__78_1, v72, Method_BgmManager___c__FixedUpdate_b__78_1__, 0LL);
        v73 = BgmManager___c_TypeInfo->static_fields;
        v73->__9__78_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__78_1;
        sub_1BCA784((PartyOrganizationUtility_o *)&v73->__9__78_1, (int64_t)_9__78_1, v74, v75, v76, v77, v78, v79);
      }
      BasicHelper__ForEach_object_(
        v70,
        (System_Action_T__o *)_9__78_1,
        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v3->fields.isBgmStopJingle = 1;
    }
    else if ( !v62
           && v3->fields.isBgmStopJingle
           && v46 == 0
           && BgmManager__ExistsPlayerHavingBgmName_object_(
                v3,
                0LL,
                (const MethodInfo_2F04A0C *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
    {
      this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                               v3,
                               (const MethodInfo_2F04A58 *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
      if ( !this )
        goto LABEL_47;
      v80 = this;
      v81 = BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0LL);
      v82 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v81,
                                                             (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      this = (BgmManager_o *)BgmManager__StopBgmLocal_object_(
                               v3,
                               0LL,
                               (const MethodInfo_2F04E00 *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
      if ( !v82 )
        goto LABEL_47;
      if ( v82[1].monitor )
      {
        v83 = BgmManager___c_TypeInfo;
        if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, method);
          v83 = BgmManager___c_TypeInfo;
        }
        _9__78_3 = (System_Action_object__o *)v83->static_fields->__9__78_3;
        if ( !_9__78_3 )
        {
          if ( !v83->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v83, method);
            v83 = BgmManager___c_TypeInfo;
          }
          v85 = (Il2CppObject *)v83->static_fields->__9;
          _9__78_3 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BgmPlayArgs__TypeInfo, method, v63, v64);
          System_Action_object____ctor(_9__78_3, v85, Method_BgmManager___c__FixedUpdate_b__78_3__, 0LL);
          v86 = BgmManager___c_TypeInfo->static_fields;
          v86->__9__78_3 = (struct System_Action_BgmPlayArgs__o *)_9__78_3;
          sub_1BCA784((PartyOrganizationUtility_o *)&v86->__9__78_3, (int64_t)_9__78_3, v87, v88, v89, v90, v91, v92);
        }
        BasicHelper__ForEach_object_(
          v82,
          (System_Action_T__o *)_9__78_3,
          (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BgmPlayArgs___);
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v93);
        BgmManager__PlayBgm_39024948((BgmPlayArgsGroup_o *)v80, 0LL, v94);
      }
    }
    if ( !v46 )
      v3->fields.isBgmStopJingle = 0;
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
    v95 = *p_bgmPlayers;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, method);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v96 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 10);
    if ( !v96 )
    {
      if ( !LODWORD(this[2].fields.mainBgmPlayer) )
      {
        j_il2cpp_runtime_class_init_0(this, method);
        this = (BgmManager_o *)BgmManager___c_TypeInfo;
      }
      v97 = *(Il2CppObject **)this[2].monitor;
      v96 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BgmPlayerBase__TypeInfo, method, v63, v64);
      System_Action_object____ctor(v96, v97, Method_BgmManager___c__FixedUpdate_b__78_2__, 0LL);
      v98 = BgmManager___c_TypeInfo->static_fields;
      v98->__9__78_2 = (struct System_Action_BgmPlayerBase__o *)v96;
      sub_1BCA784((PartyOrganizationUtility_o *)&v98->__9__78_2, (int64_t)v96, v99, v100, v101, v102, v103, v104);
    }
    if ( v95 )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)v95,
        (System_Action_T__o *)v96,
        (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
      return;
    }
LABEL_47:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B157FC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3, v4);
    byte_4B157FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BCAA3C(v7, v8);
    LODWORD(Instance[4].monitor) = 0;
  }
}


CriAtomSource_o *__fastcall BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4B1580D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___, method, v2);
    byte_4B1580D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_object_(
                              gameObject,
                              (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t __fastcall BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *CueSheet; // x0
  __int64 v9; // x1
  SoundManager_c *v10; // x8
  System_String_o *v11; // x19

  if ( (byte_4B157E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    byte_4B157E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, name, 0LL);
  v10 = SoundManager_TypeInfo;
  v11 = CueSheet;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v9);
    v10 = SoundManager_TypeInfo;
  }
  return System_String__op_Equality(v11, v10->static_fields->RESIDENT_RESOURCE_SOUND_NAME, 0LL);
}


System_String_o *__fastcall BgmManager__GetBgmName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x19
  __int64 v7; // x1
  bool v8; // w8
  System_String_o *result; // x0
  UnityEngine_Object_c *klass; // x8

  if ( (byte_4B157F4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3, v4);
    byte_4B157F4 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v8 )
  {
    if ( !Instance || (klass = Instance[2].klass) == 0LL )
      sub_1BCAA3C(0LL, v7);
    return (System_String_o *)klass->_1.namespaze;
  }
  return result;
}


System_String_o *__fastcall BgmManager__GetMainBgmName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x1
  System_String_o **p_COSMOS_IN_THE_LOSTBELT_BGM_NAME; // x19
  int32_t UiFlag; // w19
  System_Collections_ICollection_o *ClearWarIdList; // x20
  __int64 v20; // x1
  BalanceConfig_c *v21; // x0
  BalanceConfig_c *v22; // x0
  BgmManager_c *v23; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  System_String_o *bgmName; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15810 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v1, v2);
    sub_1BCA7E0(&BgmManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v7, v8);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B15810 = 1;
  }
  bgmName = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v14);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( !MasterData_object
    || (p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &bgmName,
        !TerminalOverwriteMaster__TryGetOverwriteMainBgmName(
           (TerminalOverwriteMaster_o *)MasterData_object,
           &bgmName,
           0LL)) )
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v16);
    UiFlag = ServantCommentManager__GetUiFlag(0LL);
    ClearWarIdList = (System_Collections_ICollection_o *)ServantCommentManager__GetClearWarIdList(0LL);
    if ( BasicHelper__IsNullOrEmpty(ClearWarIdList, 0LL) )
      goto LABEL_15;
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
      v21 = BalanceConfig_TypeInfo;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
            v21->static_fields->OrdealCallWarId,
            (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
LABEL_15:
      v23 = BgmManager_TypeInfo;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v20);
        v23 = BgmManager_TypeInfo;
      }
      static_fields = v23->static_fields;
      if ( UiFlag == 1 )
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
      else
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &static_fields->DEFAULT_MAIN_BGM_NAME;
    }
    else
    {
      v22 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
        v22 = BalanceConfig_TypeInfo;
      }
      p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v22->static_fields->OrdealCallClearBgmName;
    }
  }
  return *p_COSMOS_IN_THE_LOSTBELT_BGM_NAME;
}


float __fastcall BgmManager__GetMasterVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BgmManager_c *v3; // x0

  if ( (byte_4B157E6 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, v1, v2);
    byte_4B157E6 = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v1);
    v3 = BgmManager_TypeInfo;
  }
  return v3->static_fields->masterVolume;
}


JinglePlayer_o *__fastcall BgmManager__GetOrCreateJinglePlayer(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  JinglePlayer_o *v13; // x0
  Il2CppObject *jinglePlayer; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct System_String_o *bgmName; // x8
  JinglePlayer_o **p_jinglePlayer; // x20
  JinglePlayer_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  JinglePlayer_c *klass; // x9
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 bgmName_low; // x10
  __int64 v37; // x8

  if ( (byte_4B1580C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_JinglePlayer___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___, v4, v5);
    sub_1BCA7E0(&JinglePlayer_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v10, v11);
    byte_4B1580C = 1;
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  v13 = (JinglePlayer_o *)System_Linq_Enumerable__ToArray_object_(
                            v12,
                            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !v13 )
    goto LABEL_15;
  bgmName = v13->fields.bgmName;
  if ( !bgmName )
  {
    v19 = (JinglePlayer_o *)sub_1BCAA2C(JinglePlayer_TypeInfo, jinglePlayer, v15, v16);
    JinglePlayer___ctor(v19, 0LL);
    this->fields.jinglePlayer = v19;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.jinglePlayer, (int64_t)v19, v20, v21, v22, v23, v24, v25);
    bgmPlayers = this->fields.bgmPlayers;
    if ( bgmPlayers )
    {
      v13 = *p_jinglePlayer;
      if ( *p_jinglePlayer )
      {
        klass = v13->klass;
        v13->fields.index = bgmPlayers->fields._size;
        ((void (__fastcall *)(JinglePlayer_o *, Il2CppMethodPointer))klass->vtable._5_Initialize.method)(
          v13,
          klass->vtable._6_Reset.methodPtr);
        v13 = (JinglePlayer_o *)this->fields.bgmPlayers;
        if ( v13 )
        {
          jinglePlayer = (Il2CppObject *)this->fields.jinglePlayer;
          v34 = *(_QWORD *)&v13->fields.index;
          v35 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++HIDWORD(v13->fields.bgmName);
          if ( v34 )
          {
            bgmName_low = SLODWORD(v13->fields.bgmName);
            if ( (unsigned int)bgmName_low >= *(_DWORD *)(v34 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)v13,
                jinglePlayer,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = v34 + 8 * bgmName_low;
              LODWORD(v13->fields.bgmName) = bgmName_low + 1;
              *(_QWORD *)(v37 + 32) = jinglePlayer;
              sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)jinglePlayer, v28, v29, v30, v31, v32, v33);
            }
            return *p_jinglePlayer;
          }
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(v13, jinglePlayer);
  }
  if ( !(_DWORD)bgmName )
    sub_1BCAA44(v13, jinglePlayer);
  p_jinglePlayer = (JinglePlayer_o **)&v13->fields.bgmVolume;
  return *p_jinglePlayer;
}


SubBgmPlayer_o *__fastcall BgmManager__GetOrCreateSubBgmPlayer(
        BgmManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x21
  System_Collections_Generic_List_object__o *v29; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Object_array *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_object__bool__o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  SubBgmPlayer_o *object; // x21
  BgmManager___c_c *v47; // x0
  System_Func_object__bool__o *_9__72_1; // x21
  Il2CppObject *v49; // x22
  struct BgmManager___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x2
  __int64 v58; // x3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  SubBgmPlayer_c *klass; // x9
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x8

  if ( (byte_4B1580B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_SubBgmPlayer___, bgmName, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_SubBgmPlayer___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___, v10, v11);
    sub_1BCA7E0(&System_Func_SubBgmPlayer__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v16, v17);
    sub_1BCA7E0(&SubBgmPlayer_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, v20, v21);
    sub_1BCA7E0(&Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__, v22, v23);
    sub_1BCA7E0(&BgmManager___c__DisplayClass72_0_TypeInfo, v24, v25);
    sub_1BCA7E0(&BgmManager___c_TypeInfo, v26, v27);
    byte_4B1580B = 1;
  }
  v28 = sub_1BCAA2C(BgmManager___c__DisplayClass72_0_TypeInfo, bgmName, method, v3);
  BgmManager___c__DisplayClass72_0___ctor((BgmManager___c__DisplayClass72_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_23;
  *(_QWORD *)(v28 + 16) = bgmName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)bgmName, v31, v32, v33, v34, v35, v36);
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v38 = System_Linq_Enumerable__ToArray_object_(
          v37,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v42 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_SubBgmPlayer__bool__TypeInfo, v39, v40, v41);
  System_Func_object__bool____ctor(
    v42,
    (Il2CppObject *)v28,
    Method_BgmManager___c__DisplayClass72_0__GetOrCreateSubBgmPlayer_b__0__,
    0LL);
  object = (SubBgmPlayer_o *)BasicHelper__Find_object_(
                               v38,
                               (System_Func_T__bool__o *)v42,
                               (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( object )
    return object;
  v47 = BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, v43);
    v47 = BgmManager___c_TypeInfo;
  }
  _9__72_1 = (System_Func_object__bool__o *)v47->static_fields->__9__72_1;
  if ( !_9__72_1 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47, v43);
      v47 = BgmManager___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v47->static_fields->__9;
    _9__72_1 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_SubBgmPlayer__bool__TypeInfo, v43, v44, v45);
    System_Func_object__bool____ctor(_9__72_1, v49, Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__72_1__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__72_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__72_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__72_1,
      (int64_t)_9__72_1,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  v29 = (System_Collections_Generic_List_object__o *)BasicHelper__Find_object_(
                                                       v38,
                                                       (System_Func_T__bool__o *)_9__72_1,
                                                       (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_SubBgmPlayer___);
  object = (SubBgmPlayer_o *)v29;
  if ( v29 )
    return object;
  if ( !v38 )
LABEL_23:
    sub_1BCAA3C(v29, v30);
  if ( (int)v38->max_length <= 1 )
  {
    object = (SubBgmPlayer_o *)sub_1BCAA2C(SubBgmPlayer_TypeInfo, v30, v57, v58);
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
        v29 = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
        if ( v29 )
        {
          items = v29->fields._items;
          v69 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++v29->fields._version;
          if ( items )
          {
            size = v29->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v29,
                (Il2CppObject *)object,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
            }
            else
            {
              v71 = &items->obj.klass + size;
              v29->fields._size = size + 1;
              v71[4] = (Il2CppClass *)object;
              sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)object, v62, v63, v64, v65, v66, v67);
            }
            return object;
          }
        }
      }
    }
    goto LABEL_23;
  }
  return (SubBgmPlayer_o *)System_Linq_Enumerable__First_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                             (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
}


void __fastcall BgmManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B157E1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3, v4);
    byte_4B157E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BCAA3C(v7, v8);
    BgmManager__InitializeLocal((BgmManager_o *)Instance, v8);
  }
}


void __fastcall BgmManager__InitializeLocal(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BgmManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  MainBgmPlayer_o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_object__o *v37; // x19
  System_Action_object__o *v38; // x20
  Il2CppObject *v39; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  BgmManager_c *v48; // x0

  v4 = this;
  if ( (byte_4B157FD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BgmPlayerBase__TypeInfo, method, v2);
    sub_1BCA7E0(&BgmManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v11, v12);
    sub_1BCA7E0(&MainBgmPlayer_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BgmManager___c__InitializeLocal_b__50_0__, v15, v16);
    this = (BgmManager_o *)sub_1BCA7E0(&BgmManager___c_TypeInfo, v17, v18);
    byte_4B157FD = 1;
  }
  bgmPlayers = v4->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_21;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v20 = (MainBgmPlayer_o *)sub_1BCAA2C(MainBgmPlayer_TypeInfo, method, v2, v3);
    MainBgmPlayer___ctor(v20, 0LL);
    v4->fields.mainBgmPlayer = v20;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.mainBgmPlayer, (int64_t)v20, v21, v22, v23, v24, v25, v26);
    method = (const MethodInfo *)v4->fields.mainBgmPlayer;
    if ( !method )
      goto LABEL_21;
    LODWORD(method->invoker_method) = 0;
    this = (BgmManager_o *)v4->fields.bgmPlayers;
    if ( !this )
      goto LABEL_21;
    v33 = *(_QWORD *)&this->fields.m_CachedPtr;
    v34 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v33 )
      goto LABEL_21;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v33 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)method,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = v33 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v36 + 32) = method;
      sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)method, v27, v28, v29, v30, v31, v32);
    }
  }
  v37 = (System_Collections_Generic_List_object__o *)v4->fields.bgmPlayers;
  this = (BgmManager_o *)BgmManager___c_TypeInfo;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, method);
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
  }
  v38 = (System_Action_object__o *)*((_QWORD *)this[2].monitor + 1);
  if ( !v38 )
  {
    if ( !LODWORD(this[2].fields.mainBgmPlayer) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v39 = *(Il2CppObject **)this[2].monitor;
    v38 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BgmPlayerBase__TypeInfo, method, v2, v3);
    System_Action_object____ctor(v38, v39, Method_BgmManager___c__InitializeLocal_b__50_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)v38;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__50_0, (int64_t)v38, v41, v42, v43, v44, v45, v46);
  }
  if ( !v37 )
LABEL_21:
    sub_1BCAA3C(this, method);
  System_Collections_Generic_List_object___ForEach(
    v37,
    (System_Action_T__o *)v38,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v48 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v47);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v48);
}


bool __fastcall BgmManager__IsKeepSubBgm(BgmManager_o *this, const MethodInfo *method)
{
  return this->fields.enableCounter_KeepSubBgm > 0;
}


bool __fastcall BgmManager__IsLoadingLocal(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  BgmManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x8
  struct System_Collections_Generic_List_string__o *v9; // x8

  v4 = this;
  if ( (byte_4B15807 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, name, method);
    this = (BgmManager_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v5, v6);
    byte_4B15807 = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)v4->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_object___Contains(
               loadingBgmCueNameList,
               (Il2CppObject *)this,
               (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_1BCAA3C(this, name);
  }
  v9 = v4->fields.loadingBgmCueNameList;
  if ( !v9 )
    goto LABEL_8;
  return v9->fields._size > 0;
}


bool __fastcall BgmManager__IsPlayBgm(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B157E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v6, v7);
    byte_4B157E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v10, v11);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_2F04A0C *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool __fastcall BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B157F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v6, v7);
    byte_4B157F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v10, v11);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_2F04A0C *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool __fastcall BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0
  __int64 v7; // x1

  if ( (byte_4B15806 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, bgmName, method);
    byte_4B15806 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName((BgmManager_o *)Instance, bgmName, v5);
  if ( !Instance )
    sub_1BCAA3C(CueName, v7);
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0LL) != 0LL;
}


void __fastcall BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  bool v14; // w19

  if ( (byte_4B157FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___, method, v2);
    sub_1BCA7E0(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v8, v9);
    byte_4B157FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v12 )
  {
    if ( !Instance )
      sub_1BCAA3C(v12, v13);
    v14 = isPause;
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v14,
      0LL,
      (const MethodInfo_2F04D30 *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      v14,
      0LL,
      (const MethodInfo_2F04D30 *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmManager__PauseBgmLocal_object_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_2F04D30 *method)
{
  long double v4; // q0
  const MethodInfo_2F04D30_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass70_0_T; // x0
  BgmManager___c__DisplayClass70_0_T__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_IEnumerable_T__o *v16; // x20
  long double v17; // q0
  Il2CppClass *_5_System_Action_T; // x8
  System_Action_object__o *v19; // x21

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, isPause);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass70_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_;
  if ( (BYTE5(rgctx_data->_0_BgmManager___c__DisplayClass70_0_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_BgmManager___c__DisplayClass70_0_T = sub_1C1C6BC(v4);
  v10 = (BgmManager___c__DisplayClass70_0_T__o *)sub_1BCAA2C(
                                                   _0_BgmManager___c__DisplayClass70_0_T,
                                                   isPause,
                                                   name,
                                                   method);
  BgmManager___c__DisplayClass70_0_object____ctor(
    v10,
    (const MethodInfo_30DF108 *)method->rgctx_data->_1_BgmManager___c__DisplayClass70_0_T___ctor);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  v10->fields.isPause = isPause;
  v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                         (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                         (const MethodInfo_2F3AEF4 *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  _5_System_Action_T = method->rgctx_data->_5_System_Action_T_;
  if ( (BYTE5(_5_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    _5_System_Action_T = (Il2CppClass *)sub_1C1C6BC(v17);
  v19 = (System_Action_object__o *)sub_1BCAA2C(_5_System_Action_T, v13, v14, v15);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass70_0_T___PauseBgmLocal_b__0,
    (const MethodInfo_3224C8C *)method->rgctx_data->_6_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v16,
    (System_Action_T__o *)v19,
    (const MethodInfo_2EFFC84 *)method->rgctx_data->_7_BasicHelper_ForEach_T_);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  BgmPlayArgsGroup_o *v18; // x0
  BgmPlayArgsGroup_o *v19; // x22
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  System_Nullable_float__o volumeNullable; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_float__o p_volumeNullable; // 0:x0.8
  System_Nullable_float__o v24; // 0:x2.8

  if ( (byte_4B157EB & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, startTime, finishCallback);
    sub_1BCA7E0(&BgmPlayArgsGroup_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v13, v14);
    byte_4B157EB = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0LL;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  v18 = (BgmPlayArgsGroup_o *)sub_1BCAA2C(BgmPlayArgsGroup_TypeInfo, v15, v16, v17);
  v24 = volumeNullable;
  v19 = v18;
  BgmPlayArgsGroup___ctor_39042764(v18, name, v24, fadeTime, startTime, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v20);
  BgmManager__PlayBgm_39024948(v19, finishCallback, v21);
}


void __fastcall BgmManager__PlayBgm_39024948(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B157ED & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, finishCallback, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5, v6);
    byte_4B157ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !Instance )
      sub_1BCAA3C(v9, v10);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, 1, v11);
  }
}


void __fastcall BgmManager__PlayBgm_39025144(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  BgmPlayArgsGroup_o *v9; // x22
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B157EC & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, subArray, finishCallback);
    sub_1BCA7E0(&BgmPlayArgsGroup_TypeInfo, v7, v8);
    byte_4B157EC = 1;
  }
  v9 = (BgmPlayArgsGroup_o *)sub_1BCAA2C(BgmPlayArgsGroup_TypeInfo, subArray, finishCallback, method);
  BgmPlayArgsGroup___ctor(v9, main, (BgmPlayArgs_array *)subArray, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v10);
  BgmManager__PlayBgm_39024948(v9, finishCallback, v11);
}


void __fastcall BgmManager__PlayJingle(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_4B157F6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callbackFunc, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7, v8);
    byte_4B157F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !Instance )
      sub_1BCAA3C(v11, v12);
    BgmManager__PlayJingleLocal((BgmManager_o *)Instance, name, volume, callbackFunc, v13);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x3

  if ( (byte_4B1580A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, name, callbackFunc);
    sub_1BCA7E0(&Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, v9, v10);
    sub_1BCA7E0(&BgmManager___c__DisplayClass71_0_TypeInfo, v11, v12);
    byte_4B1580A = 1;
  }
  v13 = sub_1BCAA2C(BgmManager___c__DisplayClass71_0_TypeInfo, name, callbackFunc, method);
  BgmManager___c__DisplayClass71_0___ctor((BgmManager___c__DisplayClass71_0_o *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)name, v22, v23, v24, v25, v26, v27);
  *(float *)(v13 + 32) = volume;
  *(_QWORD *)(v13 + 40) = callbackFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)callbackFunc, v28, v29, v30, v31, v32, v33);
  v34 = *(System_String_o **)(v13 + 24);
  v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
  System_Action___ctor(v38, (Il2CppObject *)v13, Method_BgmManager___c__DisplayClass71_0__PlayJingleLocal_b__0__, 0LL);
  BgmManager__PreloadBgm(this, v34, v38, v39);
}


void __fastcall BgmManager__PlayJingle_39029112(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4B157F7 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v3);
    byte_4B157F7 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PlayJingle(name, volume, 0LL, v3);
}


void __fastcall BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B157EE & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    byte_4B157EE = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PlayBgm_39025144(args, 0LL, 0LL, v3);
}


void __fastcall BgmManager__PlayPreloadBgms(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BgmPlayArgsGroup_o *cacheArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v5; // x0
  System_Object_array *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x8
  System_Object_array *v15; // x21
  unsigned __int64 v16; // x22

  if ( (byte_4B15802 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, method, v2);
    byte_4B15802 = 1;
  }
  cacheArgsGroup = this->fields.cacheArgsGroup;
  if ( cacheArgsGroup )
  {
    v5 = BgmPlayArgsGroup__AllArgsListNullExcluded(cacheArgsGroup, 0LL);
    v6 = System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    if ( !v6 )
      sub_1BCAA3C(0LL, v7);
    v14 = *(_QWORD *)&v6->max_length;
    v15 = v6;
    if ( (int)v14 >= 1 )
    {
      v16 = 0LL;
      do
      {
        if ( v16 >= (unsigned int)v14 )
          sub_1BCAA44(v6, v7);
        BgmManager__PlayPreloadedBgm(this, (BgmPlayArgs_o *)v15->m_Items[v16], v8);
        LODWORD(v14) = v15->max_length;
        ++v16;
      }
      while ( (__int64)v16 < (int)v14 );
    }
    this->fields.cacheArgsGroup = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cacheArgsGroup, 0LL, (int64_t)v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall BgmManager__PlayPreloadedBgm(BgmManager_o *this, BgmPlayArgs_o *args, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *BgmName_k__BackingField; // x20
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  BgmPlayArgs_c *klass; // x8
  unsigned int methodPtr_low; // w9
  __int64 v12; // x11
  __int64 v13; // x11
  void *mainBgmPlayer; // x0

  if ( (byte_4B15803 & 1) == 0 )
  {
    sub_1BCA7E0(&MainBgmPlayArgs_TypeInfo, args, method);
    sub_1BCA7E0(&SubBgmPlayArgs_TypeInfo, v5, v6);
    byte_4B15803 = 1;
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
        v12 = LOBYTE(MainBgmPlayArgs_TypeInfo->vtable._0_Equals.methodPtr);
        if ( methodPtr_low >= (unsigned int)v12
          && (MainBgmPlayArgs_c *)klass->_2.typeHierarchy[v12 - 1] == MainBgmPlayArgs_TypeInfo )
        {
          mainBgmPlayer = this->fields.mainBgmPlayer;
        }
        else
        {
          v13 = LOBYTE(SubBgmPlayArgs_TypeInfo->vtable._0_Equals.methodPtr);
          if ( methodPtr_low < (unsigned int)v13
            || (SubBgmPlayArgs_c *)klass->_2.typeHierarchy[v13 - 1] != SubBgmPlayArgs_TypeInfo )
          {
            return;
          }
          mainBgmPlayer = BgmManager__GetOrCreateSubBgmPlayer(this, BgmName_k__BackingField, v9);
        }
        if ( !mainBgmPlayer )
          sub_1BCAA3C(0LL, v8);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x21
  Il2CppObject *Instance; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  UnityEngine_Object_o *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  System_String_o *v34; // x21
  BgmManager_o *v35; // x20
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x3

  if ( (byte_4B157EF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, v9, v10);
    sub_1BCA7E0(&BgmManager___c__DisplayClass36_0_TypeInfo, v11, v12);
    byte_4B157EF = 1;
  }
  v13 = sub_1BCAA2C(BgmManager___c__DisplayClass36_0_TypeInfo, method, v2, v3);
  BgmManager___c__DisplayClass36_0___ctor((BgmManager___c__DisplayClass36_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 24) = args;
  v22 = v13 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)args, v16, v17, v18, v19, v20, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v13 + 16) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)Instance, v24, v25, v26, v27, v28, v29);
  v31 = *(UnityEngine_Object_o **)(v13 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  v14 = UnityEngine_Object__op_Equality(v31, 0LL, 0LL);
  if ( !v14 )
  {
    if ( *(_QWORD *)v22 )
    {
      v34 = *(System_String_o **)(*(_QWORD *)v22 + 16LL);
      v35 = *(BgmManager_o **)(v13 + 16);
      v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v32, v33);
      System_Action___ctor(v36, (Il2CppObject *)v13, Method_BgmManager___c__DisplayClass36_0__PlaySubBgm_b__0__, 0LL);
      if ( v35 )
      {
        BgmManager__PreloadBgm(v35, v34, v36, v37);
        return;
      }
    }
LABEL_10:
    sub_1BCAA3C(v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmManager__PreloadAndPlayBgms(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  int64_t v33; // x19
  BgmPlayArgsGroup_o *v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  bool v42; // w24
  BgmPlayArgsGroup_o **v43; // x23
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct BgmPlayArgsGroup_o *v62; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v63; // x0
  System_Object_array *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_object__o *v74; // x20
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x23
  unsigned __int64 v78; // x24
  __int64 v79; // x22
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x1
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Action_object__o *v96; // x21
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  struct System_Object_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  Il2CppClass **v106; // x0
  System_Object_array *v107; // x21
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  ChainableActionParallel_o *v111; // x20
  __int64 v112; // x21
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  System_Action_o *v116; // x22
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7

  if ( (byte_4B15801 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action___TypeInfo, argsGroup, finishCallback);
    sub_1BCA7E0(&System_Action_Action__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Action_TypeInfo, v11, v12);
    sub_1BCA7E0(&ChainableActionParallel_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Action_Action___Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Action_Action___ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Action_Action____ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_Action_Action___TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__, v25, v26);
    sub_1BCA7E0(&BgmManager___c__DisplayClass57_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__, v29, v30);
    sub_1BCA7E0(&BgmManager___c__DisplayClass57_1_TypeInfo, v31, v32);
    byte_4B15801 = 1;
  }
  v33 = sub_1BCAA2C(BgmManager___c__DisplayClass57_0_TypeInfo, argsGroup, finishCallback, isPlay);
  BgmManager___c__DisplayClass57_0___ctor((BgmManager___c__DisplayClass57_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_24;
  *(_QWORD *)(v33 + 16) = this;
  v42 = isPlay;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)this, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v33 + 24) = argsGroup;
  v43 = (BgmPlayArgsGroup_o **)(v33 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 24), (int64_t)argsGroup, v44, v45, v46, v47, v48, v49);
  *(_QWORD *)(v33 + 48) = finishCallback;
  *(_BYTE *)(v33 + 32) = v42;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 48), (int64_t)finishCallback, v50, v51, v52, v53, v54, v55);
  v62 = *(struct BgmPlayArgsGroup_o **)(v33 + 24);
  if ( v62 )
  {
    this->fields.cacheArgsGroup = v62;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cacheArgsGroup, (int64_t)v62, v56, v57, v58, v59, v60, v61);
    v34 = *v43;
    if ( !*v43 )
      goto LABEL_24;
    v63 = BgmPlayArgsGroup__AllArgsListNullExcluded(v34, 0LL);
    v64 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v63,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v33 + 40) = v64;
    sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 40), (int64_t)v64, v65, v66, v67, v68, v69, v70);
    v74 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_Action_Action___TypeInfo,
                                                         v71,
                                                         v72,
                                                         v73);
    System_Collections_Generic_List_object____ctor(
      v74,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v77 = *(_QWORD *)(v33 + 40);
    if ( !v77 )
      goto LABEL_24;
    if ( *(int *)(v77 + 24) >= 1 )
    {
      v78 = 0LL;
      while ( 1 )
      {
        v79 = sub_1BCAA2C(BgmManager___c__DisplayClass57_1_TypeInfo, v35, v75, v76);
        BgmManager___c__DisplayClass57_1___ctor((BgmManager___c__DisplayClass57_1_o *)v79, 0LL);
        if ( !v79 )
          break;
        *(_QWORD *)(v79 + 24) = v33;
        sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 24), v33, v80, v81, v82, v83, v84, v85);
        if ( v78 >= *(unsigned int *)(v77 + 24) )
          goto LABEL_25;
        v92 = *(_QWORD *)(v77 + 32 + 8 * v78);
        *(_QWORD *)(v79 + 16) = v92;
        sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 16), v92, v86, v87, v88, v89, v90, v91);
        v96 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v93, v94, v95);
        System_Action_object____ctor(
          v96,
          (Il2CppObject *)v79,
          Method_BgmManager___c__DisplayClass57_1__PreloadAndPlayBgms_b__1__,
          0LL);
        if ( !v74 )
          break;
        items = v74->fields._items;
        v104 = Method_System_Collections_Generic_List_Action_Action___Add__;
        ++v74->fields._version;
        if ( !items )
          break;
        size = v74->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v74,
            (Il2CppObject *)v96,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
        }
        else
        {
          v106 = &items->obj.klass + size;
          v74->fields._size = size + 1;
          v106[4] = (Il2CppClass *)v96;
          sub_1BCA784((PartyOrganizationUtility_o *)(v106 + 4), (int64_t)v96, v97, v98, v99, v100, v101, v102);
        }
        if ( (__int64)++v78 >= *(int *)(v77 + 24) )
          goto LABEL_17;
      }
LABEL_24:
      sub_1BCAA3C(v34, v35);
    }
LABEL_17:
    if ( !v74 )
      goto LABEL_24;
    v107 = System_Collections_Generic_List_object___ToArray(
             v74,
             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v111 = (ChainableActionParallel_o *)sub_1BCAA2C(ChainableActionParallel_TypeInfo, v108, v109, v110);
    ChainableActionParallel___ctor_47119316(v111, (System_Action_Action__array *)v107, 0LL);
    v112 = sub_1BCA888(System_Action___TypeInfo, 1LL);
    v116 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v113, v114, v115);
    System_Action___ctor(
      v116,
      (Il2CppObject *)v33,
      Method_BgmManager___c__DisplayClass57_0__PreloadAndPlayBgms_b__0__,
      0LL);
    if ( !v112 )
      goto LABEL_24;
    if ( !*(_DWORD *)(v112 + 24) )
LABEL_25:
      sub_1BCAA44(v34, v35);
    *(_QWORD *)(v112 + 32) = v116;
    sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 32), (int64_t)v116, v117, v118, v119, v120, v121, v122);
    if ( !v111 )
      goto LABEL_24;
    v34 = (BgmPlayArgsGroup_o *)ChainableActionBase__Final(
                                  (ChainableActionBase_o *)v111,
                                  (System_Action_array *)v112,
                                  0LL);
    if ( !v34 )
      goto LABEL_24;
    ChainableActionBase__Execute((ChainableActionBase_o *)v34, 0LL);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v33 + 48), 0LL);
  }
}


bool __fastcall BgmManager__PreloadBgm(
        BgmManager_o *this,
        System_String_o *name,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x23
  SoundManager_o *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  BgmManager_o *v34; // x0
  const MethodInfo *v35; // x2
  System_String_o *CueName; // x0
  Il2CppObject **v37; // x24
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_String_o *CueSheet; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x2
  __int64 v52; // x3
  bool IsNullOrEmpty; // w22
  System_Action_o *v54; // x21
  const MethodInfo *v55; // x3
  System_Collections_IEnumerator_o *v56; // x0

  if ( (byte_4B15804 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, name, finishCallback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Insert__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, v15, v16);
    sub_1BCA7E0(&BgmManager___c__DisplayClass61_0_TypeInfo, v17, v18);
    byte_4B15804 = 1;
  }
  v19 = sub_1BCAA2C(BgmManager___c__DisplayClass61_0_TypeInfo, name, finishCallback, method);
  BgmManager___c__DisplayClass61_0___ctor((BgmManager___c__DisplayClass61_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_14;
  *(_QWORD *)(v19 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 40) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)finishCallback, v28, v29, v30, v31, v32, v33);
  CueName = BgmManager__ExtractCueName(v34, name, v35);
  *(_QWORD *)(v19 + 24) = CueName;
  v37 = (Il2CppObject **)(v19 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)CueName, v38, v39, v40, v41, v42, v43);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CueSheet = SoundManager__GetCueSheet(Instance, *(System_String_o **)(v19 + 24), 0LL);
  *(_QWORD *)(v19 + 16) = CueSheet;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)CueSheet, v45, v46, v47, v48, v49, v50);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v19 + 16), 0LL);
  if ( !IsNullOrEmpty )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)Instance,
              *v37,
              (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
      {
LABEL_12:
        ActionExtensions__Call(*(System_Action_o **)(v19 + 40), 0LL);
        return !IsNullOrEmpty;
      }
      Instance = (SoundManager_o *)this->fields.addBindList;
      if ( Instance )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)Instance,
          *v37,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
        Instance = (SoundManager_o *)this->fields.addBindList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            *v37,
            (const MethodInfo_35A2A0C *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_12;
        }
      }
    }
LABEL_14:
    sub_1BCAA3C(Instance, v21);
  }
  v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v51, v52);
  System_Action___ctor(v54, (Il2CppObject *)v19, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__0__, 0LL);
  v56 = BgmManager__CoWaitSameAudioLoading(this, name, v54, v55);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v56, 0LL);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BgmManager___c_c *v11; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *_9__53_0; // x20
  Il2CppObject *v14; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B15800 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BgmPlayerBase__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v5, v6);
    sub_1BCA7E0(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, v7, v8);
    sub_1BCA7E0(&BgmManager___c_TypeInfo, v9, v10);
    byte_4B15800 = 1;
  }
  v11 = BgmManager___c_TypeInfo;
  bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, method);
    v11 = BgmManager___c_TypeInfo;
  }
  _9__53_0 = (System_Action_object__o *)v11->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BgmManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__53_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BgmPlayerBase__TypeInfo, method, v2, v3);
    System_Action_object____ctor(_9__53_0, v14, Method_BgmManager___c__ReflectMasterVolumeLocal_b__53_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Action_BgmPlayerBase__o *)_9__53_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__53_0,
      (int64_t)_9__53_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !bgmPlayers )
    sub_1BCAA3C(v11, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__53_0,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__RemoveUnusedOldFromBindList(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BgmManager_o **v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  BgmManager_o *v39; // x8
  int32_t m_CancellationTokenSource; // w20
  BgmManager_c *v41; // x0
  System_Collections_Generic_HashSet_T__o *v42; // x20
  __int64 v43; // x1
  System_Collections_Generic_IEnumerable_T__o *UsingCueNames; // x0
  BgmManager_c *klass; // x8
  BgmManager_o *v46; // x21
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x21
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  const MethodInfo *v62; // x2
  Il2CppObject *CueName; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  System_Collections_Generic_List_object__o *v68; // x8
  int32_t v69; // w21
  __int64 v70; // x1
  Il2CppObject *Item; // x22
  BgmManager_o *v72; // x8
  int v73; // w22
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+20h] [xbp-70h] BYREF

  v4 = (BgmManager_o **)this;
  if ( (byte_4B1580E & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string__Contains__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string__UnionWith__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_string__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveAt__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v35, v36);
    this = (BgmManager_o *)sub_1BCA7E0(&SoundManager_TypeInfo, v37, v38);
    byte_4B1580E = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v39 = v4[4];
  if ( !v39 )
    goto LABEL_59;
  m_CancellationTokenSource = (int32_t)v39->fields.m_CancellationTokenSource;
  v41 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v41 = BgmManager_TypeInfo;
  }
  if ( m_CancellationTokenSource > v41->static_fields->ADD_BIND_MAX )
  {
    v42 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
    System_Collections_Generic_HashSet_object____ctor(
      v42,
      (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = v4[8];
    if ( !this )
      goto LABEL_59;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v74,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v75 = v74;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v75,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v75.fields._current )
        sub_1BCAA3C(0LL, v43);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v75.fields._current,
                                                                       0LL);
      if ( !v42 )
        sub_1BCAA3C(UsingCueNames, UsingCueNames);
      System_Collections_Generic_HashSet_object___UnionWith(
        v42,
        UsingCueNames,
        (const MethodInfo_345C1BC *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v75,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    this = v4[10];
    if ( this )
    {
      this = (BgmManager_o *)BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, 0LL);
      if ( !this )
        goto LABEL_59;
      klass = this->klass;
      v46 = this;
      v47 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v47;
          p_offset += 4;
          if ( !v47 )
            goto LABEL_19;
        }
        v49 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_19:
        v49 = sub_1C1C7C0(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v51 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v49)(v46, *(_QWORD *)(v49 + 8));
      if ( !v51 )
        sub_1BCAA3C(0LL, v50);
      while ( 1 )
      {
        v52 = *(_QWORD *)v51;
        v53 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
        {
          v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v53;
            v54 += 4;
            if ( !v53 )
              goto LABEL_26;
          }
          v55 = v52 + 16LL * *v54 + 312;
        }
        else
        {
LABEL_26:
          v55 = sub_1C1C7C0(v51, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
          break;
        v56 = *(_QWORD *)v51;
        v57 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
        {
          v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v58 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v57;
            v58 += 4;
            if ( !v57 )
              goto LABEL_33;
          }
          v59 = v56 + 16LL * *v58 + 312;
        }
        else
        {
LABEL_33:
          v59 = sub_1C1C7C0(v51, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
        if ( !v60 )
          sub_1BCAA3C(0LL, v61);
        CueName = (Il2CppObject *)BgmManager__ExtractCueName((BgmManager_o *)v60, *(System_String_o **)(v60 + 16), v62);
        if ( !v42 )
          sub_1BCAA3C(CueName, CueName);
        System_Collections_Generic_HashSet_object___Add(
          v42,
          CueName,
          (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
      v64 = *(_QWORD *)v51;
      v65 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
      {
        v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
        {
          --v65;
          v66 += 4;
          if ( !v65 )
            goto LABEL_42;
        }
        v67 = v64 + 16LL * *v66 + 312;
      }
      else
      {
LABEL_42:
        v67 = sub_1C1C7C0(v51, System_IDisposable_TypeInfo, 0LL);
      }
      this = (BgmManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v51, *(_QWORD *)(v67 + 8));
    }
    v68 = (System_Collections_Generic_List_object__o *)v4[4];
    if ( !v68 )
LABEL_59:
      sub_1BCAA3C(this, method);
    v69 = v68->fields._size - 1;
    if ( v69 >= 1 )
    {
      do
      {
        this = (BgmManager_o *)System_Collections_Generic_List_object___get_Item(
                                 v68,
                                 v69,
                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v42 )
          break;
        this = (BgmManager_o *)System_Collections_Generic_HashSet_object___Contains(
                                 v42,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = v4[4];
          if ( !this )
            goto LABEL_59;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v69,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v70);
          SoundManager__releaseAudioAssetStorage((System_String_o *)Item, 0LL);
          this = v4[4];
          if ( !this )
            goto LABEL_59;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this,
            v69,
            (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_string__RemoveAt__);
          v72 = v4[4];
          if ( !v72 )
            goto LABEL_59;
          this = (BgmManager_o *)BgmManager_TypeInfo;
          v73 = (int)v72->fields.m_CancellationTokenSource;
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
            this = (BgmManager_o *)BgmManager_TypeInfo;
          }
          if ( v73 <= *((_DWORD *)this[2].monitor + 6) )
            return;
        }
        if ( --v69 < 1 )
          return;
        v68 = (System_Collections_Generic_List_object__o *)v4[4];
      }
      while ( v68 );
      goto LABEL_59;
    }
  }
}


void __fastcall BgmManager__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B157E3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3, v4);
    byte_4B157E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BCAA3C(v7, v8);
    BgmManager__ResetLocal((BgmManager_o *)Instance, v8);
  }
}


void __fastcall BgmManager__ResetLocal(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BgmManager___c_c *v11; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *_9__51_0; // x20
  Il2CppObject *v14; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B157FE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BgmPlayerBase__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v5, v6);
    sub_1BCA7E0(&Method_BgmManager___c__ResetLocal_b__51_0__, v7, v8);
    sub_1BCA7E0(&BgmManager___c_TypeInfo, v9, v10);
    byte_4B157FE = 1;
  }
  v11 = BgmManager___c_TypeInfo;
  bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
  if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, method);
    v11 = BgmManager___c_TypeInfo;
  }
  _9__51_0 = (System_Action_object__o *)v11->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BgmManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__51_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BgmPlayerBase__TypeInfo, method, v2, v3);
    System_Action_object____ctor(_9__51_0, v14, Method_BgmManager___c__ResetLocal_b__51_0__, 0LL);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Action_BgmPlayerBase__o *)_9__51_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__51_0,
      (int64_t)_9__51_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !bgmPlayers )
    sub_1BCAA3C(v11, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  BgmManager_c *v9; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  __int64 v11; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4B157E7 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, v2, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7, v8);
    byte_4B157E7 = 1;
  }
  v9 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v2);
    v9 = BgmManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( static_fields->masterVolume != volume )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9, v2);
      static_fields = BgmManager_TypeInfo->static_fields;
    }
    static_fields->masterVolume = volume;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( !v13 )
    {
      if ( !Instance )
        sub_1BCAA3C(v13, v14);
      BgmManager__ReflectMasterVolumeLocal((BgmManager_o *)Instance, v14);
    }
  }
}


void __fastcall BgmManager__SetMute(bool isMute, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BgmManager_c *v8; // x0
  _BOOL4 v9; // w21
  struct BgmManager_StaticFields *static_fields; // x8
  __int64 v11; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4B157E5 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v6, v7);
    byte_4B157E5 = 1;
  }
  v8 = BgmManager_TypeInfo;
  v9 = isMute;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v8 = BgmManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->isMute != v9 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8, method);
      static_fields = BgmManager_TypeInfo->static_fields;
    }
    static_fields->isMute = v9;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
    if ( !v13 )
    {
      if ( !Instance )
        sub_1BCAA3C(v13, v14);
      BgmManager__SetMuteLocal((BgmManager_o *)Instance, isMute, v15);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmManager__SetMuteLocal(BgmManager_o *this, bool isMute, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BgmManager___c__DisplayClass52_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *v18; // x20

  if ( (byte_4B157FF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BgmPlayerBase__TypeInfo, isMute, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v6, v7);
    sub_1BCA7E0(&Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__, v8, v9);
    sub_1BCA7E0(&BgmManager___c__DisplayClass52_0_TypeInfo, v10, v11);
    byte_4B157FF = 1;
  }
  v12 = (BgmManager___c__DisplayClass52_0_o *)sub_1BCAA2C(BgmManager___c__DisplayClass52_0_TypeInfo, isMute, method, v3);
  BgmManager___c__DisplayClass52_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.isMute = isMute,
        bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers,
        v18 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BgmPlayerBase__TypeInfo, v14, v15, v16),
        System_Action_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_BgmManager___c__DisplayClass52_0__SetMuteLocal_b__0__,
          0LL),
        !bgmPlayers) )
  {
    sub_1BCAA3C(v13, v14);
  }
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v18,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B157F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___, v2, v3);
    sub_1BCA7E0(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v9, v10);
    byte_4B157F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v13 )
  {
    if ( !Instance )
      sub_1BCAA3C(v13, v14);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        0LL,
        (const MethodInfo_2F04E00 *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        0LL,
        (const MethodInfo_2F04C14 *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
  }
}


void __fastcall BgmManager__StopBgm(
        System_String_o *name,
        float fadeoutTime,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  bool v21; // w22

  if ( (byte_4B157F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___, successCallback, method);
    sub_1BCA7E0(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, v7, v8);
    sub_1BCA7E0(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___, v9, v10);
    sub_1BCA7E0(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v15, v16);
    byte_4B157F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  v19 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v19 )
  {
    if ( !Instance )
      sub_1BCAA3C(v19, v20);
    if ( fadeoutTime <= 0.0 )
    {
      v21 = BgmManager__StopBgmLocal_object_(
              (BgmManager_o *)Instance,
              name,
              (const MethodInfo_2F04E00 *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
      if ( name && !v21 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__StopBgmLocal_object_(
          (BgmManager_o *)Instance,
          0LL,
          (const MethodInfo_2F04E00 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      v21 = BgmManager__FadeoutBgmLocal_object_(
              (BgmManager_o *)Instance,
              fadeoutTime,
              name,
              (const MethodInfo_2F04C14 *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
      if ( name && !v21 )
        return;
      if ( SLODWORD(Instance[4].monitor) <= 0 )
        BgmManager__FadeoutBgmLocal_object_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0LL,
          (const MethodInfo_2F04C14 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    if ( v21 )
      ActionExtensions__Call(successCallback, 0LL);
  }
}


bool __fastcall BgmManager__StopBgmLocal_object_(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo_2F04E00 *method)
{
  const MethodInfo_2F04840 **rgctx_data; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  long double inited; // q0
  Il2CppClass *_4_BgmManager___c__68_T; // x8
  Il2CppClass *v16; // x0
  System_Func_object__bool__o *v17; // x21
  Il2CppClass *v18; // x0
  const MethodInfo_2F04E00_RGCTXs *v19; // x8
  __int64 v20; // x0
  __int64 _3_System_Func_T__bool; // x8
  Il2CppObject *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  long double v29; // q0
  Il2CppClass *v30; // x0
  Il2CppClass *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0

  rgctx_data = (const MethodInfo_2F04840 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_bool___, name, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_bool___, v7, v8);
    rgctx_data = (const MethodInfo_2F04840 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, v9);
      rgctx_data = (const MethodInfo_2F04840 **)method->rgctx_data;
    }
  }
  v13 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, name, *rgctx_data);
  _4_BgmManager___c__68_T = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (BYTE5(_4_BgmManager___c__68_T->vtable[0].methodPtr) & 1) == 0 )
    _4_BgmManager___c__68_T = (Il2CppClass *)sub_1C1C6BC(inited);
  if ( !_4_BgmManager___c__68_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__68_T, v10);
  v16 = method->rgctx_data->_4_BgmManager___c__68_T_;
  if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
    v16 = (Il2CppClass *)sub_1C1C6BC(inited);
  v17 = (System_Func_object__bool__o *)*((_QWORD *)v16->static_fields + 1);
  if ( !v17 )
  {
    v18 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1C1C6BC(inited);
    if ( !v18->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v18, v10);
    v19 = method->rgctx_data;
    v20 = (__int64)v19->_4_BgmManager___c__68_T_;
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    {
      v20 = sub_1C1C6BC(inited);
      v19 = method->rgctx_data;
    }
    _3_System_Func_T__bool = (__int64)v19->_3_System_Func_T__bool_;
    v22 = **(Il2CppObject ***)(v20 + 184);
    if ( (*(_BYTE *)(_3_System_Func_T__bool + 309) & 1) == 0 )
      _3_System_Func_T__bool = sub_1C1C6BC(inited);
    v17 = (System_Func_object__bool__o *)sub_1BCAA2C(_3_System_Func_T__bool, v10, v11, v12);
    System_Func_object__bool____ctor(
      v17,
      v22,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__68_T___StopBgmLocal_b__68_0,
      (const MethodInfo_3413A9C *)method->rgctx_data->_6_System_Func_T__bool___ctor);
    v30 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v30->vtable[0].methodPtr) & 1) == 0 )
      v30 = (Il2CppClass *)sub_1C1C6BC(v29);
    *((_QWORD *)v30->static_fields + 1) = v17;
    v31 = method->rgctx_data->_4_BgmManager___c__68_T_;
    if ( (BYTE5(v31->vtable[0].methodPtr) & 1) == 0 )
      v31 = (Il2CppClass *)sub_1C1C6BC(v29);
    sub_1BCA784(
      (PartyOrganizationUtility_o *)((char *)v31->static_fields + 8),
      (int64_t)v17,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                               (System_Func_TSource__TResult__o *)v17,
                                                               (const MethodInfo_2F42BAC *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v32,
                                                               (const MethodInfo_2F4B6D8 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v33, (const MethodInfo_2F1E07C *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__StopJingle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B157F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BgmManager_StopBgmLocal_JinglePlayer___, v1, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5, v6);
    byte_4B157F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1BCAA3C(v9, v10);
    BgmManager__StopBgmLocal_object_(
      (BgmManager_o *)Instance,
      0LL,
      (const MethodInfo_2F04E00 *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B157F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, method, v3);
    sub_1BCA7E0(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v10, v11);
    byte_4B157F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v14 )
  {
    if ( !Instance )
      sub_1BCAA3C(v14, v15);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_object_(
        (BgmManager_o *)Instance,
        name,
        (const MethodInfo_2F04E00 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_object_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        name,
        (const MethodInfo_2F04C14 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__StopUnrequestedSubBgm(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *requestedBgmArgs,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x20
  System_Object_array *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *SubArgsList_k__BackingField; // x21
  BgmManager___c_c *v36; // x0
  System_Func_object__object__o *_9__69_0; // x22
  Il2CppObject *v38; // x23
  struct BgmManager___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x19
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Func_object__bool__o *v57; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  BgmManager___c_c *v62; // x8
  System_Collections_Generic_IEnumerable_T__o *v63; // x19
  System_Action_object__o *_9__69_2; // x20
  Il2CppObject *v65; // x21
  struct BgmManager___c_StaticFields *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7

  if ( (byte_4B15809 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SubBgmPlayer__TypeInfo, requestedBgmArgs, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_SubBgmPlayer___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_string___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___, v14, v15);
    sub_1BCA7E0(&System_Func_SubBgmPlayArgs__string__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_SubBgmPlayer__bool__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, v20, v21);
    sub_1BCA7E0(&Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, v22, v23);
    sub_1BCA7E0(&Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__, v24, v25);
    sub_1BCA7E0(&BgmManager___c__DisplayClass69_0_TypeInfo, v26, v27);
    sub_1BCA7E0(&BgmManager___c_TypeInfo, v28, v29);
    byte_4B15809 = 1;
  }
  v30 = sub_1BCAA2C(BgmManager___c__DisplayClass69_0_TypeInfo, requestedBgmArgs, method, v3);
  BgmManager___c__DisplayClass69_0___ctor((BgmManager___c__DisplayClass69_0_o *)v30, 0LL);
  if ( this->fields.enableCounter_KeepSubBgm <= 0 )
  {
    if ( !requestedBgmArgs )
      goto LABEL_19;
    SubArgsList_k__BackingField = requestedBgmArgs->fields._SubArgsList_k__BackingField;
    v36 = BgmManager___c_TypeInfo;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, v32);
      v36 = BgmManager___c_TypeInfo;
    }
    _9__69_0 = (System_Func_object__object__o *)v36->static_fields->__9__69_0;
    if ( !_9__69_0 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36, v32);
        v36 = BgmManager___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v36->static_fields->__9;
      _9__69_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                    System_Func_SubBgmPlayArgs__string__TypeInfo,
                                                    v32,
                                                    v33,
                                                    v34);
      System_Func_object__object____ctor(_9__69_0, v38, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_0__, 0LL);
      static_fields = BgmManager___c_TypeInfo->static_fields;
      static_fields->__9__69_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__69_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__69_0,
        (int64_t)_9__69_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__69_0,
                                                                 (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v31 = System_Linq_Enumerable__ToArray_object_(
            v46,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v30 )
LABEL_19:
      sub_1BCAA3C(v31, v32);
    *(_QWORD *)(v30 + 16) = v31;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)v31, v47, v48, v49, v50, v51, v52);
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v57 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_SubBgmPlayer__bool__TypeInfo, v54, v55, v56);
    System_Func_object__bool____ctor(
      v57,
      (Il2CppObject *)v30,
      Method_BgmManager___c__DisplayClass69_0__StopUnrequestedSubBgm_b__1__,
      0LL);
    v58 = System_Linq_Enumerable__Where_object_(
            v53,
            (System_Func_TSource__bool__o *)v57,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v62 = BgmManager___c_TypeInfo;
    v63 = (System_Collections_Generic_IEnumerable_T__o *)v58;
    if ( !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, v59);
      v62 = BgmManager___c_TypeInfo;
    }
    _9__69_2 = (System_Action_object__o *)v62->static_fields->__9__69_2;
    if ( !_9__69_2 )
    {
      if ( !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62, v59);
        v62 = BgmManager___c_TypeInfo;
      }
      v65 = (Il2CppObject *)v62->static_fields->__9;
      _9__69_2 = (System_Action_object__o *)sub_1BCAA2C(System_Action_SubBgmPlayer__TypeInfo, v59, v60, v61);
      System_Action_object____ctor(_9__69_2, v65, Method_BgmManager___c__StopUnrequestedSubBgm_b__69_2__, 0LL);
      v66 = BgmManager___c_TypeInfo->static_fields;
      v66->__9__69_2 = (struct System_Action_SubBgmPlayer__o *)_9__69_2;
      sub_1BCA784((PartyOrganizationUtility_o *)&v66->__9__69_2, (int64_t)_9__69_2, v67, v68, v69, v70, v71, v72);
    }
    BasicHelper__ForEach_object_(
      v63,
      (System_Action_T__o *)_9__69_2,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_SubBgmPlayer___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_String_o *__fastcall BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_1BCAA3C(this, method);
  return mainBgmPlayer->fields.bgmName;
}


bool __fastcall BgmManager__get_IsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B157DF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3, v4);
    byte_4B157DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v7 )
    sub_1BCAA3C(0LL, v8);
  return BgmManager__IsLoadingLocal((BgmManager_o *)v7, 0LL, v9);
}


bool __fastcall BgmManager__get_IsMute(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BgmManager_c *v3; // x0

  if ( (byte_4B157E4 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, v1, v2);
    byte_4B157E4 = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v1);
    v3 = BgmManager_TypeInfo;
  }
  return v3->static_fields->isMute;
}


bool __fastcall BgmManager__isLoading(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B157EA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4, v5);
    byte_4B157EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v8, v9);
  return BgmManager__IsLoadingLocal((BgmManager_o *)Instance, name, v10);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  BgmManager_o *_4__this; // x21
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct BgmManager_o *v22; // x1
  struct System_String_o *bgmName; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Func_bool__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  UnityEngine_WaitWhile_o *v37; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_4B1581B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__, v5, v6);
    sub_1BCA7E0(&BgmManager___c__DisplayClass63_0_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v9, v10);
    byte_4B1581B = 1;
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
    v13 = sub_1BCAA2C(BgmManager___c__DisplayClass63_0_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    if ( !v13
      || (v22 = this->fields.__4__this,
          *(_QWORD *)(v13 + 16) = v22,
          sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)v22, v16, v17, v18, v19, v20, v21),
          bgmName = this->fields.bgmName,
          *(_QWORD *)(v13 + 24) = bgmName,
          sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)bgmName, v24, v25, v26, v27, v28, v29),
          !_4__this) )
    {
      sub_1BCAA3C(v14, v15);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v13 + 24), 0LL) )
    {
      v33 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v30, v31, v32);
      System_Func_bool____ctor(
        v33,
        (Il2CppObject *)v13,
        Method_BgmManager___c__DisplayClass63_0__CoWaitSameAudioLoading_b__0__,
        0LL);
      v37 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v34, v35, v36);
      UnityEngine_WaitWhile___ctor(v37, v33, 0LL);
      this->fields.__2__current = (Il2CppObject *)v37;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v37, v39, v40, v41, v42, v43, v44);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BgmManager__CoWaitSameAudioLoading_d__63_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15816 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager___c_TypeInfo, v1, v2);
    byte_4B15816 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BgmManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BgmManager___c_TypeInfo->static_fields->__9 = (struct BgmManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BgmManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, (const MethodInfo *)x);
}


void __fastcall BgmManager___c___FixedUpdate_b__78_1(
        BgmManager___c_o *this,
        GeneralBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, void *))x->klass->vtable._13_FixedUpdate.method)(x, x->klass[1]._1.image);
}


void __fastcall BgmManager___c___FixedUpdate_b__78_3(
        BgmManager___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo_36BF22C *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5
  System_Nullable_long__o v10; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_float__o p_fadeTime; // 0:x0.8
  System_Nullable_float__o v13; // 0:x1.8
  System_Nullable_float__o v14; // 0:x2.8
  System_Nullable_long__o v15; // 0:x0.16

  if ( (byte_4B15817 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_long___ctor__, x, method);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v4, v5);
    byte_4B15817 = 1;
  }
  p_fadeTime = (System_Nullable_float__o)&fadeTime;
  fadeTime = 0LL;
  *(_QWORD *)&v10.fields.hasValue = 0LL;
  v10.fields.value = 0LL;
  System_Nullable_float____ctor(p_fadeTime, 0.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  *(_QWORD *)&v15.fields.hasValue = &v10;
  v15.fields.value = 0LL;
  System_Nullable_long____ctor(v15, Method_System_Nullable_long___ctor__, v6);
  if ( !x )
    sub_1BCAA3C(v7, v8);
  v14 = fadeTime;
  v13 = 0LL;
  BgmPlayArgs__Update(x, v13, v14, v10, v9);
}


bool __fastcall BgmManager___c___GetOrCreateSubBgmPlayer_b__72_1(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.bgmName == 0LL;
}


void __fastcall BgmManager___c___InitializeLocal_b__50_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields._BgmName_k__BackingField;
}


void __fastcall BgmManager___c___StopUnrequestedSubBgm_b__69_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._11_StopBgm.method)(
    x,
    0LL,
    x->klass->vtable._12_ExportPlayArgs.methodPtr);
}


void __fastcall BgmManager___c__54_object____cctor(const MethodInfo_30D69E4 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = (Il2CppObject *)sub_1BCAA2C(v6, v1, v2, v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C1C6BC();
  System_Object___ctor(v7, 0LL);
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC();
  **(_QWORD **)(v15 + 184) = v7;
  v16 = (__int64)method->klass;
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v17 + 184), (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall BgmManager___c__54_object____ctor(BgmManager___c__54_T__o *this, const MethodInfo_30D6AA0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__54_object____EnumeratePlayersHavingBgmName_b__54_0(
        BgmManager___c__54_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30D6AA8 *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x[1].monitor != 0LL;
}


void __fastcall BgmManager___c__68_object____cctor(const MethodInfo_30D6D14 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = (Il2CppObject *)sub_1BCAA2C(v6, v1, v2, v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C1C6BC();
  System_Object___ctor(v7, 0LL);
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC();
  **(_QWORD **)(v15 + 184) = v7;
  v16 = (__int64)method->klass;
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v17 + 184), (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall BgmManager___c__68_object____ctor(BgmManager___c__68_T__o *this, const MethodInfo_30D6DD0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__68_object____StopBgmLocal_b__68_0(
        BgmManager___c__68_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30D6DD8 *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))x->klass->vtable[11].method)(
           x,
           0LL,
           x->klass->vtable[12].methodPtr);
}


void __fastcall BgmManager___c__76_object____cctor(const MethodInfo_30D6F04 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = (Il2CppObject *)sub_1BCAA2C(v6, v1, v2, v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C1C6BC();
  System_Object___ctor(v7, 0LL);
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC();
  **(_QWORD **)(v15 + 184) = v7;
  v16 = (__int64)method->klass;
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v17 + 184), (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall BgmManager___c__76_object____ctor(BgmManager___c__76_T__o *this, const MethodInfo_30D6FC0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall BgmManager___c__76_object____ExportPlayArgsGroupLocal_b__76_0(
        BgmManager___c__76_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30D6FC8 *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, Il2CppMethodPointer))x->klass->vtable._7_SetMute.method)(
    x,
    this->fields.isMute,
    x->klass->vtable._8_ReflectMasterVolume.methodPtr);
}


void __fastcall BgmManager___c__DisplayClass54_0_object____ctor(
        BgmManager___c__DisplayClass54_0_T__o *this,
        const MethodInfo_30DCA0C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass54_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass54_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30DCA14 *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
            sub_1BCAA44(_4__this, method);
          _4__this = this->fields.__4__this;
          if ( !_4__this )
            break;
          BgmManager__PlayPreloadedBgm(_4__this, nonNullArgsAll->m_Items[v12], 0LL);
          LODWORD(v11) = nonNullArgsAll->max_length;
          if ( (__int64)++v12 >= (int)v11 )
            goto LABEL_10;
        }
LABEL_14:
        sub_1BCAA3C(_4__this, method);
      }
LABEL_10:
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_14;
      _4__this->fields.cacheArgsGroup = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.cacheArgsGroup, 0LL, v4, v5, v6, v7, v8, v9);
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
    sub_1BCAA3C(this, callback);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_String_o *cueName; // x1
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x0
  Il2CppObject *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct BgmManager_o *_4__this; // x8
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B15818 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v9, v10);
    sub_1BCA7E0(&SoundManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, v13, v14);
    byte_4B15818 = 1;
  }
  cueName = this->fields.cueName;
  this->fields.tempCueSheetName = cueName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)cueName, v2, v3, v4, v5, v6, v7);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.loadingBgmCueNameList) == 0LL
    || (v17 = (Il2CppObject *)this->fields.cueName,
        items = loadingBgmCueNameList->fields._items,
        v26 = Method_System_Collections_Generic_List_string__Add__,
        ++loadingBgmCueNameList->fields._version,
        !items) )
  {
    sub_1BCAA3C(loadingBgmCueNameList, v17);
  }
  size = loadingBgmCueNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      loadingBgmCueNameList,
      v17,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    loadingBgmCueNameList->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v17;
    sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v17, v18, v19, v20, v21, v22, v23);
  }
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass61_0__PreloadBgm_b__1__, 0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v34, v35, v36, v37, v38, v39);
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v29);
  SoundManager__loadAudioAssetStorage(tempCueSheetName, _9__1, 1, 0LL);
}


void __fastcall BgmManager___c__DisplayClass61_0___PreloadBgm_b__1(
        BgmManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BgmManager___c__DisplayClass61_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BgmManager_o *_4__this; // x8
  struct BgmManager_o *v11; // x8
  struct BgmManager_o *v12; // x8

  v3 = this;
  if ( (byte_4B15819 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Insert__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v6, v7);
    this = (BgmManager___c__DisplayClass61_0_o *)sub_1BCA7E0(
                                                   &Method_SingletonMonoBehaviour_SoundManager__get_Instance__,
                                                   v8,
                                                   v9);
    byte_4B15819 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass61_0_o *)_4__this->fields.loadingBgmCueNameList;
  if ( !this )
    goto LABEL_14;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)this,
    (Il2CppObject *)v3->fields.cueName,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass61_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass61_0_o *)SoundManager__GetCueSheet(
                                                 (SoundManager_o *)this,
                                                 v3->fields.cueName,
                                                 0LL);
  if ( this )
  {
    v11 = v3->fields.__4__this;
    if ( !v11 )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass61_0_o *)v11->fields.addBindList;
    if ( !this )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass61_0_o *)System_Collections_Generic_List_object___Contains(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   (Il2CppObject *)v3->fields.cueName,
                                                   (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v12 = v3->fields.__4__this;
      if ( v12 )
      {
        this = (BgmManager___c__DisplayClass61_0_o *)v12->fields.addBindList;
        if ( this )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)this,
            0,
            (Il2CppObject *)v3->fields.cueName,
            (const MethodInfo_35A2A0C *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_1BCAA3C(this, method);
    }
  }
LABEL_13:
  ActionExtensions__Call(v3->fields.finishCallback, 0LL);
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
    sub_1BCAA3C(0LL, method);
  return BgmManager__IsLoadingLocal(_4__this, this->fields.bgmName, 0LL);
}


void __fastcall BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_30DDEE8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass67_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30DDEF0 *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B1581A & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass69_0_o *)sub_1BCA7E0(&Method_System_Array_IndexOf_string___, x, method);
    byte_4B1581A = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return (unsigned int)System_Array__IndexOf_object_(
                         (System_Object_array *)v4->fields.subBgmNamesToPlay,
                         (Il2CppObject *)x->fields.bgmName,
                         (const MethodInfo_300EB38 *)Method_System_Array_IndexOf_string___) >> 31;
}


void __fastcall BgmManager___c__DisplayClass70_0_object____ctor(
        BgmManager___c__DisplayClass70_0_T__o *this,
        const MethodInfo_30DF108 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass70_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass70_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30DF110 *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(_4__this, method);
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
    sub_1BCAA3C(this, 0LL);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0LL);
}