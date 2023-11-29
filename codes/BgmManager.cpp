void __fastcall BgmManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  struct BgmManager_StaticFields *static_fields; // x0
  System_Int32_array **v11; // x1
  struct BgmManager_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BgmManager_c *v20; // x8

  if ( (byte_40F905B & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_2540, v8);
    sub_B16FFC(&StringLiteral_2541, v9);
    byte_40F905B = 1;
  }
  BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME = 1.0;
  BgmManager_TypeInfo->static_fields->LOW_VOLUME = 0.1;
  static_fields = BgmManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_2540;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_2540;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = BgmManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2541;
  v12->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_2541;
  sub_B16F98((BattleServantConfConponent_o *)&v12->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v13, v14, v15, v16, v17, v18, v19);
  v20 = BgmManager_TypeInfo;
  BgmManager_TypeInfo->static_fields->ADD_BIND_MAX = 5;
  v20->static_fields->isMute = 0;
  v20->static_fields->masterVolume = 1.0;
}


void __fastcall BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40F905A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager___ctor__, v9);
    byte_40F905A = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.addBindList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loadingBgmCueNameList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BgmPlayerBase__TypeInfo,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgmPlayers,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void __fastcall BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *Instance; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *monitor; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x21
  BgmPlayerBase_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_40F9032 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_System_Predicate_BgmPlayerBase___ctor__, v9);
    sub_B16FFC(&System_Predicate_BgmPlayerBase__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v11);
    sub_B16FFC(&Method_BgmManager___c__DisplayClass28_0__ChangePlayerVolume_b__0__, v12);
    sub_B16FFC(&BgmManager___c__DisplayClass28_0_TypeInfo, v13);
    byte_40F9032 = 1;
  }
  v14 = sub_B170CC(BgmManager___c__DisplayClass28_0_TypeInfo, method, v3, v4, v5);
  BgmManager___c__DisplayClass28_0___ctor((BgmManager___c__DisplayClass28_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 16) = bgmName;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)bgmName, v15, v16, v17, v18, v19, v20);
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    if ( Instance )
    {
      monitor = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)Instance[2].monitor;
      v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_BgmPlayerBase__TypeInfo,
                                                                       v22,
                                                                       v23,
                                                                       v24,
                                                                       v25);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v27,
        (Il2CppObject *)v14,
        Method_BgmManager___c__DisplayClass28_0__ChangePlayerVolume_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_BgmPlayerBase___ctor__);
      if ( monitor )
      {
        v28 = (BgmPlayerBase_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   monitor,
                                   (System_Predicate_T__o *)v27,
                                   (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v28 )
        {
          v28->fields.bgmVolume = volume;
          BgmPlayerBase__UpdateVolume(v28, v29);
        }
        return;
      }
    }
LABEL_13:
    sub_B170D4();
  }
}


System_Collections_IEnumerator_o *__fastcall BgmManager__CoWaitSameAudioLoading(
        BgmManager_o *this,
        System_String_o *bgmName,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F904E & 1) == 0 )
  {
    sub_B16FFC(&BgmManager__CoWaitSameAudioLoading_d__60_TypeInfo, bgmName);
    byte_40F904E = 1;
  }
  v8 = sub_B170CC(BgmManager__CoWaitSameAudioLoading_d__60_TypeInfo, bgmName, finishCallback, method, v4);
  BgmManager__CoWaitSameAudioLoading_d__60___ctor((BgmManager__CoWaitSameAudioLoading_d__60_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = bgmName;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)bgmName, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 48),
    (System_Int32_array **)finishCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall BgmManager__Enable_KeepSubBgm(bool value, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  int v5; // w9
  int v6; // w8

  if ( (byte_40F9045 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_40F9045 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    if ( value )
      v5 = 1;
    else
      v5 = -1;
    v6 = Instance[2].fields.m_CachedPtr + v5;
    if ( (~(v6 >> 31) & 7) == 0 )
      v6 = 0;
    Instance[2].fields.m_CachedPtr = v6;
  }
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BgmManager__EnumeratePlayersHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_18BA4E0 *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppClass *_0_BgmManager___c__DisplayClass53_0_T; // x21
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  const MethodInfo_18BA4E0_RGCTXs *rgctx_data; // x8
  __int64 v23; // x20
  Il2CppClass *_5_System_Func_T__bool; // x22
  __int64 v25; // x22
  const MethodInfo_18BA4E0_RGCTXs *v26; // x8
  __int64 v27; // x0
  __int64 v28; // x1
  Il2CppClass *_3_BgmManager___c__53_T; // x21
  __int16 v30; // w8
  Il2CppClass *v31; // x21
  Il2CppClass *v32; // x21
  Il2CppClass *v33; // x21
  System_Int32_array **v34; // x21
  Il2CppClass *v35; // x21
  __int16 v36; // w8
  Il2CppClass *v37; // x21
  Il2CppClass *v38; // x21
  const MethodInfo_18BA4E0_RGCTXs *v39; // x8
  Il2CppClass *v40; // x21
  Il2CppClass *v41; // x23
  __int64 v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  Il2CppClass *v49; // x22
  char *static_fields; // x0

  _0_BgmManager___c__DisplayClass53_0_T = method->rgctx_data->_0_BgmManager___c__DisplayClass53_0_T_;
  if ( (BYTE2(_0_BgmManager___c__DisplayClass53_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_BgmManager___c__DisplayClass53_0_T_);
  v9 = sub_B170CC(_0_BgmManager___c__DisplayClass53_0_T, bgmNameFilter, method, v3, v4);
  method->rgctx_data->_1_BgmManager___c__DisplayClass53_0_T___ctor->methodPointer();
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 16) = bgmNameFilter;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)bgmNameFilter,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = *(_QWORD *)(v9 + 16);
  v17 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_BgmPlayerBase__o *))method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_->methodPointer)(this->fields.bgmPlayers);
  rgctx_data = method->rgctx_data;
  v23 = v17;
  if ( v16 )
  {
    _5_System_Func_T__bool = rgctx_data->_5_System_Func_T__bool_;
    if ( (BYTE2(_5_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(_5_System_Func_T__bool);
    v25 = sub_B170CC(_5_System_Func_T__bool, v18, v19, v20, v21);
    ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_6_System_Func_T__bool___ctor->methodPointer)(
      v25,
      v9,
      method->rgctx_data->_8_BgmManager___c__DisplayClass53_0_T___EnumeratePlayersHavingBgmName_b__1);
    v26 = method->rgctx_data;
    v27 = v23;
    v28 = v25;
  }
  else
  {
    _3_BgmManager___c__53_T = rgctx_data->_3_BgmManager___c__53_T_;
    v30 = WORD1(_3_BgmManager___c__53_T->vtable[0].methodPtr);
    if ( (v30 & 1) == 0 )
    {
      sub_AAFCFC(_3_BgmManager___c__53_T);
      v30 = WORD1(_3_BgmManager___c__53_T->vtable[0].methodPtr);
    }
    if ( (v30 & 0x400) != 0 )
    {
      v31 = method->rgctx_data->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v31->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_3_BgmManager___c__53_T_);
      if ( !v31->_2.cctor_finished )
      {
        v32 = method->rgctx_data->_3_BgmManager___c__53_T_;
        if ( (BYTE2(v32->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC(method->rgctx_data->_3_BgmManager___c__53_T_);
        j_il2cpp_runtime_class_init_0(v32);
      }
    }
    v33 = method->rgctx_data->_3_BgmManager___c__53_T_;
    if ( (BYTE2(v33->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_3_BgmManager___c__53_T_);
    v34 = (System_Int32_array **)*((_QWORD *)v33->static_fields + 1);
    if ( !v34 )
    {
      v35 = method->rgctx_data->_3_BgmManager___c__53_T_;
      v36 = WORD1(v35->vtable[0].methodPtr);
      if ( (v36 & 1) == 0 )
      {
        sub_AAFCFC(method->rgctx_data->_3_BgmManager___c__53_T_);
        v36 = WORD1(v35->vtable[0].methodPtr);
      }
      if ( (v36 & 0x400) != 0 )
      {
        v37 = method->rgctx_data->_3_BgmManager___c__53_T_;
        if ( (BYTE2(v37->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC(method->rgctx_data->_3_BgmManager___c__53_T_);
        if ( !v37->_2.cctor_finished )
        {
          v38 = method->rgctx_data->_3_BgmManager___c__53_T_;
          if ( (BYTE2(v38->vtable[0].methodPtr) & 1) == 0 )
            sub_AAFCFC(method->rgctx_data->_3_BgmManager___c__53_T_);
          j_il2cpp_runtime_class_init_0(v38);
        }
      }
      v39 = method->rgctx_data;
      v40 = v39->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v40->vtable[0].methodPtr) & 1) == 0 )
      {
        sub_AAFCFC(v39->_3_BgmManager___c__53_T_);
        v39 = method->rgctx_data;
      }
      v41 = v39->_5_System_Func_T__bool_;
      v42 = *(_QWORD *)v40->static_fields;
      if ( (BYTE2(v41->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(v41);
      v34 = (System_Int32_array **)sub_B170CC(v41, v18, v19, v20, v21);
      ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_6_System_Func_T__bool___ctor->methodPointer)(
        v34,
        v42,
        method->rgctx_data->_4_BgmManager___c__53_T___EnumeratePlayersHavingBgmName_b__53_0);
      v49 = method->rgctx_data->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v49->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_3_BgmManager___c__53_T_);
      static_fields = (char *)v49->static_fields;
      *((_QWORD *)static_fields + 1) = v34;
      sub_B16F98((BattleServantConfConponent_o *)(static_fields + 8), v34, v43, v44, v45, v46, v47, v48);
    }
    v26 = method->rgctx_data;
    v27 = v23;
    v28 = (__int64)v34;
  }
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(__int64, __int64))v26->_7_System_Linq_Enumerable_Where_T_->methodPointer)(
                                                          v27,
                                                          v28);
}


bool __fastcall BgmManager__ExistsPlayerHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_18BA748 *method)
{
  __int64 v4; // x0

  if ( !this )
    sub_B170D4();
  v4 = ((__int64 (__fastcall *)(BgmManager_o *, System_String_o *))method->rgctx_data->_0_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
         this,
         bgmNameFilter);
  return ((__int64 (__fastcall *)(__int64))method->rgctx_data->_1_System_Linq_Enumerable_Any_T_->methodPointer)(v4);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroup(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19

  if ( (byte_40F902A & 1) == 0 )
  {
    sub_B16FFC(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___, v1);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_40F902A = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0LL;
  if ( !Instance )
    sub_B170D4();
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_18BA788 *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroupLocal_object_(
        BgmManager_o *this,
        const MethodInfo_18BA788 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
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
  const MethodInfo_18BA788_RGCTXs *rgctx_data; // x8
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
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  BgmPlayArgsGroup_o *v39; // x20

  if ( (byte_40FA64C & 1) == 0 )
  {
    sub_B16FFC(&BgmPlayArgsGroup_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    byte_40FA64C = 1;
  }
  if ( !this )
    sub_B170D4();
  v9 = ((__int64 (__fastcall *)(BgmManager_o *, _QWORD))method->rgctx_data->_0_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
         this,
         0LL);
  _1_BgmManager___c__73_T = method->rgctx_data->_1_BgmManager___c__73_T_;
  v12 = WORD1(_1_BgmManager___c__73_T->vtable[0].methodPtr);
  if ( (v12 & 1) == 0 )
  {
    sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__73_T_);
    v12 = WORD1(_1_BgmManager___c__73_T->vtable[0].methodPtr);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = method->rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__73_T_);
    if ( !v13->_2.cctor_finished )
    {
      v14 = method->rgctx_data->_1_BgmManager___c__73_T_;
      if ( (BYTE2(v14->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__73_T_);
      *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = method->rgctx_data->_1_BgmManager___c__73_T_;
  if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__73_T_);
  v16 = (System_Int32_array **)*((_QWORD *)v15->static_fields + 1);
  if ( !v16 )
  {
    v17 = method->rgctx_data->_1_BgmManager___c__73_T_;
    v18 = WORD1(v17->vtable[0].methodPtr);
    if ( (v18 & 1) == 0 )
    {
      sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__73_T_);
      v18 = WORD1(v17->vtable[0].methodPtr);
    }
    if ( (v18 & 0x400) != 0 )
    {
      v19 = method->rgctx_data->_1_BgmManager___c__73_T_;
      if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__73_T_);
      if ( !v19->_2.cctor_finished )
      {
        v20 = method->rgctx_data->_1_BgmManager___c__73_T_;
        if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__73_T_);
        j_il2cpp_runtime_class_init_0(v20);
      }
    }
    rgctx_data = method->rgctx_data;
    v22 = rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v22->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_AAFCFC(rgctx_data->_1_BgmManager___c__73_T_);
      rgctx_data = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = rgctx_data->_3_System_Func_T__BgmPlayArgs_;
    v24 = *(_QWORD *)v22->static_fields;
    if ( (BYTE2(_3_System_Func_T__BgmPlayArgs->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(_3_System_Func_T__BgmPlayArgs);
    v16 = (System_Int32_array **)sub_B170CC(_3_System_Func_T__BgmPlayArgs, v5, v6, v7, v8);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__BgmPlayArgs___ctor->methodPointer)(
      v16,
      v24,
      method->rgctx_data->_2_BgmManager___c__73_T___ExportPlayArgsGroupLocal_b__73_0);
    v31 = method->rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v31->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__73_T_);
    static_fields = (char *)v31->static_fields;
    *((_QWORD *)static_fields + 1) = v16;
    sub_B16F98((BattleServantConfConponent_o *)(static_fields + 8), v16, v25, v26, v27, v28, v29, v30);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, System_Int32_array **, long double))method->rgctx_data->_5_System_Linq_Enumerable_Select_T__BgmPlayArgs_->methodPointer)(
                                                               v9,
                                                               v16,
                                                               v10);
  v34 = (BgmPlayArgs_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                               v33,
                               (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v39 = (BgmPlayArgsGroup_o *)sub_B170CC(BgmPlayArgsGroup_TypeInfo, v35, v36, v37, v38);
  BgmPlayArgsGroup___ctor_23408980(v39, v34, 0LL);
  return v39;
}


System_String_o *__fastcall BgmManager__ExtractCueName(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Char_array *v4; // x0
  __int64 v5; // x2
  System_Char_array *v6; // x1
  __int64 v7; // x8

  if ( (byte_40F9051 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, name);
    byte_40F9051 = 1;
  }
  v4 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v4 )
    goto LABEL_9;
  v6 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  v4->m_Items[2] = 47;
  if ( !name || (v4 = (System_Char_array *)System_String__Split(name, v4, 0LL)) == 0LL )
LABEL_9:
    sub_B170D4();
  v7 = *(_QWORD *)&v4->max_length;
  if ( !(_DWORD)v7 )
  {
LABEL_10:
    sub_B17100(v4, v6, v5);
    sub_B170A0();
  }
  return *(System_String_o **)((char *)&v4->m_Items[2] + (((v7 << 32) - 0x100000000LL) >> 29));
}


void __fastcall BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F903A & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F903A = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopBgm(0LL, fadeoutTime, callback, v3);
}


bool __fastcall BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        float fadeoutTime,
        System_String_o *name,
        const MethodInfo_18BA9C4 *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v10; // x1
  Il2CppClass *_0_BgmManager___c__DisplayClass64_0_T; // x22
  __int64 v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x20
  Il2CppClass *_4_System_Func_T__bool; // x21
  __int64 v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_40FA64D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_bool___, name);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_bool___, v10);
    byte_40FA64D = 1;
  }
  _0_BgmManager___c__DisplayClass64_0_T = method->rgctx_data->_0_BgmManager___c__DisplayClass64_0_T_;
  if ( (BYTE2(_0_BgmManager___c__DisplayClass64_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_BgmManager___c__DisplayClass64_0_T_);
  v12 = sub_B170CC(_0_BgmManager___c__DisplayClass64_0_T, name, method, v4, v5);
  method->rgctx_data->_1_BgmManager___c__DisplayClass64_0_T___ctor->methodPointer();
  if ( !v12 || (*(float *)(v12 + 16) = fadeoutTime, !this) )
    sub_B170D4();
  v17 = ((__int64 (__fastcall *)(BgmManager_o *, System_String_o *))method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
          this,
          name);
  _4_System_Func_T__bool = method->rgctx_data->_4_System_Func_T__bool_;
  if ( (BYTE2(_4_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_4_System_Func_T__bool_);
  v19 = sub_B170CC(_4_System_Func_T__bool, v13, v14, v15, v16);
  ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_5_System_Func_T__bool___ctor->methodPointer)(
    v19,
    v12,
    method->rgctx_data->_3_BgmManager___c__DisplayClass64_0_T___FadeoutBgmLocal_b__0);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, __int64))method->rgctx_data->_6_System_Linq_Enumerable_Select_T__bool_->methodPointer)(
                                                               v17,
                                                               v19);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v20,
                                                               (const MethodInfo_19C4884 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v21, (const MethodInfo_18C7930 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BgmManager_o *Instance; // x19

  if ( (byte_40F9043 & 1) == 0 )
  {
    sub_B16FFC(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___, v2);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_40F9043 = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
      Instance,
      fadeoutTime,
      0LL,
      (const MethodInfo_18BA9C4 *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19

  if ( (byte_40F9046 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_40F9046 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    Instance[2].fields.m_CachedPtr = 0;
  }
}


CriAtomSource_o *__fastcall BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9056 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___, method);
    byte_40F9056 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                              gameObject,
                              (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t __fastcall BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  SoundManager_o *Instance; // x0
  System_String_o *CueSheet; // x19
  SoundManager_c *v6; // x8

  if ( (byte_40F902C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F902C = 1;
  }
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x19
  bool v4; // w8
  System_String_o *result; // x0
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_40F903E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_40F903E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v4 )
  {
    if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
      sub_B170D4();
    return *(System_String_o **)&webViewBase->fields.m_CachedPtr;
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
  WebViewManager_o *Instance; // x0
  TerminalOverwriteMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o **p_COSMOS_IN_THE_LOSTBELT_BGM_NAME; // x19
  int32_t UiFlag; // w19
  System_Collections_ICollection_o *ClearWarIdList; // x20
  BalanceConfig_c *v12; // x0
  BalanceConfig_c *v13; // x0
  BgmManager_c *v14; // x0
  System_String_o *bgmName; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F9059 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    sub_B16FFC(&BgmManager_TypeInfo, v2);
    sub_B16FFC(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v4);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F9059 = 1;
  }
  bgmName = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (TerminalOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
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
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
            v12->static_fields->OrdealCallWarId,
            (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
LABEL_18:
      v14 = BgmManager_TypeInfo;
      if ( UiFlag == 1 )
      {
        if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          v14 = BgmManager_TypeInfo;
        }
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v14->static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
      }
      else
      {
        if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          v14 = BgmManager_TypeInfo;
        }
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v14->static_fields->DEFAULT_MAIN_BGM_NAME;
      }
    }
    else
    {
      v13 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
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

  if ( (byte_40F9030 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, v1);
    byte_40F9030 = 1;
  }
  v2 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x8
  struct JinglePlayer_o **p_jinglePlayer; // x20
  JinglePlayer_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x0

  if ( (byte_40F9055 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_JinglePlayer___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___, v3);
    sub_B16FFC(&JinglePlayer_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v5);
    byte_40F9055 = 1;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  v7 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         v6,
         (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !v7 )
    goto LABEL_11;
  v12 = *(_QWORD *)&v7->max_length;
  if ( !v12 )
  {
    v14 = (JinglePlayer_o *)sub_B170CC(JinglePlayer_TypeInfo, v8, v9, v10, v11);
    JinglePlayer___ctor(v14, 0LL);
    this->fields.jinglePlayer = v14;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.jinglePlayer,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( this->fields.jinglePlayer )
    {
      ((void (__fastcall *)(struct JinglePlayer_o *, Il2CppMethodPointer))this->fields.jinglePlayer->klass->vtable._5_Initialize.method)(
        this->fields.jinglePlayer,
        this->fields.jinglePlayer->klass->vtable._6_Reset.methodPtr);
      bgmPlayers = this->fields.bgmPlayers;
      if ( bgmPlayers )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgmPlayers,
          (EventMissionProgressRequest_Argument_ProgressData_o *)*p_jinglePlayer,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
        return *p_jinglePlayer;
      }
    }
LABEL_11:
    sub_B170D4();
  }
  if ( !(_DWORD)v12 )
  {
    sub_B17100(v7, v8, v9);
    sub_B170A0();
  }
  p_jinglePlayer = (struct JinglePlayer_o **)v7->m_Items;
  return *p_jinglePlayer;
}


SubBgmPlayer_o *__fastcall BgmManager__GetOrCreateSubBgmPlayer(
        BgmManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  SubBgmPlayer_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  BgmManager___c_c *v37; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__69_1; // x21
  Il2CppObject *v40; // x22
  struct BgmManager___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x0

  if ( (byte_40F9054 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_SubBgmPlayer___, bgmName);
    sub_B16FFC(&Method_System_Linq_Enumerable_First_SubBgmPlayer___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___, v9);
    sub_B16FFC(&Method_System_Func_SubBgmPlayer__bool___ctor__, v10);
    sub_B16FFC(&System_Func_SubBgmPlayer__bool__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v12);
    sub_B16FFC(&SubBgmPlayer_TypeInfo, v13);
    sub_B16FFC(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__69_1__, v14);
    sub_B16FFC(&Method_BgmManager___c__DisplayClass69_0__GetOrCreateSubBgmPlayer_b__0__, v15);
    sub_B16FFC(&BgmManager___c__DisplayClass69_0_TypeInfo, v16);
    sub_B16FFC(&BgmManager___c_TypeInfo, v17);
    byte_40F9054 = 1;
  }
  v18 = sub_B170CC(BgmManager___c__DisplayClass69_0_TypeInfo, bgmName, method, v3, v4);
  BgmManager___c__DisplayClass69_0___ctor((BgmManager___c__DisplayClass69_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_21;
  *(_QWORD *)(v18 + 16) = bgmName;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)bgmName, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v26 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                            v25,
                                                                                            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_SubBgmPlayer__bool__TypeInfo,
                                                                             v27,
                                                                             v28,
                                                                             v29,
                                                                             v30);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v31,
    (Il2CppObject *)v18,
    Method_BgmManager___c__DisplayClass69_0__GetOrCreateSubBgmPlayer_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                       v26,
                                                                                       (System_Func_T__bool__o *)v31,
                                                                                       (const MethodInfo_18B650C *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    v37 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v37 = BgmManager___c_TypeInfo;
    }
    static_fields = v37->static_fields;
    _9__69_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__69_1;
    if ( !_9__69_1 )
    {
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)static_fields->__9;
      _9__69_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_SubBgmPlayer__bool__TypeInfo,
                                                                                      v32,
                                                                                      v33,
                                                                                      v34,
                                                                                      v35);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__69_1,
        v40,
        Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__69_1__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
      v41 = BgmManager___c_TypeInfo->static_fields;
      v41->__9__69_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__69_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v41->__9__69_1,
        (System_Int32_array **)_9__69_1,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                         v26,
                                                                                         (System_Func_T__bool__o *)_9__69_1,
                                                                                         (const MethodInfo_18B650C *)Method_BasicHelper_Find_SubBgmPlayer___);
    if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    {
      if ( v26 )
      {
        if ( (int)v26->max_length > 1 )
          return (SubBgmPlayer_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                     (const MethodInfo_18D6DD4 *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)sub_B170CC(
                                                                                             SubBgmPlayer_TypeInfo,
                                                                                             v48,
                                                                                             v49,
                                                                                             v50,
                                                                                             v51);
        SubBgmPlayer___ctor(USFGOActorBattleActionEventConditional_OverwriteParamCondition, 0LL);
        if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
        {
          ((void (__fastcall *)(SubBgmPlayer_o *, Il2CppMethodPointer))USFGOActorBattleActionEventConditional_OverwriteParamCondition->klass->vtable._5_Initialize.method)(
            USFGOActorBattleActionEventConditional_OverwriteParamCondition,
            USFGOActorBattleActionEventConditional_OverwriteParamCondition->klass->vtable._6_Reset.methodPtr);
          bgmPlayers = this->fields.bgmPlayers;
          if ( bgmPlayers )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgmPlayers,
              (EventMissionProgressRequest_Argument_ProgressData_o *)USFGOActorBattleActionEventConditional_OverwriteParamCondition,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
            return USFGOActorBattleActionEventConditional_OverwriteParamCondition;
          }
        }
      }
LABEL_21:
      sub_B170D4();
    }
  }
  return USFGOActorBattleActionEventConditional_OverwriteParamCondition;
}


void __fastcall BgmManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BgmManager_o *Instance; // x19
  const MethodInfo *v4; // x1

  if ( (byte_40F902B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_40F902B = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    BgmManager__InitializeLocal(Instance, v4);
  }
}


void __fastcall BgmManager__InitializeLocal(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *bgmPlayers; // x19
  MainBgmPlayer_o *v15; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Collections_Generic_List_BgmPlayerBase__o *v22; // x0
  BgmManager___c_c *v23; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__49_0; // x20
  Il2CppObject *v26; // x21
  struct BgmManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  BgmManager_c *v34; // x0

  if ( (byte_40F9047 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BgmPlayerBase___ctor__, method);
    sub_B16FFC(&System_Action_BgmPlayerBase__TypeInfo, v6);
    sub_B16FFC(&BgmManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v10);
    sub_B16FFC(&MainBgmPlayer_TypeInfo, v11);
    sub_B16FFC(&Method_BgmManager___c__InitializeLocal_b__49_0__, v12);
    sub_B16FFC(&BgmManager___c_TypeInfo, v13);
    byte_40F9047 = 1;
  }
  bgmPlayers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)this->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_20;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v15 = (MainBgmPlayer_o *)sub_B170CC(MainBgmPlayer_TypeInfo, method, v2, v3, v4);
    MainBgmPlayer___ctor(v15, 0LL);
    this->fields.mainBgmPlayer = v15;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mainBgmPlayer,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = this->fields.bgmPlayers;
    if ( !v22 )
      goto LABEL_20;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v22,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.mainBgmPlayer,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
    bgmPlayers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)this->fields.bgmPlayers;
  }
  v23 = BgmManager___c_TypeInfo;
  if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v23 = BgmManager___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__49_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_BgmPlayerBase__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__49_0,
      v26,
      Method_BgmManager___c__InitializeLocal_b__49_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_BgmPlayerBase___ctor__);
    v27 = BgmManager___c_TypeInfo->static_fields;
    v27->__9__49_0 = (struct System_Action_BgmPlayerBase__o *)_9__49_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v27->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !bgmPlayers )
LABEL_20:
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    bgmPlayers,
    (System_Action_T__o *)_9__49_0,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v34 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v34);
}


bool __fastcall BgmManager__IsKeepSubBgm(BgmManager_o *this, const MethodInfo *method)
{
  return this->fields.enableCounter_KeepSubBgm > 0;
}


bool __fastcall BgmManager__IsLoadingLocal(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  BgmManager_o *v4; // x19
  __int64 v5; // x1
  System_String_o *CueName; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadingBgmCueNameList; // x8
  struct System_Collections_Generic_List_string__o *v9; // x8

  v4 = this;
  if ( (byte_40F9050 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, name);
    this = (BgmManager_o *)sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    byte_40F9050 = 1;
  }
  if ( name )
  {
    CueName = BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
               loadingBgmCueNameList,
               (WarBoardManager_TaskList_o *)CueName,
               (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_B170D4();
  }
  v9 = v4->fields.loadingBgmCueNameList;
  if ( !v9 )
    goto LABEL_8;
  return v9->fields._size > 0;
}


bool __fastcall BgmManager__IsPlayBgm(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *Instance; // x20

  if ( (byte_40F9033 & 1) == 0 )
  {
    sub_B16FFC(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_40F9033 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_18BA748 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool __fastcall BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *Instance; // x20

  if ( (byte_40F903F & 1) == 0 )
  {
    sub_B16FFC(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_40F903F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_18BA748 *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool __fastcall BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  BgmManager_o *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0

  if ( (byte_40F904F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, bgmName);
    byte_40F904F = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName(Instance, bgmName, v5);
  if ( !Instance )
    sub_B170D4();
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0LL) != 0LL;
}


void __fastcall BgmManager__LateUpdate(BgmManager_o *this, const MethodInfo *method)
{
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  BgmPlayerBase_o *jinglePlayer; // x0
  bool IsPlaying; // w0
  int v29; // w25
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  BgmManager___c_c *v35; // x8
  struct BgmManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__75_0; // x21
  Il2CppObject *v38; // x22
  struct BgmManager___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  _BOOL4 v46; // w0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_IEnumerable_TResult__o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  BgmManager___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_T__o *v57; // x20
  struct BgmManager___c_StaticFields *v58; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__75_1; // x21
  Il2CppObject *v60; // x22
  struct BgmManager___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  BgmPlayArgsGroup_o *v68; // x0
  const MethodInfo *v69; // x1
  BgmPlayArgsGroup_o *v70; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Collections_Generic_IEnumerable_T__o *v72; // x21
  BgmManager___c_c *v73; // x0
  struct BgmManager___c_StaticFields *v74; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__75_3; // x22
  Il2CppObject *v76; // x23
  struct BgmManager___c_StaticFields *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  const MethodInfo *v84; // x2
  BgmManager___c_c *v85; // x0
  struct System_Collections_Generic_List_BgmPlayerBase__o *v86; // x19
  struct BgmManager___c_StaticFields *v87; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__75_2; // x20
  Il2CppObject *v89; // x21
  struct BgmManager___c_StaticFields *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7

  if ( (byte_40F9058 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GeneralBgmPlayer___ctor__, method);
    sub_B16FFC(&Method_System_Action_BgmPlayerBase___ctor__, v3);
    sub_B16FFC(&Method_System_Action_BgmPlayArgs___ctor__, v4);
    sub_B16FFC(&System_Action_BgmPlayArgs__TypeInfo, v5);
    sub_B16FFC(&System_Action_BgmPlayerBase__TypeInfo, v6);
    sub_B16FFC(&System_Action_GeneralBgmPlayer__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_BgmPlayArgs___, v8);
    sub_B16FFC(&Method_BasicHelper_ForEach_GeneralBgmPlayer___, v9);
    sub_B16FFC(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, v10);
    sub_B16FFC(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___, v11);
    sub_B16FFC(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___, v12);
    sub_B16FFC(&BgmManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v16);
    sub_B16FFC(&Method_System_Func_GeneralBgmPlayer__bool___ctor__, v17);
    sub_B16FFC(&System_Func_GeneralBgmPlayer__bool__TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v20);
    sub_B16FFC(&Method_BgmManager___c__LateUpdate_b__75_0__, v21);
    sub_B16FFC(&Method_BgmManager___c__LateUpdate_b__75_1__, v22);
    sub_B16FFC(&Method_BgmManager___c__LateUpdate_b__75_2__, v23);
    sub_B16FFC(&Method_BgmManager___c__LateUpdate_b__75_3__, v24);
    sub_B16FFC(&BgmManager___c_TypeInfo, v25);
    byte_40F9058 = 1;
  }
  bgmPlayers = this->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_57;
  if ( bgmPlayers->fields._size >= 1 )
  {
    jinglePlayer = (BgmPlayerBase_o *)this->fields.jinglePlayer;
    if ( jinglePlayer )
    {
      IsPlaying = BgmPlayerBase__IsPlaying(jinglePlayer, method);
      bgmPlayers = this->fields.bgmPlayers;
      v29 = IsPlaying;
    }
    else
    {
      v29 = 0;
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                 (System_Collections_IEnumerable_o *)bgmPlayers,
                                                                 (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    v35 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v35 = BgmManager___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__75_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__75_0;
    if ( !_9__75_0 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__75_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_GeneralBgmPlayer__bool__TypeInfo,
                                                                                      v30,
                                                                                      v31,
                                                                                      v32,
                                                                                      v33);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__75_0,
        v38,
        Method_BgmManager___c__LateUpdate_b__75_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_GeneralBgmPlayer__bool___ctor__);
      v39 = BgmManager___c_TypeInfo->static_fields;
      v39->__9__75_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__75_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v39->__9__75_0,
        (System_Int32_array **)_9__75_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    v46 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
            v34,
            (System_Func_TSource__bool__o *)_9__75_0,
            (const MethodInfo_18C9B90 *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v29 & v46) != 0 )
    {
      v51 = System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
              (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
      v56 = BgmManager___c_TypeInfo;
      v57 = (System_Collections_Generic_IEnumerable_T__o *)v51;
      if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BgmManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
        v56 = BgmManager___c_TypeInfo;
      }
      v58 = v56->static_fields;
      _9__75_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v58->__9__75_1;
      if ( !_9__75_1 )
      {
        if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v56);
          v58 = BgmManager___c_TypeInfo->static_fields;
        }
        v60 = (Il2CppObject *)v58->__9;
        _9__75_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                          System_Action_GeneralBgmPlayer__TypeInfo,
                                                                                          v52,
                                                                                          v53,
                                                                                          v54,
                                                                                          v55);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__75_1,
          v60,
          Method_BgmManager___c__LateUpdate_b__75_1__,
          (const MethodInfo_24B7310 *)Method_System_Action_GeneralBgmPlayer___ctor__);
        v61 = BgmManager___c_TypeInfo->static_fields;
        v61->__9__75_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__75_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v61->__9__75_1,
          (System_Int32_array **)_9__75_1,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v57,
        (System_Action_T__o *)_9__75_1,
        (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      this->fields.isBgmStopJingle = 1;
      if ( v29 )
      {
LABEL_47:
        v85 = BgmManager___c_TypeInfo;
        v86 = this->fields.bgmPlayers;
        if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BgmManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
          v85 = BgmManager___c_TypeInfo;
        }
        v87 = v85->static_fields;
        _9__75_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v87->__9__75_2;
        if ( !_9__75_2 )
        {
          if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v85);
            v87 = BgmManager___c_TypeInfo->static_fields;
          }
          v89 = (Il2CppObject *)v87->__9;
          _9__75_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                            System_Action_BgmPlayerBase__TypeInfo,
                                                                                            v47,
                                                                                            v48,
                                                                                            v49,
                                                                                            v50);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__75_2,
            v89,
            Method_BgmManager___c__LateUpdate_b__75_2__,
            (const MethodInfo_24B7310 *)Method_System_Action_BgmPlayerBase___ctor__);
          v90 = BgmManager___c_TypeInfo->static_fields;
          v90->__9__75_2 = (struct System_Action_BgmPlayerBase__o *)_9__75_2;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v90->__9__75_2,
            (System_Int32_array **)_9__75_2,
            v91,
            v92,
            v93,
            v94,
            v95,
            v96);
        }
        if ( v86 )
        {
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v86,
            (System_Action_T__o *)_9__75_2,
            (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
          return;
        }
LABEL_57:
        sub_B170D4();
      }
    }
    else
    {
      if ( !v46
        && v29 == 0
        && this->fields.isBgmStopJingle
        && BgmManager__ExistsPlayerHavingBgmName_object_(
             this,
             0LL,
             (const MethodInfo_18BA748 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
      {
        v68 = BgmManager__ExportPlayArgsGroupLocal_object_(
                this,
                (const MethodInfo_18BA788 *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
        if ( !v68 )
          goto LABEL_57;
        v70 = v68;
        v71 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(v68, v69);
        v72 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                               v71,
                                                               (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
        BgmManager__StopBgmLocal_SubBgmPlayer_(
          this,
          0LL,
          (const MethodInfo_18BABD0 *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
        if ( !v72 )
          goto LABEL_57;
        if ( v72[1].monitor )
        {
          v73 = BgmManager___c_TypeInfo;
          if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
            v73 = BgmManager___c_TypeInfo;
          }
          v74 = v73->static_fields;
          _9__75_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v74->__9__75_3;
          if ( !_9__75_3 )
          {
            if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v73);
              v74 = BgmManager___c_TypeInfo->static_fields;
            }
            v76 = (Il2CppObject *)v74->__9;
            _9__75_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                              System_Action_BgmPlayArgs__TypeInfo,
                                                                                              v47,
                                                                                              v48,
                                                                                              v49,
                                                                                              v50);
            System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
              _9__75_3,
              v76,
              Method_BgmManager___c__LateUpdate_b__75_3__,
              (const MethodInfo_24B7310 *)Method_System_Action_BgmPlayArgs___ctor__);
            v77 = BgmManager___c_TypeInfo->static_fields;
            v77->__9__75_3 = (struct System_Action_BgmPlayArgs__o *)_9__75_3;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v77->__9__75_3,
              (System_Int32_array **)_9__75_3,
              v78,
              v79,
              v80,
              v81,
              v82,
              v83);
          }
          BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v72,
            (System_Action_T__o *)_9__75_3,
            (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BgmPlayArgs___);
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          BgmManager__PlayBgm_23393932(v70, 0LL, v84);
        }
      }
      if ( v29 )
        goto LABEL_47;
    }
    this->fields.isBgmStopJingle = 0;
    goto LABEL_47;
  }
}


void __fastcall BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BgmManager_o *Instance; // x20
  bool v7; // w19

  if ( (byte_40F9044 & 1) == 0 )
  {
    sub_B16FFC(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___, method);
    sub_B16FFC(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_40F9044 = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    v7 = isPause;
    BgmManager__PauseBgmLocal_SubBgmPlayer_(
      Instance,
      v7,
      0LL,
      (const MethodInfo_18BAAF8 *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_SubBgmPlayer_(
      Instance,
      v7,
      0LL,
      (const MethodInfo_18BAAF8 *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmManager__PauseBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_18BAAF8 *method)
{
  __int64 v4; // x4
  Il2CppClass *_0_BgmManager___c__DisplayClass67_0_T; // x20
  __int64 v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x21
  Il2CppClass *_4_System_Action_T; // x22
  __int64 v16; // x22

  _0_BgmManager___c__DisplayClass67_0_T = method->rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_;
  if ( (BYTE2(_0_BgmManager___c__DisplayClass67_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_);
  v9 = sub_B170CC(_0_BgmManager___c__DisplayClass67_0_T, isPause, name, method, v4);
  method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor->methodPointer();
  if ( !v9 )
    sub_B170D4();
  *(_BYTE *)(v9 + 16) = isPause;
  v14 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_BgmPlayerBase__o *))method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_->methodPointer)(this->fields.bgmPlayers);
  _4_System_Action_T = method->rgctx_data->_4_System_Action_T_;
  if ( (BYTE2(_4_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_4_System_Action_T_);
  v16 = sub_B170CC(_4_System_Action_T, v10, v11, v12, v13);
  ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_5_System_Action_T___ctor->methodPointer)(
    v16,
    v9,
    method->rgctx_data->_3_BgmManager___c__DisplayClass67_0_T___PauseBgmLocal_b__0);
  ((void (__fastcall *)(__int64, __int64))method->rgctx_data->_6_BasicHelper_ForEach_T_->methodPointer)(v14, v16);
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
  __int64 v15; // x3
  __int64 v16; // x4
  BgmPlayArgsGroup_o *v17; // x0
  BgmPlayArgsGroup_o *v18; // x22
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x2
  System_Nullable_float__o volumeNullable; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_volumeNullable; // 0:x0.8
  System_Nullable_float__o v23; // 0:x2.8

  if ( (byte_40F9035 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, startTime);
    sub_B16FFC(&BgmPlayArgsGroup_TypeInfo, v11);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v12);
    byte_40F9035 = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0LL;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
  v17 = (BgmPlayArgsGroup_o *)sub_B170CC(BgmPlayArgsGroup_TypeInfo, v13, v14, v15, v16);
  v23 = volumeNullable;
  v18 = v17;
  BgmPlayArgsGroup___ctor_23393820(v17, name, v23, fadeTime, startTime, v19);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_23393932(v18, finishCallback, v20);
}


void __fastcall BgmManager__PlayBgm_23393932(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BgmManager_o *Instance; // x21
  const MethodInfo *v7; // x3

  if ( (byte_40F9037 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, finishCallback);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_40F9037 = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !Instance )
      sub_B170D4();
    BgmManager__PreloadAndPlayBgms(Instance, argsGroup, finishCallback, v7);
  }
}


void __fastcall BgmManager__PlayBgm_23394136(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  BgmPlayArgsGroup_o *v9; // x22
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_40F9036 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, subArray);
    sub_B16FFC(&BgmPlayArgsGroup_TypeInfo, v8);
    byte_40F9036 = 1;
  }
  v9 = (BgmPlayArgsGroup_o *)sub_B170CC(BgmPlayArgsGroup_TypeInfo, subArray, finishCallback, method, v4);
  BgmPlayArgsGroup___ctor(v9, main, (BgmPlayArgs_array *)subArray, v10);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_23393932(v9, finishCallback, v11);
}


void __fastcall BgmManager__PlayJingle(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BgmManager_o *Instance; // x21
  const MethodInfo *v9; // x3

  if ( (byte_40F9040 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    byte_40F9040 = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    BgmManager__PlayJingleLocal(Instance, name, volume, callbackFunc, v9);
  }
}


void __fastcall BgmManager__PlayJingleLocal(
        BgmManager_o *this,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x4
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Action_o *v36; // x21
  const MethodInfo *v37; // x3

  if ( (byte_40F9053 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, name);
    sub_B16FFC(&Method_BgmManager___c__DisplayClass68_0__PlayJingleLocal_b__0__, v10);
    sub_B16FFC(&BgmManager___c__DisplayClass68_0_TypeInfo, v11);
    byte_40F9053 = 1;
  }
  v12 = sub_B170CC(BgmManager___c__DisplayClass68_0_TypeInfo, name, callbackFunc, method, v5);
  BgmManager___c__DisplayClass68_0___ctor((BgmManager___c__DisplayClass68_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = name;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)name, v19, v20, v21, v22, v23, v24);
  *(float *)(v12 + 32) = volume;
  *(_QWORD *)(v12 + 40) = callbackFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 40),
    (System_Int32_array **)callbackFunc,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = *(System_String_o **)(v12 + 24);
  v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
  System_Action___ctor(v36, (Il2CppObject *)v12, Method_BgmManager___c__DisplayClass68_0__PlayJingleLocal_b__0__, 0LL);
  BgmManager__PreloadBgm(this, v31, v36, v37);
}


void __fastcall BgmManager__PlayJingle_23398544(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F9041 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F9041 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, 0LL, v3);
}


void __fastcall BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9038 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F9038 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_23394136(args, 0LL, 0LL, v2);
}


void __fastcall BgmManager__PlayPreloadedBgm(BgmManager_o *this, BgmPlayArgs_o *args, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *BgmName_k__BackingField; // x20
  const MethodInfo *v7; // x2
  BgmPlayArgs_c *klass; // x8
  unsigned int v9; // w9
  __int64 v10; // x11
  __int64 v11; // x11
  void *mainBgmPlayer; // x0

  if ( (byte_40F904C & 1) == 0 )
  {
    sub_B16FFC(&MainBgmPlayArgs_TypeInfo, args);
    sub_B16FFC(&SubBgmPlayArgs_TypeInfo, v5);
    byte_40F904C = 1;
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
        sub_B170D4();
      }
    }
  }
}


void __fastcall BgmManager__PlaySubBgm(SubBgmPlayArgs_o *args, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x22
  System_Int32_array **Instance; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_String_o *v30; // x21
  BgmManager_o *v31; // x20
  System_Action_o *v32; // x22
  const MethodInfo *v33; // x3

  if ( (byte_40F9039 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    sub_B16FFC(&Method_BgmManager___c__DisplayClass35_0__PlaySubBgm_b__0__, v8);
    sub_B16FFC(&BgmManager___c__DisplayClass35_0_TypeInfo, v9);
    byte_40F9039 = 1;
  }
  v10 = sub_B170CC(BgmManager___c__DisplayClass35_0_TypeInfo, method, v2, v3, v4);
  BgmManager___c__DisplayClass35_0___ctor((BgmManager___c__DisplayClass35_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 24) = args;
  v17 = v10 + 24;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)args, v11, v12, v13, v14, v15, v16);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v10 + 16) = Instance;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), Instance, v19, v20, v21, v22, v23, v24);
  v25 = *(UnityEngine_Object_o **)(v10 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v25, 0LL, 0LL) )
  {
    if ( *(_QWORD *)v17 )
    {
      v30 = *(System_String_o **)(*(_QWORD *)v17 + 16LL);
      v31 = *(BgmManager_o **)(v10 + 16);
      v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
      System_Action___ctor(v32, (Il2CppObject *)v10, Method_BgmManager___c__DisplayClass35_0__PlaySubBgm_b__0__, 0LL);
      if ( v31 )
      {
        BgmManager__PreloadBgm(v31, v30, v32, v33);
        return;
      }
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall BgmManager__PreloadAndPlayBgms(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v21; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BgmPlayArgsGroup_o **v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct BgmPlayArgsGroup_o *v47; // x1
  const MethodInfo *v48; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x20
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  __int64 v66; // x23
  unsigned __int64 v67; // x24
  __int64 v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x0
  __int64 v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v88; // x22
  System_Action_Action__array *v89; // x21
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  ChainableActionParallel_o *v94; // x20
  __int64 v95; // x2
  System_Action_array *v96; // x21
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  System_Action_o *v101; // x22
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  ChainableActionBase_o *v107; // x0

  if ( (byte_40F904B & 1) == 0 )
  {
    sub_B16FFC(&System_Action___TypeInfo, argsGroup);
    sub_B16FFC(&Method_System_Action_Action___ctor__, v8);
    sub_B16FFC(&System_Action_Action__TypeInfo, v9);
    sub_B16FFC(&System_Action_TypeInfo, v10);
    sub_B16FFC(&ChainableActionParallel_TypeInfo, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Action_Action___Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Action_Action___ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Action_Action____ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_Action_Action___TypeInfo, v16);
    sub_B16FFC(&Method_BgmManager___c__DisplayClass56_0__PreloadAndPlayBgms_b__0__, v17);
    sub_B16FFC(&BgmManager___c__DisplayClass56_0_TypeInfo, v18);
    sub_B16FFC(&Method_BgmManager___c__DisplayClass56_1__PreloadAndPlayBgms_b__1__, v19);
    sub_B16FFC(&BgmManager___c__DisplayClass56_1_TypeInfo, v20);
    byte_40F904B = 1;
  }
  v21 = sub_B170CC(BgmManager___c__DisplayClass56_0_TypeInfo, argsGroup, finishCallback, method, v4);
  BgmManager___c__DisplayClass56_0___ctor((BgmManager___c__DisplayClass56_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_22;
  *(_QWORD *)(v21 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v21 + 24) = argsGroup;
  v28 = (BgmPlayArgsGroup_o **)(v21 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)argsGroup, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v21 + 40) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v21 + 40),
    (System_Int32_array **)finishCallback,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v47 = *(struct BgmPlayArgsGroup_o **)(v21 + 24);
  if ( v47 )
  {
    this->fields.cacheArgsGroup = v47;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.cacheArgsGroup,
      (System_Int32_array **)v47,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    if ( !*v28 )
      goto LABEL_22;
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(*v28, v48);
    v50 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v49,
                                   (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v21 + 32) = v50;
    sub_B16F98((BattleServantConfConponent_o *)(v21 + 32), v50, v51, v52, v53, v54, v55, v56);
    v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_Action_Action___TypeInfo,
                                                                                                    v57,
                                                                                                    v58,
                                                                                                    v59,
                                                                                                    v60);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v61,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v66 = *(_QWORD *)(v21 + 32);
    if ( !v66 )
      goto LABEL_22;
    if ( *(int *)(v66 + 24) >= 1 )
    {
      v67 = 0LL;
      while ( 1 )
      {
        v68 = sub_B170CC(BgmManager___c__DisplayClass56_1_TypeInfo, v62, v63, v64, v65);
        BgmManager___c__DisplayClass56_1___ctor((BgmManager___c__DisplayClass56_1_o *)v68, 0LL);
        if ( !v68 )
          break;
        *(_QWORD *)(v68 + 24) = v21;
        sub_B16F98((BattleServantConfConponent_o *)(v68 + 24), (System_Int32_array **)v21, v69, v70, v71, v72, v73, v74);
        if ( v67 >= *(unsigned int *)(v66 + 24) )
          goto LABEL_23;
        v83 = *(System_Int32_array ***)(v66 + 32 + 8 * v67);
        *(_QWORD *)(v68 + 16) = v83;
        sub_B16F98((BattleServantConfConponent_o *)(v68 + 16), v83, v77, v78, v79, v80, v81, v82);
        v88 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_Action__TypeInfo,
                                                                                     v84,
                                                                                     v85,
                                                                                     v86,
                                                                                     v87);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v88,
          (Il2CppObject *)v68,
          Method_BgmManager___c__DisplayClass56_1__PreloadAndPlayBgms_b__1__,
          (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
        if ( !v61 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v61,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v88,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Action_Action___Add__);
        if ( (__int64)++v67 >= *(int *)(v66 + 24) )
          goto LABEL_13;
      }
LABEL_22:
      sub_B170D4();
    }
LABEL_13:
    if ( !v61 )
      goto LABEL_22;
    v89 = (System_Action_Action__array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v61,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v94 = (ChainableActionParallel_o *)sub_B170CC(ChainableActionParallel_TypeInfo, v90, v91, v92, v93);
    ChainableActionParallel___ctor_30586412(v94, v89, 0LL);
    v96 = (System_Action_array *)sub_B17014(System_Action___TypeInfo, 1LL, v95);
    v101 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v97, v98, v99, v100);
    System_Action___ctor(
      v101,
      (Il2CppObject *)v21,
      Method_BgmManager___c__DisplayClass56_0__PreloadAndPlayBgms_b__0__,
      0LL);
    if ( !v96 )
      goto LABEL_22;
    if ( v101 )
    {
      v75 = sub_B170BC(v101, v96->obj.klass->_1.element_class);
      if ( !v75 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( !v96->max_length )
    {
LABEL_23:
      sub_B17100(v75, v76, v77);
      sub_B170A0();
    }
    v96->m_Items[0] = v101;
    sub_B16F98(
      (BattleServantConfConponent_o *)v96->m_Items,
      (System_Int32_array **)v101,
      v77,
      v102,
      v103,
      v104,
      v105,
      v106);
    if ( !v94 )
      goto LABEL_22;
    v107 = ChainableActionBase__Final((ChainableActionBase_o *)v94, v96, 0LL);
    if ( !v107 )
      goto LABEL_22;
    ChainableActionBase__Execute(v107, 0LL);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v21 + 40), 0LL);
  }
}


bool __fastcall BgmManager__PreloadBgm(
        BgmManager_o *this,
        System_String_o *name,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BgmManager_o *v27; // x0
  const MethodInfo *v28; // x2
  System_Int32_array **CueName; // x0
  WarBoardManager_TaskList_o **v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  SoundManager_o *Instance; // x0
  System_Int32_array **CueSheet; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Action_o *v49; // x21
  const MethodInfo *v50; // x3
  System_Collections_IEnumerator_o *v51; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *addBindList; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v54; // x0
  struct System_Collections_Generic_List_string__o *v55; // x0

  if ( (byte_40F904D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, name);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Insert__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
    sub_B16FFC(&Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__0__, v12);
    sub_B16FFC(&BgmManager___c__DisplayClass58_0_TypeInfo, v13);
    byte_40F904D = 1;
  }
  v14 = sub_B170CC(BgmManager___c__DisplayClass58_0_TypeInfo, name, finishCallback, method, v4);
  BgmManager___c__DisplayClass58_0___ctor((BgmManager___c__DisplayClass58_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 40) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v14 + 40),
    (System_Int32_array **)finishCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  CueName = (System_Int32_array **)BgmManager__ExtractCueName(v27, name, v28);
  v30 = (WarBoardManager_TaskList_o **)(v14 + 24);
  *(_QWORD *)(v14 + 24) = CueName;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), CueName, v31, v32, v33, v34, v35, v36);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CueSheet = (System_Int32_array **)SoundManager__GetCueSheet(Instance, *(System_String_o **)(v14 + 24), 0LL);
  *(_QWORD *)(v14 + 16) = CueSheet;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), CueSheet, v39, v40, v41, v42, v43, v44);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v14 + 16), 0LL) )
  {
    v49 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v45, v46, v47, v48);
    System_Action___ctor(v49, (Il2CppObject *)v14, Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__0__, 0LL);
    v51 = BgmManager__CoWaitSameAudioLoading(this, name, v49, v50);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v51, 0LL);
    return 0;
  }
  addBindList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.addBindList;
  if ( !addBindList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         addBindList,
         *v30,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    v54 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.addBindList;
    if ( v54 )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        v54,
        *v30,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
      v55 = this->fields.addBindList;
      if ( v55 )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___Insert(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v55,
          0,
          (XWeaponTrail_Element_o *)*v30,
          (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_string__Insert__);
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_12:
  ActionExtensions__Call(*(System_Action_o **)(v14 + 40), 0LL);
  return 1;
}


void __fastcall BgmManager__ReflectMasterVolumeLocal(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  BgmManager___c_c *v11; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__52_0; // x20
  Il2CppObject *v14; // x21
  struct BgmManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F904A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BgmPlayerBase___ctor__, method);
    sub_B16FFC(&System_Action_BgmPlayerBase__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v7);
    sub_B16FFC(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__52_0__, v8);
    sub_B16FFC(&BgmManager___c_TypeInfo, v9);
    byte_40F904A = 1;
  }
  bgmPlayers = this->fields.bgmPlayers;
  v11 = BgmManager___c_TypeInfo;
  if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v11 = BgmManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__52_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_BgmPlayerBase__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__52_0,
      v14,
      Method_BgmManager___c__ReflectMasterVolumeLocal_b__52_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_BgmPlayerBase___ctor__);
    v15 = BgmManager___c_TypeInfo->static_fields;
    v15->__9__52_0 = (struct System_Action_BgmPlayerBase__o *)_9__52_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !bgmPlayers )
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)_9__52_0,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__RemoveUnusedOldFromBindList(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v22; // x1
  struct System_Collections_Generic_List_string__o *addBindList; // x8
  int32_t size; // w20
  BgmManager_c *v25; // x0
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v26; // x20
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x0
  const MethodInfo *v28; // x1
  System_Collections_Generic_IEnumerable_T__o *UsingCueNames; // x1
  const MethodInfo *v30; // x1
  BgmPlayArgsGroup_o *cacheArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v32; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v34; // x21
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x21
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x0
  const MethodInfo *v48; // x2
  System_String_o *CueName; // x1
  int v50; // w24
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  struct System_Collections_Generic_List_string__o *v55; // x21
  int32_t v56; // w8
  int v57; // w22
  __int64 v58; // x26
  struct System_Collections_Generic_List_string__o *v59; // x21
  System_String_o *v60; // x21
  struct System_Collections_Generic_List_string__o *v61; // x0
  struct System_Collections_Generic_List_string__o *v62; // x8
  BgmManager_c *v63; // x0
  int32_t v64; // w21
  bool v65; // vf
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+8h] [xbp-98h] BYREF
  int v67[2]; // [xsp+20h] [xbp-80h]
  int v68; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F9057 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_string__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_string__Contains__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_string__UnionWith__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_string___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_HashSet_string__TypeInfo, v13);
    sub_B16FFC(&System_IDisposable_TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v16);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__RemoveAt__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v21);
    sub_B16FFC(&SoundManager_TypeInfo, v22);
    byte_40F9057 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v68 = 0;
  addBindList = this->fields.addBindList;
  if ( !addBindList )
    goto LABEL_71;
  size = addBindList->fields._size;
  v25 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v25 = BgmManager_TypeInfo;
  }
  if ( size > v25->static_fields->ADD_BIND_MAX )
  {
    v26 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                               System_Collections_Generic_HashSet_string__TypeInfo,
                                                                               method,
                                                                               v2,
                                                                               v3,
                                                                               v4);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
      v26,
      (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_string___ctor__);
    bgmPlayers = this->fields.bgmPlayers;
    if ( !bgmPlayers )
      goto LABEL_71;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v66,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bgmPlayers,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v69 = v66;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v69,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v69.fields.current )
        sub_B170D4();
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v69.fields.current,
                                                                       v28);
      if ( !v26 )
        sub_B170D4();
      System_Collections_Generic_HashSet_string___UnionWith(
        (System_Collections_Generic_HashSet_string__o *)v26,
        UsingCueNames,
        (const MethodInfo_21DFB3C *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    v67[0] = 84;
    v68 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v69,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    v68 = 0;
    cacheArgsGroup = this->fields.cacheArgsGroup;
    if ( cacheArgsGroup )
    {
      v32 = BgmPlayArgsGroup__AllArgsListNullExcluded(cacheArgsGroup, v30);
      if ( !v32 )
        goto LABEL_71;
      klass = v32->klass;
      v34 = v32;
      if ( *(_WORD *)&v32->klass->_2.bitflags1 )
      {
        v35 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          ++v35;
          p_offset += 4;
          if ( v35 >= *(unsigned __int16 *)&v32->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_AAFEF8(v32, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
              v34,
              *(_QWORD *)(p_method + 8));
      if ( !v38 )
        sub_B170D4();
      while ( 1 )
      {
        v39 = *(_QWORD *)v38;
        if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
        {
          v40 = 0LL;
          v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v40;
            v41 += 4;
            if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
              goto LABEL_27;
          }
          v42 = v39 + 16LL * *v41 + 312;
        }
        else
        {
LABEL_27:
          v42 = sub_AAFEF8(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
          break;
        v43 = *(_QWORD *)v38;
        if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
        {
          v44 = 0LL;
          v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v45 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            ++v44;
            v45 += 4;
            if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
              goto LABEL_34;
          }
          v46 = v43 + 16LL * *v45 + 312;
        }
        else
        {
LABEL_34:
          v46 = sub_AAFEF8(v38, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
        if ( !v47 )
          sub_B170D4();
        CueName = BgmManager__ExtractCueName((BgmManager_o *)v47, *(System_String_o **)(v47 + 16), v48);
        if ( !v26 )
          sub_B170D4();
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          v26,
          (WarBoardAIRoute_RouteData_o *)CueName,
          (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
      v67[0] = 159;
      v50 = ++v68;
      v51 = *(_QWORD *)v38;
      if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
      {
        v52 = 0LL;
        v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
        {
          ++v52;
          v53 += 4;
          if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
            goto LABEL_44;
        }
        v54 = v51 + 16LL * *v53 + 312;
      }
      else
      {
LABEL_44:
        v54 = sub_AAFEF8(v38, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v54)(v38, *(_QWORD *)(v54 + 8));
      if ( v50 && v67[v50 - 1] == 159 )
        v68 = v50 - 1;
    }
    v55 = this->fields.addBindList;
    if ( !v55 )
LABEL_71:
      sub_B170D4();
    v56 = v55->fields._size;
    if ( v56 - 1 >= 1 )
    {
      v57 = v56 - 2;
      v58 = v56 - 1 + 4LL;
      do
      {
        if ( v58 - 4 >= (unsigned __int64)(unsigned int)v55->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v26 )
          break;
        if ( !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v26,
                *((BattleBuffData_BuffData_o **)&v55->fields._items->obj.klass + v58),
                (const MethodInfo_21DEFE0 *)Method_System_Collections_Generic_HashSet_string__Contains__) )
        {
          v59 = this->fields.addBindList;
          if ( !v59 )
            goto LABEL_71;
          if ( v58 - 4 >= (unsigned __int64)(unsigned int)v59->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v60 = (System_String_o *)*((_QWORD *)&v59->fields._items->obj.klass + v58);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__releaseAudioAssetStorage(v60, 0LL);
          v61 = this->fields.addBindList;
          if ( !v61 )
            goto LABEL_71;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v61,
            v57 + 1,
            (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
          v62 = this->fields.addBindList;
          if ( !v62 )
            goto LABEL_71;
          v63 = BgmManager_TypeInfo;
          v64 = v62->fields._size;
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            v63 = BgmManager_TypeInfo;
          }
          if ( v64 <= v63->static_fields->ADD_BIND_MAX )
            return;
        }
        v65 = __OFSUB__(v57--, 1);
        if ( v57 < 0 != v65 )
          return;
        v55 = this->fields.addBindList;
        --v58;
      }
      while ( v55 );
      goto LABEL_71;
    }
  }
}


void __fastcall BgmManager__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BgmManager_o *Instance; // x19
  const MethodInfo *v4; // x1

  if ( (byte_40F902D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_40F902D = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    BgmManager__ResetLocal(Instance, v4);
  }
}


void __fastcall BgmManager__ResetLocal(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  BgmManager___c_c *v11; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__50_0; // x20
  Il2CppObject *v14; // x21
  struct BgmManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F9048 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BgmPlayerBase___ctor__, method);
    sub_B16FFC(&System_Action_BgmPlayerBase__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v7);
    sub_B16FFC(&Method_BgmManager___c__ResetLocal_b__50_0__, v8);
    sub_B16FFC(&BgmManager___c_TypeInfo, v9);
    byte_40F9048 = 1;
  }
  bgmPlayers = this->fields.bgmPlayers;
  v11 = BgmManager___c_TypeInfo;
  if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v11 = BgmManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__50_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_BgmPlayerBase__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__50_0,
      v14,
      Method_BgmManager___c__ResetLocal_b__50_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_BgmPlayerBase___ctor__);
    v15 = BgmManager___c_TypeInfo->static_fields;
    v15->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)_9__50_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !bgmPlayers )
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)_9__50_0,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BgmManager_c *v6; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  float *p_masterVolume; // x8
  float masterVolume; // t1
  BgmManager_o *Instance; // x19
  const MethodInfo *v11; // x1

  if ( (byte_40F9031 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, v2);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_40F9031 = 1;
  }
  v6 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v6 = BgmManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  masterVolume = static_fields->masterVolume;
  p_masterVolume = &static_fields->masterVolume;
  if ( masterVolume != volume )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      p_masterVolume = &BgmManager_TypeInfo->static_fields->masterVolume;
    }
    *p_masterVolume = volume;
    Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      if ( !Instance )
        sub_B170D4();
      BgmManager__ReflectMasterVolumeLocal(Instance, v11);
    }
  }
}


void __fastcall BgmManager__SetMute(bool isMute, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  __int64 v3; // x1
  __int64 v4; // x1
  BgmManager_c *v5; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  bool *p_isMute; // x8
  _BOOL4 v8; // t1
  BgmManager_o *Instance; // x20
  const MethodInfo *v10; // x2

  v2 = isMute;
  if ( (byte_40F902F & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_40F902F = 1;
  }
  v5 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v5 = BgmManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  v8 = static_fields->isMute;
  p_isMute = &static_fields->isMute;
  if ( ((v8 ^ v2) & 1) != 0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      p_isMute = &BgmManager_TypeInfo->static_fields->isMute;
    }
    *p_isMute = v2;
    Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    {
      if ( !Instance )
        sub_B170D4();
      BgmManager__SetMuteLocal(Instance, v2, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmManager__SetMuteLocal(BgmManager_o *this, bool isMute, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BgmManager___c__DisplayClass51_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x20

  if ( (byte_40F9049 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BgmPlayerBase___ctor__, isMute);
    sub_B16FFC(&System_Action_BgmPlayerBase__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v8);
    sub_B16FFC(&Method_BgmManager___c__DisplayClass51_0__SetMuteLocal_b__0__, v9);
    sub_B16FFC(&BgmManager___c__DisplayClass51_0_TypeInfo, v10);
    byte_40F9049 = 1;
  }
  v11 = (BgmManager___c__DisplayClass51_0_o *)sub_B170CC(
                                                BgmManager___c__DisplayClass51_0_TypeInfo,
                                                isMute,
                                                method,
                                                v3,
                                                v4);
  BgmManager___c__DisplayClass51_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.isMute = isMute,
        bgmPlayers = this->fields.bgmPlayers,
        v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_BgmPlayerBase__TypeInfo,
                                                                                     v12,
                                                                                     v13,
                                                                                     v14,
                                                                                     v15),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_BgmManager___c__DisplayClass51_0__SetMuteLocal_b__0__,
          (const MethodInfo_24B7310 *)Method_System_Action_BgmPlayerBase___ctor__),
        !bgmPlayers) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)v17,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BgmManager_o *Instance; // x19

  if ( (byte_40F903C & 1) == 0 )
  {
    sub_B16FFC(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___, v2);
    sub_B16FFC(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v6);
    byte_40F903C = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_SubBgmPlayer_(
        Instance,
        0LL,
        (const MethodInfo_18BABD0 *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        Instance,
        fadeoutTime,
        0LL,
        (const MethodInfo_18BA9C4 *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
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
  BgmManager_o *Instance; // x21

  if ( (byte_40F903B & 1) == 0 )
  {
    sub_B16FFC(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___, successCallback);
    sub_B16FFC(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, v7);
    sub_B16FFC(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___, v8);
    sub_B16FFC(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v11);
    byte_40F903B = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    if ( fadeoutTime <= 0.0 )
    {
      if ( !BgmManager__StopBgmLocal_SubBgmPlayer_(
              Instance,
              name,
              (const MethodInfo_18BABD0 *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___) )
        return;
      if ( Instance->fields.enableCounter_KeepSubBgm <= 0 )
        BgmManager__StopBgmLocal_SubBgmPlayer_(
          Instance,
          0LL,
          (const MethodInfo_18BABD0 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      if ( !BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
              Instance,
              fadeoutTime,
              name,
              (const MethodInfo_18BA9C4 *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___) )
        return;
      if ( Instance->fields.enableCounter_KeepSubBgm <= 0 )
        BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
          Instance,
          fadeoutTime,
          0LL,
          (const MethodInfo_18BA9C4 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    ActionExtensions__Call(successCallback, 0LL);
  }
}


bool __fastcall BgmManager__StopBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo_18BABD0 *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x20
  long double v12; // q0
  Il2CppClass *_1_BgmManager___c__65_T; // x21
  __int16 v14; // w8
  Il2CppClass *v15; // x21
  Il2CppClass *v16; // x21
  Il2CppClass *v17; // x21
  System_Int32_array **v18; // x21
  Il2CppClass *v19; // x21
  __int16 v20; // w8
  Il2CppClass *v21; // x21
  Il2CppClass *v22; // x21
  const MethodInfo_18BABD0_RGCTXs *rgctx_data; // x8
  Il2CppClass *v24; // x21
  Il2CppClass *_3_System_Func_T__bool; // x23
  __int64 v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  Il2CppClass *v33; // x22
  char *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_40FA64E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_bool___, name);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_bool___, v6);
    byte_40FA64E = 1;
  }
  if ( !this )
    sub_B170D4();
  v11 = ((__int64 (__fastcall *)(BgmManager_o *, System_String_o *))method->rgctx_data->_0_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
          this,
          name);
  _1_BgmManager___c__65_T = method->rgctx_data->_1_BgmManager___c__65_T_;
  v14 = WORD1(_1_BgmManager___c__65_T->vtable[0].methodPtr);
  if ( (v14 & 1) == 0 )
  {
    sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__65_T_);
    v14 = WORD1(_1_BgmManager___c__65_T->vtable[0].methodPtr);
  }
  if ( (v14 & 0x400) != 0 )
  {
    v15 = method->rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__65_T_);
    if ( !v15->_2.cctor_finished )
    {
      v16 = method->rgctx_data->_1_BgmManager___c__65_T_;
      if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__65_T_);
      *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(v16);
    }
  }
  v17 = method->rgctx_data->_1_BgmManager___c__65_T_;
  if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__65_T_);
  v18 = (System_Int32_array **)*((_QWORD *)v17->static_fields + 1);
  if ( !v18 )
  {
    v19 = method->rgctx_data->_1_BgmManager___c__65_T_;
    v20 = WORD1(v19->vtable[0].methodPtr);
    if ( (v20 & 1) == 0 )
    {
      sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__65_T_);
      v20 = WORD1(v19->vtable[0].methodPtr);
    }
    if ( (v20 & 0x400) != 0 )
    {
      v21 = method->rgctx_data->_1_BgmManager___c__65_T_;
      if ( (BYTE2(v21->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__65_T_);
      if ( !v21->_2.cctor_finished )
      {
        v22 = method->rgctx_data->_1_BgmManager___c__65_T_;
        if ( (BYTE2(v22->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__65_T_);
        j_il2cpp_runtime_class_init_0(v22);
      }
    }
    rgctx_data = method->rgctx_data;
    v24 = rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v24->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_AAFCFC(rgctx_data->_1_BgmManager___c__65_T_);
      rgctx_data = method->rgctx_data;
    }
    _3_System_Func_T__bool = rgctx_data->_3_System_Func_T__bool_;
    v26 = *(_QWORD *)v24->static_fields;
    if ( (BYTE2(_3_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(_3_System_Func_T__bool);
    v18 = (System_Int32_array **)sub_B170CC(_3_System_Func_T__bool, v7, v8, v9, v10);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__bool___ctor->methodPointer)(
      v18,
      v26,
      method->rgctx_data->_2_BgmManager___c__65_T___StopBgmLocal_b__65_0);
    v33 = method->rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v33->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_1_BgmManager___c__65_T_);
    static_fields = (char *)v33->static_fields;
    *((_QWORD *)static_fields + 1) = v18;
    sub_B16F98((BattleServantConfConponent_o *)(static_fields + 8), v18, v27, v28, v29, v30, v31, v32);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, System_Int32_array **, long double))method->rgctx_data->_5_System_Linq_Enumerable_Select_T__bool_->methodPointer)(
                                                               v11,
                                                               v18,
                                                               v12);
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v35,
                                                               (const MethodInfo_19C4884 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v36, (const MethodInfo_18C7930 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__StopJingle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BgmManager_o *Instance; // x19

  if ( (byte_40F9042 & 1) == 0 )
  {
    sub_B16FFC(&Method_BgmManager_StopBgmLocal_JinglePlayer___, v1);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_40F9042 = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    BgmManager__StopBgmLocal_SubBgmPlayer_(
      Instance,
      0LL,
      (const MethodInfo_18BABD0 *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BgmManager_o *Instance; // x20

  if ( (byte_40F903D & 1) == 0 )
  {
    sub_B16FFC(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, method);
    sub_B16FFC(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    byte_40F903D = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_SubBgmPlayer_(
        Instance,
        name,
        (const MethodInfo_18BABD0 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        Instance,
        fadeoutTime,
        name,
        (const MethodInfo_18BA9C4 *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__StopUnrequestedSubBgm(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *requestedBgmArgs,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *SubArgsList_k__BackingField; // x21
  BgmManager___c_c *v28; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__66_0; // x22
  Il2CppObject *v31; // x23
  struct BgmManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  BgmManager___c_c *v58; // x8
  System_Collections_Generic_IEnumerable_T__o *v59; // x19
  struct BgmManager___c_StaticFields *v60; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__66_2; // x20
  Il2CppObject *v62; // x21
  struct BgmManager___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7

  if ( (byte_40F9052 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_SubBgmPlayer___ctor__, requestedBgmArgs);
    sub_B16FFC(&System_Action_SubBgmPlayer__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_SubBgmPlayer___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_string___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___, v12);
    sub_B16FFC(&Method_System_Func_SubBgmPlayer__bool___ctor__, v13);
    sub_B16FFC(&Method_System_Func_SubBgmPlayArgs__string___ctor__, v14);
    sub_B16FFC(&System_Func_SubBgmPlayArgs__string__TypeInfo, v15);
    sub_B16FFC(&System_Func_SubBgmPlayer__bool__TypeInfo, v16);
    sub_B16FFC(&Method_BgmManager___c__StopUnrequestedSubBgm_b__66_0__, v17);
    sub_B16FFC(&Method_BgmManager___c__StopUnrequestedSubBgm_b__66_2__, v18);
    sub_B16FFC(&Method_BgmManager___c__DisplayClass66_0__StopUnrequestedSubBgm_b__1__, v19);
    sub_B16FFC(&BgmManager___c__DisplayClass66_0_TypeInfo, v20);
    sub_B16FFC(&BgmManager___c_TypeInfo, v21);
    byte_40F9052 = 1;
  }
  v22 = sub_B170CC(BgmManager___c__DisplayClass66_0_TypeInfo, requestedBgmArgs, method, v3, v4);
  BgmManager___c__DisplayClass66_0___ctor((BgmManager___c__DisplayClass66_0_o *)v22, 0LL);
  if ( this->fields.enableCounter_KeepSubBgm <= 0 )
  {
    if ( !requestedBgmArgs )
      goto LABEL_23;
    SubArgsList_k__BackingField = requestedBgmArgs->fields._SubArgsList_k__BackingField;
    v28 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v28 = BgmManager___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__66_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__66_0;
    if ( !_9__66_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__66_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                   System_Func_SubBgmPlayArgs__string__TypeInfo,
                                                                                                   v23,
                                                                                                   v24,
                                                                                                   v25,
                                                                                                   v26);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__66_0,
        v31,
        Method_BgmManager___c__StopUnrequestedSubBgm_b__66_0__,
        (const MethodInfo_2B6C28C *)Method_System_Func_SubBgmPlayArgs__string___ctor__);
      v32 = BgmManager___c_TypeInfo->static_fields;
      v32->__9__66_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__66_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v32->__9__66_0,
        (System_Int32_array **)_9__66_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__66_0,
                                                                 (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v40 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v39,
                                   (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v22 )
LABEL_23:
      sub_B170D4();
    *(_QWORD *)(v22 + 16) = v40;
    sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), v40, v41, v42, v43, v44, v45, v46);
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_SubBgmPlayer__bool__TypeInfo,
                                                                               v48,
                                                                               v49,
                                                                               v50,
                                                                               v51);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v52,
      (Il2CppObject *)v22,
      Method_BgmManager___c__DisplayClass66_0__StopUnrequestedSubBgm_b__1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
    v53 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v47,
            (System_Func_TSource__bool__o *)v52,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v58 = BgmManager___c_TypeInfo;
    v59 = (System_Collections_Generic_IEnumerable_T__o *)v53;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v58 = BgmManager___c_TypeInfo;
    }
    v60 = v58->static_fields;
    _9__66_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v60->__9__66_2;
    if ( !_9__66_2 )
    {
      if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v58);
        v60 = BgmManager___c_TypeInfo->static_fields;
      }
      v62 = (Il2CppObject *)v60->__9;
      _9__66_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                        System_Action_SubBgmPlayer__TypeInfo,
                                                                                        v54,
                                                                                        v55,
                                                                                        v56,
                                                                                        v57);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__66_2,
        v62,
        Method_BgmManager___c__StopUnrequestedSubBgm_b__66_2__,
        (const MethodInfo_24B7310 *)Method_System_Action_SubBgmPlayer___ctor__);
      v63 = BgmManager___c_TypeInfo->static_fields;
      v63->__9__66_2 = (struct System_Action_SubBgmPlayer__o *)_9__66_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v63->__9__66_2,
        (System_Int32_array **)_9__66_2,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v59,
      (System_Action_T__o *)_9__66_2,
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_SubBgmPlayer___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_String_o *__fastcall BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_B170D4();
  return mainBgmPlayer->fields.bgmName;
}


bool __fastcall BgmManager__get_IsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  BgmManager_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40F9029 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_40F9029 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    return 0;
  v4 = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v4 )
    sub_B170D4();
  return BgmManager__IsLoadingLocal(v4, 0LL, v5);
}


bool __fastcall BgmManager__get_IsMute(const MethodInfo *method)
{
  __int64 v1; // x1
  BgmManager_c *v2; // x0

  if ( (byte_40F902E & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, v1);
    byte_40F902E = 1;
  }
  v2 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v2 = BgmManager_TypeInfo;
  }
  return v2->static_fields->isMute;
}


bool __fastcall BgmManager__isLoading(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40F9034 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_40F9034 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return BgmManager__IsLoadingLocal((BgmManager_o *)Instance, name, v5);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  BgmManager_o *_4__this; // x21
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_Int32_array **bgmName; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Func_bool__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  UnityEngine_WaitWhile_o *v36; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_40F71D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v6);
    sub_B16FFC(&Method_BgmManager___c__DisplayClass60_0__CoWaitSameAudioLoading_b__0__, v7);
    sub_B16FFC(&BgmManager___c__DisplayClass60_0_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v9);
    byte_40F71D9 = 1;
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
    v12 = sub_B170CC(BgmManager___c__DisplayClass60_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    if ( !v12
      || (v19 = (System_Int32_array **)this->fields.__4__this,
          *(_QWORD *)(v12 + 16) = v19,
          sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), v19, v13, v14, v15, v16, v17, v18),
          bgmName = (System_Int32_array **)this->fields.bgmName,
          *(_QWORD *)(v12 + 24) = bgmName,
          sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), bgmName, v21, v22, v23, v24, v25, v26),
          !_4__this) )
    {
      sub_B170D4();
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v12 + 24), 0LL) )
    {
      v31 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v27, v28, v29, v30);
      System_Func_bool____ctor(
        v31,
        (Il2CppObject *)v12,
        Method_BgmManager___c__DisplayClass60_0__CoWaitSameAudioLoading_b__0__,
        (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
      v36 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v32, v33, v34, v35);
      UnityEngine_WaitWhile___ctor(v36, v31, 0LL);
      this->fields.__2__current = (Il2CppObject *)v36;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v36,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BgmManager__CoWaitSameAudioLoading_d__60_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F71D4 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager___c_TypeInfo, v1);
    byte_40F71D4 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BgmManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BgmManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.bgmName == 0LL;
}


void __fastcall BgmManager___c___InitializeLocal_b__49_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, 0LL);
}


void __fastcall BgmManager___c___LateUpdate_b__75_1(
        BgmManager___c_o *this,
        GeneralBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
  ((void (__fastcall *)(BgmPlayerBase_o *, void *))x->klass->vtable._13_LateUpdate.method)(x, x->klass[1]._1.image);
}


void __fastcall BgmManager___c___LateUpdate_b__75_3(BgmManager___c_o *this, BgmPlayArgs_o *x, const MethodInfo *method)
{
  __int64 v4; // x1
  const MethodInfo_2969008 *v5; // x3
  System_Nullable_long__o startTime; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v7; // [xsp+18h] [xbp-18h] BYREF
  System_Nullable_float__o v8; // 0:x0.8
  System_Nullable_float__o v9; // 0:x1.8
  System_Nullable_float__o v10; // 0:x2.8
  System_Nullable_long__o v11; // 0:x0.16

  if ( (byte_40F71D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_float___ctor__, x);
    sub_B16FFC(&Method_System_Nullable_long___ctor__, v4);
    byte_40F71D5 = 1;
  }
  v8 = (System_Nullable_float__o)&v7;
  v7 = 0LL;
  System_Nullable_float____ctor(v8, 0.0, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
  v11.fields.value = (int64_t)&startTime;
  *(_QWORD *)&v11.fields.has_value = 0LL;
  startTime.fields.value = 0LL;
  *(_QWORD *)&startTime.fields.has_value = 0LL;
  System_Nullable_long____ctor(v11, Method_System_Nullable_long___ctor__, v5);
  if ( !x )
    sub_B170D4();
  v10 = v7;
  v9 = 0LL;
  BgmPlayArgs__Update(x, v9, v10, startTime, 0LL);
}


void __fastcall BgmManager___c___ReflectMasterVolumeLocal_b__52_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields._BgmName_k__BackingField;
}


void __fastcall BgmManager___c___StopUnrequestedSubBgm_b__66_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._11_StopBgm.method)(
    x,
    0LL,
    x->klass->vtable._12_ExportPlayArgs.methodPtr);
}


void __fastcall BgmManager___c__53_object____cctor(const MethodInfo_1F899FC *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BgmManager___c__53_T__c *klass; // x20
  Il2CppClass *_0_BgmManager___c__53_T; // x20
  __int64 v8; // x0
  BgmManager___c__53_T__c *v9; // x22
  System_Int32_array **v10; // x20
  __int16 v11; // w8
  BgmManager___c__53_T__c *v12; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BgmManager___c__53_T__c *v20; // x19
  Il2CppClass *_2_BgmManager___c__53_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  _0_BgmManager___c__53_T = klass->rgctx_data->_0_BgmManager___c__53_T_;
  if ( (BYTE2(_0_BgmManager___c__53_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_0_BgmManager___c__53_T);
  v8 = sub_B170CC(_0_BgmManager___c__53_T, v1, v2, v3, v4);
  v9 = method->klass;
  v10 = (System_Int32_array **)v8;
  v11 = WORD1(v9->vtable._0_Equals.methodPtr);
  v12 = v9;
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(method->klass);
    v12 = method->klass;
    v11 = WORD1(v12->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v9->rgctx_data->_1_BgmManager___c__53_T___ctor->methodPointer;
  if ( (v11 & 1) == 0 )
    sub_AAFCFC(v12);
  methodPointer(v10, v12->rgctx_data->_1_BgmManager___c__53_T___ctor);
  v20 = method->klass;
  if ( (BYTE2(v20->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(v20);
  _2_BgmManager___c__53_T = v20->rgctx_data->_2_BgmManager___c__53_T_;
  if ( (BYTE2(_2_BgmManager___c__53_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_2_BgmManager___c__53_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__53_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B16F98(static_fields, v10, v14, v15, v16, v17, v18, v19);
}


void __fastcall BgmManager___c__53_object____ctor(BgmManager___c__53_T__o *this, const MethodInfo_1F89AD8 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__53_object____EnumeratePlayersHavingBgmName_b__53_0(
        BgmManager___c__53_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F89AF0 *method)
{
  if ( !x )
    sub_B170D4();
  return x[1].klass != 0LL;
}


void __fastcall BgmManager___c__65_object____cctor(const MethodInfo_1F89DB8 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BgmManager___c__65_T__c *klass; // x20
  Il2CppClass *_0_BgmManager___c__65_T; // x20
  __int64 v8; // x0
  BgmManager___c__65_T__c *v9; // x22
  System_Int32_array **v10; // x20
  __int16 v11; // w8
  BgmManager___c__65_T__c *v12; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BgmManager___c__65_T__c *v20; // x19
  Il2CppClass *_2_BgmManager___c__65_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  _0_BgmManager___c__65_T = klass->rgctx_data->_0_BgmManager___c__65_T_;
  if ( (BYTE2(_0_BgmManager___c__65_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_0_BgmManager___c__65_T);
  v8 = sub_B170CC(_0_BgmManager___c__65_T, v1, v2, v3, v4);
  v9 = method->klass;
  v10 = (System_Int32_array **)v8;
  v11 = WORD1(v9->vtable._0_Equals.methodPtr);
  v12 = v9;
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(method->klass);
    v12 = method->klass;
    v11 = WORD1(v12->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v9->rgctx_data->_1_BgmManager___c__65_T___ctor->methodPointer;
  if ( (v11 & 1) == 0 )
    sub_AAFCFC(v12);
  methodPointer(v10, v12->rgctx_data->_1_BgmManager___c__65_T___ctor);
  v20 = method->klass;
  if ( (BYTE2(v20->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(v20);
  _2_BgmManager___c__65_T = v20->rgctx_data->_2_BgmManager___c__65_T_;
  if ( (BYTE2(_2_BgmManager___c__65_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_2_BgmManager___c__65_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__65_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B16F98(static_fields, v10, v14, v15, v16, v17, v18, v19);
}


void __fastcall BgmManager___c__65_object____ctor(BgmManager___c__65_T__o *this, const MethodInfo_1F89E94 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__65_object____StopBgmLocal_b__65_0(
        BgmManager___c__65_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F89EAC *method)
{
  if ( !x )
    sub_B170D4();
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))x->klass->vtable[11].method)(
           x,
           0LL,
           x->klass->vtable[12].methodPtr);
}


void __fastcall BgmManager___c__73_object____cctor(const MethodInfo_1F89ED0 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BgmManager___c__73_T__c *klass; // x20
  Il2CppClass *_0_BgmManager___c__73_T; // x20
  __int64 v8; // x0
  BgmManager___c__73_T__c *v9; // x22
  System_Int32_array **v10; // x20
  __int16 v11; // w8
  BgmManager___c__73_T__c *v12; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BgmManager___c__73_T__c *v20; // x19
  Il2CppClass *_2_BgmManager___c__73_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  _0_BgmManager___c__73_T = klass->rgctx_data->_0_BgmManager___c__73_T_;
  if ( (BYTE2(_0_BgmManager___c__73_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_0_BgmManager___c__73_T);
  v8 = sub_B170CC(_0_BgmManager___c__73_T, v1, v2, v3, v4);
  v9 = method->klass;
  v10 = (System_Int32_array **)v8;
  v11 = WORD1(v9->vtable._0_Equals.methodPtr);
  v12 = v9;
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(method->klass);
    v12 = method->klass;
    v11 = WORD1(v12->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v9->rgctx_data->_1_BgmManager___c__73_T___ctor->methodPointer;
  if ( (v11 & 1) == 0 )
    sub_AAFCFC(v12);
  methodPointer(v10, v12->rgctx_data->_1_BgmManager___c__73_T___ctor);
  v20 = method->klass;
  if ( (BYTE2(v20->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(v20);
  _2_BgmManager___c__73_T = v20->rgctx_data->_2_BgmManager___c__73_T_;
  if ( (BYTE2(_2_BgmManager___c__73_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_2_BgmManager___c__73_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__73_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B16F98(static_fields, v10, v14, v15, v16, v17, v18, v19);
}


void __fastcall BgmManager___c__73_object____ctor(BgmManager___c__73_T__o *this, const MethodInfo_1F89FAC *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall BgmManager___c__73_object____ExportPlayArgsGroupLocal_b__73_0(
        BgmManager___c__73_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F89FC4 *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, Il2CppMethodPointer))x->klass->vtable._7_SetMute.method)(
    x,
    this->fields.isMute,
    x->klass->vtable._8_ReflectMasterVolume.methodPtr);
}


void __fastcall BgmManager___c__DisplayClass53_0_object____ctor(
        BgmManager___c__DisplayClass53_0_T__o *this,
        const MethodInfo_1F8C78C *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass53_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass53_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F8C7A4 *method)
{
  if ( !x )
    sub_B170D4();
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
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct BgmPlayArgs_array *nonNullArgsAll; // x20
  __int64 v14; // x8
  unsigned __int64 v15; // x21
  BgmManager_o *v16; // x0
  struct BgmManager_o *v17; // x0

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
    v14 = *(_QWORD *)&nonNullArgsAll->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v14 )
        {
          sub_B17100(v5, v6, v7);
          sub_B170A0();
        }
        v16 = this->fields.__4__this;
        if ( !v16 )
          break;
        BgmManager__PlayPreloadedBgm(v16, nonNullArgsAll->m_Items[v15], 0LL);
        LODWORD(v14) = nonNullArgsAll->max_length;
        if ( (__int64)++v15 >= (int)v14 )
          goto LABEL_9;
      }
LABEL_12:
      sub_B170D4();
    }
LABEL_9:
    v17 = this->fields.__4__this;
    if ( !v17 )
      goto LABEL_12;
    v17->fields.cacheArgsGroup = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v17->fields.cacheArgsGroup, 0LL, v7, v8, v9, v10, v11, v12);
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
  BgmManager_o *_4__this; // x0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (args = this->fields.args) == 0LL || (_4__this = CS___8__locals1->fields.__4__this) == 0LL )
    sub_B170D4();
  BgmManager__PreloadBgm(_4__this, args->fields._BgmName_k__BackingField, callback, 0LL);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_String_o *cueName; // x1
  struct BgmManager_o *_4__this; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *loadingBgmCueNameList; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F71D6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__1__, v11);
    byte_40F71D6 = 1;
  }
  cueName = this->fields.cueName;
  this->fields.tempCueSheetName = cueName;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)cueName, v2, v3, v4, v5, v6, v7);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.loadingBgmCueNameList) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    loadingBgmCueNameList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.cueName,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__1__, 0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(tempCueSheetName, _9__1, 1, 0LL);
}


void __fastcall BgmManager___c__DisplayClass58_0___PreloadBgm_b__1(
        BgmManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BgmManager_o *_4__this; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadingBgmCueNameList; // x0
  SoundManager_o *Instance; // x0
  struct BgmManager_o *v9; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *addBindList; // x0
  struct BgmManager_o *v11; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *v12; // x0

  if ( (byte_40F71D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Insert__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5);
    byte_40F71D7 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  loadingBgmCueNameList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)_4__this->fields.loadingBgmCueNameList;
  if ( !loadingBgmCueNameList )
    goto LABEL_14;
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    loadingBgmCueNameList,
    (WarBoardManager_TaskList_o *)this->fields.cueName,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( SoundManager__GetCueSheet(Instance, this->fields.cueName, 0LL) )
  {
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_14;
    addBindList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v9->fields.addBindList;
    if ( !addBindList )
      goto LABEL_14;
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            addBindList,
            (WarBoardManager_TaskList_o *)this->fields.cueName,
            (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      v11 = this->fields.__4__this;
      if ( v11 )
      {
        v12 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11->fields.addBindList;
        if ( v12 )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Insert(
            v12,
            0,
            (XWeaponTrail_Element_o *)this->fields.cueName,
            (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_B170D4();
    }
  }
LABEL_13:
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
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
    sub_B170D4();
  return BgmManager__IsLoadingLocal(_4__this, this->fields.bgmName, 0LL);
}


void __fastcall BgmManager___c__DisplayClass64_0_object____ctor(
        BgmManager___c__DisplayClass64_0_T__o *this,
        const MethodInfo_1F8D158 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass64_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass64_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F8D170 *method)
{
  if ( !x )
    sub_B170D4();
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
  if ( (byte_40F71D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_string___, x);
    byte_40F71D8 = 1;
  }
  if ( !x )
    sub_B170D4();
  return (unsigned int)System_Array__IndexOf_UICommonButton_(
                         (UICommonButton_array *)this->fields.subBgmNamesToPlay,
                         (UICommonButton_o *)x->fields.bgmName,
                         (const MethodInfo_20456B0 *)Method_System_Array_IndexOf_string___) >> 31;
}


void __fastcall BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_1F8D198 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass67_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F8D1B0 *method)
{
  if ( !x )
    sub_B170D4();
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
  JinglePlayer_o *JinglePlayer; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (JinglePlayer = BgmManager__GetOrCreateJinglePlayer(_4__this, 0LL)) == 0LL )
    sub_B170D4();
  JinglePlayer__PlayBgm(JinglePlayer, this->fields.name, this->fields.volume, this->fields.callbackFunc, 0LL);
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
    sub_B170D4();
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0LL);
}