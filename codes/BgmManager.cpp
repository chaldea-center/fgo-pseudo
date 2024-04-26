void __fastcall BgmManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct BgmManager_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1
  struct BgmManager_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BgmManager_c *v17; // x8

  if ( (byte_43512AB & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&StringLiteral_2612/*"BGM_CHALDEA_1"*/);
    sub_B70694(&StringLiteral_2613/*"BGM_CHALDEA_2"*/);
    byte_43512AB = 1;
  }
  BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME = 1.0;
  BgmManager_TypeInfo->static_fields->LOW_VOLUME = 0.1;
  static_fields = BgmManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_2612/*"BGM_CHALDEA_1"*/;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_2612/*"BGM_CHALDEA_1"*/;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = BgmManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2613/*"BGM_CHALDEA_2"*/;
  v9->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_2613/*"BGM_CHALDEA_2"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = BgmManager_TypeInfo;
  BgmManager_TypeInfo->static_fields->ADD_BIND_MAX = 5;
  v17->static_fields->isMute = 0;
  v17->static_fields->masterVolume = 1.0;
}


void __fastcall BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_43512AA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager___ctor__);
    byte_43512AA = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.addBindList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.loadingBgmCueNameList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bgmPlayers,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void __fastcall BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o *Instance; // x20
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *monitor; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x21
  BgmPlayerBase_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4351282 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_BgmPlayerBase___ctor__);
    sub_B70694(&System_Predicate_BgmPlayerBase__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_B70694(&Method_BgmManager___c__DisplayClass28_0__ChangePlayerVolume_b__0__);
    sub_B70694(&BgmManager___c__DisplayClass28_0_TypeInfo);
    byte_4351282 = 1;
  }
  v5 = sub_B70764(BgmManager___c__DisplayClass28_0_TypeInfo);
  BgmManager___c__DisplayClass28_0___ctor((BgmManager___c__DisplayClass28_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)bgmName, v8, v9, v10, v11, v12, v13);
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( Instance )
    {
      monitor = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)Instance[2].monitor;
      v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BgmPlayerBase__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v16,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass28_0__ChangePlayerVolume_b__0__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_BgmPlayerBase___ctor__);
      if ( monitor )
      {
        v17 = (BgmPlayerBase_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   monitor,
                                   (System_Predicate_T__o *)v16,
                                   (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v17 )
        {
          v17->fields.bgmVolume = volume;
          BgmPlayerBase__UpdateVolume(v17, v18);
        }
        return;
      }
    }
LABEL_13:
    sub_B7076C(v6, v7);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_435129E & 1) == 0 )
  {
    sub_B70694(&BgmManager__CoWaitSameAudioLoading_d__60_TypeInfo);
    byte_435129E = 1;
  }
  v7 = sub_B70764(BgmManager__CoWaitSameAudioLoading_d__60_TypeInfo);
  BgmManager__CoWaitSameAudioLoading_d__60___ctor((BgmManager__CoWaitSameAudioLoading_d__60_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)bgmName, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)finishCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BgmManager__Enable_KeepSubBgm(bool value, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int v6; // w9
  int v7; // w8

  if ( (byte_4351295 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4351295 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B7076C(v4, v5);
    if ( value )
      v6 = 1;
    else
      v6 = -1;
    v7 = Instance[2].fields.m_CachedPtr + v6;
    if ( (~(v7 >> 31) & 7) == 0 )
      v7 = 0;
    Instance[2].fields.m_CachedPtr = v7;
  }
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BgmManager__EnumeratePlayersHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_1BE1044 *method)
{
  Il2CppClass *_0_BgmManager___c__DisplayClass53_0_T; // x21
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x22
  __int64 v17; // x0
  const MethodInfo_1BE1044_RGCTXs *rgctx_data; // x8
  __int64 v19; // x20
  Il2CppClass *_5_System_Func_T__bool; // x22
  __int64 v21; // x22
  const MethodInfo_1BE1044_RGCTXs *v22; // x8
  __int64 v23; // x0
  __int64 v24; // x1
  Il2CppClass *_3_BgmManager___c__53_T; // x21
  __int16 v26; // w8
  Il2CppClass *v27; // x21
  Il2CppClass *v28; // x21
  Il2CppClass *v29; // x21
  System_Int32_array **v30; // x21
  Il2CppClass *v31; // x21
  __int16 v32; // w8
  Il2CppClass *v33; // x21
  Il2CppClass *v34; // x21
  const MethodInfo_1BE1044_RGCTXs *v35; // x8
  Il2CppClass *v36; // x21
  Il2CppClass *v37; // x23
  __int64 v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  Il2CppClass *v45; // x22
  char *static_fields; // x0

  _0_BgmManager___c__DisplayClass53_0_T = method->rgctx_data->_0_BgmManager___c__DisplayClass53_0_T_;
  if ( (BYTE2(_0_BgmManager___c__DisplayClass53_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_BgmManager___c__DisplayClass53_0_T_);
  v7 = sub_B70764(_0_BgmManager___c__DisplayClass53_0_T);
  v8 = ((__int64 (*)(void))method->rgctx_data->_1_BgmManager___c__DisplayClass53_0_T___ctor->methodPointer)();
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 16) = bgmNameFilter;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 16),
    (System_Int32_array **)bgmNameFilter,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = *(_QWORD *)(v7 + 16);
  v17 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_BgmPlayerBase__o *))method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_->methodPointer)(this->fields.bgmPlayers);
  rgctx_data = method->rgctx_data;
  v19 = v17;
  if ( v16 )
  {
    _5_System_Func_T__bool = rgctx_data->_5_System_Func_T__bool_;
    if ( (BYTE2(_5_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(_5_System_Func_T__bool);
    v21 = sub_B70764(_5_System_Func_T__bool);
    ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_6_System_Func_T__bool___ctor->methodPointer)(
      v21,
      v7,
      method->rgctx_data->_8_BgmManager___c__DisplayClass53_0_T___EnumeratePlayersHavingBgmName_b__1);
    v22 = method->rgctx_data;
    v23 = v19;
    v24 = v21;
  }
  else
  {
    _3_BgmManager___c__53_T = rgctx_data->_3_BgmManager___c__53_T_;
    v26 = WORD1(_3_BgmManager___c__53_T->vtable[0].methodPtr);
    if ( (v26 & 1) == 0 )
    {
      sub_B08394(_3_BgmManager___c__53_T);
      v26 = WORD1(_3_BgmManager___c__53_T->vtable[0].methodPtr);
    }
    if ( (v26 & 0x400) != 0 )
    {
      v27 = method->rgctx_data->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v27->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_3_BgmManager___c__53_T_);
      if ( !v27->_2.cctor_finished )
      {
        v28 = method->rgctx_data->_3_BgmManager___c__53_T_;
        if ( (BYTE2(v28->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->rgctx_data->_3_BgmManager___c__53_T_);
        j_il2cpp_runtime_class_init_0(v28);
      }
    }
    v29 = method->rgctx_data->_3_BgmManager___c__53_T_;
    if ( (BYTE2(v29->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_3_BgmManager___c__53_T_);
    v30 = (System_Int32_array **)*((_QWORD *)v29->static_fields + 1);
    if ( !v30 )
    {
      v31 = method->rgctx_data->_3_BgmManager___c__53_T_;
      v32 = WORD1(v31->vtable[0].methodPtr);
      if ( (v32 & 1) == 0 )
      {
        sub_B08394(method->rgctx_data->_3_BgmManager___c__53_T_);
        v32 = WORD1(v31->vtable[0].methodPtr);
      }
      if ( (v32 & 0x400) != 0 )
      {
        v33 = method->rgctx_data->_3_BgmManager___c__53_T_;
        if ( (BYTE2(v33->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->rgctx_data->_3_BgmManager___c__53_T_);
        if ( !v33->_2.cctor_finished )
        {
          v34 = method->rgctx_data->_3_BgmManager___c__53_T_;
          if ( (BYTE2(v34->vtable[0].methodPtr) & 1) == 0 )
            sub_B08394(method->rgctx_data->_3_BgmManager___c__53_T_);
          j_il2cpp_runtime_class_init_0(v34);
        }
      }
      v35 = method->rgctx_data;
      v36 = v35->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v36->vtable[0].methodPtr) & 1) == 0 )
      {
        sub_B08394(v35->_3_BgmManager___c__53_T_);
        v35 = method->rgctx_data;
      }
      v37 = v35->_5_System_Func_T__bool_;
      v38 = *(_QWORD *)v36->static_fields;
      if ( (BYTE2(v37->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(v37);
      v30 = (System_Int32_array **)sub_B70764(v37);
      ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_6_System_Func_T__bool___ctor->methodPointer)(
        v30,
        v38,
        method->rgctx_data->_4_BgmManager___c__53_T___EnumeratePlayersHavingBgmName_b__53_0);
      v45 = method->rgctx_data->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v45->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_3_BgmManager___c__53_T_);
      static_fields = (char *)v45->static_fields;
      *((_QWORD *)static_fields + 1) = v30;
      sub_B70630((BattleServantConfConponent_o *)(static_fields + 8), v30, v39, v40, v41, v42, v43, v44);
    }
    v22 = method->rgctx_data;
    v23 = v19;
    v24 = (__int64)v30;
  }
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(__int64, __int64))v22->_7_System_Linq_Enumerable_Where_T_->methodPointer)(
                                                          v23,
                                                          v24);
}


bool __fastcall BgmManager__ExistsPlayerHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_1BE12AC *method)
{
  __int64 v4; // x0

  if ( !this )
    sub_B7076C(0LL, bgmNameFilter);
  v4 = ((__int64 (__fastcall *)(BgmManager_o *, System_String_o *))method->rgctx_data->_0_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
         this,
         bgmNameFilter);
  return ((__int64 (__fastcall *)(__int64))method->rgctx_data->_1_System_Linq_Enumerable_Any_T_->methodPointer)(v4);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_435127A & 1) == 0 )
  {
    sub_B70694(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_435127A = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v2 )
    return 0LL;
  if ( !Instance )
    sub_B7076C(v2, v3);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_1BE12EC *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroupLocal_object_(
        BgmManager_o *this,
        const MethodInfo_1BE12EC *method)
{
  BgmManager_o *v3; // x20
  __int64 v4; // x20
  long double v5; // q0
  Il2CppClass *_1_BgmManager___c__73_T; // x21
  __int16 v7; // w8
  Il2CppClass *v8; // x21
  Il2CppClass *v9; // x21
  Il2CppClass *v10; // x21
  System_Int32_array **v11; // x21
  Il2CppClass *v12; // x21
  __int16 v13; // w8
  Il2CppClass *v14; // x21
  Il2CppClass *v15; // x21
  const MethodInfo_1BE12EC_RGCTXs *rgctx_data; // x8
  Il2CppClass *v17; // x21
  Il2CppClass *_3_System_Func_T__BgmPlayArgs; // x23
  __int64 v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  Il2CppClass *v26; // x22
  char *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  BgmPlayArgs_array *v29; // x19
  BgmPlayArgsGroup_o *v30; // x20

  v3 = this;
  if ( (byte_4353FAA & 1) == 0 )
  {
    sub_B70694(&BgmPlayArgsGroup_TypeInfo);
    this = (BgmManager_o *)sub_B70694(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    byte_4353FAA = 1;
  }
  if ( !v3 )
    sub_B7076C(this, method);
  v4 = ((__int64 (__fastcall *)(BgmManager_o *, _QWORD))method->rgctx_data->_0_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
         v3,
         0LL);
  _1_BgmManager___c__73_T = method->rgctx_data->_1_BgmManager___c__73_T_;
  v7 = WORD1(_1_BgmManager___c__73_T->vtable[0].methodPtr);
  if ( (v7 & 1) == 0 )
  {
    sub_B08394(method->rgctx_data->_1_BgmManager___c__73_T_);
    v7 = WORD1(_1_BgmManager___c__73_T->vtable[0].methodPtr);
  }
  if ( (v7 & 0x400) != 0 )
  {
    v8 = method->rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v8->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_1_BgmManager___c__73_T_);
    if ( !v8->_2.cctor_finished )
    {
      v9 = method->rgctx_data->_1_BgmManager___c__73_T_;
      if ( (BYTE2(v9->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_BgmManager___c__73_T_);
      *(__n128 *)&v5 = j_il2cpp_runtime_class_init_0(v9);
    }
  }
  v10 = method->rgctx_data->_1_BgmManager___c__73_T_;
  if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_1_BgmManager___c__73_T_);
  v11 = (System_Int32_array **)*((_QWORD *)v10->static_fields + 1);
  if ( !v11 )
  {
    v12 = method->rgctx_data->_1_BgmManager___c__73_T_;
    v13 = WORD1(v12->vtable[0].methodPtr);
    if ( (v13 & 1) == 0 )
    {
      sub_B08394(method->rgctx_data->_1_BgmManager___c__73_T_);
      v13 = WORD1(v12->vtable[0].methodPtr);
    }
    if ( (v13 & 0x400) != 0 )
    {
      v14 = method->rgctx_data->_1_BgmManager___c__73_T_;
      if ( (BYTE2(v14->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_BgmManager___c__73_T_);
      if ( !v14->_2.cctor_finished )
      {
        v15 = method->rgctx_data->_1_BgmManager___c__73_T_;
        if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->rgctx_data->_1_BgmManager___c__73_T_);
        j_il2cpp_runtime_class_init_0(v15);
      }
    }
    rgctx_data = method->rgctx_data;
    v17 = rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_B08394(rgctx_data->_1_BgmManager___c__73_T_);
      rgctx_data = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = rgctx_data->_3_System_Func_T__BgmPlayArgs_;
    v19 = *(_QWORD *)v17->static_fields;
    if ( (BYTE2(_3_System_Func_T__BgmPlayArgs->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(_3_System_Func_T__BgmPlayArgs);
    v11 = (System_Int32_array **)sub_B70764(_3_System_Func_T__BgmPlayArgs);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__BgmPlayArgs___ctor->methodPointer)(
      v11,
      v19,
      method->rgctx_data->_2_BgmManager___c__73_T___ExportPlayArgsGroupLocal_b__73_0);
    v26 = method->rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v26->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_1_BgmManager___c__73_T_);
    static_fields = (char *)v26->static_fields;
    *((_QWORD *)static_fields + 1) = v11;
    sub_B70630((BattleServantConfConponent_o *)(static_fields + 8), v11, v20, v21, v22, v23, v24, v25);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, System_Int32_array **, long double))method->rgctx_data->_5_System_Linq_Enumerable_Select_T__BgmPlayArgs_->methodPointer)(
                                                               v4,
                                                               v11,
                                                               v5);
  v29 = (BgmPlayArgs_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                               v28,
                               (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v30 = (BgmPlayArgsGroup_o *)sub_B70764(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_24051708(v30, v29, 0LL);
  return v30;
}


System_String_o *__fastcall BgmManager__ExtractCueName(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  __int64 v6; // x8
  __int64 v8; // x0

  if ( (byte_43512A1 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    byte_43512A1 = 1;
  }
  v4 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  v4->m_Items[2] = 47;
  if ( !name || (v4 = (System_Char_array *)System_String__Split(name, v4, 0LL)) == 0LL )
LABEL_9:
    sub_B7076C(v4, v5);
  v6 = *(_QWORD *)&v4->max_length;
  if ( !(_DWORD)v6 )
  {
LABEL_10:
    v8 = sub_B70798(v4);
    sub_B70738(v8, 0LL);
  }
  return *(System_String_o **)((char *)&v4->m_Items[2] + (((v6 << 32) - 0x100000000LL) >> 29));
}


void __fastcall BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_435128A & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_435128A = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopBgm(0LL, fadeoutTime, callback, v3);
}


bool __fastcall BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        float fadeoutTime,
        System_String_o *name,
        const MethodInfo_1BE1528 *method)
{
  Il2CppClass *_0_BgmManager___c__DisplayClass64_0_T; // x22
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  Il2CppClass *_4_System_Func_T__bool; // x21
  __int64 v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4353FAB & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_bool___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_bool___);
    byte_4353FAB = 1;
  }
  _0_BgmManager___c__DisplayClass64_0_T = method->rgctx_data->_0_BgmManager___c__DisplayClass64_0_T_;
  if ( (BYTE2(_0_BgmManager___c__DisplayClass64_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_BgmManager___c__DisplayClass64_0_T_);
  v9 = sub_B70764(_0_BgmManager___c__DisplayClass64_0_T);
  v10 = ((__int64 (*)(void))method->rgctx_data->_1_BgmManager___c__DisplayClass64_0_T___ctor->methodPointer)();
  if ( !v9 || (*(float *)(v9 + 16) = fadeoutTime, !this) )
    sub_B7076C(v10, v11);
  v12 = ((__int64 (__fastcall *)(BgmManager_o *, System_String_o *))method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
          this,
          name);
  _4_System_Func_T__bool = method->rgctx_data->_4_System_Func_T__bool_;
  if ( (BYTE2(_4_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_4_System_Func_T__bool_);
  v14 = sub_B70764(_4_System_Func_T__bool);
  ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_5_System_Func_T__bool___ctor->methodPointer)(
    v14,
    v9,
    method->rgctx_data->_3_BgmManager___c__DisplayClass64_0_T___FadeoutBgmLocal_b__0);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, __int64))method->rgctx_data->_6_System_Linq_Enumerable_Select_T__bool_->methodPointer)(
                                                               v12,
                                                               v14);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v15,
                                                               (const MethodInfo_1CC844C *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v16, (const MethodInfo_1CA85E8 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4351293 & 1) == 0 )
  {
    sub_B70694(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4351293 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B7076C(v4, v5);
    BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0LL,
      (const MethodInfo_1BE1528 *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4351296 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4351296 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_B7076C(v2, v3);
    Instance[2].fields.m_CachedPtr = 0;
  }
}


CriAtomSource_o *__fastcall BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_43512A6 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
    byte_43512A6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v4);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                              gameObject,
                              (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t __fastcall BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  SoundManager_o *Instance; // x0
  __int64 v4; // x1
  System_String_o *CueSheet; // x19
  SoundManager_c *v6; // x8

  if ( (byte_435127C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_435127C = 1;
  }
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CueSheet = SoundManager__GetCueSheet(Instance, name, 0LL);
  v6 = SoundManager_TypeInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v6 = SoundManager_TypeInfo;
  }
  return System_String__op_Equality(CueSheet, v6->static_fields->RESIDENT_RESOURCE_SOUND_NAME, 0LL);
}


System_String_o *__fastcall BgmManager__GetBgmName(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x19
  __int64 v2; // x1
  bool v3; // w8
  System_String_o *result; // x0
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_435128E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_435128E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v3 )
  {
    if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
      sub_B7076C(0LL, v2);
    return *(System_String_o **)&webViewBase->fields.m_CachedPtr;
  }
  return result;
}


System_String_o *__fastcall BgmManager__GetMainBgmName(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1
  TerminalOverwriteMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o **p_COSMOS_IN_THE_LOSTBELT_BGM_NAME; // x19
  int32_t UiFlag; // w19
  System_Collections_ICollection_o *ClearWarIdList; // x20
  BalanceConfig_c *v7; // x0
  BalanceConfig_c *v8; // x0
  BgmManager_c *v9; // x0
  System_String_o *bgmName; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43512A9 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43512A9 = 1;
  }
  bgmName = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  MasterData_WarQuestSelectionMaster = (TerminalOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( !MasterData_WarQuestSelectionMaster
    || (p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &bgmName,
        !TerminalOverwriteMaster__TryGetOverwriteMainBgmName(MasterData_WarQuestSelectionMaster, &bgmName, 0LL)) )
  {
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    UiFlag = ServantCommentManager__GetUiFlag(0LL);
    ClearWarIdList = (System_Collections_ICollection_o *)ServantCommentManager__GetClearWarIdList(0LL);
    if ( BasicHelper__IsNullOrEmpty(ClearWarIdList, 0LL) )
      goto LABEL_18;
    v7 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
            v7->static_fields->OrdealCallWarId,
            (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
LABEL_18:
      v9 = BgmManager_TypeInfo;
      if ( UiFlag == 1 )
      {
        if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          v9 = BgmManager_TypeInfo;
        }
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v9->static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
      }
      else
      {
        if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          v9 = BgmManager_TypeInfo;
        }
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v9->static_fields->DEFAULT_MAIN_BGM_NAME;
      }
    }
    else
    {
      v8 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4351280 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_4351280 = 1;
  }
  v1 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v1 = BgmManager_TypeInfo;
  }
  return v1->static_fields->masterVolume;
}


JinglePlayer_o *__fastcall BgmManager__GetOrCreateJinglePlayer(BgmManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *jinglePlayer; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  struct JinglePlayer_o **p_jinglePlayer; // x20
  JinglePlayer_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v16; // x0

  if ( (byte_43512A5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_OfType_JinglePlayer___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
    sub_B70694(&JinglePlayer_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    byte_43512A5 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  jinglePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(v3, (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !jinglePlayer )
    goto LABEL_11;
  v6 = *(_QWORD *)&jinglePlayer->fields._size;
  if ( !v6 )
  {
    v8 = (JinglePlayer_o *)sub_B70764(JinglePlayer_TypeInfo);
    JinglePlayer___ctor(v8, 0LL);
    this->fields.jinglePlayer = v8;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.jinglePlayer,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    jinglePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.jinglePlayer;
    if ( jinglePlayer )
    {
      ((void (__fastcall *)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, Il2CppMethodPointer))jinglePlayer->klass->vtable._5_set_Item.method)(
        jinglePlayer,
        jinglePlayer->klass->vtable._6_IndexOf.methodPtr);
      jinglePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.bgmPlayers;
      if ( jinglePlayer )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          jinglePlayer,
          (EventMissionProgressRequest_Argument_ProgressData_o *)*p_jinglePlayer,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
        return *p_jinglePlayer;
      }
    }
LABEL_11:
    sub_B7076C(jinglePlayer, v5);
  }
  if ( !(_DWORD)v6 )
  {
    v16 = sub_B70798(jinglePlayer);
    sub_B70738(v16, 0LL);
  }
  p_jinglePlayer = (struct JinglePlayer_o **)&jinglePlayer->fields._syncRoot;
  return *p_jinglePlayer;
}


SubBgmPlayer_o *__fastcall BgmManager__GetOrCreateSubBgmPlayer(
        BgmManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *bgmPlayers; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v15; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x22
  SubBgmPlayer_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  BgmManager___c_c *v18; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__69_1; // x21
  Il2CppObject *v21; // x22
  struct BgmManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_43512A4 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Find_SubBgmPlayer___);
    sub_B70694(&Method_System_Linq_Enumerable_First_SubBgmPlayer___);
    sub_B70694(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
    sub_B70694(&Method_System_Func_SubBgmPlayer__bool___ctor__);
    sub_B70694(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_B70694(&SubBgmPlayer_TypeInfo);
    sub_B70694(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__69_1__);
    sub_B70694(&Method_BgmManager___c__DisplayClass69_0__GetOrCreateSubBgmPlayer_b__0__);
    sub_B70694(&BgmManager___c__DisplayClass69_0_TypeInfo);
    sub_B70694(&BgmManager___c_TypeInfo);
    byte_43512A4 = 1;
  }
  v5 = sub_B70764(BgmManager___c__DisplayClass69_0_TypeInfo);
  BgmManager___c__DisplayClass69_0___ctor((BgmManager___c__DisplayClass69_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = bgmName;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)bgmName, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v15 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                            v14,
                                                                                            (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BgmManager___c__DisplayClass69_0__GetOrCreateSubBgmPlayer_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                       v15,
                                                                                       (System_Func_T__bool__o *)v16,
                                                                                       (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    v18 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v18 = BgmManager___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__69_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__69_1;
    if ( !_9__69_1 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__69_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_SubBgmPlayer__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__69_1,
        v21,
        Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__69_1__,
        (const MethodInfo_29AC578 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
      v22 = BgmManager___c_TypeInfo->static_fields;
      v22->__9__69_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__69_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v22->__9__69_1,
        (System_Int32_array **)_9__69_1,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    bgmPlayers = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(v15, (System_Func_T__bool__o *)_9__69_1, (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_SubBgmPlayer___);
    USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)bgmPlayers;
    if ( !bgmPlayers )
    {
      if ( v15 )
      {
        if ( (int)v15->max_length > 1 )
          return (SubBgmPlayer_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                     (const MethodInfo_1CBB6E4 *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)sub_B70764(SubBgmPlayer_TypeInfo);
        SubBgmPlayer___ctor(USFGOActorBattleActionEventConditional_OverwriteParamCondition, 0LL);
        if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
        {
          ((void (__fastcall *)(SubBgmPlayer_o *, Il2CppMethodPointer))USFGOActorBattleActionEventConditional_OverwriteParamCondition->klass->vtable._5_Initialize.method)(
            USFGOActorBattleActionEventConditional_OverwriteParamCondition,
            USFGOActorBattleActionEventConditional_OverwriteParamCondition->klass->vtable._6_Reset.methodPtr);
          bgmPlayers = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.bgmPlayers;
          if ( bgmPlayers )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              bgmPlayers,
              (EventMissionProgressRequest_Argument_ProgressData_o *)USFGOActorBattleActionEventConditional_OverwriteParamCondition,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
            return USFGOActorBattleActionEventConditional_OverwriteParamCondition;
          }
        }
      }
LABEL_21:
      sub_B7076C(bgmPlayers, v7);
    }
  }
  return USFGOActorBattleActionEventConditional_OverwriteParamCondition;
}


void __fastcall BgmManager__Initialize(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_435127B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_435127B = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_B7076C(v2, v3);
    BgmManager__InitializeLocal((BgmManager_o *)Instance, v3);
  }
}


void __fastcall BgmManager__InitializeLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x20
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *bgmPlayers; // x19
  MainBgmPlayer_o *v4; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  void *addBindList; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x20
  Il2CppObject *v13; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BgmManager_c *v21; // x0

  v2 = this;
  if ( (byte_4351297 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BgmPlayerBase___ctor__);
    sub_B70694(&System_Action_BgmPlayerBase__TypeInfo);
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_B70694(&MainBgmPlayer_TypeInfo);
    sub_B70694(&Method_BgmManager___c__InitializeLocal_b__49_0__);
    this = (BgmManager_o *)sub_B70694(&BgmManager___c_TypeInfo);
    byte_4351297 = 1;
  }
  bgmPlayers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_20;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v4 = (MainBgmPlayer_o *)sub_B70764(MainBgmPlayer_TypeInfo);
    MainBgmPlayer___ctor(v4, 0LL);
    v2->fields.mainBgmPlayer = v4;
    sub_B70630(
      (BattleServantConfConponent_o *)&v2->fields.mainBgmPlayer,
      (System_Int32_array **)v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    this = (BgmManager_o *)v2->fields.bgmPlayers;
    if ( !this )
      goto LABEL_20;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v2->fields.mainBgmPlayer,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    bgmPlayers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v2->fields.bgmPlayers;
  }
  this = (BgmManager_o *)BgmManager___c_TypeInfo;
  if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
  }
  addBindList = this[2].fields.addBindList;
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)addBindList + 1);
  if ( !v12 )
  {
    if ( (this[3].fields.enableCounter_KeepSubBgm & 0x4000000) != 0 && !this[2].fields.enableCounter_KeepSubBgm )
    {
      j_il2cpp_runtime_class_init_0(this);
      addBindList = BgmManager___c_TypeInfo->static_fields;
    }
    v13 = *(Il2CppObject **)addBindList;
    v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v12,
      v13,
      Method_BgmManager___c__InitializeLocal_b__49_0__,
      (const MethodInfo_264C148 *)Method_System_Action_BgmPlayerBase___ctor__);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Action_BgmPlayerBase__o *)v12;
    sub_B70630(
      (BattleServantConfConponent_o *)&static_fields->__9__49_0,
      (System_Int32_array **)v12,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !bgmPlayers )
LABEL_20:
    sub_B7076C(this, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v12,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v21 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v21);
}


bool __fastcall BgmManager__IsKeepSubBgm(BgmManager_o *this, const MethodInfo *method)
{
  return this->fields.enableCounter_KeepSubBgm > 0;
}


bool __fastcall BgmManager__IsLoadingLocal(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  BgmManager_o *v4; // x19
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadingBgmCueNameList; // x8
  struct System_Collections_Generic_List_string__o *v7; // x8

  v4 = this;
  if ( (byte_43512A0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    this = (BgmManager_o *)sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_43512A0 = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
               loadingBgmCueNameList,
               (WarBoardManager_TaskList_o *)this,
               (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_B7076C(this, name);
  }
  v7 = v4->fields.loadingBgmCueNameList;
  if ( !v7 )
    goto LABEL_8;
  return v7->fields._size > 0;
}


bool __fastcall BgmManager__IsPlayBgm(System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4351283 & 1) == 0 )
  {
    sub_B70694(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4351283 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_B7076C(v4, v5);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_1BE12AC *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool __fastcall BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_435128F & 1) == 0 )
  {
    sub_B70694(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_435128F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_B7076C(v4, v5);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_1BE12AC *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool __fastcall BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  BgmManager_o *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0
  __int64 v7; // x1

  if ( (byte_435129F & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_435129F = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName(Instance, bgmName, v5);
  if ( !Instance )
    sub_B7076C(CueName, v7);
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0LL) != 0LL;
}


void __fastcall BgmManager__LateUpdate(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x19
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  BgmPlayerBase_o *jinglePlayer; // x0
  bool IsPlaying; // w0
  int v6; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  BgmManager___c_c *v8; // x8
  struct BgmManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__75_0; // x21
  Il2CppObject *v11; // x22
  struct BgmManager___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  _BOOL4 v19; // w0
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  BgmManager___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_T__o *v22; // x20
  struct BgmManager___c_StaticFields *v23; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__75_1; // x21
  Il2CppObject *v25; // x22
  struct BgmManager___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BgmManager_o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x21
  BgmManager___c_c *v36; // x0
  struct BgmManager___c_StaticFields *v37; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__75_3; // x22
  Il2CppObject *v39; // x23
  struct BgmManager___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x2
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v48; // x19
  void *addBindList; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v50; // x20
  Il2CppObject *v51; // x21
  struct BgmManager___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  v2 = this;
  if ( (byte_43512A8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_GeneralBgmPlayer___ctor__);
    sub_B70694(&Method_System_Action_BgmPlayerBase___ctor__);
    sub_B70694(&Method_System_Action_BgmPlayArgs___ctor__);
    sub_B70694(&System_Action_BgmPlayArgs__TypeInfo);
    sub_B70694(&System_Action_BgmPlayerBase__TypeInfo);
    sub_B70694(&System_Action_GeneralBgmPlayer__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_BgmPlayArgs___);
    sub_B70694(&Method_BasicHelper_ForEach_GeneralBgmPlayer___);
    sub_B70694(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
    sub_B70694(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
    sub_B70694(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    sub_B70694(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_B70694(&Method_System_Func_GeneralBgmPlayer__bool___ctor__);
    sub_B70694(&System_Func_GeneralBgmPlayer__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__);
    sub_B70694(&Method_BgmManager___c__LateUpdate_b__75_0__);
    sub_B70694(&Method_BgmManager___c__LateUpdate_b__75_1__);
    sub_B70694(&Method_BgmManager___c__LateUpdate_b__75_2__);
    sub_B70694(&Method_BgmManager___c__LateUpdate_b__75_3__);
    this = (BgmManager_o *)sub_B70694(&BgmManager___c_TypeInfo);
    byte_43512A8 = 1;
  }
  bgmPlayers = v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_57;
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
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                (System_Collections_IEnumerable_o *)bgmPlayers,
                                                                (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    v8 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v8 = BgmManager___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__75_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__75_0;
    if ( !_9__75_0 )
    {
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__75_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_GeneralBgmPlayer__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__75_0,
        v11,
        Method_BgmManager___c__LateUpdate_b__75_0__,
        (const MethodInfo_29AC578 *)Method_System_Func_GeneralBgmPlayer__bool___ctor__);
      v12 = BgmManager___c_TypeInfo->static_fields;
      v12->__9__75_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__75_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v12->__9__75_0,
        (System_Int32_array **)_9__75_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    v19 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
            v7,
            (System_Func_TSource__bool__o *)_9__75_0,
            (const MethodInfo_1CAA848 *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v6 & v19) != 0 )
    {
      v20 = System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
              (System_Collections_IEnumerable_o *)v2->fields.bgmPlayers,
              (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
      v21 = BgmManager___c_TypeInfo;
      v22 = (System_Collections_Generic_IEnumerable_T__o *)v20;
      if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BgmManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
        v21 = BgmManager___c_TypeInfo;
      }
      v23 = v21->static_fields;
      _9__75_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v23->__9__75_1;
      if ( !_9__75_1 )
      {
        if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v23 = BgmManager___c_TypeInfo->static_fields;
        }
        v25 = (Il2CppObject *)v23->__9;
        _9__75_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_GeneralBgmPlayer__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__75_1,
          v25,
          Method_BgmManager___c__LateUpdate_b__75_1__,
          (const MethodInfo_264C148 *)Method_System_Action_GeneralBgmPlayer___ctor__);
        v26 = BgmManager___c_TypeInfo->static_fields;
        v26->__9__75_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__75_1;
        sub_B70630(
          (BattleServantConfConponent_o *)&v26->__9__75_1,
          (System_Int32_array **)_9__75_1,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v22,
        (System_Action_T__o *)_9__75_1,
        (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v2->fields.isBgmStopJingle = 1;
      if ( v6 )
      {
LABEL_47:
        this = (BgmManager_o *)BgmManager___c_TypeInfo;
        v48 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v2->fields.bgmPlayers;
        if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BgmManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
          this = (BgmManager_o *)BgmManager___c_TypeInfo;
        }
        addBindList = this[2].fields.addBindList;
        v50 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)addBindList + 10);
        if ( !v50 )
        {
          if ( (this[3].fields.enableCounter_KeepSubBgm & 0x4000000) != 0 && !this[2].fields.enableCounter_KeepSubBgm )
          {
            j_il2cpp_runtime_class_init_0(this);
            addBindList = BgmManager___c_TypeInfo->static_fields;
          }
          v51 = *(Il2CppObject **)addBindList;
          v50 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BgmPlayerBase__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v50,
            v51,
            Method_BgmManager___c__LateUpdate_b__75_2__,
            (const MethodInfo_264C148 *)Method_System_Action_BgmPlayerBase___ctor__);
          v52 = BgmManager___c_TypeInfo->static_fields;
          v52->__9__75_2 = (struct System_Action_BgmPlayerBase__o *)v50;
          sub_B70630(
            (BattleServantConfConponent_o *)&v52->__9__75_2,
            (System_Int32_array **)v50,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
        }
        if ( v48 )
        {
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            v48,
            (System_Action_T__o *)v50,
            (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
          return;
        }
LABEL_57:
        sub_B7076C(this, method);
      }
    }
    else
    {
      if ( !v19
        && v6 == 0
        && v2->fields.isBgmStopJingle
        && BgmManager__ExistsPlayerHavingBgmName_object_(
             v2,
             0LL,
             (const MethodInfo_1BE12AC *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
      {
        this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                                 v2,
                                 (const MethodInfo_1BE12EC *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
        if ( !this )
          goto LABEL_57;
        v33 = this;
        v34 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                                     (BgmPlayArgsGroup_o *)this,
                                                                     method);
        v35 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                               v34,
                                                               (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
        this = (BgmManager_o *)BgmManager__StopBgmLocal_SubBgmPlayer_(
                                 v2,
                                 0LL,
                                 (const MethodInfo_1BE1734 *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
        if ( !v35 )
          goto LABEL_57;
        if ( v35[1].monitor )
        {
          v36 = BgmManager___c_TypeInfo;
          if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
            v36 = BgmManager___c_TypeInfo;
          }
          v37 = v36->static_fields;
          _9__75_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v37->__9__75_3;
          if ( !_9__75_3 )
          {
            if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v37 = BgmManager___c_TypeInfo->static_fields;
            }
            v39 = (Il2CppObject *)v37->__9;
            _9__75_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BgmPlayArgs__TypeInfo);
            System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
              _9__75_3,
              v39,
              Method_BgmManager___c__LateUpdate_b__75_3__,
              (const MethodInfo_264C148 *)Method_System_Action_BgmPlayArgs___ctor__);
            v40 = BgmManager___c_TypeInfo->static_fields;
            v40->__9__75_3 = (struct System_Action_BgmPlayArgs__o *)_9__75_3;
            sub_B70630(
              (BattleServantConfConponent_o *)&v40->__9__75_3,
              (System_Int32_array **)_9__75_3,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
          }
          BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v35,
            (System_Action_T__o *)_9__75_3,
            (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_BgmPlayArgs___);
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          BgmManager__PlayBgm_24036516((BgmPlayArgsGroup_o *)v33, 0LL, v47);
        }
      }
      if ( v6 )
        goto LABEL_47;
    }
    v2->fields.isBgmStopJingle = 0;
    goto LABEL_47;
  }
}


void __fastcall BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  bool v6; // w19

  if ( (byte_4351294 & 1) == 0 )
  {
    sub_B70694(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    sub_B70694(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4351294 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B7076C(v4, v5);
    v6 = isPause;
    BgmManager__PauseBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      v6,
      0LL,
      (const MethodInfo_1BE165C *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      v6,
      0LL,
      (const MethodInfo_1BE165C *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__PauseBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_1BE165C *method)
{
  Il2CppClass *_0_BgmManager___c__DisplayClass67_0_T; // x20
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  Il2CppClass *_4_System_Action_T; // x22
  __int64 v13; // x22

  _0_BgmManager___c__DisplayClass67_0_T = method->rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_;
  if ( (BYTE2(_0_BgmManager___c__DisplayClass67_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_);
  v8 = sub_B70764(_0_BgmManager___c__DisplayClass67_0_T);
  v9 = ((__int64 (*)(void))method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor->methodPointer)();
  if ( !v8 )
    sub_B7076C(v9, v10);
  *(_BYTE *)(v8 + 16) = isPause;
  v11 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_BgmPlayerBase__o *))method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_->methodPointer)(this->fields.bgmPlayers);
  _4_System_Action_T = method->rgctx_data->_4_System_Action_T_;
  if ( (BYTE2(_4_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_4_System_Action_T_);
  v13 = sub_B70764(_4_System_Action_T);
  ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_5_System_Action_T___ctor->methodPointer)(
    v13,
    v8,
    method->rgctx_data->_3_BgmManager___c__DisplayClass67_0_T___PauseBgmLocal_b__0);
  ((void (__fastcall *)(__int64, __int64))method->rgctx_data->_6_BasicHelper_ForEach_T_->methodPointer)(v11, v13);
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
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x2
  System_Nullable_float__o volumeNullable; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_volumeNullable; // 0:x0.8
  System_Nullable_float__o v17; // 0:x2.8

  if ( (byte_4351285 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&BgmPlayArgsGroup_TypeInfo);
    sub_B70694(&Method_System_Nullable_float___ctor__);
    byte_4351285 = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0LL;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
  v11 = (BgmPlayArgsGroup_o *)sub_B70764(BgmPlayArgsGroup_TypeInfo);
  v17 = volumeNullable;
  v12 = v11;
  BgmPlayArgsGroup___ctor_24036404(v11, name, v17, fadeTime, startTime, v13);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_24036516(v12, finishCallback, v14);
}


void __fastcall BgmManager__PlayBgm_24036516(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4351287 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4351287 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v6 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !Instance )
      sub_B7076C(v6, v7);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, v8);
  }
}


void __fastcall BgmManager__PlayBgm_24036720(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4351286 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&BgmPlayArgsGroup_TypeInfo);
    byte_4351286 = 1;
  }
  v7 = (BgmPlayArgsGroup_o *)sub_B70764(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor(v7, main, (BgmPlayArgs_array *)subArray, v8);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_24036516(v7, finishCallback, v9);
}


void __fastcall BgmManager__PlayJingle(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4351290 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4351290 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B7076C(v8, v9);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *v30; // x20
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x3

  if ( (byte_43512A3 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BgmManager___c__DisplayClass68_0__PlayJingleLocal_b__0__);
    sub_B70694(&BgmManager___c__DisplayClass68_0_TypeInfo);
    byte_43512A3 = 1;
  }
  v9 = sub_B70764(BgmManager___c__DisplayClass68_0_TypeInfo);
  BgmManager___c__DisplayClass68_0___ctor((BgmManager___c__DisplayClass68_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B7076C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = name;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)name, v18, v19, v20, v21, v22, v23);
  *(float *)(v9 + 32) = volume;
  *(_QWORD *)(v9 + 40) = callbackFunc;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 40),
    (System_Int32_array **)callbackFunc,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = *(System_String_o **)(v9 + 24);
  v31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v9, Method_BgmManager___c__DisplayClass68_0__PlayJingleLocal_b__0__, 0LL);
  BgmManager__PreloadBgm(this, v30, v31, v32);
}


void __fastcall BgmManager__PlayJingle_24041128(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4351291 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_4351291 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, 0LL, v3);
}


void __fastcall BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4351288 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_4351288 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_24036720(args, 0LL, 0LL, v2);
}


void __fastcall BgmManager__PlayPreloadedBgm(BgmManager_o *this, BgmPlayArgs_o *args, const MethodInfo *method)
{
  System_String_o *BgmName_k__BackingField; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BgmPlayArgs_c *klass; // x8
  unsigned int v9; // w9
  __int64 v10; // x11
  __int64 v11; // x11
  void *mainBgmPlayer; // x0

  if ( (byte_435129C & 1) == 0 )
  {
    sub_B70694(&MainBgmPlayArgs_TypeInfo);
    sub_B70694(&SubBgmPlayArgs_TypeInfo);
    byte_435129C = 1;
  }
  if ( args )
  {
    BgmName_k__BackingField = args->fields._BgmName_k__BackingField;
    if ( BgmName_k__BackingField )
    {
      if ( BgmManager__IsPreloadSucceeded(this, args->fields._BgmName_k__BackingField, method) )
      {
        klass = args->klass;
        v9 = *(&args->klass->_2.bitflags2 + 1);
        v10 = *(&MainBgmPlayArgs_TypeInfo->_2.bitflags2 + 1);
        if ( v9 >= (unsigned int)v10
          && (MainBgmPlayArgs_c *)klass->_2.typeHierarchy[v10 - 1] == MainBgmPlayArgs_TypeInfo )
        {
          mainBgmPlayer = this->fields.mainBgmPlayer;
          if ( mainBgmPlayer )
            goto LABEL_14;
        }
        else
        {
          v11 = *(&SubBgmPlayArgs_TypeInfo->_2.bitflags2 + 1);
          if ( v9 < (unsigned int)v11 || (SubBgmPlayArgs_c *)klass->_2.typeHierarchy[v11 - 1] != SubBgmPlayArgs_TypeInfo )
            return;
          mainBgmPlayer = BgmManager__GetOrCreateSubBgmPlayer(this, BgmName_k__BackingField, v7);
          if ( mainBgmPlayer )
          {
LABEL_14:
            (*(void (__fastcall **)(void *, System_String_o *, int64_t, _QWORD, float, float))(*(_QWORD *)mainBgmPlayer
                                                                                             + 456LL))(
              mainBgmPlayer,
              BgmName_k__BackingField,
              args->fields._StartTime_k__BackingField,
              *(_QWORD *)(*(_QWORD *)mainBgmPlayer + 464LL),
              args->fields._Volume_k__BackingField,
              args->fields._FadeTime_k__BackingField);
            return;
          }
        }
        sub_B7076C(mainBgmPlayer, v6);
      }
    }
  }
}


void __fastcall BgmManager__PlaySubBgm(SubBgmPlayArgs_o *args, const MethodInfo *method)
{
  __int64 v3; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x22
  System_Int32_array **Instance; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *v20; // x21
  System_String_o *v21; // x21
  BgmManager_o *v22; // x20
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3

  if ( (byte_4351289 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_B70694(&Method_BgmManager___c__DisplayClass35_0__PlaySubBgm_b__0__);
    sub_B70694(&BgmManager___c__DisplayClass35_0_TypeInfo);
    byte_4351289 = 1;
  }
  v3 = sub_B70764(BgmManager___c__DisplayClass35_0_TypeInfo);
  BgmManager___c__DisplayClass35_0___ctor((BgmManager___c__DisplayClass35_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 24) = args;
  v12 = v3 + 24;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)args, v6, v7, v8, v9, v10, v11);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v3 + 16) = Instance;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), Instance, v14, v15, v16, v17, v18, v19);
  v20 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
  if ( !v4 )
  {
    if ( *(_QWORD *)v12 )
    {
      v21 = *(System_String_o **)(*(_QWORD *)v12 + 16LL);
      v22 = *(BgmManager_o **)(v3 + 16);
      v23 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)v3, Method_BgmManager___c__DisplayClass35_0__PlaySubBgm_b__0__, 0LL);
      if ( v22 )
      {
        BgmManager__PreloadBgm(v22, v21, v23, v24);
        return;
      }
    }
LABEL_11:
    sub_B7076C(v4, v5);
  }
}


void __fastcall BgmManager__PreloadAndPlayBgms(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  ChainableActionBase_o *v8; // x0
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ChainableActionBase_o **v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct BgmPlayArgsGroup_o *v35; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  __int64 v45; // x23
  unsigned __int64 v46; // x24
  __int64 v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v61; // x22
  System_Action_Action__array *v62; // x21
  ChainableActionParallel_o *v63; // x20
  System_Action_array *v64; // x21
  System_Action_o *v65; // x22
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x0
  __int64 v73; // x0

  if ( (byte_435129B & 1) == 0 )
  {
    sub_B70694(&System_Action___TypeInfo);
    sub_B70694(&Method_System_Action_Action___ctor__);
    sub_B70694(&System_Action_Action__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ChainableActionParallel_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_B70694(&Method_System_Collections_Generic_List_Action_Action___Add__);
    sub_B70694(&Method_System_Collections_Generic_List_Action_Action___ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_Action_Action____ctor__);
    sub_B70694(&System_Collections_Generic_List_Action_Action___TypeInfo);
    sub_B70694(&Method_BgmManager___c__DisplayClass56_0__PreloadAndPlayBgms_b__0__);
    sub_B70694(&BgmManager___c__DisplayClass56_0_TypeInfo);
    sub_B70694(&Method_BgmManager___c__DisplayClass56_1__PreloadAndPlayBgms_b__1__);
    sub_B70694(&BgmManager___c__DisplayClass56_1_TypeInfo);
    byte_435129B = 1;
  }
  v7 = sub_B70764(BgmManager___c__DisplayClass56_0_TypeInfo);
  BgmManager___c__DisplayClass56_0___ctor((BgmManager___c__DisplayClass56_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_22;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = argsGroup;
  v16 = (ChainableActionBase_o **)(v7 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)argsGroup, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v7 + 40) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)finishCallback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v35 = *(struct BgmPlayArgsGroup_o **)(v7 + 24);
  if ( v35 )
  {
    this->fields.cacheArgsGroup = v35;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.cacheArgsGroup,
      (System_Int32_array **)v35,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v8 = *v16;
    if ( !*v16 )
      goto LABEL_22;
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                                 (BgmPlayArgsGroup_o *)v8,
                                                                 v9);
    v37 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v36,
                                   (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v7 + 32) = v37;
    sub_B70630((BattleServantConfConponent_o *)(v7 + 32), v37, v38, v39, v40, v41, v42, v43);
    v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_Action_Action___TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v44,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v45 = *(_QWORD *)(v7 + 32);
    if ( !v45 )
      goto LABEL_22;
    if ( *(int *)(v45 + 24) >= 1 )
    {
      v46 = 0LL;
      while ( 1 )
      {
        v47 = sub_B70764(BgmManager___c__DisplayClass56_1_TypeInfo);
        BgmManager___c__DisplayClass56_1___ctor((BgmManager___c__DisplayClass56_1_o *)v47, 0LL);
        if ( !v47 )
          break;
        *(_QWORD *)(v47 + 24) = v7;
        sub_B70630((BattleServantConfConponent_o *)(v47 + 24), (System_Int32_array **)v7, v48, v49, v50, v51, v52, v53);
        if ( v46 >= *(unsigned int *)(v45 + 24) )
          goto LABEL_23;
        v60 = *(System_Int32_array ***)(v45 + 32 + 8 * v46);
        *(_QWORD *)(v47 + 16) = v60;
        sub_B70630((BattleServantConfConponent_o *)(v47 + 16), v60, v54, v55, v56, v57, v58, v59);
        v61 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v61,
          (Il2CppObject *)v47,
          Method_BgmManager___c__DisplayClass56_1__PreloadAndPlayBgms_b__1__,
          (const MethodInfo_264C148 *)Method_System_Action_Action___ctor__);
        if ( !v44 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v44,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_Action_Action___Add__);
        if ( (__int64)++v46 >= *(int *)(v45 + 24) )
          goto LABEL_13;
      }
LABEL_22:
      sub_B7076C(v8, v9);
    }
LABEL_13:
    if ( !v44 )
      goto LABEL_22;
    v62 = (System_Action_Action__array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                           (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v63 = (ChainableActionParallel_o *)sub_B70764(ChainableActionParallel_TypeInfo);
    ChainableActionParallel___ctor_30691392(v63, v62, 0LL);
    v64 = (System_Action_array *)sub_B706AC(System_Action___TypeInfo, 1LL);
    v65 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v65,
      (Il2CppObject *)v7,
      Method_BgmManager___c__DisplayClass56_0__PreloadAndPlayBgms_b__0__,
      0LL);
    if ( !v64 )
      goto LABEL_22;
    if ( v65 )
    {
      v8 = (ChainableActionBase_o *)sub_B70754(v65, v64->obj.klass->_1.element_class);
      if ( !v8 )
      {
        v73 = sub_B7078C(0LL);
        sub_B70738(v73, 0LL);
      }
    }
    if ( !v64->max_length )
    {
LABEL_23:
      v72 = sub_B70798(v8);
      sub_B70738(v72, 0LL);
    }
    v64->m_Items[0] = v65;
    sub_B70630((BattleServantConfConponent_o *)v64->m_Items, (System_Int32_array **)v65, v66, v67, v68, v69, v70, v71);
    if ( !v63 )
      goto LABEL_22;
    v8 = ChainableActionBase__Final((ChainableActionBase_o *)v63, v64, 0LL);
    if ( !v8 )
      goto LABEL_22;
    ChainableActionBase__Execute(v8, 0LL);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 40), 0LL);
  }
}


bool __fastcall BgmManager__PreloadBgm(
        BgmManager_o *this,
        System_String_o *name,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  SoundManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BgmManager_o *v22; // x0
  const MethodInfo *v23; // x2
  System_Int32_array **CueName; // x0
  WarBoardManager_TaskList_o **v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **CueSheet; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Action_o *v39; // x21
  const MethodInfo *v40; // x3
  System_Collections_IEnumerator_o *v41; // x0

  if ( (byte_435129D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Insert__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__0__);
    sub_B70694(&BgmManager___c__DisplayClass58_0_TypeInfo);
    byte_435129D = 1;
  }
  v7 = sub_B70764(BgmManager___c__DisplayClass58_0_TypeInfo);
  BgmManager___c__DisplayClass58_0___ctor((BgmManager___c__DisplayClass58_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  CueName = (System_Int32_array **)BgmManager__ExtractCueName(v22, name, v23);
  v25 = (WarBoardManager_TaskList_o **)(v7 + 24);
  *(_QWORD *)(v7 + 24) = CueName;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), CueName, v26, v27, v28, v29, v30, v31);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CueSheet = (System_Int32_array **)SoundManager__GetCueSheet(Instance, *(System_String_o **)(v7 + 24), 0LL);
  *(_QWORD *)(v7 + 16) = CueSheet;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), CueSheet, v33, v34, v35, v36, v37, v38);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0LL) )
  {
    v39 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)v7, Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__0__, 0LL);
    v41 = BgmManager__CoWaitSameAudioLoading(this, name, v39, v40);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v41, 0LL);
    return 0;
  }
  Instance = (SoundManager_o *)this->fields.addBindList;
  if ( !Instance )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Instance,
         *v25,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Instance,
        *v25,
        (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
      Instance = (SoundManager_o *)this->fields.addBindList;
      if ( Instance )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___Insert(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
          0,
          (XWeaponTrail_Element_o *)*v25,
          (const MethodInfo_302689C *)Method_System_Collections_Generic_List_string__Insert__);
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_B7076C(Instance, v9);
  }
LABEL_12:
  ActionExtensions__Call(*(System_Action_o **)(v7 + 40), 0LL);
  return 1;
}


void __fastcall BgmManager__ReflectMasterVolumeLocal(BgmManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  BgmManager___c_c *v4; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__52_0; // x20
  Il2CppObject *v7; // x21
  struct BgmManager___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_435129A & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BgmPlayerBase___ctor__);
    sub_B70694(&System_Action_BgmPlayerBase__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_B70694(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__52_0__);
    sub_B70694(&BgmManager___c_TypeInfo);
    byte_435129A = 1;
  }
  bgmPlayers = this->fields.bgmPlayers;
  v4 = BgmManager___c_TypeInfo;
  if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v4 = BgmManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__52_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__52_0,
      v7,
      Method_BgmManager___c__ReflectMasterVolumeLocal_b__52_0__,
      (const MethodInfo_264C148 *)Method_System_Action_BgmPlayerBase___ctor__);
    v8 = BgmManager___c_TypeInfo->static_fields;
    v8->__9__52_0 = (struct System_Action_BgmPlayerBase__o *)_9__52_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !bgmPlayers )
    sub_B7076C(v4, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)_9__52_0,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__RemoveUnusedOldFromBindList(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o **v2; // x19
  BgmManager_o *v3; // x8
  int32_t addBindList; // w20
  BgmManager_c *v5; // x0
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v6; // x20
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *UsingCueNames; // x0
  BgmManager_c *klass; // x8
  BgmManager_o *v10; // x21
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  int *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  System_String_o *CueName; // x0
  int v28; // w24
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  BgmManager_o *v33; // x21
  int v34; // w8
  int v35; // w22
  __int64 v36; // x26
  BgmManager_o *v37; // x21
  System_String_o *v38; // x21
  BgmManager_o *v39; // x8
  int32_t v40; // w21
  bool v41; // vf
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-98h] BYREF
  int v43[2]; // [xsp+20h] [xbp-80h]
  int v44; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+30h] [xbp-70h] BYREF

  v2 = (BgmManager_o **)this;
  if ( (byte_43512A7 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_string__UnionWith__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_B70694(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    this = (BgmManager_o *)sub_B70694(&SoundManager_TypeInfo);
    byte_43512A7 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  v3 = v2[3];
  if ( !v3 )
    goto LABEL_71;
  addBindList = (int32_t)v3->fields.addBindList;
  v5 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v5 = BgmManager_TypeInfo;
  }
  if ( addBindList > v5->static_fields->ADD_BIND_MAX )
  {
    v6 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_HashSet_string__TypeInfo);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
      v6,
      (const MethodInfo_2EB4850 *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = v2[7];
    if ( !this )
      goto LABEL_71;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v42,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v45 = v42;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v45,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v45.fields.current )
        sub_B7076C(0LL, v7);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v45.fields.current,
                                                                       v7);
      if ( !v6 )
        sub_B7076C(UsingCueNames, UsingCueNames);
      System_Collections_Generic_HashSet_string___UnionWith(
        (System_Collections_Generic_HashSet_string__o *)v6,
        UsingCueNames,
        (const MethodInfo_2EB5A30 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    v43[0] = 84;
    v44 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v45,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    v44 = 0;
    this = v2[9];
    if ( this )
    {
      this = (BgmManager_o *)BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, method);
      if ( !this )
        goto LABEL_71;
      klass = this->klass;
      v10 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v11 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          ++v11;
          p_offset += 4;
          if ( v11 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_20:
        v13 = sub_B08590(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v15 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
      if ( !v15 )
        sub_B7076C(0LL, v14);
      while ( 1 )
      {
        v16 = *(_QWORD *)v15;
        if ( *(_WORD *)(*(_QWORD *)v15 + 298LL) )
        {
          v17 = 0LL;
          v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v17;
            v18 += 4;
            if ( v17 >= *(unsigned __int16 *)(*(_QWORD *)v15 + 298LL) )
              goto LABEL_27;
          }
          v19 = v16 + 16LL * *v18 + 312;
        }
        else
        {
LABEL_27:
          v19 = sub_B08590(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
          break;
        v20 = *(_QWORD *)v15;
        if ( *(_WORD *)(*(_QWORD *)v15 + 298LL) )
        {
          v21 = 0LL;
          v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v22 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            ++v21;
            v22 += 4;
            if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v15 + 298LL) )
              goto LABEL_34;
          }
          v23 = v20 + 16LL * *v22 + 312;
        }
        else
        {
LABEL_34:
          v23 = sub_B08590(v15, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
        if ( !v24 )
          sub_B7076C(0LL, v25);
        CueName = BgmManager__ExtractCueName((BgmManager_o *)v24, *(System_String_o **)(v24 + 16), v26);
        if ( !v6 )
          sub_B7076C(CueName, CueName);
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          v6,
          (WarBoardAIRoute_RouteData_o *)CueName,
          (const MethodInfo_2EB5A0C *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
      v43[0] = 159;
      v28 = ++v44;
      v29 = *(_QWORD *)v15;
      if ( *(_WORD *)(*(_QWORD *)v15 + 298LL) )
      {
        v30 = 0LL;
        v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
        {
          ++v30;
          v31 += 4;
          if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v15 + 298LL) )
            goto LABEL_44;
        }
        v32 = v29 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_44:
        v32 = sub_B08590(v15, System_IDisposable_TypeInfo, 0LL);
      }
      this = (BgmManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v15, *(_QWORD *)(v32 + 8));
      if ( v28 && v43[v28 - 1] == 159 )
        v44 = v28 - 1;
    }
    v33 = v2[3];
    if ( !v33 )
LABEL_71:
      sub_B7076C(this, method);
    v34 = (int)v33->fields.addBindList;
    if ( v34 - 1 >= 1 )
    {
      v35 = v34 - 2;
      v36 = v34 - 1 + 4LL;
      do
      {
        if ( v36 - 4 >= (unsigned __int64)LODWORD(v33->fields.addBindList) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( !v6 )
          break;
        this = (BgmManager_o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                                 (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v6,
                                 *(BattleBuffData_BuffData_o **)(*(_QWORD *)&v33->fields.m_CachedPtr + 8 * v36),
                                 (const MethodInfo_2EB4ED4 *)Method_System_Collections_Generic_HashSet_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v37 = v2[3];
          if ( !v37 )
            goto LABEL_71;
          if ( v36 - 4 >= (unsigned __int64)LODWORD(v37->fields.addBindList) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v38 = *(System_String_o **)(*(_QWORD *)&v37->fields.m_CachedPtr + 8 * v36);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__releaseAudioAssetStorage(v38, 0LL);
          this = v2[3];
          if ( !this )
            goto LABEL_71;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
            v35 + 1,
            (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_string__RemoveAt__);
          v39 = v2[3];
          if ( !v39 )
            goto LABEL_71;
          this = (BgmManager_o *)BgmManager_TypeInfo;
          v40 = (int32_t)v39->fields.addBindList;
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            this = (BgmManager_o *)BgmManager_TypeInfo;
          }
          if ( v40 <= this[2].fields.addBindList->fields._size )
            return;
        }
        v41 = __OFSUB__(v35--, 1);
        if ( v35 < 0 != v41 )
          return;
        v33 = v2[3];
        --v36;
      }
      while ( v33 );
      goto LABEL_71;
    }
  }
}


void __fastcall BgmManager__Reset(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_435127D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_435127D = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_B7076C(v2, v3);
    BgmManager__ResetLocal((BgmManager_o *)Instance, v3);
  }
}


void __fastcall BgmManager__ResetLocal(BgmManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  BgmManager___c_c *v4; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__50_0; // x20
  Il2CppObject *v7; // x21
  struct BgmManager___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4351298 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BgmPlayerBase___ctor__);
    sub_B70694(&System_Action_BgmPlayerBase__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_B70694(&Method_BgmManager___c__ResetLocal_b__50_0__);
    sub_B70694(&BgmManager___c_TypeInfo);
    byte_4351298 = 1;
  }
  bgmPlayers = this->fields.bgmPlayers;
  v4 = BgmManager___c_TypeInfo;
  if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v4 = BgmManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__50_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__50_0,
      v7,
      Method_BgmManager___c__ResetLocal_b__50_0__,
      (const MethodInfo_264C148 *)Method_System_Action_BgmPlayerBase___ctor__);
    v8 = BgmManager___c_TypeInfo->static_fields;
    v8->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)_9__50_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !bgmPlayers )
    sub_B7076C(v4, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)_9__50_0,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  BgmManager_c *v3; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  float *p_masterVolume; // x8
  float masterVolume; // t1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4351281 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4351281 = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  masterVolume = static_fields->masterVolume;
  p_masterVolume = &static_fields->masterVolume;
  if ( masterVolume != volume )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      p_masterVolume = &BgmManager_TypeInfo->static_fields->masterVolume;
    }
    *p_masterVolume = volume;
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
    if ( !v8 )
    {
      if ( !Instance )
        sub_B7076C(v8, v9);
      BgmManager__ReflectMasterVolumeLocal((BgmManager_o *)Instance, v9);
    }
  }
}


void __fastcall BgmManager__SetMute(bool isMute, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  BgmManager_c *v3; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  bool *p_isMute; // x8
  _BOOL4 v6; // t1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  v2 = isMute;
  if ( (byte_435127F & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_435127F = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  v6 = static_fields->isMute;
  p_isMute = &static_fields->isMute;
  if ( ((v6 ^ v2) & 1) != 0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      p_isMute = &BgmManager_TypeInfo->static_fields->isMute;
    }
    *p_isMute = v2;
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
    if ( !v8 )
    {
      if ( !Instance )
        sub_B7076C(v8, v9);
      BgmManager__SetMuteLocal((BgmManager_o *)Instance, v2, v10);
    }
  }
}


void __fastcall BgmManager__SetMuteLocal(BgmManager_o *this, bool isMute, const MethodInfo *method)
{
  BgmManager___c__DisplayClass51_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x20

  if ( (byte_4351299 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BgmPlayerBase___ctor__);
    sub_B70694(&System_Action_BgmPlayerBase__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
    sub_B70694(&Method_BgmManager___c__DisplayClass51_0__SetMuteLocal_b__0__);
    sub_B70694(&BgmManager___c__DisplayClass51_0_TypeInfo);
    byte_4351299 = 1;
  }
  v5 = (BgmManager___c__DisplayClass51_0_o *)sub_B70764(BgmManager___c__DisplayClass51_0_TypeInfo);
  BgmManager___c__DisplayClass51_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.isMute = isMute,
        bgmPlayers = this->fields.bgmPlayers,
        v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BgmPlayerBase__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BgmManager___c__DisplayClass51_0__SetMuteLocal_b__0__,
          (const MethodInfo_264C148 *)Method_System_Action_BgmPlayerBase___ctor__),
        !bgmPlayers) )
  {
    sub_B7076C(v6, v7);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)v9,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_435128C & 1) == 0 )
  {
    sub_B70694(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
    sub_B70694(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_435128C = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B7076C(v4, v5);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        0LL,
        (const MethodInfo_1BE1734 *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        0LL,
        (const MethodInfo_1BE1528 *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
  }
}


void __fastcall BgmManager__StopBgm(
        System_String_o *name,
        float fadeoutTime,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_435128B & 1) == 0 )
  {
    sub_B70694(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___);
    sub_B70694(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_B70694(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___);
    sub_B70694(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_435128B = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B7076C(v8, v9);
    if ( fadeoutTime <= 0.0 )
    {
      if ( !BgmManager__StopBgmLocal_SubBgmPlayer_(
              (BgmManager_o *)Instance,
              name,
              (const MethodInfo_1BE1734 *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___) )
        return;
      if ( Instance[2].fields.m_CachedPtr <= 0 )
        BgmManager__StopBgmLocal_SubBgmPlayer_(
          (BgmManager_o *)Instance,
          0LL,
          (const MethodInfo_1BE1734 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      if ( !BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
              (BgmManager_o *)Instance,
              fadeoutTime,
              name,
              (const MethodInfo_1BE1528 *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___) )
        return;
      if ( Instance[2].fields.m_CachedPtr <= 0 )
        BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0LL,
          (const MethodInfo_1BE1528 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    ActionExtensions__Call(successCallback, 0LL);
  }
}


bool __fastcall BgmManager__StopBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo_1BE1734 *method)
{
  BgmManager_o *v5; // x21
  __int64 v6; // x20
  long double v7; // q0
  Il2CppClass *_1_BgmManager___c__65_T; // x21
  __int16 v9; // w8
  Il2CppClass *v10; // x21
  Il2CppClass *v11; // x21
  Il2CppClass *v12; // x21
  System_Int32_array **v13; // x21
  Il2CppClass *v14; // x21
  __int16 v15; // w8
  Il2CppClass *v16; // x21
  Il2CppClass *v17; // x21
  const MethodInfo_1BE1734_RGCTXs *rgctx_data; // x8
  Il2CppClass *v19; // x21
  Il2CppClass *_3_System_Func_T__bool; // x23
  __int64 v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  Il2CppClass *v28; // x22
  char *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  v5 = this;
  if ( (byte_4353FAC & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_bool___);
    this = (BgmManager_o *)sub_B70694(&Method_System_Linq_Enumerable_ToArray_bool___);
    byte_4353FAC = 1;
  }
  if ( !v5 )
    sub_B7076C(this, name);
  v6 = ((__int64 (__fastcall *)(BgmManager_o *, System_String_o *))method->rgctx_data->_0_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
         v5,
         name);
  _1_BgmManager___c__65_T = method->rgctx_data->_1_BgmManager___c__65_T_;
  v9 = WORD1(_1_BgmManager___c__65_T->vtable[0].methodPtr);
  if ( (v9 & 1) == 0 )
  {
    sub_B08394(method->rgctx_data->_1_BgmManager___c__65_T_);
    v9 = WORD1(_1_BgmManager___c__65_T->vtable[0].methodPtr);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = method->rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_1_BgmManager___c__65_T_);
    if ( !v10->_2.cctor_finished )
    {
      v11 = method->rgctx_data->_1_BgmManager___c__65_T_;
      if ( (BYTE2(v11->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_BgmManager___c__65_T_);
      *(__n128 *)&v7 = j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = method->rgctx_data->_1_BgmManager___c__65_T_;
  if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_1_BgmManager___c__65_T_);
  v13 = (System_Int32_array **)*((_QWORD *)v12->static_fields + 1);
  if ( !v13 )
  {
    v14 = method->rgctx_data->_1_BgmManager___c__65_T_;
    v15 = WORD1(v14->vtable[0].methodPtr);
    if ( (v15 & 1) == 0 )
    {
      sub_B08394(method->rgctx_data->_1_BgmManager___c__65_T_);
      v15 = WORD1(v14->vtable[0].methodPtr);
    }
    if ( (v15 & 0x400) != 0 )
    {
      v16 = method->rgctx_data->_1_BgmManager___c__65_T_;
      if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_1_BgmManager___c__65_T_);
      if ( !v16->_2.cctor_finished )
      {
        v17 = method->rgctx_data->_1_BgmManager___c__65_T_;
        if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->rgctx_data->_1_BgmManager___c__65_T_);
        j_il2cpp_runtime_class_init_0(v17);
      }
    }
    rgctx_data = method->rgctx_data;
    v19 = rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_B08394(rgctx_data->_1_BgmManager___c__65_T_);
      rgctx_data = method->rgctx_data;
    }
    _3_System_Func_T__bool = rgctx_data->_3_System_Func_T__bool_;
    v21 = *(_QWORD *)v19->static_fields;
    if ( (BYTE2(_3_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(_3_System_Func_T__bool);
    v13 = (System_Int32_array **)sub_B70764(_3_System_Func_T__bool);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__bool___ctor->methodPointer)(
      v13,
      v21,
      method->rgctx_data->_2_BgmManager___c__65_T___StopBgmLocal_b__65_0);
    v28 = method->rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v28->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_1_BgmManager___c__65_T_);
    static_fields = (char *)v28->static_fields;
    *((_QWORD *)static_fields + 1) = v13;
    sub_B70630((BattleServantConfConponent_o *)(static_fields + 8), v13, v22, v23, v24, v25, v26, v27);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, System_Int32_array **, long double))method->rgctx_data->_5_System_Linq_Enumerable_Select_T__bool_->methodPointer)(
                                                               v6,
                                                               v13,
                                                               v7);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v30,
                                                               (const MethodInfo_1CC844C *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v31, (const MethodInfo_1CA85E8 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__StopJingle(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4351292 & 1) == 0 )
  {
    sub_B70694(&Method_BgmManager_StopBgmLocal_JinglePlayer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4351292 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_B7076C(v2, v3);
    BgmManager__StopBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      0LL,
      (const MethodInfo_1BE1734 *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_435128D & 1) == 0 )
  {
    sub_B70694(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    sub_B70694(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_435128D = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Instance )
      sub_B7076C(v6, v7);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        name,
        (const MethodInfo_1BE1734 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        name,
        (const MethodInfo_1BE1528 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__StopUnrequestedSubBgm(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *requestedBgmArgs,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Int32_array **v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *SubArgsList_k__BackingField; // x21
  BgmManager___c_c *v9; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__66_0; // x22
  Il2CppObject *v12; // x23
  struct BgmManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  BgmManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_T__o *v31; // x19
  struct BgmManager___c_StaticFields *v32; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__66_2; // x20
  Il2CppObject *v34; // x21
  struct BgmManager___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_43512A2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_SubBgmPlayer___ctor__);
    sub_B70694(&System_Action_SubBgmPlayer__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_SubBgmPlayer___);
    sub_B70694(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    sub_B70694(&Method_System_Func_SubBgmPlayer__bool___ctor__);
    sub_B70694(&Method_System_Func_SubBgmPlayArgs__string___ctor__);
    sub_B70694(&System_Func_SubBgmPlayArgs__string__TypeInfo);
    sub_B70694(&System_Func_SubBgmPlayer__bool__TypeInfo);
    sub_B70694(&Method_BgmManager___c__StopUnrequestedSubBgm_b__66_0__);
    sub_B70694(&Method_BgmManager___c__StopUnrequestedSubBgm_b__66_2__);
    sub_B70694(&Method_BgmManager___c__DisplayClass66_0__StopUnrequestedSubBgm_b__1__);
    sub_B70694(&BgmManager___c__DisplayClass66_0_TypeInfo);
    sub_B70694(&BgmManager___c_TypeInfo);
    byte_43512A2 = 1;
  }
  v5 = sub_B70764(BgmManager___c__DisplayClass66_0_TypeInfo);
  BgmManager___c__DisplayClass66_0___ctor((BgmManager___c__DisplayClass66_0_o *)v5, 0LL);
  if ( this->fields.enableCounter_KeepSubBgm <= 0 )
  {
    if ( !requestedBgmArgs )
      goto LABEL_23;
    SubArgsList_k__BackingField = requestedBgmArgs->fields._SubArgsList_k__BackingField;
    v9 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v9 = BgmManager___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__66_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__66_0;
    if ( !_9__66_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__66_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_SubBgmPlayArgs__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__66_0,
        v12,
        Method_BgmManager___c__StopUnrequestedSubBgm_b__66_0__,
        (const MethodInfo_29ADCC4 *)Method_System_Func_SubBgmPlayArgs__string___ctor__);
      v13 = BgmManager___c_TypeInfo->static_fields;
      v13->__9__66_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__66_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v13->__9__66_0,
        (System_Int32_array **)_9__66_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__66_0,
                                                                 (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v6 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v20,
                                  (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v5 )
LABEL_23:
      sub_B7076C(v6, v7);
    *(_QWORD *)(v5 + 16) = v6;
    sub_B70630((BattleServantConfConponent_o *)(v5 + 16), v6, v21, v22, v23, v24, v25, v26);
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v28,
      (Il2CppObject *)v5,
      Method_BgmManager___c__DisplayClass66_0__StopUnrequestedSubBgm_b__1__,
      (const MethodInfo_29AC578 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
    v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v27,
            (System_Func_TSource__bool__o *)v28,
            (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v30 = BgmManager___c_TypeInfo;
    v31 = (System_Collections_Generic_IEnumerable_T__o *)v29;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v30 = BgmManager___c_TypeInfo;
    }
    v32 = v30->static_fields;
    _9__66_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v32->__9__66_2;
    if ( !_9__66_2 )
    {
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v32 = BgmManager___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)v32->__9;
      _9__66_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_SubBgmPlayer__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__66_2,
        v34,
        Method_BgmManager___c__StopUnrequestedSubBgm_b__66_2__,
        (const MethodInfo_264C148 *)Method_System_Action_SubBgmPlayer___ctor__);
      v35 = BgmManager___c_TypeInfo->static_fields;
      v35->__9__66_2 = (struct System_Action_SubBgmPlayer__o *)_9__66_2;
      sub_B70630(
        (BattleServantConfConponent_o *)&v35->__9__66_2,
        (System_Int32_array **)_9__66_2,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v31,
      (System_Action_T__o *)_9__66_2,
      (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_SubBgmPlayer___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_String_o *__fastcall BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_B7076C(this, method);
  return mainBgmPlayer->fields.bgmName;
}


bool __fastcall BgmManager__get_IsBusy(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  BgmManager_o *v2; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4351279 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4351279 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    return 0;
  v2 = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v2 )
    sub_B7076C(0LL, v3);
  return BgmManager__IsLoadingLocal(v2, 0LL, v4);
}


bool __fastcall BgmManager__get_IsMute(const MethodInfo *method)
{
  BgmManager_c *v1; // x0

  if ( (byte_435127E & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_435127E = 1;
  }
  v1 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v1 = BgmManager_TypeInfo;
  }
  return v1->static_fields->isMute;
}


bool __fastcall BgmManager__isLoading(System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4351284 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4351284 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_B7076C(v4, v5);
  return BgmManager__IsLoadingLocal((BgmManager_o *)Instance, name, v6);
}


void __fastcall BgmManager__CoWaitSameAudioLoading_d__60___ctor(
        BgmManager__CoWaitSameAudioLoading_d__60_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BgmManager__CoWaitSameAudioLoading_d__60__MoveNext(
        BgmManager__CoWaitSameAudioLoading_d__60_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BgmManager_o *_4__this; // x21
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitWhile_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_434ED17 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_BgmManager___c__DisplayClass60_0__CoWaitSameAudioLoading_b__0__);
    sub_B70694(&BgmManager___c__DisplayClass60_0_TypeInfo);
    sub_B70694(&UnityEngine_WaitWhile_TypeInfo);
    byte_434ED17 = 1;
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
    v5 = sub_B70764(BgmManager___c__DisplayClass60_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    if ( !v5
      || (*(_QWORD *)(v5 + 16) = this->fields.__4__this,
          sub_B70630(v5 + 16),
          *(_QWORD *)(v5 + 24) = this->fields.bgmName,
          sub_B70630(v5 + 24),
          !_4__this) )
    {
      sub_B7076C(v6, v7);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v5 + 24), 0LL) )
    {
      v8 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v8,
        (Il2CppObject *)v5,
        Method_BgmManager___c__DisplayClass60_0__CoWaitSameAudioLoading_b__0__,
        (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
      v9 = (UnityEngine_WaitWhile_o *)sub_B70764(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v9, v8, 0LL);
      this->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = &this->fields.__2__current;
      sub_B70630(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    finishCallback = this->fields.finishCallback;
    goto LABEL_11;
  }
  return 0;
}


Il2CppObject *__fastcall BgmManager__CoWaitSameAudioLoading_d__60__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BgmManager__CoWaitSameAudioLoading_d__60_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BgmManager__CoWaitSameAudioLoading_d__60__System_Collections_IEnumerator_Reset(
        BgmManager__CoWaitSameAudioLoading_d__60_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BgmManager__CoWaitSameAudioLoading_d__60_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BgmManager__CoWaitSameAudioLoading_d__60__System_Collections_IEnumerator_get_Current(
        BgmManager__CoWaitSameAudioLoading_d__60_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BgmManager__CoWaitSameAudioLoading_d__60__System_IDisposable_Dispose(
        BgmManager__CoWaitSameAudioLoading_d__60_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BgmManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BgmManager___c_StaticFields *static_fields; // x0

  if ( (byte_434ED12 & 1) == 0 )
  {
    sub_B70694(&BgmManager___c_TypeInfo);
    byte_434ED12 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BgmManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BgmManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BgmManager___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall BgmManager___c___ctor(BgmManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c___GetOrCreateSubBgmPlayer_b__69_1(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.bgmName == 0LL;
}


void __fastcall BgmManager___c___InitializeLocal_b__49_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))x->klass->vtable._5_Initialize.method)(
    x,
    x->klass->vtable._6_Reset.methodPtr);
}


bool __fastcall BgmManager___c___LateUpdate_b__75_0(
        BgmManager___c_o *this,
        GeneralBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, 0LL);
}


void __fastcall BgmManager___c___LateUpdate_b__75_1(
        BgmManager___c_o *this,
        GeneralBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  ((void (__fastcall *)(GeneralBgmPlayer_o *, __int64, Il2CppMethodPointer))x->klass->vtable._11_StopBgm.method)(
    x,
    1LL,
    x->klass->vtable._12_unknown.methodPtr);
}


void __fastcall BgmManager___c___LateUpdate_b__75_2(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, void *))x->klass->vtable._13_LateUpdate.method)(x, x->klass[1]._1.image);
}


void __fastcall BgmManager___c___LateUpdate_b__75_3(BgmManager___c_o *this, BgmPlayArgs_o *x, const MethodInfo *method)
{
  const MethodInfo_24389F0 *v4; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  System_Nullable_long__o startTime; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v8; // [xsp+18h] [xbp-18h] BYREF
  System_Nullable_float__o v9; // 0:x0.8
  System_Nullable_float__o v10; // 0:x1.8
  System_Nullable_float__o v11; // 0:x2.8
  System_Nullable_long__o v12; // 0:x0.16

  if ( (byte_434ED13 & 1) == 0 )
  {
    sub_B70694(&Method_System_Nullable_float___ctor__);
    sub_B70694(&Method_System_Nullable_long___ctor__);
    byte_434ED13 = 1;
  }
  v9 = (System_Nullable_float__o)&v8;
  v8 = 0LL;
  System_Nullable_float____ctor(v9, 0.0, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
  v12.fields.value = (int64_t)&startTime;
  *(_QWORD *)&v12.fields.has_value = 0LL;
  startTime.fields.value = 0LL;
  *(_QWORD *)&startTime.fields.has_value = 0LL;
  System_Nullable_long____ctor(v12, Method_System_Nullable_long___ctor__, v4);
  if ( !x )
    sub_B7076C(v5, v6);
  v11 = v8;
  v10 = 0LL;
  BgmPlayArgs__Update(x, v10, v11, startTime, 0LL);
}


void __fastcall BgmManager___c___ReflectMasterVolumeLocal_b__52_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))x->klass->vtable._8_ReflectMasterVolume.method)(
    x,
    x->klass->vtable._9_PlayBgm.methodPtr);
}


void __fastcall BgmManager___c___ResetLocal_b__50_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))x->klass->vtable._6_Reset.method)(
    x,
    x->klass->vtable._7_SetMute.methodPtr);
}


System_String_o *__fastcall BgmManager___c___StopUnrequestedSubBgm_b__66_0(
        BgmManager___c_o *this,
        SubBgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields._BgmName_k__BackingField;
}


void __fastcall BgmManager___c___StopUnrequestedSubBgm_b__66_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._11_StopBgm.method)(
    x,
    0LL,
    x->klass->vtable._12_ExportPlayArgs.methodPtr);
}


void __fastcall BgmManager___c__53_object____cctor(const MethodInfo_1F378C8 *method)
{
  BgmManager___c__53_T__c *klass; // x20
  Il2CppClass *_0_BgmManager___c__53_T; // x20
  __int64 v4; // x0
  BgmManager___c__53_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BgmManager___c__53_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BgmManager___c__53_T__c *v16; // x19
  Il2CppClass *_2_BgmManager___c__53_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(method->klass);
  _0_BgmManager___c__53_T = klass->rgctx_data->_0_BgmManager___c__53_T_;
  if ( (BYTE2(_0_BgmManager___c__53_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_0_BgmManager___c__53_T);
  v4 = sub_B70764(_0_BgmManager___c__53_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_B08394(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BgmManager___c__53_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_B08394(v8);
  methodPointer(v6, v8->rgctx_data->_1_BgmManager___c__53_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(v16);
  _2_BgmManager___c__53_T = v16->rgctx_data->_2_BgmManager___c__53_T_;
  if ( (BYTE2(_2_BgmManager___c__53_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_2_BgmManager___c__53_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__53_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B70630(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BgmManager___c__53_object____ctor(BgmManager___c__53_T__o *this, const MethodInfo_1F379A4 *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__53_object____EnumeratePlayersHavingBgmName_b__53_0(
        BgmManager___c__53_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F379BC *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x[1].klass != 0LL;
}


void __fastcall BgmManager___c__65_object____cctor(const MethodInfo_1F37C84 *method)
{
  BgmManager___c__65_T__c *klass; // x20
  Il2CppClass *_0_BgmManager___c__65_T; // x20
  __int64 v4; // x0
  BgmManager___c__65_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BgmManager___c__65_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BgmManager___c__65_T__c *v16; // x19
  Il2CppClass *_2_BgmManager___c__65_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(method->klass);
  _0_BgmManager___c__65_T = klass->rgctx_data->_0_BgmManager___c__65_T_;
  if ( (BYTE2(_0_BgmManager___c__65_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_0_BgmManager___c__65_T);
  v4 = sub_B70764(_0_BgmManager___c__65_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_B08394(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BgmManager___c__65_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_B08394(v8);
  methodPointer(v6, v8->rgctx_data->_1_BgmManager___c__65_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(v16);
  _2_BgmManager___c__65_T = v16->rgctx_data->_2_BgmManager___c__65_T_;
  if ( (BYTE2(_2_BgmManager___c__65_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_2_BgmManager___c__65_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__65_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B70630(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BgmManager___c__65_object____ctor(BgmManager___c__65_T__o *this, const MethodInfo_1F37D60 *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__65_object____StopBgmLocal_b__65_0(
        BgmManager___c__65_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F37D78 *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))x->klass->vtable[11].method)(
           x,
           0LL,
           x->klass->vtable[12].methodPtr);
}


void __fastcall BgmManager___c__73_object____cctor(const MethodInfo_1F37D9C *method)
{
  BgmManager___c__73_T__c *klass; // x20
  Il2CppClass *_0_BgmManager___c__73_T; // x20
  __int64 v4; // x0
  BgmManager___c__73_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BgmManager___c__73_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BgmManager___c__73_T__c *v16; // x19
  Il2CppClass *_2_BgmManager___c__73_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(method->klass);
  _0_BgmManager___c__73_T = klass->rgctx_data->_0_BgmManager___c__73_T_;
  if ( (BYTE2(_0_BgmManager___c__73_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_0_BgmManager___c__73_T);
  v4 = sub_B70764(_0_BgmManager___c__73_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_B08394(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BgmManager___c__73_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_B08394(v8);
  methodPointer(v6, v8->rgctx_data->_1_BgmManager___c__73_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(v16);
  _2_BgmManager___c__73_T = v16->rgctx_data->_2_BgmManager___c__73_T_;
  if ( (BYTE2(_2_BgmManager___c__73_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_2_BgmManager___c__73_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__73_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B70630(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BgmManager___c__73_object____ctor(BgmManager___c__73_T__o *this, const MethodInfo_1F37E78 *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall BgmManager___c__73_object____ExportPlayArgsGroupLocal_b__73_0(
        BgmManager___c__73_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F37E90 *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[12].method)(
                            x,
                            x->klass->vtable[13].methodPtr);
}


void __fastcall BgmManager___c__DisplayClass28_0___ctor(
        BgmManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass28_0___ChangePlayerVolume_b__0(
        BgmManager___c__DisplayClass28_0_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0LL);
}


void __fastcall BgmManager___c__DisplayClass35_0___ctor(
        BgmManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass35_0___PlaySubBgm_b__0(
        BgmManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  BgmManager_o *ins; // x0

  ins = this->fields.ins;
  if ( !ins )
    sub_B7076C(0LL, method);
  BgmManager__PlayPreloadedBgm(ins, (BgmPlayArgs_o *)this->fields.args, 0LL);
}


void __fastcall BgmManager___c__DisplayClass51_0___ctor(
        BgmManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass51_0___SetMuteLocal_b__0(
        BgmManager___c__DisplayClass51_0_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, Il2CppMethodPointer))x->klass->vtable._7_SetMute.method)(
    x,
    this->fields.isMute,
    x->klass->vtable._8_ReflectMasterVolume.methodPtr);
}


void __fastcall BgmManager___c__DisplayClass53_0_object____ctor(
        BgmManager___c__DisplayClass53_0_T__o *this,
        const MethodInfo_1F3A658 *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass53_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass53_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F3A670 *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return System_String__op_Equality((System_String_o *)x[1].klass, this->fields.bgmNameFilter, 0LL);
}


void __fastcall BgmManager___c__DisplayClass56_0___ctor(
        BgmManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass56_0___PreloadAndPlayBgms_b__0(
        BgmManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  struct BgmManager_o *_4__this; // x0
  BgmPlayArgsGroup_o *cacheArgsGroup; // x1
  struct BgmPlayArgs_array *nonNullArgsAll; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  __int64 v8; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  cacheArgsGroup = _4__this->fields.cacheArgsGroup;
  if ( cacheArgsGroup == this->fields.argsGroup )
  {
    BgmManager__StopUnrequestedSubBgm(_4__this, cacheArgsGroup, 0LL);
    nonNullArgsAll = this->fields.nonNullArgsAll;
    if ( !nonNullArgsAll )
      goto LABEL_12;
    v6 = *(_QWORD *)&nonNullArgsAll->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        if ( v7 >= (unsigned int)v6 )
        {
          v8 = sub_B70798(_4__this);
          sub_B70738(v8, 0LL);
        }
        _4__this = this->fields.__4__this;
        if ( !_4__this )
          break;
        BgmManager__PlayPreloadedBgm(_4__this, nonNullArgsAll->m_Items[v7], 0LL);
        LODWORD(v6) = nonNullArgsAll->max_length;
        if ( (__int64)++v7 >= (int)v6 )
          goto LABEL_9;
      }
LABEL_12:
      sub_B7076C(_4__this, method);
    }
LABEL_9:
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_12;
    _4__this->fields.cacheArgsGroup = 0LL;
    sub_B70630(&_4__this->fields.cacheArgsGroup);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_12;
  }
  BgmManager__RemoveUnusedOldFromBindList(_4__this, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall BgmManager___c__DisplayClass56_1___ctor(
        BgmManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass56_1___PreloadAndPlayBgms_b__1(
        BgmManager___c__DisplayClass56_1_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct BgmManager___c__DisplayClass56_0_o *CS___8__locals1; // x9
  struct BgmPlayArgs_o *args; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (args = this->fields.args) == 0LL
    || (this = (BgmManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.__4__this) == 0LL )
  {
    sub_B7076C(this, callback);
  }
  BgmManager__PreloadBgm((BgmManager_o *)this, args->fields._BgmName_k__BackingField, callback, 0LL);
}


void __fastcall BgmManager___c__DisplayClass58_0___ctor(
        BgmManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass58_0___PreloadBgm_b__0(
        BgmManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *loadingBgmCueNameList; // x0
  __int64 v4; // x1
  struct BgmManager_o *_4__this; // x8
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20

  if ( (byte_434ED14 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__1__);
    byte_434ED14 = 1;
  }
  this->fields.tempCueSheetName = this->fields.cueName;
  sub_B70630(&this->fields);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.loadingBgmCueNameList) == 0LL )
  {
    sub_B7076C(loadingBgmCueNameList, v4);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    loadingBgmCueNameList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.cueName,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__1__, 0LL);
    this->fields.__9__1 = _9__1;
    sub_B70630(&this->fields.__9__1);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(tempCueSheetName, _9__1, 1, 0LL);
}


void __fastcall BgmManager___c__DisplayClass58_0___PreloadBgm_b__1(
        BgmManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  BgmManager___c__DisplayClass58_0_o *v2; // x19
  struct BgmManager_o *_4__this; // x8
  struct BgmManager_o *v4; // x8
  struct BgmManager_o *v5; // x8

  v2 = this;
  if ( (byte_434ED15 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Insert__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    this = (BgmManager___c__DisplayClass58_0_o *)sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_434ED15 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass58_0_o *)_4__this->fields.loadingBgmCueNameList;
  if ( !this )
    goto LABEL_14;
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
    (WarBoardManager_TaskList_o *)v2->fields.cueName,
    (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass58_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass58_0_o *)SoundManager__GetCueSheet(
                                                 (SoundManager_o *)this,
                                                 v2->fields.cueName,
                                                 0LL);
  if ( this )
  {
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass58_0_o *)v4->fields.addBindList;
    if ( !this )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass58_0_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                   (WarBoardManager_TaskList_o *)v2->fields.cueName,
                                                   (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v5 = v2->fields.__4__this;
      if ( v5 )
      {
        this = (BgmManager___c__DisplayClass58_0_o *)v5->fields.addBindList;
        if ( this )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Insert(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
            0,
            (XWeaponTrail_Element_o *)v2->fields.cueName,
            (const MethodInfo_302689C *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_B7076C(this, method);
    }
  }
LABEL_13:
  ActionExtensions__Call(v2->fields.finishCallback, 0LL);
}


void __fastcall BgmManager___c__DisplayClass60_0___ctor(
        BgmManager___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass60_0___CoWaitSameAudioLoading_b__0(
        BgmManager___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  BgmManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  return BgmManager__IsLoadingLocal(_4__this, this->fields.bgmName, 0LL);
}


void __fastcall BgmManager___c__DisplayClass64_0_object____ctor(
        BgmManager___c__DisplayClass64_0_T__o *this,
        const MethodInfo_1F3B024 *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass64_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass64_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F3B03C *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, float))x->klass->vtable[10].method)(
           x,
           x->klass->vtable[11].methodPtr,
           this->fields.fadeoutTime);
}


void __fastcall BgmManager___c__DisplayClass66_0___ctor(
        BgmManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass66_0___StopUnrequestedSubBgm_b__1(
        BgmManager___c__DisplayClass66_0_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  BgmManager___c__DisplayClass66_0_o *v4; // x20

  v4 = this;
  if ( (byte_434ED16 & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass66_0_o *)sub_B70694(&Method_System_Array_IndexOf_string___);
    byte_434ED16 = 1;
  }
  if ( !x )
    sub_B7076C(this, x);
  return (unsigned int)System_Array__IndexOf_UICommonButton_(
                         (UICommonButton_array *)v4->fields.subBgmNamesToPlay,
                         (UICommonButton_o *)x->fields.bgmName,
                         (const MethodInfo_1FCC134 *)Method_System_Array_IndexOf_string___) >> 31;
}


void __fastcall BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_1F3B064 *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass67_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F3B07C *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  BgmPlayerBase__PauseBgm((BgmPlayerBase_o *)x, this->fields.isPause, 0LL);
}


void __fastcall BgmManager___c__DisplayClass68_0___ctor(
        BgmManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass68_0___PlayJingleLocal_b__0(
        BgmManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  BgmManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BgmManager_o *)BgmManager__GetOrCreateJinglePlayer(_4__this, 0LL)) == 0LL )
    sub_B7076C(_4__this, method);
  JinglePlayer__PlayBgm(
    (JinglePlayer_o *)_4__this,
    this->fields.name,
    this->fields.volume,
    this->fields.callbackFunc,
    0LL);
}


void __fastcall BgmManager___c__DisplayClass69_0___ctor(
        BgmManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass69_0___GetOrCreateSubBgmPlayer_b__0(
        BgmManager___c__DisplayClass69_0_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0LL);
}