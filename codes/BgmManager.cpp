void BgmManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct BgmManager_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct BgmManager_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BgmManager_StaticFields *v17; // x8

  if ( (byte_596FE06 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&StringLiteral_3032/*"BGM_CHALDEA_1"*/);
    sub_2213A60(&StringLiteral_3033/*"BGM_CHALDEA_2"*/);
    byte_596FE06 = 1;
  }
  v7 = StringLiteral_3032/*"BGM_CHALDEA_1"*/;
  static_fields = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_VOLUME = 0x3DCCCCCD3F800000LL;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_3033/*"BGM_CHALDEA_2"*/;
  v10 = BgmManager_TypeInfo->static_fields;
  v10->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_3033/*"BGM_CHALDEA_2"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->COSMOS_IN_THE_LOSTBELT_BGM_NAME,
    v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = BgmManager_TypeInfo->static_fields;
  *(_QWORD *)&v17->ADD_BIND_MAX = 0x400000005LL;
  v17->isMute = 0;
  v17->masterVolume = 1.0;
}


void BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596FE05 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager___ctor__);
    byte_596FE05 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.addBindList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadingBgmCueNameList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bgmPlayers, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  UnityEngine_Object_o *Instance; // x20
  System_Collections_Generic_List_object__o *m_CachedPtr; // x20
  System_Predicate_object__o *v17; // x21
  BgmPlayerBase_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_596FDD4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_BgmPlayerBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_2213A60(&Method_BgmManager___c__DisplayClass30_0__ChangePlayerVolume_b__0__);
    sub_2213A60(&BgmManager___c__DisplayClass30_0_TypeInfo);
    byte_596FDD4 = 1;
  }
  v5 = sub_2213CCC(BgmManager___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)bgmName, v8, v9, v10, v11, v12, v13);
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v6 = UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( !v6 )
  {
    if ( Instance )
    {
      m_CachedPtr = (System_Collections_Generic_List_object__o *)Instance[2].fields.m_CachedPtr;
      v17 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BgmPlayerBase__TypeInfo);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass30_0__ChangePlayerVolume_b__0__,
        0);
      if ( m_CachedPtr )
      {
        v18 = (BgmPlayerBase_o *)System_Collections_Generic_List_object___Find(
                                   m_CachedPtr,
                                   (System_Predicate_T__o *)v17,
                                   (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v18 )
        {
          v18->fields.bgmVolume = volume;
          BgmPlayerBase__UpdateVolume(v18, v19);
        }
        return;
      }
    }
LABEL_12:
    sub_2213CDC(v6, v7);
  }
}


bool BgmManager__ChangeVolumeSubBgmByChannel(
        System_String_o *bgmName,
        int32_t channelId,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  BgmManager_c *v13; // x0
  BgmPlayerBase_o *SubBgmPlayerByChannel; // x0
  const MethodInfo *v15; // x1
  __int64 v17; // x21
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x1
  BgmManager_c *v20; // x0
  System_Nullable_float__o volumea; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596FE02 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&SubBgmPlayArgsWithChannel_TypeInfo);
    byte_596FE02 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v13 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v11);
  if ( channelId < -1 )
    return 0;
  if ( channelId == -1 )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v11);
    SoundManager__PlaySubBgm_48506544(bgmName, volume, fadeTime, 0);
  }
  else
  {
    if ( !Instance )
      sub_2213CDC(v13, v11);
    SubBgmPlayerByChannel = (BgmPlayerBase_o *)BgmManager__GetSubBgmPlayerByChannel(
                                                 (BgmManager_o *)Instance,
                                                 bgmName,
                                                 channelId,
                                                 v12);
    if ( SubBgmPlayerByChannel )
      return BgmPlayerBase__ChangeVolume(SubBgmPlayerByChannel, volume, fadeTime, v15);
    volumea = 0;
    System_Nullable_float____ctor(
      (System_Nullable_float__o)&volumea,
      volume,
      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    v17 = sub_2213CCC(SubBgmPlayArgsWithChannel_TypeInfo);
    BgmPlayArgs___ctor((BgmPlayArgs_o *)v17, bgmName, volumea, fadeTime, 0, v18);
    v20 = BgmManager_TypeInfo;
    *(_DWORD *)(v17 + 40) = channelId;
    if ( !*(&v20->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v20, v19);
    BgmManager__PlaySubBgmByChannel((SubBgmPlayArgsWithChannel_o *)v17, v19);
  }
  return 1;
}


System_Collections_IEnumerator_o *BgmManager__CoWaitSameAudioLoading(
        BgmManager_o *this,
        System_String_o *bgmName,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596FDF1 & 1) == 0 )
  {
    sub_2213A60(&BgmManager__CoWaitSameAudioLoading_d__64_TypeInfo);
    byte_596FDF1 = 1;
  }
  v7 = sub_2213CCC(BgmManager__CoWaitSameAudioLoading_d__64_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)bgmName, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)finishCallback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void BgmManager__Enable_KeepSubBgm(bool value, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int monitor; // w8
  int v8; // w8

  if ( (byte_596FDE7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDE7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_2213CDC(v5, v6);
    monitor = (int)Instance[4].monitor;
    if ( value )
      v8 = monitor + 1;
    else
      v8 = monitor - 1;
    LODWORD(Instance[4].monitor) = v8 & ~(v8 >> 31);
  }
}


System_Collections_Generic_IEnumerable_T__o *BgmManager__EnumeratePlayersHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_3817DE4 *method)
{
  long double v3; // q0
  const MethodInfo_3817DE4_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass55_0_T; // x0
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x0
  __int64 v20; // x1
  long double v21; // q0
  const MethodInfo_3817DE4_RGCTXs *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  __int64 _5_System_Func_T__bool; // x0
  System_Func_object__bool__o *v25; // x21
  const MethodInfo_3817DE4_RGCTXs *v26; // x8
  __int64 _6_BgmManager___c__55_T; // x0
  __int64 v28; // x0
  __int64 v30; // x0
  const MethodInfo_3817DE4_RGCTXs *v31; // x8
  __int64 v32; // x0
  __int64 v33; // x8
  Il2CppObject *v34; // x22
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  long double v41; // q0
  Il2CppClass *v42; // x0
  Il2CppClass *v43; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass55_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass55_0_T_;
  if ( (*((_WORD *)&rgctx_data->_0_BgmManager___c__DisplayClass55_0_T_->_2.bitflags2 + 1) & 1) == 0 )
    _0_BgmManager___c__DisplayClass55_0_T = sub_224B908(v3);
  v9 = sub_2213CCC(_0_BgmManager___c__DisplayClass55_0_T);
  BgmManager___c__DisplayClass55_0_object____ctor(
    (BgmManager___c__DisplayClass55_0_T__o *)v9,
    (const MethodInfo_3B05144 *)method->rgctx_data->_1_BgmManager___c__DisplayClass55_0_T___ctor);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = bgmNameFilter;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)bgmNameFilter, v12, v13, v14, v15, v16, v17);
  v18 = *(_QWORD *)(v9 + 16);
  v19 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
          (const MethodInfo_388851C *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  v22 = method->rgctx_data;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( v18 )
  {
    _5_System_Func_T__bool = (__int64)v22->_5_System_Func_T__bool_;
    if ( (*(_WORD *)(_5_System_Func_T__bool + 309) & 1) == 0 )
      _5_System_Func_T__bool = sub_224B908(v21);
    v25 = (System_Func_object__bool__o *)sub_2213CCC(_5_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v25,
      (Il2CppObject *)v9,
      (intptr_t)method->rgctx_data->_10_BgmManager___c__DisplayClass55_0_T___EnumeratePlayersHavingBgmName_b__1,
      (const MethodInfo_428A438 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
LABEL_10:
    v26 = method->rgctx_data;
    return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                            v23,
                                                            (System_Func_TSource__bool__o *)v25,
                                                            (const MethodInfo_38A3478 *)v26->_9_System_Linq_Enumerable_Where_T_);
  }
  _6_BgmManager___c__55_T = (__int64)v22->_6_BgmManager___c__55_T_;
  if ( (*(_WORD *)(_6_BgmManager___c__55_T + 309) & 1) == 0 )
    _6_BgmManager___c__55_T = sub_224B908(v21);
  if ( !*(_DWORD *)(_6_BgmManager___c__55_T + 228) )
    *(__n128 *)&v21 = j_il2cpp_runtime_class_init_0(_6_BgmManager___c__55_T, v20);
  v26 = method->rgctx_data;
  v28 = (__int64)v26->_6_BgmManager___c__55_T_;
  if ( (*(_WORD *)(v28 + 309) & 1) == 0 )
  {
    v28 = sub_224B908(v21);
    v26 = method->rgctx_data;
  }
  v25 = *(System_Func_object__bool__o **)(*(_QWORD *)(v28 + 184) + 8LL);
  if ( !v25 )
  {
    v30 = (__int64)v26->_6_BgmManager___c__55_T_;
    if ( (*(_WORD *)(v30 + 309) & 1) == 0 )
      v30 = sub_224B908(v21);
    if ( !*(_DWORD *)(v30 + 228) )
      *(__n128 *)&v21 = j_il2cpp_runtime_class_init_0(v30, v20);
    v31 = method->rgctx_data;
    v32 = (__int64)v31->_6_BgmManager___c__55_T_;
    if ( (*(_WORD *)(v32 + 309) & 1) == 0 )
    {
      v32 = sub_224B908(v21);
      v31 = method->rgctx_data;
    }
    v33 = (__int64)v31->_5_System_Func_T__bool_;
    v34 = **(Il2CppObject ***)(v32 + 184);
    if ( (*(_WORD *)(v33 + 309) & 1) == 0 )
      v33 = sub_224B908(v21);
    v25 = (System_Func_object__bool__o *)sub_2213CCC(v33);
    System_Func_object__bool____ctor(
      v25,
      v34,
      (intptr_t)method->rgctx_data->_7_BgmManager___c__55_T___EnumeratePlayersHavingBgmName_b__55_0,
      (const MethodInfo_428A438 *)method->rgctx_data->_8_System_Func_T__bool___ctor);
    v42 = method->rgctx_data->_6_BgmManager___c__55_T_;
    if ( (*((_WORD *)&v42->_2.bitflags2 + 1) & 1) == 0 )
      v42 = (Il2CppClass *)sub_224B908(v41);
    *((_QWORD *)v42->static_fields + 1) = v25;
    v43 = method->rgctx_data->_6_BgmManager___c__55_T_;
    if ( (*((_WORD *)&v43->_2.bitflags2 + 1) & 1) == 0 )
      v43 = (Il2CppClass *)sub_224B908(v41);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)v43->static_fields + 8),
      (int32_t)v25,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    goto LABEL_10;
  }
  return (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          v23,
                                                          (System_Func_TSource__bool__o *)v25,
                                                          (const MethodInfo_38A3478 *)v26->_9_System_Linq_Enumerable_Where_T_);
}


bool BgmManager__ExistsPlayerHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_3817FD8 *method)
{
  const MethodInfo_3817DE4 **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  rgctx_data = (const MethodInfo_3817DE4 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = (const MethodInfo_3817DE4 **)method->rgctx_data;
  }
  v7 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, bgmNameFilter, *rgctx_data);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_38660DC *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_);
}


BgmPlayArgsGroup_o *BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_596FDCC & 1) == 0 )
  {
    sub_2213A60(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDCC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v3 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v3, v4);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_3818024 *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *BgmManager__ExportPlayArgsGroupLocal_object_(BgmManager_o *this, const MethodInfo_3818024 *method)
{
  const MethodInfo_3817DE4 **rgctx_data; // x8
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *v6; // x20
  long double v7; // q0
  Il2CppClass *_4_BgmManager___c__77_T; // x8
  const MethodInfo_3818024_RGCTXs *v9; // x8
  __int64 v10; // x0
  System_Func_object__object__o *v11; // x21
  __int64 v12; // x0
  const MethodInfo_3818024_RGCTXs *v13; // x8
  __int64 v14; // x0
  __int64 _3_System_Func_T__BgmPlayArgs; // x8
  Il2CppObject *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  long double v23; // q0
  Il2CppClass *v24; // x0
  Il2CppClass *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Object_array *v27; // x19
  BgmPlayArgsGroup_o *v28; // x20

  rgctx_data = (const MethodInfo_3817DE4 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&BgmPlayArgsGroup_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    rgctx_data = (const MethodInfo_3817DE4 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
      rgctx_data = (const MethodInfo_3817DE4 **)method->rgctx_data;
    }
  }
  v6 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, 0, *rgctx_data);
  _4_BgmManager___c__77_T = method->rgctx_data->_4_BgmManager___c__77_T_;
  if ( (*((_WORD *)&_4_BgmManager___c__77_T->_2.bitflags2 + 1) & 1) == 0 )
    _4_BgmManager___c__77_T = (Il2CppClass *)sub_224B908(v7);
  if ( !*(&_4_BgmManager___c__77_T->_2.cctor_finished + 1) )
    *(__n128 *)&v7 = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__77_T, v5);
  v9 = method->rgctx_data;
  v10 = (__int64)v9->_4_BgmManager___c__77_T_;
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
  {
    v10 = sub_224B908(v7);
    v9 = method->rgctx_data;
  }
  v11 = *(System_Func_object__object__o **)(*(_QWORD *)(v10 + 184) + 8LL);
  if ( !v11 )
  {
    v12 = (__int64)v9->_4_BgmManager___c__77_T_;
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
      v12 = sub_224B908(v7);
    if ( !*(_DWORD *)(v12 + 228) )
      *(__n128 *)&v7 = j_il2cpp_runtime_class_init_0(v12, v5);
    v13 = method->rgctx_data;
    v14 = (__int64)v13->_4_BgmManager___c__77_T_;
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    {
      v14 = sub_224B908(v7);
      v13 = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = (__int64)v13->_3_System_Func_T__BgmPlayArgs_;
    v16 = **(Il2CppObject ***)(v14 + 184);
    if ( (*(_WORD *)(_3_System_Func_T__BgmPlayArgs + 309) & 1) == 0 )
      _3_System_Func_T__BgmPlayArgs = sub_224B908(v7);
    v11 = (System_Func_object__object__o *)sub_2213CCC(_3_System_Func_T__BgmPlayArgs);
    System_Func_object__object____ctor(
      v11,
      v16,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__77_T___ExportPlayArgsGroupLocal_b__77_0,
      (const MethodInfo_428AAE0 *)method->rgctx_data->_6_System_Func_T__BgmPlayArgs___ctor);
    v24 = method->rgctx_data->_4_BgmManager___c__77_T_;
    if ( (*((_WORD *)&v24->_2.bitflags2 + 1) & 1) == 0 )
      v24 = (Il2CppClass *)sub_224B908(v23);
    *((_QWORD *)v24->static_fields + 1) = v11;
    v25 = method->rgctx_data->_4_BgmManager___c__77_T_;
    if ( (*((_WORD *)&v25->_2.bitflags2 + 1) & 1) == 0 )
      v25 = (Il2CppClass *)sub_224B908(v23);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)v25->static_fields + 8),
      (int32_t)v11,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v9 = method->rgctx_data;
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TResult__o *)v11,
                                                               (const MethodInfo_38911C8 *)v9->_7_System_Linq_Enumerable_Select_T__BgmPlayArgs_);
  v27 = System_Linq_Enumerable__ToArray_object_(
          v26,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v28 = (BgmPlayArgsGroup_o *)sub_2213CCC(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_48180292(v28, (BgmPlayArgs_array *)v27, 0);
  return v28;
}


System_String_o *BgmManager__ExtractCueName(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1

  if ( (byte_596FDF4 & 1) == 0 )
  {
    sub_2213A60(&char___TypeInfo);
    byte_596FDF4 = 1;
  }
  v4 = (System_String_array *)sub_2213B20(char___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 47;
  if ( !name || (v4 = System_String__Split_75705984(name, (System_Char_array *)v4, 0)) == 0 )
LABEL_9:
    sub_2213CDC(v4, v5);
  if ( !LODWORD(v4->max_length) )
LABEL_10:
    sub_2213CE4(v4);
  return *(System_String_o **)((char *)v4->m_Items
                             + ((__int64)(((unsigned __int64)LODWORD(v4->max_length) << 32) - 0x100000000LL) >> 29));
}


void BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_596FDDC & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_596FDDC = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__StopBgm(0, fadeoutTime, callback, v3);
}


// local variable allocation has failed, the output may be wrong!
bool BgmManager__FadeoutBgmLocal_object_(
        BgmManager_o *this,
        float fadeoutTime,
        System_String_o *name,
        const MethodInfo_38181FC *method)
{
  const MethodInfo_38181FC_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass68_0_T; // x0
  BgmManager___c__DisplayClass68_0_T__o *v10; // x22
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
    sub_2213A60(&Method_System_Linq_Enumerable_Any_bool___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_bool___);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_BgmManager___c__DisplayClass68_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass68_0_T_;
  if ( (*((_WORD *)&rgctx_data->_0_BgmManager___c__DisplayClass68_0_T_->_2.bitflags2 + 1) & 1) == 0 )
    _0_BgmManager___c__DisplayClass68_0_T = sub_224B908(*(long double *)&fadeoutTime);
  v10 = (BgmManager___c__DisplayClass68_0_T__o *)sub_2213CCC(_0_BgmManager___c__DisplayClass68_0_T);
  BgmManager___c__DisplayClass68_0_object____ctor(
    v10,
    (const MethodInfo_3B0611C *)method->rgctx_data->_1_BgmManager___c__DisplayClass68_0_T___ctor);
  if ( !v10 )
    sub_2213CDC(v11, v12);
  v10->fields.fadeoutTime = fadeoutTime;
  v13 = BgmManager__EnumeratePlayersHavingBgmName_object_(
          this,
          name,
          (const MethodInfo_3817DE4 *)method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_);
  _5_System_Func_T__bool = method->rgctx_data->_5_System_Func_T__bool_;
  if ( (*((_WORD *)&_5_System_Func_T__bool->_2.bitflags2 + 1) & 1) == 0 )
    _5_System_Func_T__bool = (Il2CppClass *)sub_224B908(v14);
  v16 = (System_Func_object__bool__o *)sub_2213CCC(_5_System_Func_T__bool);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass68_0_T___FadeoutBgmLocal_b__0,
    (const MethodInfo_428A438 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                               (System_Func_TSource__TResult__o *)v16,
                                                               (const MethodInfo_3890214 *)method->rgctx_data->_7_System_Linq_Enumerable_Select_T__bool_);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v17,
                                                               (const MethodInfo_389B7FC *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v18, (const MethodInfo_3865A4C *)Method_System_Linq_Enumerable_Any_bool___);
}


void BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_596FDE5 & 1) == 0 )
  {
    sub_2213A60(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_2213CDC(v5, v6);
    BgmManager__FadeoutBgmLocal_object_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0,
      (const MethodInfo_38181FC *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
  }
}


void BgmManager__FixedUpdate(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x19
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  BgmPlayerBase_o *jinglePlayer; // x0
  _BOOL4 IsPlaying; // w0
  _BOOL4 v6; // w20
  System_Collections_Generic_IEnumerable_TResult__o *v7; // x0
  __int64 v8; // x1
  BgmManager___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x21
  struct BgmManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__80_0; // x22
  Il2CppObject *v13; // x23
  struct BgmManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL4 v21; // w0
  System_Collections_Generic_IEnumerable_TResult__o *v22; // x0
  __int64 v23; // x1
  BgmManager___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_T__o *v25; // x21
  struct BgmManager___c_StaticFields *v26; // x9
  System_Action_object__o *_9__80_1; // x22
  Il2CppObject *v28; // x23
  struct BgmManager___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  BgmManager_o *v36; // x21
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v37; // x0
  System_Collections_Generic_IEnumerable_T__o *v38; // x22
  BgmManager___c_c *v39; // x0
  struct BgmManager___c_StaticFields *v40; // x8
  System_Action_object__o *_9__80_3; // x23
  Il2CppObject *v42; // x24
  struct BgmManager___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  System_Collections_Generic_List_object__o *v52; // x19
  struct BgmManager___c_StaticFields *v53; // x8
  System_Action_object__o *_9__80_2; // x20
  Il2CppObject *v55; // x21
  struct BgmManager___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7

  v2 = this;
  if ( (byte_596FDFC & 1) == 0 )
  {
    sub_2213A60(&System_Action_GeneralBgmPlayer__TypeInfo);
    sub_2213A60(&System_Action_BgmPlayerBase__TypeInfo);
    sub_2213A60(&System_Action_BgmPlayArgs__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BgmPlayArgs___);
    sub_2213A60(&Method_BasicHelper_ForEach_GeneralBgmPlayer___);
    sub_2213A60(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_2213A60(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
    sub_2213A60(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_2213A60(&System_Func_GeneralBgmPlayer__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_2213A60(&Method_BgmManager___c__FixedUpdate_b__80_0__);
    sub_2213A60(&Method_BgmManager___c__FixedUpdate_b__80_1__);
    sub_2213A60(&Method_BgmManager___c__FixedUpdate_b__80_2__);
    sub_2213A60(&Method_BgmManager___c__FixedUpdate_b__80_3__);
    this = (BgmManager_o *)sub_2213A60(&BgmManager___c_TypeInfo);
    byte_596FDFC = 1;
  }
  bgmPlayers = v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_47;
  if ( bgmPlayers->fields._size >= 1 )
  {
    jinglePlayer = (BgmPlayerBase_o *)v2->fields.jinglePlayer;
    if ( jinglePlayer )
    {
      IsPlaying = BgmPlayerBase__IsPlaying(jinglePlayer, method);
      bgmPlayers = v2->fields.bgmPlayers;
      v6 = IsPlaying;
    }
    else
    {
      v6 = 0;
    }
    v7 = System_Linq_Enumerable__OfType_object_(
           (System_Collections_IEnumerable_o *)bgmPlayers,
           (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    v9 = BgmManager___c_TypeInfo;
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
    if ( !*(&BgmManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, v8);
      v9 = BgmManager___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__80_0 = (System_Func_object__bool__o *)static_fields->__9__80_0;
    if ( !_9__80_0 )
    {
      if ( !*(&v9->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v9, v8);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__80_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GeneralBgmPlayer__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__80_0, v13, Method_BgmManager___c__FixedUpdate_b__80_0__, 0);
      v14 = BgmManager___c_TypeInfo->static_fields;
      v14->__9__80_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__80_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__80_0, (int32_t)_9__80_0, v15, v16, v17, v18, v19, v20);
    }
    v21 = System_Linq_Enumerable__Any_object__59145568(
            v10,
            (System_Func_TSource__bool__o *)_9__80_0,
            (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( v6 && v21 )
    {
      v22 = System_Linq_Enumerable__OfType_object_(
              (System_Collections_IEnumerable_o *)v2->fields.bgmPlayers,
              (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
      v24 = BgmManager___c_TypeInfo;
      v25 = (System_Collections_Generic_IEnumerable_T__o *)v22;
      if ( !*(&BgmManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, v23);
        v24 = BgmManager___c_TypeInfo;
      }
      v26 = v24->static_fields;
      _9__80_1 = (System_Action_object__o *)v26->__9__80_1;
      if ( !_9__80_1 )
      {
        if ( !*(&v24->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v24, v23);
          v26 = BgmManager___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)v26->__9;
        _9__80_1 = (System_Action_object__o *)sub_2213CCC(System_Action_GeneralBgmPlayer__TypeInfo);
        System_Action_object____ctor(_9__80_1, v28, Method_BgmManager___c__FixedUpdate_b__80_1__, 0);
        v29 = BgmManager___c_TypeInfo->static_fields;
        v29->__9__80_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__80_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v29->__9__80_1,
          (int32_t)_9__80_1,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      BasicHelper__ForEach_object_(
        v25,
        (System_Action_T__o *)_9__80_1,
        (const MethodInfo_381282C *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v2->fields.isBgmStopJingle = 1;
    }
    else if ( !v21
           && v2->fields.isBgmStopJingle
           && !v6
           && BgmManager__ExistsPlayerHavingBgmName_object_(
                v2,
                0,
                (const MethodInfo_3817FD8 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
    {
      this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                               v2,
                               (const MethodInfo_3818024 *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
      if ( !this )
        goto LABEL_47;
      v36 = this;
      v37 = BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, method);
      v38 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                                             (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      this = (BgmManager_o *)BgmManager__StopBgmLocal_object_(
                               v2,
                               0,
                               (const MethodInfo_38183F8 *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
      if ( !v38 )
        goto LABEL_47;
      if ( v38[1].monitor )
      {
        v39 = BgmManager___c_TypeInfo;
        if ( !*(&BgmManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, method);
          v39 = BgmManager___c_TypeInfo;
        }
        v40 = v39->static_fields;
        _9__80_3 = (System_Action_object__o *)v40->__9__80_3;
        if ( !_9__80_3 )
        {
          if ( !*(&v39->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v39, method);
            v40 = BgmManager___c_TypeInfo->static_fields;
          }
          v42 = (Il2CppObject *)v40->__9;
          _9__80_3 = (System_Action_object__o *)sub_2213CCC(System_Action_BgmPlayArgs__TypeInfo);
          System_Action_object____ctor(_9__80_3, v42, Method_BgmManager___c__FixedUpdate_b__80_3__, 0);
          v43 = BgmManager___c_TypeInfo->static_fields;
          v43->__9__80_3 = (struct System_Action_BgmPlayArgs__o *)_9__80_3;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v43->__9__80_3,
            (int32_t)_9__80_3,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
        }
        BasicHelper__ForEach_object_(
          v38,
          (System_Action_T__o *)_9__80_3,
          (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BgmPlayArgs___);
        if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v50);
        BgmManager__PlayBgm_48157944((BgmPlayArgsGroup_o *)v36, 0, v51);
      }
    }
    if ( !v6 )
      v2->fields.isBgmStopJingle = 0;
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
    v52 = (System_Collections_Generic_List_object__o *)v2->fields.bgmPlayers;
    if ( !*(&BgmManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, method);
      this = (BgmManager_o *)BgmManager___c_TypeInfo;
    }
    v53 = (struct BgmManager___c_StaticFields *)*((_QWORD *)this + 23);
    _9__80_2 = (System_Action_object__o *)v53->__9__80_2;
    if ( !_9__80_2 )
    {
      if ( !*((_DWORD *)this + 57) )
      {
        j_il2cpp_runtime_class_init_0(this, method);
        v53 = BgmManager___c_TypeInfo->static_fields;
      }
      v55 = (Il2CppObject *)v53->__9;
      _9__80_2 = (System_Action_object__o *)sub_2213CCC(System_Action_BgmPlayerBase__TypeInfo);
      System_Action_object____ctor(_9__80_2, v55, Method_BgmManager___c__FixedUpdate_b__80_2__, 0);
      v56 = BgmManager___c_TypeInfo->static_fields;
      v56->__9__80_2 = (struct System_Action_BgmPlayerBase__o *)_9__80_2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v56->__9__80_2, (int32_t)_9__80_2, v57, v58, v59, v60, v61, v62);
    }
    if ( v52 )
    {
      System_Collections_Generic_List_object___ForEach(
        v52,
        (System_Action_T__o *)_9__80_2,
        (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
      return;
    }
LABEL_47:
    sub_2213CDC(this, method);
  }
}


void BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_596FDE8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v3 )
  {
    if ( !Instance )
      sub_2213CDC(v3, v4);
    LODWORD(Instance[4].monitor) = 0;
  }
}


CriAtomSource_o *BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596FDF9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
    byte_596FDF9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_object_(
                              gameObject,
                              (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *CueSheet; // x0
  __int64 v6; // x1
  SoundManager_c *v7; // x8
  System_String_o *v8; // x19

  if ( (byte_596FDCE & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596FDCE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, name, 0);
  v7 = SoundManager_TypeInfo;
  v8 = CueSheet;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v6);
    v7 = SoundManager_TypeInfo;
  }
  return System_String__op_Equality(v8, v7->static_fields->RESIDENT_RESOURCE_SOUND_NAME, 0);
}


System_String_o *BgmManager__GetBgmName(const MethodInfo *method)
{
  __int64 v1; // x1
  UnityEngine_Object_o *Instance; // x19
  __int64 v3; // x1
  bool v4; // w8
  System_String_o *result; // x0
  UnityEngine_Object_c *klass; // x8

  if ( (byte_596FDE0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDE0 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v4 = UnityEngine_Object__op_Equality(Instance, 0, 0);
  result = 0;
  if ( !v4 )
  {
    if ( !Instance || (klass = Instance[2].klass) == 0 )
      sub_2213CDC(0, v3);
    return (System_String_o *)klass->_1.namespaze;
  }
  return result;
}


bool BgmManager__GetIsKeepSubBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_596FDFB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDFB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v3 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v3, v4);
  return SLODWORD(Instance[4].monitor) > 0;
}


System_String_o *BgmManager__GetMainBgmName(bool isFormation, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t UiFlag; // w20
  System_Collections_ICollection_o *ClearWarIdList; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  __int64 v10; // x1
  BalanceConfig_c *v11; // x0
  BalanceConfig_c *v12; // x0
  System_String_o **p_bgmName; // x8
  BalanceConfig_c *v14; // x0
  BgmManager_c *v15; // x0
  BgmManager_c *v16; // x0
  TerminalOverwriteEntity_o *v18; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *bgmName; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596FDFD & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_20216/*"excludeFormation"*/);
    byte_596FDFD = 1;
  }
  v18 = 0;
  bgmName = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( !MasterData_object )
    goto LABEL_9;
  Instance = (Il2CppObject *)TerminalOverwriteMaster__TryGetOverwriteMainBgmName(
                               (TerminalOverwriteMaster_o *)MasterData_object,
                               &bgmName,
                               &v18,
                               0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_9;
  if ( !isFormation )
  {
LABEL_26:
    p_bgmName = &bgmName;
    return *p_bgmName;
  }
  if ( !v18 )
LABEL_31:
    sub_2213CDC(Instance, v4);
  if ( EntityScriptUtil__GetIntValue(v18->fields.script, (System_String_o *)StringLiteral_20216/*"excludeFormation"*/, 0, 0) != 1 )
    goto LABEL_26;
LABEL_9:
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v4);
  UiFlag = ServantCommentManager__GetUiFlag(0);
  ClearWarIdList = (System_Collections_ICollection_o *)ServantCommentManager__GetClearWarIdList(0);
  if ( UiFlag == 2 )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
      v14 = BalanceConfig_TypeInfo;
    }
    p_bgmName = &v14->static_fields->AfterPart2TerminalBgmName;
  }
  else if ( UiFlag == 1 )
  {
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList;
    if ( BasicHelper__IsNullOrEmpty(ClearWarIdList, 0) )
      goto LABEL_27;
    v11 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      v11 = BalanceConfig_TypeInfo;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            v9,
            v11->static_fields->OrdealCallWarId,
            (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
LABEL_27:
      v16 = BgmManager_TypeInfo;
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v10);
        v16 = BgmManager_TypeInfo;
      }
      p_bgmName = &v16->static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
    }
    else
    {
      v12 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
        v12 = BalanceConfig_TypeInfo;
      }
      p_bgmName = &v12->static_fields->OrdealCallClearBgmName;
    }
  }
  else
  {
    v15 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v8);
      v15 = BgmManager_TypeInfo;
    }
    p_bgmName = &v15->static_fields->DEFAULT_MAIN_BGM_NAME;
  }
  return *p_bgmName;
}


float BgmManager__GetMasterVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  BgmManager_c *v2; // x0

  if ( (byte_596FDD2 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_596FDD2 = 1;
  }
  v2 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v1);
    v2 = BgmManager_TypeInfo;
  }
  return v2->static_fields->masterVolume;
}


JinglePlayer_o *BgmManager__GetOrCreateJinglePlayer(BgmManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0
  JinglePlayer_o *v4; // x0
  Il2CppObject *jinglePlayer; // x1
  struct System_String_o *bgmName; // x8
  JinglePlayer_o **p_jinglePlayer; // x20
  __int64 v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  const MethodInfo *v16; // x1
  void (__fastcall *methodPtr)(JinglePlayer_o *, const MethodInfo *); // x10
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 bgmName_low; // x10
  __int64 v27; // x8

  if ( (byte_596FDF8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_JinglePlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
    sub_2213A60(&JinglePlayer_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    byte_596FDF8 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  v4 = (JinglePlayer_o *)System_Linq_Enumerable__ToArray_object_(
                           v3,
                           (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !v4 )
    goto LABEL_15;
  bgmName = v4->fields.bgmName;
  if ( !bgmName )
  {
    v8 = sub_2213CCC(JinglePlayer_TypeInfo);
    *(_DWORD *)(v8 + 36) = -1082130432;
    System_Object___ctor((Il2CppObject *)v8, 0);
    this->fields.jinglePlayer = (struct JinglePlayer_o *)v8;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.jinglePlayer, v8, v9, v10, v11, v12, v13, v14);
    bgmPlayers = this->fields.bgmPlayers;
    if ( bgmPlayers )
    {
      v4 = *p_jinglePlayer;
      if ( *p_jinglePlayer )
      {
        methodPtr = (void (__fastcall *)(JinglePlayer_o *, const MethodInfo *))v4->klass->vtable._5_Initialize.methodPtr;
        v16 = v4->klass->vtable._5_Initialize.method;
        v4->fields.index = bgmPlayers->fields._size;
        methodPtr(v4, v16);
        v4 = (JinglePlayer_o *)this->fields.bgmPlayers;
        if ( v4 )
        {
          v24 = *(_QWORD *)&v4->fields.index;
          jinglePlayer = (Il2CppObject *)this->fields.jinglePlayer;
          v25 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
          ++HIDWORD(v4->fields.bgmName);
          if ( v24 )
          {
            bgmName_low = SLODWORD(v4->fields.bgmName);
            if ( (unsigned int)bgmName_low >= *(_DWORD *)(v24 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)v4,
                jinglePlayer,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = v24 + 8 * bgmName_low;
              LODWORD(v4->fields.bgmName) = bgmName_low + 1;
              *(_QWORD *)(v27 + 32) = jinglePlayer;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v27 + 32),
                (int32_t)jinglePlayer,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
            }
            return *p_jinglePlayer;
          }
        }
      }
    }
LABEL_15:
    sub_2213CDC(v4, jinglePlayer);
  }
  if ( !(_DWORD)bgmName )
    sub_2213CE4(v4);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Object_array *v15; // x20
  System_Func_object__bool__o *v16; // x22
  __int64 v17; // x1
  Il2CppObject *object; // x21
  BgmManager___c_c *v19; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__73_1; // x21
  Il2CppObject *v22; // x22
  struct BgmManager___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  const MethodInfo *v32; // x1
  void (__fastcall *methodPtr)(Il2CppObject *, const MethodInfo *); // x10
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8

  if ( (byte_596FDF7 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_SubBgmPlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_First_SubBgmPlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
    sub_2213A60(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_2213A60(&SubBgmPlayer_TypeInfo);
    sub_2213A60(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__73_1__);
    sub_2213A60(&Method_BgmManager___c__DisplayClass73_0__GetOrCreateSubBgmPlayer_b__0__);
    sub_2213A60(&BgmManager___c__DisplayClass73_0_TypeInfo);
    sub_2213A60(&BgmManager___c_TypeInfo);
    byte_596FDF7 = 1;
  }
  v5 = sub_2213CCC(BgmManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)bgmName, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v15 = System_Linq_Enumerable__ToArray_object_(
          v14,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v16 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BgmManager___c__DisplayClass73_0__GetOrCreateSubBgmPlayer_b__0__,
    0);
  object = BasicHelper__Find_object_(
             v15,
             (System_Func_T__bool__o *)v16,
             (const MethodInfo_3810A1C *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( object )
    return (SubBgmPlayer_o *)object;
  v19 = BgmManager___c_TypeInfo;
  if ( !*(&BgmManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, v17);
    v19 = BgmManager___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__73_1 = (System_Func_object__bool__o *)static_fields->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__73_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__73_1, v22, Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__73_1__, 0);
    v23 = BgmManager___c_TypeInfo->static_fields;
    v23->__9__73_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__73_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__73_1, (int32_t)_9__73_1, v24, v25, v26, v27, v28, v29);
  }
  v6 = (System_Collections_Generic_List_object__o *)BasicHelper__Find_object_(
                                                      v15,
                                                      (System_Func_T__bool__o *)_9__73_1,
                                                      (const MethodInfo_3810A1C *)Method_BasicHelper_Find_SubBgmPlayer___);
  object = (Il2CppObject *)v6;
  if ( v6 )
    return (SubBgmPlayer_o *)object;
  if ( !v15 )
LABEL_22:
    sub_2213CDC(v6, v7);
  if ( SLODWORD(v15->max_length) <= 1 )
  {
    object = (Il2CppObject *)sub_2213CCC(SubBgmPlayer_TypeInfo);
    LODWORD(object[6].klass) = -1;
    HIDWORD(object[2].klass) = -1082130432;
    System_Object___ctor(object, 0);
    bgmPlayers = this->fields.bgmPlayers;
    if ( bgmPlayers )
    {
      methodPtr = (void (__fastcall *)(Il2CppObject *, const MethodInfo *))object->klass->vtable[5].methodPtr;
      v32 = object->klass->vtable[5].method;
      LODWORD(object[1].klass) = bgmPlayers->fields._size;
      methodPtr(object, v32);
      v6 = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
      if ( v6 )
      {
        items = v6->fields._items;
        v41 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
        ++v6->fields._version;
        if ( items )
        {
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              object,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v43[4] = (Il2CppClass *)object;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)object, v34, v35, v36, v37, v38, v39);
          }
          return (SubBgmPlayer_o *)object;
        }
      }
    }
    goto LABEL_22;
  }
  return (SubBgmPlayer_o *)System_Linq_Enumerable__First_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                             (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
}


SubBgmPlayer_o *BgmManager__GetOrCreateSubBgmPlayerByChannel(
        BgmManager_o *this,
        System_String_o *bgmName,
        int32_t channelId,
        const MethodInfo *method)
{
  __int64 v7; // x23
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_object__o *object; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x22
  System_Func_object__bool__o *v19; // x24
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  Il2CppObject *v22; // x23
  BgmManager___c_c *v23; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__89_1; // x23
  Il2CppObject *v26; // x24
  struct BgmManager___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  const MethodInfo *v35; // x1
  void (__fastcall *methodPtr)(Il2CppObject *, const MethodInfo *); // x10
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x8
  System_String_o *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7

  if ( (byte_596FE04 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_SubBgmPlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_First_SubBgmPlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
    sub_2213A60(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_2213A60(&SubBgmPlayer_TypeInfo);
    sub_2213A60(&Method_BgmManager___c__GetOrCreateSubBgmPlayerByChannel_b__89_1__);
    sub_2213A60(&Method_BgmManager___c__DisplayClass89_0__GetOrCreateSubBgmPlayerByChannel_b__0__);
    sub_2213A60(&BgmManager___c__DisplayClass89_0_TypeInfo);
    sub_2213A60(&BgmManager___c_TypeInfo);
    byte_596FE04 = 1;
  }
  v7 = sub_2213CCC(BgmManager___c__DisplayClass89_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  object = (System_Collections_Generic_List_object__o *)SubBgmPlayArgsWithChannel__BuildChannelName(
                                                          bgmName,
                                                          channelId,
                                                          v8);
  if ( !v7 )
    goto LABEL_23;
  *(_QWORD *)(v7 + 16) = object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)object, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v18 = System_Linq_Enumerable__ToArray_object_(
          v17,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v19 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v7,
    Method_BgmManager___c__DisplayClass89_0__GetOrCreateSubBgmPlayerByChannel_b__0__,
    0);
  v22 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_SubBgmPlayer___);
  if ( v22 )
    goto LABEL_22;
  v23 = BgmManager___c_TypeInfo;
  if ( !*(&BgmManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, v20);
    v23 = BgmManager___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__89_1 = (System_Func_object__bool__o *)static_fields->__9__89_1;
  if ( !_9__89_1 )
  {
    if ( !*(&v23->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v23, v20);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__89_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__89_1,
      v26,
      Method_BgmManager___c__GetOrCreateSubBgmPlayerByChannel_b__89_1__,
      0);
    v27 = BgmManager___c_TypeInfo->static_fields;
    v27->__9__89_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__89_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->__9__89_1, (int32_t)_9__89_1, v28, v29, v30, v31, v32, v33);
  }
  object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                          (System_Func_TSource__bool__o *)_9__89_1,
                                                          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_SubBgmPlayer___);
  v22 = (Il2CppObject *)object;
  if ( object )
    goto LABEL_22;
  if ( !v18 )
    goto LABEL_23;
  if ( SLODWORD(v18->max_length) <= 1 )
  {
    v22 = (Il2CppObject *)sub_2213CCC(SubBgmPlayer_TypeInfo);
    LODWORD(v22[6].klass) = -1;
    HIDWORD(v22[2].klass) = -1082130432;
    System_Object___ctor(v22, 0);
    bgmPlayers = this->fields.bgmPlayers;
    if ( bgmPlayers )
    {
      methodPtr = (void (__fastcall *)(Il2CppObject *, const MethodInfo *))v22->klass->vtable[5].methodPtr;
      v35 = v22->klass->vtable[5].method;
      LODWORD(v22[1].klass) = bgmPlayers->fields._size;
      methodPtr(v22, v35);
      object = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
      if ( object )
      {
        items = object->fields._items;
        v44 = Method_System_Collections_Generic_List_BgmPlayerBase__Add__;
        ++object->fields._version;
        if ( items )
        {
          size = object->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              object,
              v22,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v22;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 4), (int32_t)v22, v37, v38, v39, v40, v41, v42);
          }
          goto LABEL_22;
        }
      }
    }
LABEL_23:
    sub_2213CDC(object, v10);
  }
  object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__First_object_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                          (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
  v22 = (Il2CppObject *)object;
  if ( !object )
    goto LABEL_23;
LABEL_22:
  LODWORD(v22[6].klass) = channelId;
  v47 = SubBgmPlayArgsWithChannel__BuildChannelName(bgmName, channelId, v21);
  v22[6].monitor = v47;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22[6].monitor, (int32_t)v47, v48, v49, v50, v51, v52, v53);
  return (SubBgmPlayer_o *)v22;
}


SubBgmPlayer_o *BgmManager__GetSubBgmPlayerByChannel(
        BgmManager_o *this,
        System_String_o *bgmName,
        int32_t channelId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  const MethodInfo *v8; // x2
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_596FE03 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_SubBgmPlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_2213A60(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_2213A60(&Method_BgmManager___c__DisplayClass88_0__GetSubBgmPlayerByChannel_b__0__);
    sub_2213A60(&BgmManager___c__DisplayClass88_0_TypeInfo);
    byte_596FE03 = 1;
  }
  v7 = sub_2213CCC(BgmManager___c__DisplayClass88_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( System_String__IsNullOrEmpty(bgmName, 0) )
    return 0;
  v10 = SubBgmPlayArgsWithChannel__BuildChannelName(bgmName, channelId, v8);
  if ( !v7 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v7 + 16) = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)v10, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v19 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v7,
    Method_BgmManager___c__DisplayClass88_0__GetSubBgmPlayerByChannel_b__0__,
    0);
  return (SubBgmPlayer_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                             v18,
                             (System_Func_TSource__bool__o *)v19,
                             (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_SubBgmPlayer___);
}


void BgmManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_596FDCD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDCD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v3 )
  {
    if ( !Instance )
      sub_2213CDC(v3, v4);
    BgmManager__InitializeLocal((BgmManager_o *)Instance, v4);
  }
}


void BgmManager__InitializeLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x19
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  __int64 v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v18; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v20; // x8
  System_Collections_Generic_List_object__o *v21; // x19
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__51_0; // x20
  Il2CppObject *v24; // x21
  struct BgmManager___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  BgmManager_c *v33; // x0

  v2 = this;
  if ( (byte_596FDE9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BgmPlayerBase__TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_2213A60(&MainBgmPlayer_TypeInfo);
    sub_2213A60(&Method_BgmManager___c__InitializeLocal_b__51_0__);
    this = (BgmManager_o *)sub_2213A60(&BgmManager___c_TypeInfo);
    byte_596FDE9 = 1;
  }
  bgmPlayers = v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_21;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v4 = sub_2213CCC(MainBgmPlayer_TypeInfo);
    *(_DWORD *)(v4 + 36) = -1082130432;
    System_Object___ctor((Il2CppObject *)v4, 0);
    v2->fields.mainBgmPlayer = (struct MainBgmPlayer_o *)v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.mainBgmPlayer, v4, v5, v6, v7, v8, v9, v10);
    method = (const MethodInfo *)v2->fields.mainBgmPlayer;
    if ( !method )
      goto LABEL_21;
    this = (BgmManager_o *)v2->fields.bgmPlayers;
    LODWORD(method->invoker_method) = 0;
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
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v20 + 32) = method;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 32), (int32_t)method, v11, v12, v13, v14, v15, v16);
    }
  }
  v21 = (System_Collections_Generic_List_object__o *)v2->fields.bgmPlayers;
  this = (BgmManager_o *)BgmManager___c_TypeInfo;
  if ( !*(&BgmManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, method);
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
  }
  static_fields = (struct BgmManager___c_StaticFields *)*((_QWORD *)this + 23);
  _9__51_0 = (System_Action_object__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !*((_DWORD *)this + 57) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__51_0, v24, Method_BgmManager___c__InitializeLocal_b__51_0__, 0);
    v25 = BgmManager___c_TypeInfo->static_fields;
    v25->__9__51_0 = (struct System_Action_BgmPlayerBase__o *)_9__51_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__51_0, (int32_t)_9__51_0, v26, v27, v28, v29, v30, v31);
  }
  if ( !v21 )
LABEL_21:
    sub_2213CDC(this, method);
  System_Collections_Generic_List_object___ForEach(
    v21,
    (System_Action_T__o *)_9__51_0,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v33 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v32);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v33);
}


bool BgmManager__IsKeepSubBgm(BgmManager_o *this, const MethodInfo *method)
{
  return this->fields.enableCounter_KeepSubBgm > 0;
}


bool BgmManager__IsLoadingLocal(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  BgmManager_o *v4; // x19
  struct System_Collections_Generic_List_string__o *loadingBgmCueNameList; // x8

  v4 = this;
  if ( (byte_596FDF3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    this = (BgmManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_596FDF3 = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    if ( v4->fields.loadingBgmCueNameList )
      return System_Collections_Generic_List_object___Contains(
               (System_Collections_Generic_List_object__o *)v4->fields.loadingBgmCueNameList,
               (Il2CppObject *)this,
               (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_2213CDC(this, name);
  }
  loadingBgmCueNameList = v4->fields.loadingBgmCueNameList;
  if ( !loadingBgmCueNameList )
    goto LABEL_8;
  return loadingBgmCueNameList->fields._size > 0;
}


bool BgmManager__IsPlayBgm(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_596FDD5 & 1) == 0 )
  {
    sub_2213A60(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDD5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v5, v6);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_3817FD8 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_596FDE1 & 1) == 0 )
  {
    sub_2213A60(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDE1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v5, v6);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_3817FD8 *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0
  __int64 v7; // x1

  if ( (byte_596FDF2 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_596FDF2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName((BgmManager_o *)Instance, bgmName, v5);
  if ( !Instance )
    sub_2213CDC(CueName, v7);
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0) != 0;
}


bool BgmManager__IsValidSubBgmChannelId(int32_t channelId, const MethodInfo *method)
{
  return channelId > -2;
}


void BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_596FDE6 & 1) == 0 )
  {
    sub_2213A60(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    sub_2213A60(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDE6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_2213CDC(v5, v6);
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      isPause,
      0,
      (const MethodInfo_3818320 *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_object_(
      (BgmManager_o *)Instance,
      isPause,
      0,
      (const MethodInfo_3818320 *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


void BgmManager__PauseBgmLocal_object_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_3818320 *method)
{
  long double v4; // q0
  const MethodInfo_3818320_RGCTXs *rgctx_data; // x8
  __int64 _0_BgmManager___c__DisplayClass71_0_T; // x0
  BgmManager___c__DisplayClass71_0_T__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_IEnumerable_o *bgmPlayers; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  long double v15; // q0
  Il2CppClass *_5_System_Action_T; // x8
  System_Action_object__o *v17; // x22

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  _0_BgmManager___c__DisplayClass71_0_T = (__int64)rgctx_data->_0_BgmManager___c__DisplayClass71_0_T_;
  if ( (*((_WORD *)&rgctx_data->_0_BgmManager___c__DisplayClass71_0_T_->_2.bitflags2 + 1) & 1) == 0 )
    _0_BgmManager___c__DisplayClass71_0_T = sub_224B908(v4);
  v10 = (BgmManager___c__DisplayClass71_0_T__o *)sub_2213CCC(_0_BgmManager___c__DisplayClass71_0_T);
  BgmManager___c__DisplayClass71_0_object____ctor(
    v10,
    (const MethodInfo_3B076C4 *)method->rgctx_data->_1_BgmManager___c__DisplayClass71_0_T___ctor);
  if ( !v10 )
    sub_2213CDC(v11, v12);
  bgmPlayers = (System_Collections_IEnumerable_o *)this->fields.bgmPlayers;
  v10->fields.isPause = isPause;
  v14 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                         bgmPlayers,
                                                         (const MethodInfo_388851C *)method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_);
  _5_System_Action_T = method->rgctx_data->_5_System_Action_T_;
  if ( (*((_WORD *)&_5_System_Action_T->_2.bitflags2 + 1) & 1) == 0 )
    _5_System_Action_T = (Il2CppClass *)sub_224B908(v15);
  v17 = (System_Action_object__o *)sub_2213CCC(_5_System_Action_T);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)v10,
    (intptr_t)method->rgctx_data->_4_BgmManager___c__DisplayClass71_0_T___PauseBgmLocal_b__0,
    (const MethodInfo_3F45298 *)method->rgctx_data->_6_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v14,
    (System_Action_T__o *)v17,
    (const MethodInfo_381282C *)method->rgctx_data->_7_BasicHelper_ForEach_T_);
}


void BgmManager__PauseSubBgm(bool isPause, System_String_o *bgmName, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  System_Collections_Generic_IEnumerable_T__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v10; // x20
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  BgmPlayerBase_o *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // [xsp+18h] [xbp-38h]

  if ( (byte_596FDFE & 1) == 0 )
  {
    sub_2213A60(&Method_BgmManager_EnumeratePlayersHavingBgmName_SubBgmPlayer___);
    sub_2213A60(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_SubBgmPlayer__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_SubBgmPlayer__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDFE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)System_String__IsNullOrEmpty(bgmName, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( Instance )
      {
        BgmManager__PauseBgmLocal_object_(
          (BgmManager_o *)Instance,
          isPause,
          0,
          (const MethodInfo_3818320 *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
        return;
      }
LABEL_44:
      sub_2213CDC(IsNullOrEmpty, v8);
    }
    if ( !Instance )
      goto LABEL_44;
    IsNullOrEmpty = BgmManager__EnumeratePlayersHavingBgmName_object_(
                      (BgmManager_o *)Instance,
                      bgmName,
                      (const MethodInfo_3817DE4 *)Method_BgmManager_EnumeratePlayersHavingBgmName_SubBgmPlayer___);
    if ( !IsNullOrEmpty )
      goto LABEL_44;
    klass = IsNullOrEmpty->klass;
    v10 = IsNullOrEmpty;
    v11 = *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.rank;
    if ( *(_WORD *)&IsNullOrEmpty->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_SubBgmPlayer__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SubBgmPlayer__TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_15;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v13 = sub_224BC3C(IsNullOrEmpty, System_Collections_Generic_IEnumerable_SubBgmPlayer__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v13)(
            v10,
            *(_QWORD *)(v13 + 8));
    v31 = v14;
    while ( 1 )
    {
      if ( !v31 )
        sub_2213CDC(v14, v15);
      v16 = *(_QWORD *)v31;
      v17 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_23;
        }
        v19 = v16 + 16LL * *v18 + 312;
      }
      else
      {
LABEL_23:
        v19 = sub_224BC3C(v31, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v31, *(_QWORD *)(v19 + 8)) & 1) == 0 )
        break;
      v20 = *(_QWORD *)v31;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_SubBgmPlayer__c **)v22 - 1) != System_Collections_Generic_IEnumerator_SubBgmPlayer__TypeInfo )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_30;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_30:
        v23 = sub_224BC3C(v31, System_Collections_Generic_IEnumerator_SubBgmPlayer__TypeInfo, 0);
      }
      v24 = (BgmPlayerBase_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v31, *(_QWORD *)(v23 + 8));
      if ( !v24 )
        sub_2213CDC(0, v25);
      BgmPlayerBase__PauseBgm(v24, isPause, v26);
    }
    v27 = *(_QWORD *)v31;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_38;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_38:
      v30 = sub_224BC3C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v31, *(_QWORD *)(v30 + 8));
  }
}


void BgmManager__PauseSubBgmByChannel(
        bool isPause,
        System_String_o *bgmName,
        int32_t channelId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  BgmManager_c *v12; // x0
  BgmPlayerBase_o *SubBgmPlayerByChannel; // x0
  const MethodInfo *v14; // x2

  if ( (byte_596FE01 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FE01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v12 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v9);
    if ( channelId >= -1 )
    {
      if ( channelId == -1 )
      {
        if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v9);
        BgmManager__PauseSubBgm(isPause, bgmName, v10);
      }
      else
      {
        if ( !Instance )
          sub_2213CDC(v12, v9);
        SubBgmPlayerByChannel = (BgmPlayerBase_o *)BgmManager__GetSubBgmPlayerByChannel(
                                                     (BgmManager_o *)Instance,
                                                     bgmName,
                                                     channelId,
                                                     v11);
        if ( SubBgmPlayerByChannel )
          BgmPlayerBase__PauseBgm(SubBgmPlayerByChannel, isPause, v14);
      }
    }
  }
}


void BgmManager__PlayBgm(
        System_String_o *name,
        float volume,
        float fadeTime,
        int64_t startTime,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *v11; // x22
  const MethodInfo *v12; // x4
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Nullable_float__o volumeNullable; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596FDD7 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&BgmPlayArgsGroup_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    byte_596FDD7 = 1;
  }
  volumeNullable = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&volumeNullable,
    volume,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  v11 = (BgmPlayArgsGroup_o *)sub_2213CCC(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_48157840(v11, name, volumeNullable, fadeTime, startTime, v12);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v13);
  BgmManager__PlayBgm_48157944(v11, finishCallback, v14);
}


void BgmManager__PlayBgm_48157944(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_596FDD9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v7 )
  {
    ActionExtensions__Call(finishCallback, 0);
  }
  else
  {
    if ( !Instance )
      sub_2213CDC(v7, v8);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, 1, v9);
  }
}


void BgmManager__PlayBgm_48158140(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_596FDD8 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&BgmPlayArgsGroup_TypeInfo);
    byte_596FDD8 = 1;
  }
  v7 = (BgmPlayArgsGroup_o *)sub_2213CCC(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor(v7, main, (BgmPlayArgs_array *)subArray, v8);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v9);
  BgmManager__PlayBgm_48157944(v7, finishCallback, v10);
}


void BgmManager__PlayJingle(
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

  if ( (byte_596FDE2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDE2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v9 )
  {
    if ( !Instance )
      sub_2213CDC(v9, v10);
    BgmManager__PlayJingleLocal((BgmManager_o *)Instance, name, volume, callbackFunc, v11);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x20
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x3

  if ( (byte_596FDF6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BgmManager___c__DisplayClass72_0__PlayJingleLocal_b__0__);
    sub_2213A60(&BgmManager___c__DisplayClass72_0_TypeInfo);
    byte_596FDF6 = 1;
  }
  v9 = sub_2213CCC(BgmManager___c__DisplayClass72_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)name, v18, v19, v20, v21, v22, v23);
  *(float *)(v9 + 32) = volume;
  *(_QWORD *)(v9 + 40) = callbackFunc;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)callbackFunc, v24, v25, v26, v27, v28, v29);
  v30 = *(System_String_o **)(v9 + 24);
  v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v9, Method_BgmManager___c__DisplayClass72_0__PlayJingleLocal_b__0__, 0);
  BgmManager__PreloadBgm(this, v30, v31, v32);
}


void BgmManager__PlayJingle_48162628(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_596FDE3 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_596FDE3 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PlayJingle(name, volume, 0, v3);
}


void BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_596FDDA & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_596FDDA = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PlayBgm_48158140(args, 0, 0, v2);
}


void BgmManager__PlayPreloadBgms(BgmManager_o *this, const MethodInfo *method)
{
  BgmPlayArgsGroup_o *cacheArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v4; // x0
  System_Object_array *v5; // x0
  __int64 v6; // x1
  MethodInfo *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v14; // x21
  unsigned __int64 v15; // x22

  if ( (byte_596FDEE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    byte_596FDEE = 1;
  }
  cacheArgsGroup = this->fields.cacheArgsGroup;
  if ( cacheArgsGroup )
  {
    v4 = BgmPlayArgsGroup__AllArgsListNullExcluded(cacheArgsGroup, method);
    v5 = System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4,
           (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    if ( !v5 )
      sub_2213CDC(0, v6);
    max_length = v5->max_length;
    v14 = v5;
    if ( (int)max_length >= 1 )
    {
      v15 = 0;
      do
      {
        if ( v15 >= (unsigned int)max_length )
          sub_2213CE4(v5);
        BgmManager__PlayPreloadedBgm(this, (BgmPlayArgs_o *)v14->m_Items[v15], v7);
        LODWORD(max_length) = v14->max_length;
        ++v15;
      }
      while ( (__int64)v15 < (int)max_length );
    }
    this->fields.cacheArgsGroup = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.cacheArgsGroup,
      0,
      (System_String_o *)v7,
      v8,
      v9,
      v10,
      v11,
      v12);
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

  if ( (byte_596FDEF & 1) == 0 )
  {
    sub_2213A60(&MainBgmPlayArgs_TypeInfo);
    sub_2213A60(&SubBgmPlayArgs_TypeInfo);
    byte_596FDEF = 1;
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
          sub_2213CDC(0, v6);
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


void BgmManager__PlayPreloadedSubBgmByChannel(
        BgmManager_o *this,
        SubBgmPlayArgsWithChannel_o *args,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *BgmName_k__BackingField; // x20
  const MethodInfo *v7; // x3
  SubBgmPlayer_o *SubBgmPlayerByChannel; // x0
  __int64 v9; // x1

  if ( args )
  {
    if ( !System_String__IsNullOrEmpty(args->fields._BgmName_k__BackingField, 0) )
    {
      BgmName_k__BackingField = args->fields._BgmName_k__BackingField;
      if ( BgmManager__IsPreloadSucceeded(this, BgmName_k__BackingField, v5) )
      {
        SubBgmPlayerByChannel = BgmManager__GetOrCreateSubBgmPlayerByChannel(
                                  this,
                                  BgmName_k__BackingField,
                                  args->fields._ChannelId_k__BackingField,
                                  v7);
        if ( !SubBgmPlayerByChannel )
          sub_2213CDC(0, v9);
        ((void (__fastcall *)(SubBgmPlayer_o *, System_String_o *, int64_t, const MethodInfo *, float, float))SubBgmPlayerByChannel->klass->vtable._9_PlayBgm.methodPtr)(
          SubBgmPlayerByChannel,
          BgmName_k__BackingField,
          args->fields._StartTime_k__BackingField,
          SubBgmPlayerByChannel->klass->vtable._9_PlayBgm.method,
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x21
  Il2CppObject *Instance; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x22
  BgmManager_o *v22; // x20
  System_String_o *v23; // x21
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x3

  if ( (byte_596FDDB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_2213A60(&Method_BgmManager___c__DisplayClass37_0__PlaySubBgm_b__0__);
    sub_2213A60(&BgmManager___c__DisplayClass37_0_TypeInfo);
    byte_596FDDB = 1;
  }
  v3 = sub_2213CCC(BgmManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = args;
  v12 = v3 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)args, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v3 + 16) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Instance, v14, v15, v16, v17, v18, v19);
  v21 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  v4 = UnityEngine_Object__op_Equality(v21, 0, 0);
  if ( !v4 )
  {
    if ( *(_QWORD *)v12 )
    {
      v22 = *(BgmManager_o **)(v3 + 16);
      v23 = *(System_String_o **)(*(_QWORD *)v12 + 16LL);
      v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v24, (Il2CppObject *)v3, Method_BgmManager___c__DisplayClass37_0__PlaySubBgm_b__0__, 0);
      if ( v22 )
      {
        BgmManager__PreloadBgm(v22, v23, v24, v25);
        return;
      }
    }
LABEL_10:
    sub_2213CDC(v4, v5);
  }
}


void BgmManager__PlaySubBgmByChannel(SubBgmPlayArgsWithChannel_o *args, const MethodInfo *method)
{
  __int64 v3; // x19
  BgmManager_c *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x20
  Il2CppObject *Instance; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x21
  int v22; // w21
  __int64 v23; // x8
  BgmManager_o *v24; // x20
  System_String_o *v25; // x21
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x3
  float v28; // s0
  System_String_o *v29; // x19
  __int64 v30; // x8
  float v31; // s8
  int64_t v32; // x21
  BgmPlayArgs_o *v33; // x20
  const MethodInfo *v34; // x4
  const MethodInfo *v35; // x1
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596FDFF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_2213A60(&SubBgmPlayArgs_TypeInfo);
    sub_2213A60(&Method_BgmManager___c__DisplayClass83_0__PlaySubBgmByChannel_b__0__);
    sub_2213A60(&BgmManager___c__DisplayClass83_0_TypeInfo);
    byte_596FDFF = 1;
  }
  v3 = sub_2213CCC(BgmManager___c__DisplayClass83_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 24) = args;
  v12 = v3 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)args, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v3 + 16) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Instance, v14, v15, v16, v17, v18, v19);
  v21 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( !UnityEngine_Object__op_Equality(v21, 0, 0) && *(_QWORD *)v12 )
  {
    v22 = *(_DWORD *)(*(_QWORD *)v12 + 40LL);
    v4 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v5);
    if ( v22 >= -1 )
    {
      v23 = *(_QWORD *)v12;
      if ( !*(_QWORD *)v12 )
        goto LABEL_20;
      if ( *(_DWORD *)(v23 + 40) != -1 )
      {
        v24 = *(BgmManager_o **)(v3 + 16);
        v25 = *(System_String_o **)(v23 + 16);
        v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v26,
          (Il2CppObject *)v3,
          Method_BgmManager___c__DisplayClass83_0__PlaySubBgmByChannel_b__0__,
          0);
        if ( v24 )
        {
          BgmManager__PreloadBgm(v24, v25, v26, v27);
          return;
        }
LABEL_20:
        sub_2213CDC(v4, v5);
      }
      v28 = *(float *)(v23 + 24);
      v29 = *(System_String_o **)(v23 + 16);
      volume = 0;
      System_Nullable_float____ctor(
        (System_Nullable_float__o)&volume,
        v28,
        (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
      v30 = *(_QWORD *)v12;
      if ( !*(_QWORD *)v12 )
        goto LABEL_20;
      v31 = *(float *)(v30 + 28);
      v32 = *(_QWORD *)(v30 + 32);
      v33 = (BgmPlayArgs_o *)sub_2213CCC(SubBgmPlayArgs_TypeInfo);
      BgmPlayArgs___ctor(v33, v29, volume, v31, v32, v34);
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v35);
      BgmManager__PlaySubBgm((SubBgmPlayArgs_o *)v33, v35);
    }
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
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  bool v18; // w24
  BgmPlayArgsGroup_o **v19; // x23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct BgmPlayArgsGroup_o *v38; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v39; // x0
  System_Object_array *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_List_object__o *v47; // x20
  __int64 v48; // x23
  unsigned __int64 v49; // x24
  __int64 v50; // x22
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  __int64 v63; // x1
  System_Action_object__o *v64; // x21
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  System_Object_array *v75; // x21
  ChainableActionParallel_o *v76; // x20
  __int64 v77; // x21
  System_Action_o *v78; // x22
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7

  if ( (byte_596FDED & 1) == 0 )
  {
    sub_2213A60(&System_Action___TypeInfo);
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ChainableActionParallel_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_2213A60(&Method_System_Collections_Generic_List_Action_Action___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action_Action___ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action_Action____ctor__);
    sub_2213A60(&System_Collections_Generic_List_Action_Action___TypeInfo);
    sub_2213A60(&Method_BgmManager___c__DisplayClass58_0__PreloadAndPlayBgms_b__0__);
    sub_2213A60(&BgmManager___c__DisplayClass58_0_TypeInfo);
    sub_2213A60(&Method_BgmManager___c__DisplayClass58_1__PreloadAndPlayBgms_b__1__);
    sub_2213A60(&BgmManager___c__DisplayClass58_1_TypeInfo);
    byte_596FDED = 1;
  }
  v9 = sub_2213CCC(BgmManager___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_24;
  v18 = isPlay;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = argsGroup;
  v19 = (BgmPlayArgsGroup_o **)(v9 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)argsGroup, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v9 + 48) = finishCallback;
  *(_BYTE *)(v9 + 32) = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)finishCallback, v26, v27, v28, v29, v30, v31);
  v38 = *(struct BgmPlayArgsGroup_o **)(v9 + 24);
  if ( v38 )
  {
    this->fields.cacheArgsGroup = v38;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.cacheArgsGroup,
      (int32_t)v38,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    v10 = *v19;
    if ( !*v19 )
      goto LABEL_24;
    v39 = BgmPlayArgsGroup__AllArgsListNullExcluded(v10, v11);
    v40 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v39,
            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v9 + 40) = v40;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)v40, v41, v42, v43, v44, v45, v46);
    v47 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Action_Action___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v47,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v48 = *(_QWORD *)(v9 + 40);
    if ( !v48 )
      goto LABEL_24;
    if ( *(int *)(v48 + 24) >= 1 )
    {
      v49 = 0;
      while ( 1 )
      {
        v50 = sub_2213CCC(BgmManager___c__DisplayClass58_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v50, 0);
        if ( !v50 )
          break;
        *(_QWORD *)(v50 + 24) = v9;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 24), v9, v51, v52, v53, v54, v55, v56);
        if ( v49 >= *(unsigned int *)(v48 + 24) )
          goto LABEL_25;
        v63 = *(_QWORD *)(v48 + 32 + 8 * v49);
        *(_QWORD *)(v50 + 16) = v63;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 16), v63, v57, v58, v59, v60, v61, v62);
        v64 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v64,
          (Il2CppObject *)v50,
          Method_BgmManager___c__DisplayClass58_1__PreloadAndPlayBgms_b__1__,
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &items->obj.klass + size;
          v47->fields._size = size + 1;
          v74[4] = (Il2CppClass *)v64;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v74 + 4), (int32_t)v64, v65, v66, v67, v68, v69, v70);
        }
        if ( (__int64)++v49 >= *(int *)(v48 + 24) )
          goto LABEL_17;
      }
LABEL_24:
      sub_2213CDC(v10, v11);
    }
LABEL_17:
    if ( !v47 )
      goto LABEL_24;
    v75 = System_Collections_Generic_List_object___ToArray(
            v47,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v76 = (ChainableActionParallel_o *)sub_2213CCC(ChainableActionParallel_TypeInfo);
    ChainableActionParallel___ctor_56108200(v76, (System_Action_Action__array *)v75, 0);
    v77 = sub_2213B20(System_Action___TypeInfo, 1);
    v78 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v78, (Il2CppObject *)v9, Method_BgmManager___c__DisplayClass58_0__PreloadAndPlayBgms_b__0__, 0);
    if ( !v77 )
      goto LABEL_24;
    if ( !*(_DWORD *)(v77 + 24) )
LABEL_25:
      sub_2213CE4(v10);
    *(_QWORD *)(v77 + 32) = v78;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v77 + 32), (int32_t)v78, v79, v80, v81, v82, v83, v84);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  BgmManager_o *v22; // x0
  const MethodInfo *v23; // x2
  System_String_o *CueName; // x0
  Il2CppObject **v25; // x24
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *CueSheet; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  bool IsNullOrEmpty; // w22
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x3
  System_Collections_IEnumerator_o *v42; // x0

  if ( (byte_596FDF0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&Method_BgmManager___c__DisplayClass62_0__PreloadBgm_b__0__);
    sub_2213A60(&BgmManager___c__DisplayClass62_0_TypeInfo);
    byte_596FDF0 = 1;
  }
  v7 = sub_2213CCC(BgmManager___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  CueName = BgmManager__ExtractCueName(v22, name, v23);
  *(_QWORD *)(v7 + 24) = CueName;
  v25 = (Il2CppObject **)(v7 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)CueName, v26, v27, v28, v29, v30, v31);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CueSheet = SoundManager__GetCueSheet(Instance, *(System_String_o **)(v7 + 24), 0);
  *(_QWORD *)(v7 + 16) = CueSheet;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)CueSheet, v33, v34, v35, v36, v37, v38);
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0);
  if ( !IsNullOrEmpty )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      if ( !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)Instance,
              *v25,
              (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__) )
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
          (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
        Instance = (SoundManager_o *)this->fields.addBindList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            *v25,
            (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_12;
        }
      }
    }
LABEL_14:
    sub_2213CDC(Instance, v9);
  }
  v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v7, Method_BgmManager___c__DisplayClass62_0__PreloadBgm_b__0__, 0);
  v42 = BgmManager__CoWaitSameAudioLoading(this, name, v40, v41);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v42, 0);
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
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__54_0; // x20
  Il2CppObject *v7; // x21
  struct BgmManager___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596FDEC & 1) == 0 )
  {
    sub_2213A60(&System_Action_BgmPlayerBase__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_2213A60(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__54_0__);
    sub_2213A60(&BgmManager___c_TypeInfo);
    byte_596FDEC = 1;
  }
  v3 = BgmManager___c_TypeInfo;
  bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
  if ( !*(&BgmManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, method);
    v3 = BgmManager___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__54_0 = (System_Action_object__o *)static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__54_0, v7, Method_BgmManager___c__ReflectMasterVolumeLocal_b__54_0__, 0);
    v8 = BgmManager___c_TypeInfo->static_fields;
    v8->__9__54_0 = (struct System_Action_BgmPlayerBase__o *)_9__54_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__54_0, (int32_t)_9__54_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !bgmPlayers )
    sub_2213CDC(v3, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__54_0,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void BgmManager__RemoveUnusedOldFromBindList(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *addBindList; // x8
  int32_t size; // w20
  BgmManager_c *v5; // x0
  System_Collections_Generic_HashSet_object__o *v6; // x20
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *UsingCueNames; // x0
  BgmPlayArgsGroup_o *cacheArgsGroup; // x0
  BgmManager_c *klass; // x8
  BgmManager_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x21
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x21
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  Il2CppObject *CueName; // x0
  __int64 v32; // x22
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  int32_t v37; // w21
  __int64 v38; // x1
  Il2CppObject *Item; // x22
  struct System_Collections_Generic_List_string__o *v40; // x8
  BgmManager_c *v41; // x0
  int32_t v42; // w22
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+0h] [xbp-90h] BYREF
  __int64 v44; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_596FDFA & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__UnionWith__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (BgmManager_o *)sub_2213A60(&SoundManager_TypeInfo);
    byte_596FDFA = 1;
  }
  addBindList = v2->fields.addBindList;
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  if ( !addBindList )
    goto LABEL_64;
  size = addBindList->fields._size;
  v5 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v5 = BgmManager_TypeInfo;
  }
  if ( size > v5->static_fields->ADD_BIND_MAX )
  {
    v6 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_string__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v6,
      (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = (BgmManager_o *)v2->fields.bgmPlayers;
    if ( !this )
      goto LABEL_64;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v43,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v45 = v43;
    v43.fields._list = 0;
    *(_QWORD *)&v43.fields._index = &v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v45.fields._current )
        sub_2213CDC(0, v7);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v45.fields._current,
                                                                       v7);
      if ( !v6 )
        sub_2213CDC(UsingCueNames, UsingCueNames);
      System_Collections_Generic_HashSet_object___UnionWith(
        v6,
        UsingCueNames,
        (const MethodInfo_42BB4D0 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    cacheArgsGroup = v2->fields.cacheArgsGroup;
    if ( cacheArgsGroup )
    {
      this = (BgmManager_o *)BgmPlayArgsGroup__AllArgsListNullExcluded(cacheArgsGroup, method);
      if ( !this )
        goto LABEL_64;
      klass = this->klass;
      v11 = this;
      v12 = *(unsigned __int16 *)&this->klass->_2.rank;
      if ( *(_WORD *)&this->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_19;
        }
        v14 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_19:
        v14 = sub_224BC3C(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
      }
      v15 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
      v44 = v15;
      v43.fields._list = 0;
      *(_QWORD *)&v43.fields._index = &v44;
      while ( 1 )
      {
        v17 = v44;
        if ( !v44 )
          sub_2213CDC(v15, v16);
        v18 = *(_QWORD *)v44;
        v19 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v19;
            v20 += 4;
            if ( !v19 )
              goto LABEL_27;
          }
          v21 = v18 + 16LL * *v20 + 312;
        }
        else
        {
LABEL_27:
          v21 = sub_224BC3C(v44, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8));
        if ( (v22 & 1) == 0 )
          break;
        v23 = v44;
        if ( !v44 )
          sub_2213CDC(v22, method);
        v24 = *(_QWORD *)v44;
        v25 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v26 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v25;
            v26 += 4;
            if ( !v25 )
              goto LABEL_35;
          }
          v27 = v24 + 16LL * *v26 + 312;
        }
        else
        {
LABEL_35:
          v27 = sub_224BC3C(v44, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
        }
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
        if ( !v28 )
          sub_2213CDC(0, v29);
        CueName = (Il2CppObject *)BgmManager__ExtractCueName((BgmManager_o *)v28, *(System_String_o **)(v28 + 16), v30);
        if ( !v6 )
          sub_2213CDC(CueName, CueName);
        v15 = System_Collections_Generic_HashSet_object___Add(
                v6,
                CueName,
                (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
      v32 = v44;
      if ( v44 )
      {
        v33 = *(_QWORD *)v44;
        v34 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
          {
            --v34;
            v35 += 4;
            if ( !v34 )
              goto LABEL_45;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_45:
          v36 = sub_224BC3C(v44, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
      }
    }
    this = (BgmManager_o *)v2->fields.addBindList;
    if ( !this )
LABEL_64:
      sub_2213CDC(this, method);
    v37 = LODWORD(this->fields.m_CancellationTokenSource) - 1;
    if ( v37 >= 1 )
    {
      while ( 1 )
      {
        this = (BgmManager_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)this,
                                 v37,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v6 )
          goto LABEL_64;
        if ( System_Collections_Generic_HashSet_object___Contains(
               v6,
               (Il2CppObject *)this,
               (const MethodInfo_42BA9D0 *)Method_System_Collections_Generic_HashSet_string__Contains__) )
        {
          if ( --v37 < 1 )
            return;
        }
        else
        {
          this = (BgmManager_o *)v2->fields.addBindList;
          if ( !this )
            goto LABEL_64;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v37,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v38);
          SoundManager__releaseAudioAssetStorage((System_String_o *)Item, 0);
          this = (BgmManager_o *)v2->fields.addBindList;
          if ( !this )
            goto LABEL_64;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)this,
            v37,
            (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_string__RemoveAt__);
          v40 = v2->fields.addBindList;
          if ( !v40 )
            goto LABEL_64;
          v41 = BgmManager_TypeInfo;
          v42 = v40->fields._size;
          if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
            v41 = BgmManager_TypeInfo;
          }
          if ( v42 <= v41->static_fields->ADD_BIND_MAX )
            return;
          if ( --v37 <= 0 )
            return;
        }
        this = (BgmManager_o *)v2->fields.addBindList;
        if ( !this )
          goto LABEL_64;
      }
    }
  }
}


void BgmManager__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_596FDCF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDCF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v3 )
  {
    if ( !Instance )
      sub_2213CDC(v3, v4);
    BgmManager__ResetLocal((BgmManager_o *)Instance, v4);
  }
}


void BgmManager__ResetLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager___c_c *v3; // x0
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__52_0; // x20
  Il2CppObject *v7; // x21
  struct BgmManager___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596FDEA & 1) == 0 )
  {
    sub_2213A60(&System_Action_BgmPlayerBase__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_2213A60(&Method_BgmManager___c__ResetLocal_b__52_0__);
    sub_2213A60(&BgmManager___c_TypeInfo);
    byte_596FDEA = 1;
  }
  v3 = BgmManager___c_TypeInfo;
  bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers;
  if ( !*(&BgmManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, method);
    v3 = BgmManager___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__52_0 = (System_Action_object__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_object____ctor(_9__52_0, v7, Method_BgmManager___c__ResetLocal_b__52_0__, 0);
    v8 = BgmManager___c_TypeInfo->static_fields;
    v8->__9__52_0 = (struct System_Action_BgmPlayerBase__o *)_9__52_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__52_0, (int32_t)_9__52_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !bgmPlayers )
    sub_2213CDC(v3, method);
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__52_0,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void BgmManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1
  BgmManager_c *v4; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_596FDD3 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDD3 = 1;
  }
  v4 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v2);
    v4 = BgmManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->masterVolume != volume )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, v2);
      static_fields = BgmManager_TypeInfo->static_fields;
    }
    static_fields->masterVolume = volume;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v8 )
    {
      if ( !Instance )
        sub_2213CDC(v8, v9);
      BgmManager__ReflectMasterVolumeLocal((BgmManager_o *)Instance, v9);
    }
  }
}


void BgmManager__SetMute(bool isMute, const MethodInfo *method)
{
  BgmManager_c *v3; // x0
  _BOOL4 v4; // w21
  struct BgmManager_StaticFields *static_fields; // x8
  const MethodInfo_47A29F8 *v6; // x0
  __int64 v7; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_596FDD1 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDD1 = 1;
  }
  v3 = BgmManager_TypeInfo;
  v4 = isMute;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v3 = BgmManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->isMute != v4 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BgmManager_TypeInfo->static_fields;
    }
    v6 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__;
    static_fields->isMute = v4;
    Instance = SingletonMonoBehaviour_object___get_Instance(v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v9 )
    {
      if ( !Instance )
        sub_2213CDC(v9, v10);
      BgmManager__SetMuteLocal((BgmManager_o *)Instance, isMute, v11);
    }
  }
}


void BgmManager__SetMuteLocal(BgmManager_o *this, bool isMute, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  bool v8; // w9
  System_Collections_Generic_List_object__o *bgmPlayers; // x19
  System_Action_object__o *v10; // x20

  if ( (byte_596FDEB & 1) == 0 )
  {
    sub_2213A60(&System_Action_BgmPlayerBase__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_2213A60(&Method_BgmManager___c__DisplayClass53_0__SetMuteLocal_b__0__);
    sub_2213A60(&BgmManager___c__DisplayClass53_0_TypeInfo);
    byte_596FDEB = 1;
  }
  v5 = sub_2213CCC(BgmManager___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (v8 = isMute,
        bgmPlayers = (System_Collections_Generic_List_object__o *)this->fields.bgmPlayers,
        *(_BYTE *)(v5 + 16) = v8,
        v10 = (System_Action_object__o *)sub_2213CCC(System_Action_BgmPlayerBase__TypeInfo),
        System_Action_object____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_BgmManager___c__DisplayClass53_0__SetMuteLocal_b__0__,
          0),
        !bgmPlayers) )
  {
    sub_2213CDC(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v10,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_596FDDE & 1) == 0 )
  {
    sub_2213A60(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
    sub_2213A60(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDDE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( fadeoutTime > 0.0 )
    {
      if ( Instance )
      {
        BgmManager__FadeoutBgmLocal_object_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0,
          (const MethodInfo_38181FC *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
        return;
      }
LABEL_11:
      sub_2213CDC(v5, v6);
    }
    if ( !Instance )
      goto LABEL_11;
    BgmManager__StopBgmLocal_object_(
      (BgmManager_o *)Instance,
      0,
      (const MethodInfo_38183F8 *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
  }
}


void BgmManager__StopBgm(
        System_String_o *name,
        float fadeoutTime,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppClass *klass; // x8
  const char *namespaze; // x8
  System_String_o *v19; // x0
  bool v20; // w22

  if ( (byte_596FDDD & 1) == 0 )
  {
    sub_2213A60(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
    sub_2213A60(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_2213A60(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
    sub_2213A60(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v9 )
  {
    if ( name )
    {
      if ( Instance )
      {
        klass = Instance[5].klass;
        if ( klass && (namespaze = klass->_1.namespaze) != 0 )
          v19 = (System_String_o *)*((_QWORD *)namespaze + 2);
        else
          v19 = 0;
        if ( !System_String__op_Equality(v19, name, 0) )
        {
LABEL_17:
          if ( fadeoutTime <= 0.0 )
          {
            v20 = BgmManager__StopBgmLocal_object_(
                    (BgmManager_o *)Instance,
                    name,
                    (const MethodInfo_38183F8 *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
            if ( name && !v20 )
              return;
            if ( SLODWORD(Instance[4].monitor) <= 0 )
              BgmManager__StopBgmLocal_object_(
                (BgmManager_o *)Instance,
                0,
                (const MethodInfo_38183F8 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
          }
          else
          {
            v20 = BgmManager__FadeoutBgmLocal_object_(
                    (BgmManager_o *)Instance,
                    fadeoutTime,
                    name,
                    (const MethodInfo_38181FC *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
            if ( name && !v20 )
              return;
            if ( SLODWORD(Instance[4].monitor) <= 0 )
              BgmManager__FadeoutBgmLocal_object_(
                (BgmManager_o *)Instance,
                fadeoutTime,
                0,
                (const MethodInfo_38181FC *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
          }
          if ( v20 )
            ActionExtensions__Call(successCallback, 0);
          return;
        }
LABEL_16:
        Instance[5].klass = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&Instance[5], 0, v11, v12, v13, v14, v15, v16);
        goto LABEL_17;
      }
    }
    else if ( Instance )
    {
      goto LABEL_16;
    }
    sub_2213CDC(v9, v10);
  }
}


bool BgmManager__StopBgmLocal_object_(BgmManager_o *this, System_String_o *name, const MethodInfo_38183F8 *method)
{
  const MethodInfo_3817DE4 **rgctx_data; // x8
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x20
  long double v9; // q0
  Il2CppClass *_4_BgmManager___c__69_T; // x8
  const MethodInfo_38183F8_RGCTXs *v11; // x8
  __int64 v12; // x0
  System_Func_object__bool__o *v13; // x21
  __int64 v14; // x0
  const MethodInfo_38183F8_RGCTXs *v15; // x8
  __int64 v16; // x0
  __int64 _3_System_Func_T__bool; // x8
  Il2CppObject *v18; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  long double v25; // q0
  Il2CppClass *v26; // x0
  Il2CppClass *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  rgctx_data = (const MethodInfo_3817DE4 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_bool___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_bool___);
    rgctx_data = (const MethodInfo_3817DE4 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
      rgctx_data = (const MethodInfo_3817DE4 **)method->rgctx_data;
    }
  }
  v8 = BgmManager__EnumeratePlayersHavingBgmName_object_(this, name, *rgctx_data);
  _4_BgmManager___c__69_T = method->rgctx_data->_4_BgmManager___c__69_T_;
  if ( (*((_WORD *)&_4_BgmManager___c__69_T->_2.bitflags2 + 1) & 1) == 0 )
    _4_BgmManager___c__69_T = (Il2CppClass *)sub_224B908(v9);
  if ( !*(&_4_BgmManager___c__69_T->_2.cctor_finished + 1) )
    *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(_4_BgmManager___c__69_T, v7);
  v11 = method->rgctx_data;
  v12 = (__int64)v11->_4_BgmManager___c__69_T_;
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
  {
    v12 = sub_224B908(v9);
    v11 = method->rgctx_data;
  }
  v13 = *(System_Func_object__bool__o **)(*(_QWORD *)(v12 + 184) + 8LL);
  if ( !v13 )
  {
    v14 = (__int64)v11->_4_BgmManager___c__69_T_;
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_224B908(v9);
    if ( !*(_DWORD *)(v14 + 228) )
      *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(v14, v7);
    v15 = method->rgctx_data;
    v16 = (__int64)v15->_4_BgmManager___c__69_T_;
    if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    {
      v16 = sub_224B908(v9);
      v15 = method->rgctx_data;
    }
    _3_System_Func_T__bool = (__int64)v15->_3_System_Func_T__bool_;
    v18 = **(Il2CppObject ***)(v16 + 184);
    if ( (*(_WORD *)(_3_System_Func_T__bool + 309) & 1) == 0 )
      _3_System_Func_T__bool = sub_224B908(v9);
    v13 = (System_Func_object__bool__o *)sub_2213CCC(_3_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v13,
      v18,
      (intptr_t)method->rgctx_data->_5_BgmManager___c__69_T___StopBgmLocal_b__69_0,
      (const MethodInfo_428A438 *)method->rgctx_data->_6_System_Func_T__bool___ctor);
    v26 = method->rgctx_data->_4_BgmManager___c__69_T_;
    if ( (*((_WORD *)&v26->_2.bitflags2 + 1) & 1) == 0 )
      v26 = (Il2CppClass *)sub_224B908(v25);
    *((_QWORD *)v26->static_fields + 1) = v13;
    v27 = method->rgctx_data->_4_BgmManager___c__69_T_;
    if ( (*((_WORD *)&v27->_2.bitflags2 + 1) & 1) == 0 )
      v27 = (Il2CppClass *)sub_224B908(v25);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)v27->static_fields + 8),
      (int32_t)v13,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v11 = method->rgctx_data;
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                               (System_Func_TSource__TResult__o *)v13,
                                                               (const MethodInfo_3890214 *)v11->_7_System_Linq_Enumerable_Select_T__bool_);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v28,
                                                               (const MethodInfo_389B7FC *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v29, (const MethodInfo_3865A4C *)Method_System_Linq_Enumerable_Any_bool___);
}


void BgmManager__StopJingle(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_596FDE4 & 1) == 0 )
  {
    sub_2213A60(&Method_BgmManager_StopBgmLocal_JinglePlayer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDE4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v3 )
  {
    if ( !Instance )
      sub_2213CDC(v3, v4);
    BgmManager__StopBgmLocal_object_(
      (BgmManager_o *)Instance,
      0,
      (const MethodInfo_38183F8 *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_596FDDF & 1) == 0 )
  {
    sub_2213A60(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_2213A60(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDDF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v7 )
  {
    if ( fadeoutTime > 0.0 )
    {
      if ( Instance )
      {
        BgmManager__FadeoutBgmLocal_object_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          name,
          (const MethodInfo_38181FC *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
        return;
      }
LABEL_11:
      sub_2213CDC(v7, v8);
    }
    if ( !Instance )
      goto LABEL_11;
    BgmManager__StopBgmLocal_object_(
      (BgmManager_o *)Instance,
      name,
      (const MethodInfo_38183F8 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
  }
}


void BgmManager__StopSubBgmByChannel(
        System_String_o *bgmName,
        int32_t channelId,
        float fadeoutTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3
  BgmManager_c *v11; // x0
  SubBgmPlayer_o *SubBgmPlayerByChannel; // x0
  SubBgmPlayer_c *klass; // x8

  if ( (byte_596FE00 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FE00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v11 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v9);
    if ( channelId >= -1 )
    {
      if ( channelId == -1 )
      {
        if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v9);
        BgmManager__StopSubBgm(bgmName, fadeoutTime, v9);
      }
      else
      {
        if ( !Instance )
          sub_2213CDC(v11, v9);
        SubBgmPlayerByChannel = BgmManager__GetSubBgmPlayerByChannel((BgmManager_o *)Instance, bgmName, channelId, v10);
        if ( SubBgmPlayerByChannel )
        {
          klass = SubBgmPlayerByChannel->klass;
          if ( fadeoutTime <= 0.0 )
            klass->vtable._11_StopBgm.methodPtr();
          else
            ((void (__fastcall *)(float))klass->vtable._10_FadeoutBgm.methodPtr)(fadeoutTime);
        }
      }
    }
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
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__70_0; // x22
  Il2CppObject *v12; // x23
  struct BgmManager___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  System_Func_object__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v30; // x1
  BgmManager___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_T__o *v32; // x19
  struct BgmManager___c_StaticFields *v33; // x9
  System_Action_object__o *_9__70_2; // x20
  Il2CppObject *v35; // x21
  struct BgmManager___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_596FDF5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_SubBgmPlayer__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_SubBgmPlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    sub_2213A60(&System_Func_SubBgmPlayArgs__string__TypeInfo);
    sub_2213A60(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_2213A60(&Method_BgmManager___c__StopUnrequestedSubBgm_b__70_0__);
    sub_2213A60(&Method_BgmManager___c__StopUnrequestedSubBgm_b__70_2__);
    sub_2213A60(&Method_BgmManager___c__DisplayClass70_0__StopUnrequestedSubBgm_b__1__);
    sub_2213A60(&BgmManager___c__DisplayClass70_0_TypeInfo);
    sub_2213A60(&BgmManager___c_TypeInfo);
    byte_596FDF5 = 1;
  }
  v5 = sub_2213CCC(BgmManager___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( this->fields.enableCounter_KeepSubBgm <= 0 )
  {
    if ( !requestedBgmArgs )
      goto LABEL_19;
    SubArgsList_k__BackingField = requestedBgmArgs->fields._SubArgsList_k__BackingField;
    v9 = BgmManager___c_TypeInfo;
    if ( !*(&BgmManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, v7);
      v9 = BgmManager___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__70_0 = (System_Func_object__object__o *)static_fields->__9__70_0;
    if ( !_9__70_0 )
    {
      if ( !*(&v9->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v9, v7);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__70_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_SubBgmPlayArgs__string__TypeInfo);
      System_Func_object__object____ctor(_9__70_0, v12, Method_BgmManager___c__StopUnrequestedSubBgm_b__70_0__, 0);
      v13 = BgmManager___c_TypeInfo->static_fields;
      v13->__9__70_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__70_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__70_0, (int32_t)_9__70_0, v14, v15, v16, v17, v18, v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__70_0,
                                                                 (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v6 = System_Linq_Enumerable__ToArray_object_(
           v20,
           (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v5 )
LABEL_19:
      sub_2213CDC(v6, v7);
    *(_QWORD *)(v5 + 16) = v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v6, v21, v22, v23, v24, v25, v26);
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v28 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v28,
      (Il2CppObject *)v5,
      Method_BgmManager___c__DisplayClass70_0__StopUnrequestedSubBgm_b__1__,
      0);
    v29 = System_Linq_Enumerable__Where_object_(
            v27,
            (System_Func_TSource__bool__o *)v28,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v31 = BgmManager___c_TypeInfo;
    v32 = (System_Collections_Generic_IEnumerable_T__o *)v29;
    if ( !*(&BgmManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo, v30);
      v31 = BgmManager___c_TypeInfo;
    }
    v33 = v31->static_fields;
    _9__70_2 = (System_Action_object__o *)v33->__9__70_2;
    if ( !_9__70_2 )
    {
      if ( !*(&v31->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v31, v30);
        v33 = BgmManager___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)v33->__9;
      _9__70_2 = (System_Action_object__o *)sub_2213CCC(System_Action_SubBgmPlayer__TypeInfo);
      System_Action_object____ctor(_9__70_2, v35, Method_BgmManager___c__StopUnrequestedSubBgm_b__70_2__, 0);
      v36 = BgmManager___c_TypeInfo->static_fields;
      v36->__9__70_2 = (struct System_Action_SubBgmPlayer__o *)_9__70_2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->__9__70_2, (int32_t)_9__70_2, v37, v38, v39, v40, v41, v42);
    }
    BasicHelper__ForEach_object_(
      v32,
      (System_Action_T__o *)_9__70_2,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_SubBgmPlayer___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


System_String_o *BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_2213CDC(this, method);
  return mainBgmPlayer->fields.bgmName;
}


bool BgmManager__get_IsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596FDCB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDCB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v3 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v3 )
    sub_2213CDC(0, v4);
  return BgmManager__IsLoadingLocal((BgmManager_o *)v3, 0, v5);
}


bool BgmManager__get_IsMute(const MethodInfo *method)
{
  __int64 v1; // x1
  BgmManager_c *v2; // x0

  if ( (byte_596FDD0 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_596FDD0 = 1;
  }
  v2 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v1);
    v2 = BgmManager_TypeInfo;
  }
  return v2->static_fields->isMute;
}


bool BgmManager__isLoading(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596FDD6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_596FDD6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v5, v6);
  return BgmManager__IsLoadingLocal((BgmManager_o *)Instance, name, v7);
}


void BgmManager__CoWaitSameAudioLoading_d__64___ctor(
        BgmManager__CoWaitSameAudioLoading_d__64_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BgmManager__CoWaitSameAudioLoading_d__64__MoveNext(
        BgmManager__CoWaitSameAudioLoading_d__64_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BgmManager_o *_4__this; // x21
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct BgmManager_o *v14; // x1
  struct System_String_o *bgmName; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2
  System_Func_bool__o *v23; // x21
  UnityEngine_WaitWhile_o *v24; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Action_o *finishCallback; // x0

  if ( (byte_596FE0C & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_BgmManager___c__DisplayClass64_0__CoWaitSameAudioLoading_b__0__);
    sub_2213A60(&BgmManager___c__DisplayClass64_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    byte_596FE0C = 1;
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
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v5 = sub_2213CCC(BgmManager___c__DisplayClass64_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !v5
      || (v14 = this->fields.__4__this,
          *(_QWORD *)(v5 + 16) = v14,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v14, v8, v9, v10, v11, v12, v13),
          bgmName = this->fields.bgmName,
          *(_QWORD *)(v5 + 24) = bgmName,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)bgmName, v16, v17, v18, v19, v20, v21),
          !_4__this) )
    {
      sub_2213CDC(v6, v7);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v5 + 24), v22) )
    {
      v23 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v23,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass64_0__CoWaitSameAudioLoading_b__0__,
        0);
      v24 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v24, v23, 0);
      this->fields.__2__current = (Il2CppObject *)v24;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v24, v26, v27, v28, v29, v30, v31);
      *((_DWORD *)p__2__current - 2) = 1;
      return 1;
    }
    finishCallback = this->fields.finishCallback;
    goto LABEL_11;
  }
  return 0;
}


Il2CppObject *BgmManager__CoWaitSameAudioLoading_d__64__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BgmManager__CoWaitSameAudioLoading_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BgmManager__CoWaitSameAudioLoading_d__64__System_Collections_IEnumerator_Reset(
        BgmManager__CoWaitSameAudioLoading_d__64_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BgmManager__CoWaitSameAudioLoading_d__64_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BgmManager__CoWaitSameAudioLoading_d__64__System_Collections_IEnumerator_get_Current(
        BgmManager__CoWaitSameAudioLoading_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BgmManager__CoWaitSameAudioLoading_d__64__System_IDisposable_Dispose(
        BgmManager__CoWaitSameAudioLoading_d__64_o *this,
        const MethodInfo *method)
{
  ;
}


void BgmManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596FE07 & 1) == 0 )
  {
    sub_2213A60(&BgmManager___c_TypeInfo);
    byte_596FE07 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BgmManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BgmManager___c_TypeInfo->static_fields->__9 = (struct BgmManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BgmManager___c_TypeInfo->static_fields,
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


bool BgmManager___c___FixedUpdate_b__80_0(BgmManager___c_o *this, GeneralBgmPlayer_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, (const MethodInfo *)x);
}


void BgmManager___c___FixedUpdate_b__80_1(BgmManager___c_o *this, GeneralBgmPlayer_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(GeneralBgmPlayer_o *, __int64, const MethodInfo *))x->klass->vtable._11_StopBgm.methodPtr)(
    x,
    1,
    x->klass->vtable._11_StopBgm.method);
}


void BgmManager___c___FixedUpdate_b__80_2(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._13_FixedUpdate.methodPtr)(
    x,
    x->klass->vtable._13_FixedUpdate.method);
}


void BgmManager___c___FixedUpdate_b__80_3(BgmManager___c_o *this, BgmPlayArgs_o *x, const MethodInfo *method)
{
  const MethodInfo_45E4A50 *v4; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x5
  System_Nullable_long__o v8; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_long__o v10; // 0:x0.16

  if ( (byte_596FE08 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_long___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    byte_596FE08 = 1;
  }
  fadeTime = 0;
  *(_QWORD *)&v8.fields.hasValue = 0;
  v8.fields.value = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&fadeTime,
    0.0,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  *(_QWORD *)&v10.fields.hasValue = &v8;
  v10.fields.value = 0;
  System_Nullable_long____ctor(v10, Method_System_Nullable_long___ctor__, v4);
  if ( !x )
    sub_2213CDC(v5, v6);
  BgmPlayArgs__Update(x, 0, fadeTime, v8, v7);
}


bool BgmManager___c___GetOrCreateSubBgmPlayerByChannel_b__89_1(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.bgmName == 0;
}


bool BgmManager___c___GetOrCreateSubBgmPlayer_b__73_1(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.bgmName == 0;
}


void BgmManager___c___InitializeLocal_b__51_0(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._5_Initialize.methodPtr)(
    x,
    x->klass->vtable._5_Initialize.method);
}


void BgmManager___c___ReflectMasterVolumeLocal_b__54_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._8_ReflectMasterVolume.methodPtr)(
    x,
    x->klass->vtable._8_ReflectMasterVolume.method);
}


void BgmManager___c___ResetLocal_b__52_0(BgmManager___c_o *this, BgmPlayerBase_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))x->klass->vtable._6_Reset.methodPtr)(
    x,
    x->klass->vtable._6_Reset.method);
}


System_String_o *BgmManager___c___StopUnrequestedSubBgm_b__70_0(
        BgmManager___c_o *this,
        SubBgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._BgmName_k__BackingField;
}


void BgmManager___c___StopUnrequestedSubBgm_b__70_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, const MethodInfo *))x->klass->vtable._11_StopBgm.methodPtr)(
    x,
    0,
    x->klass->vtable._11_StopBgm.method);
}


void BgmManager___c__55_object____cctor(const MethodInfo_3AFF2DC *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = (Il2CppObject *)sub_2213CCC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_224B908();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void BgmManager___c__55_object____ctor(BgmManager___c__55_T__o *this, const MethodInfo_3AFF3B4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__55_object____EnumeratePlayersHavingBgmName_b__55_0(
        BgmManager___c__55_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3AFF3BC *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x[1].monitor != 0;
}


void BgmManager___c__69_object____cctor(const MethodInfo_3AFF640 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = (Il2CppObject *)sub_2213CCC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_224B908();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void BgmManager___c__69_object____ctor(BgmManager___c__69_T__o *this, const MethodInfo_3AFF718 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__69_object____StopBgmLocal_b__69_0(
        BgmManager___c__69_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3AFF720 *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return ((bool (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))x->klass->vtable[11].methodPtr)(
           x,
           0,
           x->klass->vtable[11].method);
}


void BgmManager___c__77_object____cctor(const MethodInfo_3AFF740 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = (Il2CppObject *)sub_2213CCC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_224B908();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void BgmManager___c__77_object____ctor(BgmManager___c__77_T__o *this, const MethodInfo_3AFF818 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BgmPlayArgs_o *BgmManager___c__77_object____ExportPlayArgsGroupLocal_b__77_0(
        BgmManager___c__77_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3AFF820 *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return ((BgmPlayArgs_o *(__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[12].methodPtr)(
           x,
           x->klass->vtable[12].method);
}


void BgmManager___c__DisplayClass30_0___ctor(BgmManager___c__DisplayClass30_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass30_0___ChangePlayerVolume_b__0(
        BgmManager___c__DisplayClass30_0_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0);
}


void BgmManager___c__DisplayClass37_0___ctor(BgmManager___c__DisplayClass37_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass37_0___PlaySubBgm_b__0(
        BgmManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.ins )
    sub_2213CDC(this, method);
  BgmManager__PlayPreloadedBgm(this->fields.ins, (BgmPlayArgs_o *)this->fields.args, v2);
}


void BgmManager___c__DisplayClass53_0___ctor(BgmManager___c__DisplayClass53_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass53_0___SetMuteLocal_b__0(
        BgmManager___c__DisplayClass53_0_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, const MethodInfo *))x->klass->vtable._7_SetMute.methodPtr)(
    x,
    this->fields.isMute,
    x->klass->vtable._7_SetMute.method);
}


void BgmManager___c__DisplayClass55_0_object____ctor(
        BgmManager___c__DisplayClass55_0_T__o *this,
        const MethodInfo_3B05144 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass55_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass55_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3B0514C *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return System_String__op_Equality((System_String_o *)x[1].monitor, this->fields.bgmNameFilter, 0);
}


void BgmManager___c__DisplayClass58_0___ctor(BgmManager___c__DisplayClass58_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass58_0___PreloadAndPlayBgms_b__0(
        BgmManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BgmManager_o *_4__this; // x0
  MethodInfo *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct BgmPlayArgs_array *nonNullArgsAll; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x21

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  method = (const MethodInfo *)_4__this->fields.cacheArgsGroup;
  if ( method == (const MethodInfo *)this->fields.argsGroup )
  {
    BgmManager__StopUnrequestedSubBgm(_4__this, (BgmPlayArgsGroup_o *)method, v2);
    if ( this->fields.isPlay )
    {
      nonNullArgsAll = this->fields.nonNullArgsAll;
      if ( !nonNullArgsAll )
        goto LABEL_14;
      max_length = nonNullArgsAll->max_length;
      if ( (int)max_length >= 1 )
      {
        v13 = 0;
        while ( 1 )
        {
          if ( v13 >= (unsigned int)max_length )
            sub_2213CE4(_4__this);
          _4__this = this->fields.__4__this;
          if ( !_4__this )
            break;
          BgmManager__PlayPreloadedBgm(_4__this, nonNullArgsAll->m_Items[v13], v5);
          LODWORD(max_length) = nonNullArgsAll->max_length;
          if ( (__int64)++v13 >= (int)max_length )
            goto LABEL_10;
        }
LABEL_14:
        sub_2213CDC(_4__this, method);
      }
LABEL_10:
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_14;
      _4__this->fields.cacheArgsGroup = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&_4__this->fields.cacheArgsGroup,
        0,
        (System_String_o *)v5,
        v6,
        v7,
        v8,
        v9,
        v10);
    }
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BgmManager__RemoveUnusedOldFromBindList(_4__this, method);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void BgmManager___c__DisplayClass58_1___ctor(BgmManager___c__DisplayClass58_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass58_1___PreloadAndPlayBgms_b__1(
        BgmManager___c__DisplayClass58_1_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BgmManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct BgmPlayArgs_o *args; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (args = this->fields.args) == 0
    || (this = (BgmManager___c__DisplayClass58_1_o *)CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, callback);
  }
  BgmManager__PreloadBgm((BgmManager_o *)this, args->fields._BgmName_k__BackingField, callback, v3);
}


void BgmManager___c__DisplayClass62_0___ctor(BgmManager___c__DisplayClass62_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass62_0___PreloadBgm_b__0(
        BgmManager___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *cueName; // x1
  System_Collections_Generic_List_object__o *loadingBgmCueNameList; // x0
  Il2CppObject *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct BgmManager_o *_4__this; // x8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  __int64 v23; // x1
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596FE09 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_BgmManager___c__DisplayClass62_0__PreloadBgm_b__1__);
    byte_596FE09 = 1;
  }
  cueName = this->fields.cueName;
  this->fields.tempCueSheetName = cueName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)cueName, v2, v3, v4, v5, v6, v7);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.loadingBgmCueNameList) == 0
    || (items = loadingBgmCueNameList->fields._items,
        v11 = (Il2CppObject *)this->fields.cueName,
        v20 = Method_System_Collections_Generic_List_string__Add__,
        ++loadingBgmCueNameList->fields._version,
        !items) )
  {
    sub_2213CDC(loadingBgmCueNameList, v11);
  }
  size = loadingBgmCueNameList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      loadingBgmCueNameList,
      v11,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    loadingBgmCueNameList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass62_0__PreloadBgm_b__1__, 0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v26, v27, v28, v29, v30, v31);
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v23);
  SoundManager__loadAudioAssetStorage(tempCueSheetName, _9__1, 1, 0);
}


void BgmManager___c__DisplayClass62_0___PreloadBgm_b__1(
        BgmManager___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  BgmManager___c__DisplayClass62_0_o *v2; // x19
  struct BgmManager_o *_4__this; // x8
  struct BgmManager_o *v4; // x8
  struct BgmManager_o *v5; // x8

  v2 = this;
  if ( (byte_596FE0A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    this = (BgmManager___c__DisplayClass62_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_596FE0A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass62_0_o *)_4__this->fields.loadingBgmCueNameList;
  if ( !this )
    goto LABEL_14;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)this,
    (Il2CppObject *)v2->fields.cueName,
    (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass62_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass62_0_o *)SoundManager__GetCueSheet((SoundManager_o *)this, v2->fields.cueName, 0);
  if ( this )
  {
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass62_0_o *)v4->fields.addBindList;
    if ( !this )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass62_0_o *)System_Collections_Generic_List_object___Contains(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   (Il2CppObject *)v2->fields.cueName,
                                                   (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v5 = v2->fields.__4__this;
      if ( v5 )
      {
        this = (BgmManager___c__DisplayClass62_0_o *)v5->fields.addBindList;
        if ( this )
        {
          System_Collections_Generic_List_object___Insert(
            (System_Collections_Generic_List_object__o *)this,
            0,
            (Il2CppObject *)v2->fields.cueName,
            (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_2213CDC(this, method);
    }
  }
LABEL_13:
  ActionExtensions__Call(v2->fields.finishCallback, 0);
}


void BgmManager___c__DisplayClass64_0___ctor(BgmManager___c__DisplayClass64_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass64_0___CoWaitSameAudioLoading_b__0(
        BgmManager___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  return BgmManager__IsLoadingLocal(this->fields.__4__this, this->fields.bgmName, v2);
}


void BgmManager___c__DisplayClass68_0_object____ctor(
        BgmManager___c__DisplayClass68_0_T__o *this,
        const MethodInfo_3B0611C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass68_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass68_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3B06124 *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return ((bool (__fastcall *)(Il2CppObject *, const MethodInfo *, float))x->klass->vtable[10].methodPtr)(
           x,
           x->klass->vtable[10].method,
           this->fields.fadeoutTime);
}


void BgmManager___c__DisplayClass70_0___ctor(BgmManager___c__DisplayClass70_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass70_0___StopUnrequestedSubBgm_b__1(
        BgmManager___c__DisplayClass70_0_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  BgmManager___c__DisplayClass70_0_o *v4; // x20

  v4 = this;
  if ( (byte_596FE0B & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass70_0_o *)sub_2213A60(&Method_System_Array_IndexOf_string___);
    byte_596FE0B = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  return (unsigned int)System_Array__IndexOf_object_(
                         (System_Object_array *)v4->fields.subBgmNamesToPlay,
                         (Il2CppObject *)x->fields.bgmName,
                         (const MethodInfo_3A2E6EC *)Method_System_Array_IndexOf_string___) >> 31;
}


void BgmManager___c__DisplayClass71_0_object____ctor(
        BgmManager___c__DisplayClass71_0_T__o *this,
        const MethodInfo_3B076C4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass71_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass71_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3B076CC *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BgmPlayerBase__PauseBgm((BgmPlayerBase_o *)x, this->fields.isPause, 0);
}


void BgmManager___c__DisplayClass72_0___ctor(BgmManager___c__DisplayClass72_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass72_0___PlayJingleLocal_b__0(
        BgmManager___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  BgmManager_o *_4__this; // x0
  const MethodInfo *v4; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BgmManager_o *)BgmManager__GetOrCreateJinglePlayer(_4__this, method)) == 0 )
    sub_2213CDC(_4__this, method);
  JinglePlayer__PlayBgm(
    (JinglePlayer_o *)_4__this,
    this->fields.name,
    this->fields.volume,
    this->fields.callbackFunc,
    v4);
}


void BgmManager___c__DisplayClass73_0___ctor(BgmManager___c__DisplayClass73_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass73_0___GetOrCreateSubBgmPlayer_b__0(
        BgmManager___c__DisplayClass73_0_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0);
}


void BgmManager___c__DisplayClass83_0___ctor(BgmManager___c__DisplayClass83_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmManager___c__DisplayClass83_0___PlaySubBgmByChannel_b__0(
        BgmManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.ins )
    sub_2213CDC(this, method);
  BgmManager__PlayPreloadedSubBgmByChannel(this->fields.ins, this->fields.args, v2);
}


void BgmManager___c__DisplayClass88_0___ctor(BgmManager___c__DisplayClass88_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass88_0___GetSubBgmPlayerByChannel_b__0(
        BgmManager___c__DisplayClass88_0_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return System_String__op_Equality(x->fields.channelName, this->fields.channelName, 0);
}


void BgmManager___c__DisplayClass89_0___ctor(BgmManager___c__DisplayClass89_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmManager___c__DisplayClass89_0___GetOrCreateSubBgmPlayerByChannel_b__0(
        BgmManager___c__DisplayClass89_0_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return System_String__op_Equality(x->fields.channelName, this->fields.channelName, 0);
}