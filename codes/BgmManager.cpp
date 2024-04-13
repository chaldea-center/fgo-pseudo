void __fastcall BgmManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct BgmManager_StaticFields *static_fields; // x0
  System_Int32_array **v15; // x1
  struct BgmManager_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BgmManager_c *v24; // x8

  if ( (byte_42E7E36 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2604/*"BGM_CHALDEA_1"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2605/*"BGM_CHALDEA_2"*/, v11, v12, v13);
    byte_42E7E36 = 1;
  }
  BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME = 1.0;
  BgmManager_TypeInfo->static_fields->LOW_VOLUME = 0.1;
  static_fields = BgmManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_2604/*"BGM_CHALDEA_1"*/;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_2604/*"BGM_CHALDEA_1"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v15, v2, v3, v4, v5, v6, v7);
  v16 = BgmManager_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_2605/*"BGM_CHALDEA_2"*/;
  v16->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_2605/*"BGM_CHALDEA_2"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v17, v18, v19, v20, v21, v22, v23);
  v24 = BgmManager_TypeInfo;
  BgmManager_TypeInfo->static_fields->ADD_BIND_MAX = 5;
  v24->static_fields->isMute = 0;
  v24->static_fields->masterVolume = 1.0;
}


void __fastcall BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E7E35 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager___ctor__, v14, v15, v16);
    byte_42E7E35 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.addBindList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadingBgmCueNameList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v31;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bgmPlayers,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void __fastcall BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x19
  _BOOL8 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *Instance; // x20
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *monitor; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v36; // x21
  BgmPlayerBase_o *v37; // x0
  const MethodInfo *v38; // x1

  if ( (byte_42E7E0D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__, (_DWORD)method, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Predicate_BgmPlayerBase___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Predicate_BgmPlayerBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&Method_BgmManager___c__DisplayClass28_0__ChangePlayerVolume_b__0__, v19, v20, v21);
    sub_B5D5C4(&BgmManager___c__DisplayClass28_0_TypeInfo, v22, v23, v24);
    byte_42E7E0D = 1;
  }
  v25 = sub_B5D694(BgmManager___c__DisplayClass28_0_TypeInfo);
  BgmManager___c__DisplayClass28_0___ctor((BgmManager___c__DisplayClass28_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_13;
  *(_QWORD *)(v25 + 16) = bgmName;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)bgmName, v28, v29, v30, v31, v32, v33);
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v26 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v26 )
  {
    if ( Instance )
    {
      monitor = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)Instance[2].monitor;
      v36 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BgmPlayerBase__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v36,
        (Il2CppObject *)v25,
        Method_BgmManager___c__DisplayClass28_0__ChangePlayerVolume_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_BgmPlayerBase___ctor__);
      if ( monitor )
      {
        v37 = (BgmPlayerBase_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   monitor,
                                   (System_Predicate_T__o *)v36,
                                   (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v37 )
        {
          v37->fields.bgmVolume = volume;
          BgmPlayerBase__UpdateVolume(v37, v38);
        }
        return;
      }
    }
LABEL_13:
    sub_B5D69C(v26, v27);
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

  if ( (byte_42E7E29 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager__CoWaitSameAudioLoading_d__60_TypeInfo, (_DWORD)bgmName, (_DWORD)finishCallback, method);
    byte_42E7E29 = 1;
  }
  v7 = sub_B5D694(BgmManager__CoWaitSameAudioLoading_d__60_TypeInfo);
  BgmManager__CoWaitSameAudioLoading_d__60___ctor((BgmManager__CoWaitSameAudioLoading_d__60_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)bgmName, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int v11; // w9
  int v12; // w8

  if ( (byte_42E7E20 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5, v6, v7);
    byte_42E7E20 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B5D69C(v9, v10);
    if ( value )
      v11 = 1;
    else
      v11 = -1;
    v12 = Instance[2].fields.m_CachedPtr + v11;
    if ( (~(v12 >> 31) & 7) == 0 )
      v12 = 0;
    Instance[2].fields.m_CachedPtr = v12;
  }
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BgmManager__EnumeratePlayersHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_1ADB2F0 *method)
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
  const MethodInfo_1ADB2F0_RGCTXs *rgctx_data; // x8
  __int64 v19; // x20
  Il2CppClass *_5_System_Func_T__bool; // x22
  __int64 v21; // x22
  const MethodInfo_1ADB2F0_RGCTXs *v22; // x8
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
  const MethodInfo_1ADB2F0_RGCTXs *v35; // x8
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
    sub_AF52C4(method->rgctx_data->_0_BgmManager___c__DisplayClass53_0_T_);
  v7 = sub_B5D694(_0_BgmManager___c__DisplayClass53_0_T);
  v8 = ((__int64 (*)(void))method->rgctx_data->_1_BgmManager___c__DisplayClass53_0_T___ctor->methodPointer)();
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 16) = bgmNameFilter;
  sub_B5D560(
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
      sub_AF52C4(_5_System_Func_T__bool);
    v21 = sub_B5D694(_5_System_Func_T__bool);
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
      sub_AF52C4(_3_BgmManager___c__53_T);
      v26 = WORD1(_3_BgmManager___c__53_T->vtable[0].methodPtr);
    }
    if ( (v26 & 0x400) != 0 )
    {
      v27 = method->rgctx_data->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v27->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(method->rgctx_data->_3_BgmManager___c__53_T_);
      if ( !v27->_2.cctor_finished )
      {
        v28 = method->rgctx_data->_3_BgmManager___c__53_T_;
        if ( (BYTE2(v28->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4(method->rgctx_data->_3_BgmManager___c__53_T_);
        j_il2cpp_runtime_class_init_0(v28);
      }
    }
    v29 = method->rgctx_data->_3_BgmManager___c__53_T_;
    if ( (BYTE2(v29->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_3_BgmManager___c__53_T_);
    v30 = (System_Int32_array **)*((_QWORD *)v29->static_fields + 1);
    if ( !v30 )
    {
      v31 = method->rgctx_data->_3_BgmManager___c__53_T_;
      v32 = WORD1(v31->vtable[0].methodPtr);
      if ( (v32 & 1) == 0 )
      {
        sub_AF52C4(method->rgctx_data->_3_BgmManager___c__53_T_);
        v32 = WORD1(v31->vtable[0].methodPtr);
      }
      if ( (v32 & 0x400) != 0 )
      {
        v33 = method->rgctx_data->_3_BgmManager___c__53_T_;
        if ( (BYTE2(v33->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4(method->rgctx_data->_3_BgmManager___c__53_T_);
        if ( !v33->_2.cctor_finished )
        {
          v34 = method->rgctx_data->_3_BgmManager___c__53_T_;
          if ( (BYTE2(v34->vtable[0].methodPtr) & 1) == 0 )
            sub_AF52C4(method->rgctx_data->_3_BgmManager___c__53_T_);
          j_il2cpp_runtime_class_init_0(v34);
        }
      }
      v35 = method->rgctx_data;
      v36 = v35->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v36->vtable[0].methodPtr) & 1) == 0 )
      {
        sub_AF52C4(v35->_3_BgmManager___c__53_T_);
        v35 = method->rgctx_data;
      }
      v37 = v35->_5_System_Func_T__bool_;
      v38 = *(_QWORD *)v36->static_fields;
      if ( (BYTE2(v37->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(v37);
      v30 = (System_Int32_array **)sub_B5D694(v37);
      ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_6_System_Func_T__bool___ctor->methodPointer)(
        v30,
        v38,
        method->rgctx_data->_4_BgmManager___c__53_T___EnumeratePlayersHavingBgmName_b__53_0);
      v45 = method->rgctx_data->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v45->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(method->rgctx_data->_3_BgmManager___c__53_T_);
      static_fields = (char *)v45->static_fields;
      *((_QWORD *)static_fields + 1) = v30;
      sub_B5D560((BattleServantConfConponent_o *)(static_fields + 8), v30, v39, v40, v41, v42, v43, v44);
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
        const MethodInfo_1ADB558 *method)
{
  __int64 v4; // x0

  if ( !this )
    sub_B5D69C(0LL, bgmNameFilter);
  v4 = ((__int64 (__fastcall *)(BgmManager_o *, System_String_o *))method->rgctx_data->_0_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
         this,
         bgmNameFilter);
  return ((__int64 (__fastcall *)(__int64))method->rgctx_data->_1_System_Linq_Enumerable_Any_T_->methodPointer)(v4);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_42E7E05 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___, v1, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7, v8, v9);
    byte_42E7E05 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !Instance )
    sub_B5D69C(v11, v12);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_1ADB598 *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroupLocal_object_(
        BgmManager_o *this,
        const MethodInfo_1ADB598 *method)
{
  int v2; // w2
  __int64 v3; // x3
  BgmManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x20
  long double v10; // q0
  Il2CppClass *_1_BgmManager___c__73_T; // x21
  __int16 v12; // w8
  Il2CppClass *v13; // x21
  Il2CppClass *v14; // x21
  Il2CppClass *v15; // x21
  System_Int32_array **v16; // x21
  Il2CppClass *v17; // x21
  __int16 v18; // w8
  Il2CppClass *v19; // x21
  Il2CppClass *v20; // x21
  const MethodInfo_1ADB598_RGCTXs *rgctx_data; // x8
  Il2CppClass *v22; // x21
  Il2CppClass *_3_System_Func_T__BgmPlayArgs; // x23
  __int64 v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  Il2CppClass *v31; // x22
  char *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  BgmPlayArgs_array *v34; // x19
  BgmPlayArgsGroup_o *v35; // x20

  v5 = this;
  if ( (byte_42EA283 & 1) == 0 )
  {
    sub_B5D5C4(&BgmPlayArgsGroup_TypeInfo, (_DWORD)method, v2, v3);
    this = (BgmManager_o *)sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v6, v7, v8);
    byte_42EA283 = 1;
  }
  if ( !v5 )
    sub_B5D69C(this, method);
  v9 = ((__int64 (__fastcall *)(BgmManager_o *, _QWORD))method->rgctx_data->_0_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
         v5,
         0LL);
  _1_BgmManager___c__73_T = method->rgctx_data->_1_BgmManager___c__73_T_;
  v12 = WORD1(_1_BgmManager___c__73_T->vtable[0].methodPtr);
  if ( (v12 & 1) == 0 )
  {
    sub_AF52C4(method->rgctx_data->_1_BgmManager___c__73_T_);
    v12 = WORD1(_1_BgmManager___c__73_T->vtable[0].methodPtr);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = method->rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_1_BgmManager___c__73_T_);
    if ( !v13->_2.cctor_finished )
    {
      v14 = method->rgctx_data->_1_BgmManager___c__73_T_;
      if ( (BYTE2(v14->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(method->rgctx_data->_1_BgmManager___c__73_T_);
      *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = method->rgctx_data->_1_BgmManager___c__73_T_;
  if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_1_BgmManager___c__73_T_);
  v16 = (System_Int32_array **)*((_QWORD *)v15->static_fields + 1);
  if ( !v16 )
  {
    v17 = method->rgctx_data->_1_BgmManager___c__73_T_;
    v18 = WORD1(v17->vtable[0].methodPtr);
    if ( (v18 & 1) == 0 )
    {
      sub_AF52C4(method->rgctx_data->_1_BgmManager___c__73_T_);
      v18 = WORD1(v17->vtable[0].methodPtr);
    }
    if ( (v18 & 0x400) != 0 )
    {
      v19 = method->rgctx_data->_1_BgmManager___c__73_T_;
      if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(method->rgctx_data->_1_BgmManager___c__73_T_);
      if ( !v19->_2.cctor_finished )
      {
        v20 = method->rgctx_data->_1_BgmManager___c__73_T_;
        if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4(method->rgctx_data->_1_BgmManager___c__73_T_);
        j_il2cpp_runtime_class_init_0(v20);
      }
    }
    rgctx_data = method->rgctx_data;
    v22 = rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v22->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_AF52C4(rgctx_data->_1_BgmManager___c__73_T_);
      rgctx_data = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = rgctx_data->_3_System_Func_T__BgmPlayArgs_;
    v24 = *(_QWORD *)v22->static_fields;
    if ( (BYTE2(_3_System_Func_T__BgmPlayArgs->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(_3_System_Func_T__BgmPlayArgs);
    v16 = (System_Int32_array **)sub_B5D694(_3_System_Func_T__BgmPlayArgs);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__BgmPlayArgs___ctor->methodPointer)(
      v16,
      v24,
      method->rgctx_data->_2_BgmManager___c__73_T___ExportPlayArgsGroupLocal_b__73_0);
    v31 = method->rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v31->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_1_BgmManager___c__73_T_);
    static_fields = (char *)v31->static_fields;
    *((_QWORD *)static_fields + 1) = v16;
    sub_B5D560((BattleServantConfConponent_o *)(static_fields + 8), v16, v25, v26, v27, v28, v29, v30);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, System_Int32_array **, long double))method->rgctx_data->_5_System_Linq_Enumerable_Select_T__BgmPlayArgs_->methodPointer)(
                                                               v9,
                                                               v16,
                                                               v10);
  v34 = (BgmPlayArgs_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                               v33,
                               (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v35 = (BgmPlayArgsGroup_o *)sub_B5D694(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_23979096(v35, v34, 0LL);
  return v35;
}


System_String_o *__fastcall BgmManager__ExtractCueName(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Char_array *v5; // x0
  System_Char_array *v6; // x1
  __int64 v7; // x8
  __int64 v9; // x0

  if ( (byte_42E7E2C & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42E7E2C = 1;
  }
  v5 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_9;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_10;
  v5->m_Items[2] = 47;
  if ( !name || (v5 = (System_Char_array *)System_String__Split(name, v5, 0LL)) == 0LL )
LABEL_9:
    sub_B5D69C(v5, v6);
  v7 = *(_QWORD *)&v5->max_length;
  if ( !(_DWORD)v7 )
  {
LABEL_10:
    v9 = sub_B5D6C8(v5);
    sub_B5D668(v9, 0LL);
  }
  return *(System_String_o **)((char *)&v5->m_Items[2] + (((v7 << 32) - 0x100000000LL) >> 29));
}


void __fastcall BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x3

  if ( (byte_42E7E15 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, (_DWORD)v3, v4);
    byte_42E7E15 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopBgm(0LL, fadeoutTime, callback, v3);
}


bool __fastcall BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        float fadeoutTime,
        System_String_o *name,
        const MethodInfo_1ADB7D4 *method)
{
  __int64 v4; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  Il2CppClass *_0_BgmManager___c__DisplayClass64_0_T; // x22
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x20
  Il2CppClass *_4_System_Func_T__bool; // x21
  __int64 v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_42EA284 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_bool___, (_DWORD)name, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_bool___, v9, v10, v11);
    byte_42EA284 = 1;
  }
  _0_BgmManager___c__DisplayClass64_0_T = method->rgctx_data->_0_BgmManager___c__DisplayClass64_0_T_;
  if ( (BYTE2(_0_BgmManager___c__DisplayClass64_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_0_BgmManager___c__DisplayClass64_0_T_);
  v13 = sub_B5D694(_0_BgmManager___c__DisplayClass64_0_T);
  v14 = ((__int64 (*)(void))method->rgctx_data->_1_BgmManager___c__DisplayClass64_0_T___ctor->methodPointer)();
  if ( !v13 || (*(float *)(v13 + 16) = fadeoutTime, !this) )
    sub_B5D69C(v14, v15);
  v16 = ((__int64 (__fastcall *)(BgmManager_o *, System_String_o *))method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
          this,
          name);
  _4_System_Func_T__bool = method->rgctx_data->_4_System_Func_T__bool_;
  if ( (BYTE2(_4_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_4_System_Func_T__bool_);
  v18 = sub_B5D694(_4_System_Func_T__bool);
  ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_5_System_Func_T__bool___ctor->methodPointer)(
    v18,
    v13,
    method->rgctx_data->_3_BgmManager___c__DisplayClass64_0_T___FadeoutBgmLocal_b__0);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, __int64))method->rgctx_data->_6_System_Linq_Enumerable_Select_T__bool_->methodPointer)(
                                                               v16,
                                                               v18);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v19,
                                                               (const MethodInfo_1CB7518 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v20, (const MethodInfo_1C986CC *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E7E1E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___, v2, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v9, v10, v11);
    byte_42E7E1E = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v13 )
  {
    if ( !Instance )
      sub_B5D69C(v13, v14);
    BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0LL,
      (const MethodInfo_1ADB7D4 *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_42E7E21 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4, v5, v6);
    byte_42E7E21 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B5D69C(v8, v9);
    Instance[2].fields.m_CachedPtr = 0;
  }
}


CriAtomSource_o *__fastcall BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_42E7E31 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___, (_DWORD)method, v2, v3);
    byte_42E7E31 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v6);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                              gameObject,
                              (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t __fastcall BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SoundManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_o *CueSheet; // x19
  SoundManager_c *v11; // x8

  if ( (byte_42E7E07 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E7E07 = 1;
  }
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
  CueSheet = SoundManager__GetCueSheet(Instance, name, 0LL);
  v11 = SoundManager_TypeInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v11 = SoundManager_TypeInfo;
  }
  return System_String__op_Equality(CueSheet, v11->static_fields->RESIDENT_RESOURCE_SOUND_NAME, 0LL);
}


System_String_o *__fastcall BgmManager__GetBgmName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x19
  __int64 v8; // x1
  bool v9; // w8
  System_String_o *result; // x0
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_42E7E19 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4, v5, v6);
    byte_42E7E19 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v9 )
  {
    if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
      sub_B5D69C(0LL, v8);
    return *(System_String_o **)&webViewBase->fields.m_CachedPtr;
  }
  return result;
}


System_String_o *__fastcall BgmManager__GetMainBgmName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  TerminalOverwriteMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o **p_COSMOS_IN_THE_LOSTBELT_BGM_NAME; // x19
  int32_t UiFlag; // w19
  System_Collections_ICollection_o *ClearWarIdList; // x20
  BalanceConfig_c *v25; // x0
  BalanceConfig_c *v26; // x0
  BgmManager_c *v27; // x0
  System_String_o *bgmName; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7E34 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&BgmManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v10, v11, v12);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E7E34 = 1;
  }
  bgmName = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v20);
  MasterData_WarQuestSelectionMaster = (TerminalOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
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
    v25 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
            v25->static_fields->OrdealCallWarId,
            (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
LABEL_18:
      v27 = BgmManager_TypeInfo;
      if ( UiFlag == 1 )
      {
        if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          v27 = BgmManager_TypeInfo;
        }
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v27->static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
      }
      else
      {
        if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          v27 = BgmManager_TypeInfo;
        }
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v27->static_fields->DEFAULT_MAIN_BGM_NAME;
      }
    }
    else
    {
      v26 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v26->static_fields->OrdealCallClearBgmName;
    }
  }
  return *p_COSMOS_IN_THE_LOSTBELT_BGM_NAME;
}


float __fastcall BgmManager__GetMasterVolume(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  BgmManager_c *v4; // x0

  if ( (byte_42E7E0B & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, v1, v2, v3);
    byte_42E7E0B = 1;
  }
  v4 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v4 = BgmManager_TypeInfo;
  }
  return v4->static_fields->masterVolume;
}


JinglePlayer_o *__fastcall BgmManager__GetOrCreateJinglePlayer(BgmManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *jinglePlayer; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  struct JinglePlayer_o **p_jinglePlayer; // x20
  JinglePlayer_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v27; // x0

  if ( (byte_42E7E30 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_JinglePlayer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___, v5, v6, v7);
    sub_B5D5C4(&JinglePlayer_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v11, v12, v13);
    byte_42E7E30 = 1;
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  jinglePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(v14, (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !jinglePlayer )
    goto LABEL_11;
  v17 = *(_QWORD *)&jinglePlayer->fields._size;
  if ( !v17 )
  {
    v19 = (JinglePlayer_o *)sub_B5D694(JinglePlayer_TypeInfo);
    JinglePlayer___ctor(v19, 0LL);
    this->fields.jinglePlayer = v19;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.jinglePlayer,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
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
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
        return *p_jinglePlayer;
      }
    }
LABEL_11:
    sub_B5D69C(jinglePlayer, v16);
  }
  if ( !(_DWORD)v17 )
  {
    v27 = sub_B5D6C8(jinglePlayer);
    sub_B5D668(v27, 0LL);
  }
  p_jinglePlayer = (struct JinglePlayer_o **)&jinglePlayer->fields._syncRoot;
  return *p_jinglePlayer;
}


SubBgmPlayer_o *__fastcall BgmManager__GetOrCreateSubBgmPlayer(
        BgmManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  __int64 v39; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *bgmPlayers; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v49; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v50; // x22
  SubBgmPlayer_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  BgmManager___c_c *v52; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__69_1; // x21
  Il2CppObject *v55; // x22
  struct BgmManager___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7

  if ( (byte_42E7E2F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_SubBgmPlayer___, (_DWORD)bgmName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_SubBgmPlayer___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_SubBgmPlayer__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_SubBgmPlayer__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v21, v22, v23);
    sub_B5D5C4(&SubBgmPlayer_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__69_1__, v27, v28, v29);
    sub_B5D5C4(&Method_BgmManager___c__DisplayClass69_0__GetOrCreateSubBgmPlayer_b__0__, v30, v31, v32);
    sub_B5D5C4(&BgmManager___c__DisplayClass69_0_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&BgmManager___c_TypeInfo, v36, v37, v38);
    byte_42E7E2F = 1;
  }
  v39 = sub_B5D694(BgmManager___c__DisplayClass69_0_TypeInfo);
  BgmManager___c__DisplayClass69_0___ctor((BgmManager___c__DisplayClass69_0_o *)v39, 0LL);
  if ( !v39 )
    goto LABEL_21;
  *(_QWORD *)(v39 + 16) = bgmName;
  sub_B5D560((BattleServantConfConponent_o *)(v39 + 16), (System_Int32_array **)bgmName, v42, v43, v44, v45, v46, v47);
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v49 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                            v48,
                                                                                            (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v50 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v50,
    (Il2CppObject *)v39,
    Method_BgmManager___c__DisplayClass69_0__GetOrCreateSubBgmPlayer_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                       v49,
                                                                                       (System_Func_T__bool__o *)v50,
                                                                                       (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    v52 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v52 = BgmManager___c_TypeInfo;
    }
    static_fields = v52->static_fields;
    _9__69_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__69_1;
    if ( !_9__69_1 )
    {
      if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v55 = (Il2CppObject *)static_fields->__9;
      _9__69_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_SubBgmPlayer__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__69_1,
        v55,
        Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__69_1__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
      v56 = BgmManager___c_TypeInfo->static_fields;
      v56->__9__69_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__69_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v56->__9__69_1,
        (System_Int32_array **)_9__69_1,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
    }
    bgmPlayers = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(v49, (System_Func_T__bool__o *)_9__69_1, (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_SubBgmPlayer___);
    USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)bgmPlayers;
    if ( !bgmPlayers )
    {
      if ( v49 )
      {
        if ( (int)v49->max_length > 1 )
          return (SubBgmPlayer_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v49,
                                     (const MethodInfo_1CAADA0 *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)sub_B5D694(SubBgmPlayer_TypeInfo);
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
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
            return USFGOActorBattleActionEventConditional_OverwriteParamCondition;
          }
        }
      }
LABEL_21:
      sub_B5D69C(bgmPlayers, v41);
    }
  }
  return USFGOActorBattleActionEventConditional_OverwriteParamCondition;
}


void __fastcall BgmManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42E7E06 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4, v5, v6);
    byte_42E7E06 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B5D69C(v8, v9);
    BgmManager__InitializeLocal((BgmManager_o *)Instance, v9);
  }
}


void __fastcall BgmManager__InitializeLocal(BgmManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BgmManager_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *bgmPlayers; // x19
  MainBgmPlayer_o *v30; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  void *addBindList; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x20
  Il2CppObject *v39; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  BgmManager_c *v47; // x0

  v4 = this;
  if ( (byte_42E7E22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BgmPlayerBase___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BgmPlayerBase__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BgmManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v17, v18, v19);
    sub_B5D5C4(&MainBgmPlayer_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_BgmManager___c__InitializeLocal_b__49_0__, v23, v24, v25);
    this = (BgmManager_o *)sub_B5D5C4(&BgmManager___c_TypeInfo, v26, v27, v28);
    byte_42E7E22 = 1;
  }
  bgmPlayers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v4->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_20;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v30 = (MainBgmPlayer_o *)sub_B5D694(MainBgmPlayer_TypeInfo);
    MainBgmPlayer___ctor(v30, 0LL);
    v4->fields.mainBgmPlayer = v30;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.mainBgmPlayer,
      (System_Int32_array **)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    this = (BgmManager_o *)v4->fields.bgmPlayers;
    if ( !this )
      goto LABEL_20;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v4->fields.mainBgmPlayer,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    bgmPlayers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v4->fields.bgmPlayers;
  }
  this = (BgmManager_o *)BgmManager___c_TypeInfo;
  if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    this = (BgmManager_o *)BgmManager___c_TypeInfo;
  }
  addBindList = this[2].fields.addBindList;
  v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)addBindList + 1);
  if ( !v38 )
  {
    if ( (this[3].fields.enableCounter_KeepSubBgm & 0x4000000) != 0 && !this[2].fields.enableCounter_KeepSubBgm )
    {
      j_il2cpp_runtime_class_init_0(this);
      addBindList = BgmManager___c_TypeInfo->static_fields;
    }
    v39 = *(Il2CppObject **)addBindList;
    v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v38,
      v39,
      Method_BgmManager___c__InitializeLocal_b__49_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BgmPlayerBase___ctor__);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Action_BgmPlayerBase__o *)v38;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->__9__49_0,
      (System_Int32_array **)v38,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !bgmPlayers )
LABEL_20:
    sub_B5D69C(this, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v38,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v47 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v47);
}


bool __fastcall BgmManager__IsKeepSubBgm(BgmManager_o *this, const MethodInfo *method)
{
  return this->fields.enableCounter_KeepSubBgm > 0;
}


bool __fastcall BgmManager__IsLoadingLocal(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x3
  BgmManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadingBgmCueNameList; // x8
  struct System_Collections_Generic_List_string__o *v11; // x8

  v5 = this;
  if ( (byte_42E7E2B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, (_DWORD)name, (_DWORD)method, v3);
    this = (BgmManager_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v6, v7, v8);
    byte_42E7E2B = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v5->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
               loadingBgmCueNameList,
               (WarBoardManager_TaskList_o *)this,
               (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_B5D69C(this, name);
  }
  v11 = v5->fields.loadingBgmCueNameList;
  if ( !v11 )
    goto LABEL_8;
  return v11->fields._size > 0;
}


bool __fastcall BgmManager__IsPlayBgm(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1

  if ( (byte_42E7E0E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v8, v9, v10);
    byte_42E7E0E = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v12 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v12, v13);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_1ADB558 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool __fastcall BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1

  if ( (byte_42E7E1A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v8, v9, v10);
    byte_42E7E1A = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v12 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v12, v13);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_1ADB558 *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool __fastcall BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  __int64 v3; // x3
  BgmManager_o *Instance; // x20
  const MethodInfo *v6; // x2
  System_String_o *CueName; // x0
  __int64 v8; // x1

  if ( (byte_42E7E2A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, (_DWORD)bgmName, (_DWORD)method, v3);
    byte_42E7E2A = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName(Instance, bgmName, v6);
  if ( !Instance )
    sub_B5D69C(CueName, v8);
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0LL) != 0LL;
}


void __fastcall BgmManager__LateUpdate(BgmManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BgmManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  BgmPlayerBase_o *jinglePlayer; // x0
  bool IsPlaying; // w0
  int v77; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x20
  BgmManager___c_c *v79; // x8
  struct BgmManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__75_0; // x21
  Il2CppObject *v82; // x22
  struct BgmManager___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  _BOOL4 v90; // w0
  System_Collections_Generic_IEnumerable_TResult__o *v91; // x0
  BgmManager___c_c *v92; // x8
  System_Collections_Generic_IEnumerable_T__o *v93; // x20
  struct BgmManager___c_StaticFields *v94; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__75_1; // x21
  Il2CppObject *v96; // x22
  struct BgmManager___c_StaticFields *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  BgmManager_o *v104; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x0
  System_Collections_Generic_IEnumerable_T__o *v106; // x21
  BgmManager___c_c *v107; // x0
  struct BgmManager___c_StaticFields *v108; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__75_3; // x22
  Il2CppObject *v110; // x23
  struct BgmManager___c_StaticFields *v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  const MethodInfo *v118; // x2
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v119; // x19
  void *addBindList; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v121; // x20
  Il2CppObject *v122; // x21
  struct BgmManager___c_StaticFields *v123; // x0
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7

  v4 = this;
  if ( (byte_42E7E33 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_GeneralBgmPlayer___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Action_BgmPlayerBase___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Action_BgmPlayArgs___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Action_BgmPlayArgs__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Action_BgmPlayerBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Action_GeneralBgmPlayer__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BgmPlayArgs___, v20, v21, v22);
    sub_B5D5C4(&Method_BasicHelper_ForEach_GeneralBgmPlayer___, v23, v24, v25);
    sub_B5D5C4(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, v26, v27, v28);
    sub_B5D5C4(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___, v29, v30, v31);
    sub_B5D5C4(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___, v32, v33, v34);
    sub_B5D5C4(&BgmManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___, v38, v39, v40);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___, v41, v42, v43);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v44, v45, v46);
    sub_B5D5C4(&Method_System_Func_GeneralBgmPlayer__bool___ctor__, v47, v48, v49);
    sub_B5D5C4(&System_Func_GeneralBgmPlayer__bool__TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v56, v57, v58);
    sub_B5D5C4(&Method_BgmManager___c__LateUpdate_b__75_0__, v59, v60, v61);
    sub_B5D5C4(&Method_BgmManager___c__LateUpdate_b__75_1__, v62, v63, v64);
    sub_B5D5C4(&Method_BgmManager___c__LateUpdate_b__75_2__, v65, v66, v67);
    sub_B5D5C4(&Method_BgmManager___c__LateUpdate_b__75_3__, v68, v69, v70);
    this = (BgmManager_o *)sub_B5D5C4(&BgmManager___c_TypeInfo, v71, v72, v73);
    byte_42E7E33 = 1;
  }
  bgmPlayers = v4->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_57;
  if ( bgmPlayers->fields._size >= 1 )
  {
    jinglePlayer = (BgmPlayerBase_o *)v4->fields.jinglePlayer;
    if ( jinglePlayer )
    {
      IsPlaying = BgmPlayerBase__IsPlaying(jinglePlayer, method);
      bgmPlayers = v4->fields.bgmPlayers;
      v77 = IsPlaying;
    }
    else
    {
      v77 = 0;
    }
    v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                 (System_Collections_IEnumerable_o *)bgmPlayers,
                                                                 (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    v79 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v79 = BgmManager___c_TypeInfo;
    }
    static_fields = v79->static_fields;
    _9__75_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__75_0;
    if ( !_9__75_0 )
    {
      if ( (BYTE3(v79->vtable._0_Equals.methodPtr) & 4) != 0 && !v79->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v79);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v82 = (Il2CppObject *)static_fields->__9;
      _9__75_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_GeneralBgmPlayer__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__75_0,
        v82,
        Method_BgmManager___c__LateUpdate_b__75_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_GeneralBgmPlayer__bool___ctor__);
      v83 = BgmManager___c_TypeInfo->static_fields;
      v83->__9__75_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__75_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v83->__9__75_0,
        (System_Int32_array **)_9__75_0,
        v84,
        v85,
        v86,
        v87,
        v88,
        v89);
    }
    v90 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
            v78,
            (System_Func_TSource__bool__o *)_9__75_0,
            (const MethodInfo_1C9A92C *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v77 & v90) != 0 )
    {
      v91 = System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
              (System_Collections_IEnumerable_o *)v4->fields.bgmPlayers,
              (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
      v92 = BgmManager___c_TypeInfo;
      v93 = (System_Collections_Generic_IEnumerable_T__o *)v91;
      if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BgmManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
        v92 = BgmManager___c_TypeInfo;
      }
      v94 = v92->static_fields;
      _9__75_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v94->__9__75_1;
      if ( !_9__75_1 )
      {
        if ( (BYTE3(v92->vtable._0_Equals.methodPtr) & 4) != 0 && !v92->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v92);
          v94 = BgmManager___c_TypeInfo->static_fields;
        }
        v96 = (Il2CppObject *)v94->__9;
        _9__75_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_GeneralBgmPlayer__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__75_1,
          v96,
          Method_BgmManager___c__LateUpdate_b__75_1__,
          (const MethodInfo_258B320 *)Method_System_Action_GeneralBgmPlayer___ctor__);
        v97 = BgmManager___c_TypeInfo->static_fields;
        v97->__9__75_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__75_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v97->__9__75_1,
          (System_Int32_array **)_9__75_1,
          v98,
          v99,
          v100,
          v101,
          v102,
          v103);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v93,
        (System_Action_T__o *)_9__75_1,
        (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v4->fields.isBgmStopJingle = 1;
      if ( v77 )
      {
LABEL_47:
        this = (BgmManager_o *)BgmManager___c_TypeInfo;
        v119 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v4->fields.bgmPlayers;
        if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BgmManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
          this = (BgmManager_o *)BgmManager___c_TypeInfo;
        }
        addBindList = this[2].fields.addBindList;
        v121 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)addBindList + 10);
        if ( !v121 )
        {
          if ( (this[3].fields.enableCounter_KeepSubBgm & 0x4000000) != 0 && !this[2].fields.enableCounter_KeepSubBgm )
          {
            j_il2cpp_runtime_class_init_0(this);
            addBindList = BgmManager___c_TypeInfo->static_fields;
          }
          v122 = *(Il2CppObject **)addBindList;
          v121 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BgmPlayerBase__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v121,
            v122,
            Method_BgmManager___c__LateUpdate_b__75_2__,
            (const MethodInfo_258B320 *)Method_System_Action_BgmPlayerBase___ctor__);
          v123 = BgmManager___c_TypeInfo->static_fields;
          v123->__9__75_2 = (struct System_Action_BgmPlayerBase__o *)v121;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v123->__9__75_2,
            (System_Int32_array **)v121,
            v124,
            v125,
            v126,
            v127,
            v128,
            v129);
        }
        if ( v119 )
        {
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            v119,
            (System_Action_T__o *)v121,
            (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
          return;
        }
LABEL_57:
        sub_B5D69C(this, method);
      }
    }
    else
    {
      if ( !v90
        && v77 == 0
        && v4->fields.isBgmStopJingle
        && BgmManager__ExistsPlayerHavingBgmName_object_(
             v4,
             0LL,
             (const MethodInfo_1ADB558 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
      {
        this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                                 v4,
                                 (const MethodInfo_1ADB598 *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
        if ( !this )
          goto LABEL_57;
        v104 = this;
        v105 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                                      (BgmPlayArgsGroup_o *)this,
                                                                      method);
        v106 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                v105,
                                                                (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
        this = (BgmManager_o *)BgmManager__StopBgmLocal_SubBgmPlayer_(
                                 v4,
                                 0LL,
                                 (const MethodInfo_1ADB9E0 *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
        if ( !v106 )
          goto LABEL_57;
        if ( v106[1].monitor )
        {
          v107 = BgmManager___c_TypeInfo;
          if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
            v107 = BgmManager___c_TypeInfo;
          }
          v108 = v107->static_fields;
          _9__75_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v108->__9__75_3;
          if ( !_9__75_3 )
          {
            if ( (BYTE3(v107->vtable._0_Equals.methodPtr) & 4) != 0 && !v107->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v107);
              v108 = BgmManager___c_TypeInfo->static_fields;
            }
            v110 = (Il2CppObject *)v108->__9;
            _9__75_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BgmPlayArgs__TypeInfo);
            System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
              _9__75_3,
              v110,
              Method_BgmManager___c__LateUpdate_b__75_3__,
              (const MethodInfo_258B320 *)Method_System_Action_BgmPlayArgs___ctor__);
            v111 = BgmManager___c_TypeInfo->static_fields;
            v111->__9__75_3 = (struct System_Action_BgmPlayArgs__o *)_9__75_3;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v111->__9__75_3,
              (System_Int32_array **)_9__75_3,
              v112,
              v113,
              v114,
              v115,
              v116,
              v117);
          }
          BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v106,
            (System_Action_T__o *)_9__75_3,
            (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BgmPlayArgs___);
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          BgmManager__PlayBgm_23964048((BgmPlayArgsGroup_o *)v104, 0LL, v118);
        }
      }
      if ( v77 )
        goto LABEL_47;
    }
    v4->fields.isBgmStopJingle = 0;
    goto LABEL_47;
  }
}


void __fastcall BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  bool v17; // w19

  if ( (byte_42E7E1F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v11, v12, v13);
    byte_42E7E1F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v15 )
  {
    if ( !Instance )
      sub_B5D69C(v15, v16);
    v17 = isPause;
    BgmManager__PauseBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      v17,
      0LL,
      (const MethodInfo_1ADB908 *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      v17,
      0LL,
      (const MethodInfo_1ADB908 *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__PauseBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_1ADB908 *method)
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
    sub_AF52C4(method->rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_);
  v8 = sub_B5D694(_0_BgmManager___c__DisplayClass67_0_T);
  v9 = ((__int64 (*)(void))method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor->methodPointer)();
  if ( !v8 )
    sub_B5D69C(v9, v10);
  *(_BYTE *)(v8 + 16) = isPause;
  v11 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_BgmPlayerBase__o *))method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_->methodPointer)(this->fields.bgmPlayers);
  _4_System_Action_T = method->rgctx_data->_4_System_Action_T_;
  if ( (BYTE2(_4_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_4_System_Action_T_);
  v13 = sub_B5D694(_4_System_Action_T);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BgmPlayArgsGroup_o *v17; // x0
  BgmPlayArgsGroup_o *v18; // x22
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x2
  System_Nullable_float__o volumeNullable; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_volumeNullable; // 0:x0.8
  System_Nullable_float__o v23; // 0:x2.8

  if ( (byte_42E7E10 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, startTime, (_DWORD)finishCallback, method);
    sub_B5D5C4(&BgmPlayArgsGroup_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v14, v15, v16);
    byte_42E7E10 = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0LL;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
  v17 = (BgmPlayArgsGroup_o *)sub_B5D694(BgmPlayArgsGroup_TypeInfo);
  v23 = volumeNullable;
  v18 = v17;
  BgmPlayArgsGroup___ctor_23963936(v17, name, v23, fadeTime, startTime, v19);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_23964048(v18, finishCallback, v20);
}


void __fastcall BgmManager__PlayBgm_23964048(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_42E7E12 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)finishCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v6, v7, v8);
    byte_42E7E12 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v10 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !Instance )
      sub_B5D69C(v10, v11);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, v12);
  }
}


void __fastcall BgmManager__PlayBgm_23964252(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BgmPlayArgsGroup_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_42E7E11 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)subArray, (_DWORD)finishCallback, method);
    sub_B5D5C4(&BgmPlayArgsGroup_TypeInfo, v7, v8, v9);
    byte_42E7E11 = 1;
  }
  v10 = (BgmPlayArgsGroup_o *)sub_B5D694(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor(v10, main, (BgmPlayArgs_array *)subArray, v11);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_23964048(v10, finishCallback, v12);
}


void __fastcall BgmManager__PlayJingle(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3

  if ( (byte_42E7E1B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callbackFunc, (_DWORD)method, v4);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v8, v9, v10);
    byte_42E7E1B = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v12 )
  {
    if ( !Instance )
      sub_B5D69C(v12, v13);
    BgmManager__PlayJingleLocal((BgmManager_o *)Instance, name, volume, callbackFunc, v14);
  }
}


void __fastcall BgmManager__PlayJingleLocal(
        BgmManager_o *this,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
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
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_o *v36; // x20
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x3

  if ( (byte_42E7E2E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)name, (_DWORD)callbackFunc, method);
    sub_B5D5C4(&Method_BgmManager___c__DisplayClass68_0__PlayJingleLocal_b__0__, v9, v10, v11);
    sub_B5D5C4(&BgmManager___c__DisplayClass68_0_TypeInfo, v12, v13, v14);
    byte_42E7E2E = 1;
  }
  v15 = sub_B5D694(BgmManager___c__DisplayClass68_0_TypeInfo);
  BgmManager___c__DisplayClass68_0___ctor((BgmManager___c__DisplayClass68_0_o *)v15, 0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = name;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)name, v24, v25, v26, v27, v28, v29);
  *(float *)(v15 + 32) = volume;
  *(_QWORD *)(v15 + 40) = callbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v15 + 40),
    (System_Int32_array **)callbackFunc,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = *(System_String_o **)(v15 + 24);
  v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)v15, Method_BgmManager___c__DisplayClass68_0__PlayJingleLocal_b__0__, 0LL);
  BgmManager__PreloadBgm(this, v36, v37, v38);
}


void __fastcall BgmManager__PlayJingle_23968660(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x3

  if ( (byte_42E7E1C & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, (_DWORD)v3, v4);
    byte_42E7E1C = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, 0LL, v3);
}


void __fastcall BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E7E13 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7E13 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_23964252(args, 0LL, 0LL, v3);
}


void __fastcall BgmManager__PlayPreloadedBgm(BgmManager_o *this, BgmPlayArgs_o *args, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *BgmName_k__BackingField; // x20
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  BgmPlayArgs_c *klass; // x8
  unsigned int v13; // w9
  __int64 v14; // x11
  __int64 v15; // x11
  void *mainBgmPlayer; // x0

  if ( (byte_42E7E27 & 1) == 0 )
  {
    sub_B5D5C4(&MainBgmPlayArgs_TypeInfo, (_DWORD)args, (_DWORD)method, v3);
    sub_B5D5C4(&SubBgmPlayArgs_TypeInfo, v6, v7, v8);
    byte_42E7E27 = 1;
  }
  if ( args )
  {
    BgmName_k__BackingField = args->fields._BgmName_k__BackingField;
    if ( BgmName_k__BackingField )
    {
      if ( BgmManager__IsPreloadSucceeded(this, args->fields._BgmName_k__BackingField, method) )
      {
        klass = args->klass;
        v13 = *(&args->klass->_2.bitflags2 + 1);
        v14 = *(&MainBgmPlayArgs_TypeInfo->_2.bitflags2 + 1);
        if ( v13 >= (unsigned int)v14
          && (MainBgmPlayArgs_c *)klass->_2.typeHierarchy[v14 - 1] == MainBgmPlayArgs_TypeInfo )
        {
          mainBgmPlayer = this->fields.mainBgmPlayer;
          if ( mainBgmPlayer )
            goto LABEL_14;
        }
        else
        {
          v15 = *(&SubBgmPlayArgs_TypeInfo->_2.bitflags2 + 1);
          if ( v13 < (unsigned int)v15
            || (SubBgmPlayArgs_c *)klass->_2.typeHierarchy[v15 - 1] != SubBgmPlayArgs_TypeInfo )
          {
            return;
          }
          mainBgmPlayer = BgmManager__GetOrCreateSubBgmPlayer(this, BgmName_k__BackingField, v11);
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
        sub_B5D69C(mainBgmPlayer, v10);
      }
    }
  }
}


void __fastcall BgmManager__PlaySubBgm(SubBgmPlayArgs_o *args, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x19
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x22
  System_Int32_array **Instance; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *v34; // x21
  System_String_o *v35; // x21
  BgmManager_o *v36; // x20
  System_Action_o *v37; // x22
  const MethodInfo *v38; // x3

  if ( (byte_42E7E14 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_BgmManager___c__DisplayClass35_0__PlaySubBgm_b__0__, v11, v12, v13);
    sub_B5D5C4(&BgmManager___c__DisplayClass35_0_TypeInfo, v14, v15, v16);
    byte_42E7E14 = 1;
  }
  v17 = sub_B5D694(BgmManager___c__DisplayClass35_0_TypeInfo);
  BgmManager___c__DisplayClass35_0___ctor((BgmManager___c__DisplayClass35_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_11;
  *(_QWORD *)(v17 + 24) = args;
  v26 = v17 + 24;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 24), (System_Int32_array **)args, v20, v21, v22, v23, v24, v25);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v17 + 16) = Instance;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 16), Instance, v28, v29, v30, v31, v32, v33);
  v34 = *(UnityEngine_Object_o **)(v17 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
  if ( !v18 )
  {
    if ( *(_QWORD *)v26 )
    {
      v35 = *(System_String_o **)(*(_QWORD *)v26 + 16LL);
      v36 = *(BgmManager_o **)(v17 + 16);
      v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v37, (Il2CppObject *)v17, Method_BgmManager___c__DisplayClass35_0__PlaySubBgm_b__0__, 0LL);
      if ( v36 )
      {
        BgmManager__PreloadBgm(v36, v35, v37, v38);
        return;
      }
    }
LABEL_11:
    sub_B5D69C(v18, v19);
  }
}


void __fastcall BgmManager__PreloadAndPlayBgms(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  __int64 v46; // x19
  ChainableActionBase_o *v47; // x0
  const MethodInfo *v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  ChainableActionBase_o **v55; // x23
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct BgmPlayArgsGroup_o *v74; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  System_Int32_array **v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // x20
  __int64 v84; // x23
  unsigned __int64 v85; // x24
  __int64 v86; // x21
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v100; // x22
  System_Action_Action__array *v101; // x21
  ChainableActionParallel_o *v102; // x20
  System_Action_array *v103; // x21
  System_Action_o *v104; // x22
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  __int64 v111; // x0
  __int64 v112; // x0

  if ( (byte_42E7E26 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action___TypeInfo, (_DWORD)argsGroup, (_DWORD)finishCallback, method);
    sub_B5D5C4(&Method_System_Action_Action___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Action_Action__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Action_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ChainableActionParallel_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Action_Action___Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Action_Action___ToArray__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Action_Action____ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_Action_Action___TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_BgmManager___c__DisplayClass56_0__PreloadAndPlayBgms_b__0__, v34, v35, v36);
    sub_B5D5C4(&BgmManager___c__DisplayClass56_0_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_BgmManager___c__DisplayClass56_1__PreloadAndPlayBgms_b__1__, v40, v41, v42);
    sub_B5D5C4(&BgmManager___c__DisplayClass56_1_TypeInfo, v43, v44, v45);
    byte_42E7E26 = 1;
  }
  v46 = sub_B5D694(BgmManager___c__DisplayClass56_0_TypeInfo);
  BgmManager___c__DisplayClass56_0___ctor((BgmManager___c__DisplayClass56_0_o *)v46, 0LL);
  if ( !v46 )
    goto LABEL_22;
  *(_QWORD *)(v46 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v46 + 16), (System_Int32_array **)this, v49, v50, v51, v52, v53, v54);
  *(_QWORD *)(v46 + 24) = argsGroup;
  v55 = (ChainableActionBase_o **)(v46 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v46 + 24), (System_Int32_array **)argsGroup, v56, v57, v58, v59, v60, v61);
  *(_QWORD *)(v46 + 40) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v46 + 40),
    (System_Int32_array **)finishCallback,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v74 = *(struct BgmPlayArgsGroup_o **)(v46 + 24);
  if ( v74 )
  {
    this->fields.cacheArgsGroup = v74;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.cacheArgsGroup,
      (System_Int32_array **)v74,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    v47 = *v55;
    if ( !*v55 )
      goto LABEL_22;
    v75 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                                 (BgmPlayArgsGroup_o *)v47,
                                                                 v48);
    v76 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v75,
                                   (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v46 + 32) = v76;
    sub_B5D560((BattleServantConfConponent_o *)(v46 + 32), v76, v77, v78, v79, v80, v81, v82);
    v83 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Action_Action___TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v83,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v84 = *(_QWORD *)(v46 + 32);
    if ( !v84 )
      goto LABEL_22;
    if ( *(int *)(v84 + 24) >= 1 )
    {
      v85 = 0LL;
      while ( 1 )
      {
        v86 = sub_B5D694(BgmManager___c__DisplayClass56_1_TypeInfo);
        BgmManager___c__DisplayClass56_1___ctor((BgmManager___c__DisplayClass56_1_o *)v86, 0LL);
        if ( !v86 )
          break;
        *(_QWORD *)(v86 + 24) = v46;
        sub_B5D560((BattleServantConfConponent_o *)(v86 + 24), (System_Int32_array **)v46, v87, v88, v89, v90, v91, v92);
        if ( v85 >= *(unsigned int *)(v84 + 24) )
          goto LABEL_23;
        v99 = *(System_Int32_array ***)(v84 + 32 + 8 * v85);
        *(_QWORD *)(v86 + 16) = v99;
        sub_B5D560((BattleServantConfConponent_o *)(v86 + 16), v99, v93, v94, v95, v96, v97, v98);
        v100 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v100,
          (Il2CppObject *)v86,
          Method_BgmManager___c__DisplayClass56_1__PreloadAndPlayBgms_b__1__,
          (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
        if ( !v83 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v83,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v100,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Action_Action___Add__);
        if ( (__int64)++v85 >= *(int *)(v84 + 24) )
          goto LABEL_13;
      }
LABEL_22:
      sub_B5D69C(v47, v48);
    }
LABEL_13:
    if ( !v83 )
      goto LABEL_22;
    v101 = (System_Action_Action__array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v83,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v102 = (ChainableActionParallel_o *)sub_B5D694(ChainableActionParallel_TypeInfo);
    ChainableActionParallel___ctor_30552664(v102, v101, 0LL);
    v103 = (System_Action_array *)sub_B5D5DC(System_Action___TypeInfo, 1LL);
    v104 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v104,
      (Il2CppObject *)v46,
      Method_BgmManager___c__DisplayClass56_0__PreloadAndPlayBgms_b__0__,
      0LL);
    if ( !v103 )
      goto LABEL_22;
    if ( v104 )
    {
      v47 = (ChainableActionBase_o *)sub_B5D684(v104, v103->obj.klass->_1.element_class);
      if ( !v47 )
      {
        v112 = sub_B5D6BC(0LL);
        sub_B5D668(v112, 0LL);
      }
    }
    if ( !v103->max_length )
    {
LABEL_23:
      v111 = sub_B5D6C8(v47);
      sub_B5D668(v111, 0LL);
    }
    v103->m_Items[0] = v104;
    sub_B5D560(
      (BattleServantConfConponent_o *)v103->m_Items,
      (System_Int32_array **)v104,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    if ( !v102 )
      goto LABEL_22;
    v47 = ChainableActionBase__Final((ChainableActionBase_o *)v102, v103, 0LL);
    if ( !v47 )
      goto LABEL_22;
    ChainableActionBase__Execute(v47, 0LL);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v46 + 40), 0LL);
  }
}


bool __fastcall BgmManager__PreloadBgm(
        BgmManager_o *this,
        System_String_o *name,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x22
  SoundManager_o *Instance; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  BgmManager_o *v40; // x0
  const MethodInfo *v41; // x2
  System_Int32_array **CueName; // x0
  WarBoardManager_TaskList_o **v43; // x23
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **CueSheet; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Action_o *v57; // x21
  const MethodInfo *v58; // x3
  System_Collections_IEnumerator_o *v59; // x0

  if ( (byte_42E7E28 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)name, (_DWORD)finishCallback, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Insert__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__0__, v19, v20, v21);
    sub_B5D5C4(&BgmManager___c__DisplayClass58_0_TypeInfo, v22, v23, v24);
    byte_42E7E28 = 1;
  }
  v25 = sub_B5D694(BgmManager___c__DisplayClass58_0_TypeInfo);
  BgmManager___c__DisplayClass58_0___ctor((BgmManager___c__DisplayClass58_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_13;
  *(_QWORD *)(v25 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 32), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 40) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v25 + 40),
    (System_Int32_array **)finishCallback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  CueName = (System_Int32_array **)BgmManager__ExtractCueName(v40, name, v41);
  v43 = (WarBoardManager_TaskList_o **)(v25 + 24);
  *(_QWORD *)(v25 + 24) = CueName;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), CueName, v44, v45, v46, v47, v48, v49);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CueSheet = (System_Int32_array **)SoundManager__GetCueSheet(Instance, *(System_String_o **)(v25 + 24), 0LL);
  *(_QWORD *)(v25 + 16) = CueSheet;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), CueSheet, v51, v52, v53, v54, v55, v56);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v25 + 16), 0LL) )
  {
    v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v57, (Il2CppObject *)v25, Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__0__, 0LL);
    v59 = BgmManager__CoWaitSameAudioLoading(this, name, v57, v58);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v59, 0LL);
    return 0;
  }
  Instance = (SoundManager_o *)this->fields.addBindList;
  if ( !Instance )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Instance,
         *v43,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Instance,
        *v43,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
      Instance = (SoundManager_o *)this->fields.addBindList;
      if ( Instance )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___Insert(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
          0,
          (XWeaponTrail_Element_o *)*v43,
          (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_string__Insert__);
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_B5D69C(Instance, v27);
  }
LABEL_12:
  ActionExtensions__Call(*(System_Action_o **)(v25 + 40), 0LL);
  return 1;
}


void __fastcall BgmManager__ReflectMasterVolumeLocal(BgmManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  BgmManager___c_c *v18; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__52_0; // x20
  Il2CppObject *v21; // x21
  struct BgmManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7E25 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BgmPlayerBase___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BgmPlayerBase__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__52_0__, v11, v12, v13);
    sub_B5D5C4(&BgmManager___c_TypeInfo, v14, v15, v16);
    byte_42E7E25 = 1;
  }
  bgmPlayers = this->fields.bgmPlayers;
  v18 = BgmManager___c_TypeInfo;
  if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v18 = BgmManager___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__52_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__52_0,
      v21,
      Method_BgmManager___c__ReflectMasterVolumeLocal_b__52_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BgmPlayerBase___ctor__);
    v22 = BgmManager___c_TypeInfo->static_fields;
    v22->__9__52_0 = (struct System_Action_BgmPlayerBase__o *)_9__52_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !bgmPlayers )
    sub_B5D69C(v18, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)_9__52_0,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__RemoveUnusedOldFromBindList(BgmManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BgmManager_o **v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  BgmManager_o *v56; // x8
  int32_t addBindList; // w20
  BgmManager_c *v58; // x0
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v59; // x20
  const MethodInfo *v60; // x1
  System_Collections_Generic_IEnumerable_T__o *UsingCueNames; // x0
  __int64 v62; // x3
  BgmManager_c *klass; // x8
  BgmManager_o *v64; // x21
  unsigned __int64 v65; // x10
  int32_t *p_offset; // x11
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x3
  __int64 v70; // x21
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x3
  __int64 v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x1
  const MethodInfo *v82; // x2
  System_String_o *CueName; // x0
  int v84; // w24
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  int *v87; // x11
  __int64 v88; // x0
  BgmManager_o *v89; // x21
  int v90; // w8
  int v91; // w22
  __int64 v92; // x26
  BgmManager_o *v93; // x21
  System_String_o *v94; // x21
  BgmManager_o *v95; // x8
  int32_t v96; // w21
  bool v97; // vf
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+8h] [xbp-98h] BYREF
  int v99[2]; // [xsp+20h] [xbp-80h]
  int v100; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v101; // [xsp+30h] [xbp-70h] BYREF

  v4 = (BgmManager_o **)this;
  if ( (byte_42E7E32 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string__Contains__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string__UnionWith__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_HashSet_string__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__RemoveAt__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v50, v51, v52);
    this = (BgmManager_o *)sub_B5D5C4(&SoundManager_TypeInfo, v53, v54, v55);
    byte_42E7E32 = 1;
  }
  memset(&v101, 0, sizeof(v101));
  v100 = 0;
  v56 = v4[3];
  if ( !v56 )
    goto LABEL_71;
  addBindList = (int32_t)v56->fields.addBindList;
  v58 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v58 = BgmManager_TypeInfo;
  }
  if ( addBindList > v58->static_fields->ADD_BIND_MAX )
  {
    v59 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_string__TypeInfo);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
      v59,
      (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = v4[7];
    if ( !this )
      goto LABEL_71;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v98,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v101 = v98;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v101,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v101.fields.current )
        sub_B5D69C(0LL, v60);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v101.fields.current,
                                                                       v60);
      if ( !v59 )
        sub_B5D69C(UsingCueNames, UsingCueNames);
      System_Collections_Generic_HashSet_string___UnionWith(
        (System_Collections_Generic_HashSet_string__o *)v59,
        UsingCueNames,
        (const MethodInfo_2507034 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    v99[0] = 84;
    v100 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v101,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    v100 = 0;
    this = v4[9];
    if ( this )
    {
      this = (BgmManager_o *)BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, method);
      if ( !this )
        goto LABEL_71;
      klass = this->klass;
      v64 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v65 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          ++v65;
          p_offset += 4;
          if ( v65 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        v67 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_20:
        v67 = sub_AF54C0(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL, v62);
      }
      v70 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v67)(v64, *(_QWORD *)(v67 + 8));
      if ( !v70 )
        sub_B5D69C(0LL, v68);
      while ( 1 )
      {
        v71 = *(_QWORD *)v70;
        if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
        {
          v72 = 0LL;
          v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v73 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v72;
            v73 += 4;
            if ( v72 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
              goto LABEL_27;
          }
          v74 = v71 + 16LL * *v73 + 312;
        }
        else
        {
LABEL_27:
          v74 = sub_AF54C0(v70, System_Collections_IEnumerator_TypeInfo, 0LL, v69);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v70, *(_QWORD *)(v74 + 8)) & 1) == 0 )
          break;
        v76 = *(_QWORD *)v70;
        if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
        {
          v77 = 0LL;
          v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v78 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            ++v77;
            v78 += 4;
            if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
              goto LABEL_34;
          }
          v79 = v76 + 16LL * *v78 + 312;
        }
        else
        {
LABEL_34:
          v79 = sub_AF54C0(v70, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL, v75);
        }
        v80 = (*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v70, *(_QWORD *)(v79 + 8));
        if ( !v80 )
          sub_B5D69C(0LL, v81);
        CueName = BgmManager__ExtractCueName((BgmManager_o *)v80, *(System_String_o **)(v80 + 16), v82);
        if ( !v59 )
          sub_B5D69C(CueName, CueName);
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          v59,
          (WarBoardAIRoute_RouteData_o *)CueName,
          (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
      v99[0] = 159;
      v84 = ++v100;
      v85 = *(_QWORD *)v70;
      if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
      {
        v86 = 0LL;
        v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
        {
          ++v86;
          v87 += 4;
          if ( v86 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
            goto LABEL_44;
        }
        v88 = v85 + 16LL * *v87 + 312;
      }
      else
      {
LABEL_44:
        v88 = sub_AF54C0(v70, System_IDisposable_TypeInfo, 0LL, v75);
      }
      this = (BgmManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v70, *(_QWORD *)(v88 + 8));
      if ( v84 && v99[v84 - 1] == 159 )
        v100 = v84 - 1;
    }
    v89 = v4[3];
    if ( !v89 )
LABEL_71:
      sub_B5D69C(this, method);
    v90 = (int)v89->fields.addBindList;
    if ( v90 - 1 >= 1 )
    {
      v91 = v90 - 2;
      v92 = v90 - 1 + 4LL;
      do
      {
        if ( v92 - 4 >= (unsigned __int64)LODWORD(v89->fields.addBindList) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v59 )
          break;
        this = (BgmManager_o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                                 (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v59,
                                 *(BattleBuffData_BuffData_o **)(*(_QWORD *)&v89->fields.m_CachedPtr + 8 * v92),
                                 (const MethodInfo_25064D8 *)Method_System_Collections_Generic_HashSet_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v93 = v4[3];
          if ( !v93 )
            goto LABEL_71;
          if ( v92 - 4 >= (unsigned __int64)LODWORD(v93->fields.addBindList) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v94 = *(System_String_o **)(*(_QWORD *)&v93->fields.m_CachedPtr + 8 * v92);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__releaseAudioAssetStorage(v94, 0LL);
          this = v4[3];
          if ( !this )
            goto LABEL_71;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
            v91 + 1,
            (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_string__RemoveAt__);
          v95 = v4[3];
          if ( !v95 )
            goto LABEL_71;
          this = (BgmManager_o *)BgmManager_TypeInfo;
          v96 = (int32_t)v95->fields.addBindList;
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            this = (BgmManager_o *)BgmManager_TypeInfo;
          }
          if ( v96 <= this[2].fields.addBindList->fields._size )
            return;
        }
        v97 = __OFSUB__(v91--, 1);
        if ( v91 < 0 != v97 )
          return;
        v89 = v4[3];
        --v92;
      }
      while ( v89 );
      goto LABEL_71;
    }
  }
}


void __fastcall BgmManager__Reset(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42E7E08 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4, v5, v6);
    byte_42E7E08 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B5D69C(v8, v9);
    BgmManager__ResetLocal((BgmManager_o *)Instance, v9);
  }
}


void __fastcall BgmManager__ResetLocal(BgmManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  BgmManager___c_c *v18; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__50_0; // x20
  Il2CppObject *v21; // x21
  struct BgmManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7E23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BgmPlayerBase___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BgmPlayerBase__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_BgmManager___c__ResetLocal_b__50_0__, v11, v12, v13);
    sub_B5D5C4(&BgmManager___c_TypeInfo, v14, v15, v16);
    byte_42E7E23 = 1;
  }
  bgmPlayers = this->fields.bgmPlayers;
  v18 = BgmManager___c_TypeInfo;
  if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v18 = BgmManager___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__50_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__50_0,
      v21,
      Method_BgmManager___c__ResetLocal_b__50_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BgmPlayerBase___ctor__);
    v22 = BgmManager___c_TypeInfo->static_fields;
    v22->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)_9__50_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !bgmPlayers )
    sub_B5D69C(v18, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)_9__50_0,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BgmManager_c *v12; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  float *p_masterVolume; // x8
  float masterVolume; // t1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_42E7E0C & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, v2, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v9, v10, v11);
    byte_42E7E0C = 1;
  }
  v12 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v12 = BgmManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  masterVolume = static_fields->masterVolume;
  p_masterVolume = &static_fields->masterVolume;
  if ( masterVolume != volume )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      p_masterVolume = &BgmManager_TypeInfo->static_fields->masterVolume;
    }
    *p_masterVolume = volume;
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
    if ( !v17 )
    {
      if ( !Instance )
        sub_B5D69C(v17, v18);
      BgmManager__ReflectMasterVolumeLocal((BgmManager_o *)Instance, v18);
    }
  }
}


void __fastcall BgmManager__SetMute(bool isMute, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 v4; // w19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BgmManager_c *v11; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  bool *p_isMute; // x8
  _BOOL4 v14; // t1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2

  v4 = isMute;
  if ( (byte_42E7E0A & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v8, v9, v10);
    byte_42E7E0A = 1;
  }
  v11 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v11 = BgmManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  v14 = static_fields->isMute;
  p_isMute = &static_fields->isMute;
  if ( ((v14 ^ v4) & 1) != 0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      p_isMute = &BgmManager_TypeInfo->static_fields->isMute;
    }
    *p_isMute = v4;
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
    if ( !v16 )
    {
      if ( !Instance )
        sub_B5D69C(v16, v17);
      BgmManager__SetMuteLocal((BgmManager_o *)Instance, v4, v18);
    }
  }
}


void __fastcall BgmManager__SetMuteLocal(BgmManager_o *this, bool isMute, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BgmManager___c__DisplayClass51_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v22; // x20

  if ( (byte_42E7E24 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BgmPlayerBase___ctor__, isMute, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BgmPlayerBase__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v9, v10, v11);
    sub_B5D5C4(&Method_BgmManager___c__DisplayClass51_0__SetMuteLocal_b__0__, v12, v13, v14);
    sub_B5D5C4(&BgmManager___c__DisplayClass51_0_TypeInfo, v15, v16, v17);
    byte_42E7E24 = 1;
  }
  v18 = (BgmManager___c__DisplayClass51_0_o *)sub_B5D694(BgmManager___c__DisplayClass51_0_TypeInfo);
  BgmManager___c__DisplayClass51_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.isMute = isMute,
        bgmPlayers = this->fields.bgmPlayers,
        v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BgmPlayerBase__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_BgmManager___c__DisplayClass51_0__SetMuteLocal_b__0__,
          (const MethodInfo_258B320 *)Method_System_Action_BgmPlayerBase___ctor__),
        !bgmPlayers) )
  {
    sub_B5D69C(v19, v20);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)v22,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v16; // x0
  __int64 v17; // x1

  if ( (byte_42E7E17 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___, v2, v3, v4);
    sub_B5D5C4(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v12, v13, v14);
    byte_42E7E17 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v16 )
  {
    if ( !Instance )
      sub_B5D69C(v16, v17);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        0LL,
        (const MethodInfo_1ADB9E0 *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        0LL,
        (const MethodInfo_1ADB7D4 *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
  }
}


void __fastcall BgmManager__StopBgm(
        System_String_o *name,
        float fadeoutTime,
        System_Action_o *successCallback,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1

  if ( (byte_42E7E16 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___, (_DWORD)successCallback, (_DWORD)method, v4);
    sub_B5D5C4(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, v8, v9, v10);
    sub_B5D5C4(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___, v11, v12, v13);
    sub_B5D5C4(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v20, v21, v22);
    byte_42E7E16 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v24 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v24 )
  {
    if ( !Instance )
      sub_B5D69C(v24, v25);
    if ( fadeoutTime <= 0.0 )
    {
      if ( !BgmManager__StopBgmLocal_SubBgmPlayer_(
              (BgmManager_o *)Instance,
              name,
              (const MethodInfo_1ADB9E0 *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___) )
        return;
      if ( Instance[2].fields.m_CachedPtr <= 0 )
        BgmManager__StopBgmLocal_SubBgmPlayer_(
          (BgmManager_o *)Instance,
          0LL,
          (const MethodInfo_1ADB9E0 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      if ( !BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
              (BgmManager_o *)Instance,
              fadeoutTime,
              name,
              (const MethodInfo_1ADB7D4 *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___) )
        return;
      if ( Instance[2].fields.m_CachedPtr <= 0 )
        BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0LL,
          (const MethodInfo_1ADB7D4 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    ActionExtensions__Call(successCallback, 0LL);
  }
}


bool __fastcall BgmManager__StopBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo_1ADB9E0 *method)
{
  __int64 v3; // x3
  BgmManager_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x20
  long double v11; // q0
  Il2CppClass *_1_BgmManager___c__65_T; // x21
  __int16 v13; // w8
  Il2CppClass *v14; // x21
  Il2CppClass *v15; // x21
  Il2CppClass *v16; // x21
  System_Int32_array **v17; // x21
  Il2CppClass *v18; // x21
  __int16 v19; // w8
  Il2CppClass *v20; // x21
  Il2CppClass *v21; // x21
  const MethodInfo_1ADB9E0_RGCTXs *rgctx_data; // x8
  Il2CppClass *v23; // x21
  Il2CppClass *_3_System_Func_T__bool; // x23
  __int64 v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  Il2CppClass *v32; // x22
  char *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  v6 = this;
  if ( (byte_42EA285 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_bool___, (_DWORD)name, (_DWORD)method, v3);
    this = (BgmManager_o *)sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_bool___, v7, v8, v9);
    byte_42EA285 = 1;
  }
  if ( !v6 )
    sub_B5D69C(this, name);
  v10 = ((__int64 (__fastcall *)(BgmManager_o *, System_String_o *))method->rgctx_data->_0_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
          v6,
          name);
  _1_BgmManager___c__65_T = method->rgctx_data->_1_BgmManager___c__65_T_;
  v13 = WORD1(_1_BgmManager___c__65_T->vtable[0].methodPtr);
  if ( (v13 & 1) == 0 )
  {
    sub_AF52C4(method->rgctx_data->_1_BgmManager___c__65_T_);
    v13 = WORD1(_1_BgmManager___c__65_T->vtable[0].methodPtr);
  }
  if ( (v13 & 0x400) != 0 )
  {
    v14 = method->rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v14->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_1_BgmManager___c__65_T_);
    if ( !v14->_2.cctor_finished )
    {
      v15 = method->rgctx_data->_1_BgmManager___c__65_T_;
      if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(method->rgctx_data->_1_BgmManager___c__65_T_);
      *(__n128 *)&v11 = j_il2cpp_runtime_class_init_0(v15);
    }
  }
  v16 = method->rgctx_data->_1_BgmManager___c__65_T_;
  if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_1_BgmManager___c__65_T_);
  v17 = (System_Int32_array **)*((_QWORD *)v16->static_fields + 1);
  if ( !v17 )
  {
    v18 = method->rgctx_data->_1_BgmManager___c__65_T_;
    v19 = WORD1(v18->vtable[0].methodPtr);
    if ( (v19 & 1) == 0 )
    {
      sub_AF52C4(method->rgctx_data->_1_BgmManager___c__65_T_);
      v19 = WORD1(v18->vtable[0].methodPtr);
    }
    if ( (v19 & 0x400) != 0 )
    {
      v20 = method->rgctx_data->_1_BgmManager___c__65_T_;
      if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(method->rgctx_data->_1_BgmManager___c__65_T_);
      if ( !v20->_2.cctor_finished )
      {
        v21 = method->rgctx_data->_1_BgmManager___c__65_T_;
        if ( (BYTE2(v21->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4(method->rgctx_data->_1_BgmManager___c__65_T_);
        j_il2cpp_runtime_class_init_0(v21);
      }
    }
    rgctx_data = method->rgctx_data;
    v23 = rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v23->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_AF52C4(rgctx_data->_1_BgmManager___c__65_T_);
      rgctx_data = method->rgctx_data;
    }
    _3_System_Func_T__bool = rgctx_data->_3_System_Func_T__bool_;
    v25 = *(_QWORD *)v23->static_fields;
    if ( (BYTE2(_3_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(_3_System_Func_T__bool);
    v17 = (System_Int32_array **)sub_B5D694(_3_System_Func_T__bool);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__bool___ctor->methodPointer)(
      v17,
      v25,
      method->rgctx_data->_2_BgmManager___c__65_T___StopBgmLocal_b__65_0);
    v32 = method->rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v32->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_1_BgmManager___c__65_T_);
    static_fields = (char *)v32->static_fields;
    *((_QWORD *)static_fields + 1) = v17;
    sub_B5D560((BattleServantConfConponent_o *)(static_fields + 8), v17, v26, v27, v28, v29, v30, v31);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, System_Int32_array **, long double))method->rgctx_data->_5_System_Linq_Enumerable_Select_T__bool_->methodPointer)(
                                                               v10,
                                                               v17,
                                                               v11);
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v34,
                                                               (const MethodInfo_1CB7518 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v35, (const MethodInfo_1C986CC *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__StopJingle(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_42E7E1D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BgmManager_StopBgmLocal_JinglePlayer___, v1, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7, v8, v9);
    byte_42E7E1D = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !Instance )
      sub_B5D69C(v11, v12);
    BgmManager__StopBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      0LL,
      (const MethodInfo_1ADB9E0 *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v17; // x0
  __int64 v18; // x1

  if ( (byte_42E7E18 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v13, v14, v15);
    byte_42E7E18 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v17 )
  {
    if ( !Instance )
      sub_B5D69C(v17, v18);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        name,
        (const MethodInfo_1ADB9E0 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        name,
        (const MethodInfo_1ADB7D4 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__StopUnrequestedSubBgm(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *requestedBgmArgs,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  __int64 v51; // x20
  System_Int32_array **v52; // x0
  __int64 v53; // x1
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *SubArgsList_k__BackingField; // x21
  BgmManager___c_c *v55; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__66_0; // x22
  Il2CppObject *v58; // x23
  struct BgmManager___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v74; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  BgmManager___c_c *v76; // x8
  System_Collections_Generic_IEnumerable_T__o *v77; // x19
  struct BgmManager___c_StaticFields *v78; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__66_2; // x20
  Il2CppObject *v80; // x21
  struct BgmManager___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7

  if ( (byte_42E7E2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_SubBgmPlayer___ctor__, (_DWORD)requestedBgmArgs, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_SubBgmPlayer__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_SubBgmPlayer___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_string___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_SubBgmPlayer__bool___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_SubBgmPlayArgs__string___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_SubBgmPlayArgs__string__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Func_SubBgmPlayer__bool__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_BgmManager___c__StopUnrequestedSubBgm_b__66_0__, v36, v37, v38);
    sub_B5D5C4(&Method_BgmManager___c__StopUnrequestedSubBgm_b__66_2__, v39, v40, v41);
    sub_B5D5C4(&Method_BgmManager___c__DisplayClass66_0__StopUnrequestedSubBgm_b__1__, v42, v43, v44);
    sub_B5D5C4(&BgmManager___c__DisplayClass66_0_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&BgmManager___c_TypeInfo, v48, v49, v50);
    byte_42E7E2D = 1;
  }
  v51 = sub_B5D694(BgmManager___c__DisplayClass66_0_TypeInfo);
  BgmManager___c__DisplayClass66_0___ctor((BgmManager___c__DisplayClass66_0_o *)v51, 0LL);
  if ( this->fields.enableCounter_KeepSubBgm <= 0 )
  {
    if ( !requestedBgmArgs )
      goto LABEL_23;
    SubArgsList_k__BackingField = requestedBgmArgs->fields._SubArgsList_k__BackingField;
    v55 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v55 = BgmManager___c_TypeInfo;
    }
    static_fields = v55->static_fields;
    _9__66_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__66_0;
    if ( !_9__66_0 )
    {
      if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v58 = (Il2CppObject *)static_fields->__9;
      _9__66_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_SubBgmPlayArgs__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__66_0,
        v58,
        Method_BgmManager___c__StopUnrequestedSubBgm_b__66_0__,
        (const MethodInfo_2C3041C *)Method_System_Func_SubBgmPlayArgs__string___ctor__);
      v59 = BgmManager___c_TypeInfo->static_fields;
      v59->__9__66_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__66_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v59->__9__66_0,
        (System_Int32_array **)_9__66_0,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__66_0,
                                                                 (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v52 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v66,
                                   (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v51 )
LABEL_23:
      sub_B5D69C(v52, v53);
    *(_QWORD *)(v51 + 16) = v52;
    sub_B5D560((BattleServantConfConponent_o *)(v51 + 16), v52, v67, v68, v69, v70, v71, v72);
    v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v74 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v74,
      (Il2CppObject *)v51,
      Method_BgmManager___c__DisplayClass66_0__StopUnrequestedSubBgm_b__1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
    v75 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v73,
            (System_Func_TSource__bool__o *)v74,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v76 = BgmManager___c_TypeInfo;
    v77 = (System_Collections_Generic_IEnumerable_T__o *)v75;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v76 = BgmManager___c_TypeInfo;
    }
    v78 = v76->static_fields;
    _9__66_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v78->__9__66_2;
    if ( !_9__66_2 )
    {
      if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v76);
        v78 = BgmManager___c_TypeInfo->static_fields;
      }
      v80 = (Il2CppObject *)v78->__9;
      _9__66_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_SubBgmPlayer__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__66_2,
        v80,
        Method_BgmManager___c__StopUnrequestedSubBgm_b__66_2__,
        (const MethodInfo_258B320 *)Method_System_Action_SubBgmPlayer___ctor__);
      v81 = BgmManager___c_TypeInfo->static_fields;
      v81->__9__66_2 = (struct System_Action_SubBgmPlayer__o *)_9__66_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v81->__9__66_2,
        (System_Int32_array **)_9__66_2,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v77,
      (System_Action_T__o *)_9__66_2,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_SubBgmPlayer___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_String_o *__fastcall BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_B5D69C(this, method);
  return mainBgmPlayer->fields.bgmName;
}


bool __fastcall BgmManager__get_IsBusy(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  BgmManager_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42E7E04 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4, v5, v6);
    byte_42E7E04 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    return 0;
  v8 = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  return BgmManager__IsLoadingLocal(v8, 0LL, v10);
}


bool __fastcall BgmManager__get_IsMute(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  BgmManager_c *v4; // x0

  if ( (byte_42E7E09 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, v1, v2, v3);
    byte_42E7E09 = 1;
  }
  v4 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v4 = BgmManager_TypeInfo;
  }
  return v4->static_fields->isMute;
}


bool __fastcall BgmManager__isLoading(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42E7E0F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5, v6, v7);
    byte_42E7E0F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v9, v10);
  return BgmManager__IsLoadingLocal((BgmManager_o *)Instance, name, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t _1__state; // w8
  BgmManager_o *_4__this; // x21
  __int64 v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  System_Func_bool__o *v22; // x21
  UnityEngine_WaitWhile_o *v23; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_42E5DFC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BgmManager___c__DisplayClass60_0__CoWaitSameAudioLoading_b__0__, v8, v9, v10);
    sub_B5D5C4(&BgmManager___c__DisplayClass60_0_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v14, v15, v16);
    byte_42E5DFC = 1;
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
    v19 = sub_B5D694(BgmManager___c__DisplayClass60_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    if ( !v19
      || (*(_QWORD *)(v19 + 16) = this->fields.__4__this,
          sub_B5D560(v19 + 16),
          *(_QWORD *)(v19 + 24) = this->fields.bgmName,
          sub_B5D560(v19 + 24),
          !_4__this) )
    {
      sub_B5D69C(v20, v21);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v19 + 24), 0LL) )
    {
      v22 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v22,
        (Il2CppObject *)v19,
        Method_BgmManager___c__DisplayClass60_0__CoWaitSameAudioLoading_b__0__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v23 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v23, v22, 0LL);
      this->fields.__2__current = (Il2CppObject *)v23;
      p__2__current = &this->fields.__2__current;
      sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BgmManager__CoWaitSameAudioLoading_d__60_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BgmManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DF7 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager___c_TypeInfo, v1, v2, v3);
    byte_42E5DF7 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BgmManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BgmManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BgmManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields.bgmName == 0LL;
}


void __fastcall BgmManager___c___InitializeLocal_b__49_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, 0LL);
}


void __fastcall BgmManager___c___LateUpdate_b__75_1(
        BgmManager___c_o *this,
        GeneralBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, void *))x->klass->vtable._13_LateUpdate.method)(x, x->klass[1]._1.image);
}


void __fastcall BgmManager___c___LateUpdate_b__75_3(BgmManager___c_o *this, BgmPlayArgs_o *x, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo_234BB7C *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  System_Nullable_long__o startTime; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v12; // [xsp+18h] [xbp-18h] BYREF
  System_Nullable_float__o v13; // 0:x0.8
  System_Nullable_float__o v14; // 0:x1.8
  System_Nullable_float__o v15; // 0:x2.8
  System_Nullable_long__o v16; // 0:x0.16

  if ( (byte_42E5DF8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Nullable_long___ctor__, v5, v6, v7);
    byte_42E5DF8 = 1;
  }
  v13 = (System_Nullable_float__o)&v12;
  v12 = 0LL;
  System_Nullable_float____ctor(v13, 0.0, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
  v16.fields.value = (int64_t)&startTime;
  *(_QWORD *)&v16.fields.has_value = 0LL;
  startTime.fields.value = 0LL;
  *(_QWORD *)&startTime.fields.has_value = 0LL;
  System_Nullable_long____ctor(v16, Method_System_Nullable_long___ctor__, v8);
  if ( !x )
    sub_B5D69C(v9, v10);
  v15 = v12;
  v14 = 0LL;
  BgmPlayArgs__Update(x, v14, v15, startTime, 0LL);
}


void __fastcall BgmManager___c___ReflectMasterVolumeLocal_b__52_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields._BgmName_k__BackingField;
}


void __fastcall BgmManager___c___StopUnrequestedSubBgm_b__66_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._11_StopBgm.method)(
    x,
    0LL,
    x->klass->vtable._12_ExportPlayArgs.methodPtr);
}


void __fastcall BgmManager___c__53_object____cctor(const MethodInfo_1F4E6EC *method)
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
    sub_AF52C4(method->klass);
  _0_BgmManager___c__53_T = klass->rgctx_data->_0_BgmManager___c__53_T_;
  if ( (BYTE2(_0_BgmManager___c__53_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_0_BgmManager___c__53_T);
  v4 = sub_B5D694(_0_BgmManager___c__53_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AF52C4(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BgmManager___c__53_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AF52C4(v8);
  methodPointer(v6, v8->rgctx_data->_1_BgmManager___c__53_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AF52C4(v16);
  _2_BgmManager___c__53_T = v16->rgctx_data->_2_BgmManager___c__53_T_;
  if ( (BYTE2(_2_BgmManager___c__53_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_2_BgmManager___c__53_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__53_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B5D560(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BgmManager___c__53_object____ctor(BgmManager___c__53_T__o *this, const MethodInfo_1F4E7C8 *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__53_object____EnumeratePlayersHavingBgmName_b__53_0(
        BgmManager___c__53_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F4E7E0 *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x[1].klass != 0LL;
}


void __fastcall BgmManager___c__65_object____cctor(const MethodInfo_1F4EAA8 *method)
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
    sub_AF52C4(method->klass);
  _0_BgmManager___c__65_T = klass->rgctx_data->_0_BgmManager___c__65_T_;
  if ( (BYTE2(_0_BgmManager___c__65_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_0_BgmManager___c__65_T);
  v4 = sub_B5D694(_0_BgmManager___c__65_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AF52C4(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BgmManager___c__65_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AF52C4(v8);
  methodPointer(v6, v8->rgctx_data->_1_BgmManager___c__65_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AF52C4(v16);
  _2_BgmManager___c__65_T = v16->rgctx_data->_2_BgmManager___c__65_T_;
  if ( (BYTE2(_2_BgmManager___c__65_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_2_BgmManager___c__65_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__65_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B5D560(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BgmManager___c__65_object____ctor(BgmManager___c__65_T__o *this, const MethodInfo_1F4EB84 *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__65_object____StopBgmLocal_b__65_0(
        BgmManager___c__65_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F4EB9C *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))x->klass->vtable[11].method)(
           x,
           0LL,
           x->klass->vtable[12].methodPtr);
}


void __fastcall BgmManager___c__73_object____cctor(const MethodInfo_1F4EBC0 *method)
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
    sub_AF52C4(method->klass);
  _0_BgmManager___c__73_T = klass->rgctx_data->_0_BgmManager___c__73_T_;
  if ( (BYTE2(_0_BgmManager___c__73_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_0_BgmManager___c__73_T);
  v4 = sub_B5D694(_0_BgmManager___c__73_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AF52C4(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BgmManager___c__73_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AF52C4(v8);
  methodPointer(v6, v8->rgctx_data->_1_BgmManager___c__73_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AF52C4(v16);
  _2_BgmManager___c__73_T = v16->rgctx_data->_2_BgmManager___c__73_T_;
  if ( (BYTE2(_2_BgmManager___c__73_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_2_BgmManager___c__73_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__73_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B5D560(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BgmManager___c__73_object____ctor(BgmManager___c__73_T__o *this, const MethodInfo_1F4EC9C *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall BgmManager___c__73_object____ExportPlayArgsGroupLocal_b__73_0(
        BgmManager___c__73_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F4ECB4 *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, Il2CppMethodPointer))x->klass->vtable._7_SetMute.method)(
    x,
    this->fields.isMute,
    x->klass->vtable._8_ReflectMasterVolume.methodPtr);
}


void __fastcall BgmManager___c__DisplayClass53_0_object____ctor(
        BgmManager___c__DisplayClass53_0_T__o *this,
        const MethodInfo_1F5147C *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass53_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass53_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F51494 *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
          v8 = sub_B5D6C8(_4__this);
          sub_B5D668(v8, 0LL);
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
      sub_B5D69C(_4__this, method);
    }
LABEL_9:
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_12;
    _4__this->fields.cacheArgsGroup = 0LL;
    sub_B5D560(&_4__this->fields.cacheArgsGroup);
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
    sub_B5D69C(this, callback);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *loadingBgmCueNameList; // x0
  __int64 v15; // x1
  struct BgmManager_o *_4__this; // x8
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20

  if ( (byte_42E5DF9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__1__, v11, v12, v13);
    byte_42E5DF9 = 1;
  }
  this->fields.tempCueSheetName = this->fields.cueName;
  sub_B5D560(&this->fields);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.loadingBgmCueNameList) == 0LL )
  {
    sub_B5D69C(loadingBgmCueNameList, v15);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    loadingBgmCueNameList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.cueName,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__1__, 0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(tempCueSheetName, _9__1, 1, 0LL);
}


void __fastcall BgmManager___c__DisplayClass58_0___PreloadBgm_b__1(
        BgmManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BgmManager___c__DisplayClass58_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct BgmManager_o *_4__this; // x8
  struct BgmManager_o *v15; // x8
  struct BgmManager_o *v16; // x8

  v4 = this;
  if ( (byte_42E5DFA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Insert__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v8, v9, v10);
    this = (BgmManager___c__DisplayClass58_0_o *)sub_B5D5C4(
                                                   &Method_SingletonMonoBehaviour_SoundManager__get_Instance__,
                                                   v11,
                                                   v12,
                                                   v13);
    byte_42E5DFA = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass58_0_o *)_4__this->fields.loadingBgmCueNameList;
  if ( !this )
    goto LABEL_14;
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
    (WarBoardManager_TaskList_o *)v4->fields.cueName,
    (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass58_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass58_0_o *)SoundManager__GetCueSheet(
                                                 (SoundManager_o *)this,
                                                 v4->fields.cueName,
                                                 0LL);
  if ( this )
  {
    v15 = v4->fields.__4__this;
    if ( !v15 )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass58_0_o *)v15->fields.addBindList;
    if ( !this )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass58_0_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                   (WarBoardManager_TaskList_o *)v4->fields.cueName,
                                                   (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v16 = v4->fields.__4__this;
      if ( v16 )
      {
        this = (BgmManager___c__DisplayClass58_0_o *)v16->fields.addBindList;
        if ( this )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Insert(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
            0,
            (XWeaponTrail_Element_o *)v4->fields.cueName,
            (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_B5D69C(this, method);
    }
  }
LABEL_13:
  ActionExtensions__Call(v4->fields.finishCallback, 0LL);
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
    sub_B5D69C(0LL, method);
  return BgmManager__IsLoadingLocal(_4__this, this->fields.bgmName, 0LL);
}


void __fastcall BgmManager___c__DisplayClass64_0_object____ctor(
        BgmManager___c__DisplayClass64_0_T__o *this,
        const MethodInfo_1F51E48 *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass64_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass64_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F51E60 *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  BgmManager___c__DisplayClass66_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E5DFB & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass66_0_o *)sub_B5D5C4(
                                                   &Method_System_Array_IndexOf_string___,
                                                   (_DWORD)x,
                                                   (_DWORD)method,
                                                   v3);
    byte_42E5DFB = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  return (unsigned int)System_Array__IndexOf_UICommonButton_(
                         (UICommonButton_array *)v5->fields.subBgmNamesToPlay,
                         (UICommonButton_o *)x->fields.bgmName,
                         (const MethodInfo_1FC18BC *)Method_System_Array_IndexOf_string___) >> 31;
}


void __fastcall BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_1F51E88 *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass67_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F51EA0 *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(this, 0LL);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0LL);
}