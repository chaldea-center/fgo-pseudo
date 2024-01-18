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

  if ( (byte_41875AF & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_2550/*"BGM_CHALDEA_1"*/, v8);
    sub_B2C35C(&StringLiteral_2551/*"BGM_CHALDEA_2"*/, v9);
    byte_41875AF = 1;
  }
  BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME = 1.0;
  BgmManager_TypeInfo->static_fields->LOW_VOLUME = 0.1;
  static_fields = BgmManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_2550/*"BGM_CHALDEA_1"*/;
  static_fields->DEFAULT_MAIN_BGM_NAME = (struct System_String_o *)StringLiteral_2550/*"BGM_CHALDEA_1"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->DEFAULT_MAIN_BGM_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = BgmManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2551/*"BGM_CHALDEA_2"*/;
  v12->COSMOS_IN_THE_LOSTBELT_BGM_NAME = (struct System_String_o *)StringLiteral_2551/*"BGM_CHALDEA_2"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->COSMOS_IN_THE_LOSTBELT_BGM_NAME, v13, v14, v15, v16, v17, v18, v19);
  v20 = BgmManager_TypeInfo;
  BgmManager_TypeInfo->static_fields->ADD_BIND_MAX = 5;
  v20->static_fields->isMute = 0;
  v20->static_fields->masterVolume = 1.0;
}


void __fastcall BgmManager___ctor(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_41875AE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v3);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_BgmPlayerBase__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager___ctor__, v6);
    byte_41875AE = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.addBindList = (struct System_Collections_Generic_List_string__o *)v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.addBindList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.loadingBgmCueNameList = (struct System_Collections_Generic_List_string__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loadingBgmCueNameList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BgmPlayerBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BgmPlayerBase___ctor__);
  this->fields.bgmPlayers = (struct System_Collections_Generic_List_BgmPlayerBase__o *)v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bgmPlayers,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_BgmManager___ctor__);
}


void __fastcall BgmManager__ChangePlayerVolume(System_String_o *bgmName, float volume, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *Instance; // x20
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *monitor; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x21
  BgmPlayerBase_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_4187586 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__Find__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_System_Predicate_BgmPlayerBase___ctor__, v6);
    sub_B2C35C(&System_Predicate_BgmPlayerBase__TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v8);
    sub_B2C35C(&Method_BgmManager___c__DisplayClass28_0__ChangePlayerVolume_b__0__, v9);
    sub_B2C35C(&BgmManager___c__DisplayClass28_0_TypeInfo, v10);
    byte_4187586 = 1;
  }
  v11 = sub_B2C42C(BgmManager___c__DisplayClass28_0_TypeInfo);
  BgmManager___c__DisplayClass28_0___ctor((BgmManager___c__DisplayClass28_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = bgmName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)bgmName, v14, v15, v16, v17, v18, v19);
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v12 )
  {
    if ( Instance )
    {
      monitor = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)Instance[2].monitor;
      v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BgmPlayerBase__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v22,
        (Il2CppObject *)v11,
        Method_BgmManager___c__DisplayClass28_0__ChangePlayerVolume_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_BgmPlayerBase___ctor__);
      if ( monitor )
      {
        v23 = (BgmPlayerBase_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   monitor,
                                   (System_Predicate_T__o *)v22,
                                   (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_BgmPlayerBase__Find__);
        if ( v23 )
        {
          v23->fields.bgmVolume = volume;
          BgmPlayerBase__UpdateVolume(v23, v24);
        }
        return;
      }
    }
LABEL_13:
    sub_B2C434(v12, v13);
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

  if ( (byte_41875A2 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager__CoWaitSameAudioLoading_d__60_TypeInfo, bgmName);
    byte_41875A2 = 1;
  }
  v7 = sub_B2C42C(BgmManager__CoWaitSameAudioLoading_d__60_TypeInfo);
  BgmManager__CoWaitSameAudioLoading_d__60___ctor((BgmManager__CoWaitSameAudioLoading_d__60_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = bgmName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)bgmName, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B2C2F8(
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
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int v7; // w9
  int v8; // w8

  if ( (byte_4187599 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_4187599 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_B2C434(v5, v6);
    if ( value )
      v7 = 1;
    else
      v7 = -1;
    v8 = Instance[2].fields.m_CachedPtr + v7;
    if ( (~(v8 >> 31) & 7) == 0 )
      v8 = 0;
    Instance[2].fields.m_CachedPtr = v8;
  }
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BgmManager__EnumeratePlayersHavingBgmName_object_(
        BgmManager_o *this,
        System_String_o *bgmNameFilter,
        const MethodInfo_172AC48 *method)
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
  const MethodInfo_172AC48_RGCTXs *rgctx_data; // x8
  __int64 v19; // x20
  Il2CppClass *_5_System_Func_T__bool; // x22
  __int64 v21; // x22
  const MethodInfo_172AC48_RGCTXs *v22; // x8
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
  const MethodInfo_172AC48_RGCTXs *v35; // x8
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
    sub_AC505C(method->rgctx_data->_0_BgmManager___c__DisplayClass53_0_T_);
  v7 = sub_B2C42C(_0_BgmManager___c__DisplayClass53_0_T);
  v8 = ((__int64 (*)(void))method->rgctx_data->_1_BgmManager___c__DisplayClass53_0_T___ctor->methodPointer)();
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 16) = bgmNameFilter;
  sub_B2C2F8(
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
      sub_AC505C(_5_System_Func_T__bool);
    v21 = sub_B2C42C(_5_System_Func_T__bool);
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
      sub_AC505C(_3_BgmManager___c__53_T);
      v26 = WORD1(_3_BgmManager___c__53_T->vtable[0].methodPtr);
    }
    if ( (v26 & 0x400) != 0 )
    {
      v27 = method->rgctx_data->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v27->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_3_BgmManager___c__53_T_);
      if ( !v27->_2.cctor_finished )
      {
        v28 = method->rgctx_data->_3_BgmManager___c__53_T_;
        if ( (BYTE2(v28->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C(method->rgctx_data->_3_BgmManager___c__53_T_);
        j_il2cpp_runtime_class_init_0(v28);
      }
    }
    v29 = method->rgctx_data->_3_BgmManager___c__53_T_;
    if ( (BYTE2(v29->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_3_BgmManager___c__53_T_);
    v30 = (System_Int32_array **)*((_QWORD *)v29->static_fields + 1);
    if ( !v30 )
    {
      v31 = method->rgctx_data->_3_BgmManager___c__53_T_;
      v32 = WORD1(v31->vtable[0].methodPtr);
      if ( (v32 & 1) == 0 )
      {
        sub_AC505C(method->rgctx_data->_3_BgmManager___c__53_T_);
        v32 = WORD1(v31->vtable[0].methodPtr);
      }
      if ( (v32 & 0x400) != 0 )
      {
        v33 = method->rgctx_data->_3_BgmManager___c__53_T_;
        if ( (BYTE2(v33->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C(method->rgctx_data->_3_BgmManager___c__53_T_);
        if ( !v33->_2.cctor_finished )
        {
          v34 = method->rgctx_data->_3_BgmManager___c__53_T_;
          if ( (BYTE2(v34->vtable[0].methodPtr) & 1) == 0 )
            sub_AC505C(method->rgctx_data->_3_BgmManager___c__53_T_);
          j_il2cpp_runtime_class_init_0(v34);
        }
      }
      v35 = method->rgctx_data;
      v36 = v35->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v36->vtable[0].methodPtr) & 1) == 0 )
      {
        sub_AC505C(v35->_3_BgmManager___c__53_T_);
        v35 = method->rgctx_data;
      }
      v37 = v35->_5_System_Func_T__bool_;
      v38 = *(_QWORD *)v36->static_fields;
      if ( (BYTE2(v37->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(v37);
      v30 = (System_Int32_array **)sub_B2C42C(v37);
      ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_6_System_Func_T__bool___ctor->methodPointer)(
        v30,
        v38,
        method->rgctx_data->_4_BgmManager___c__53_T___EnumeratePlayersHavingBgmName_b__53_0);
      v45 = method->rgctx_data->_3_BgmManager___c__53_T_;
      if ( (BYTE2(v45->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_3_BgmManager___c__53_T_);
      static_fields = (char *)v45->static_fields;
      *((_QWORD *)static_fields + 1) = v30;
      sub_B2C2F8((BattleServantConfConponent_o *)(static_fields + 8), v30, v39, v40, v41, v42, v43, v44);
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
        const MethodInfo_172AEB0 *method)
{
  __int64 v4; // x0

  if ( !this )
    sub_B2C434(0LL, bgmNameFilter);
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
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_418757E & 1) == 0 )
  {
    sub_B2C35C(&Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___, v1);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_418757E = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_B2C434(v5, v6);
  return BgmManager__ExportPlayArgsGroupLocal_object_(
           (BgmManager_o *)Instance,
           (const MethodInfo_172AEF0 *)Method_BgmManager_ExportPlayArgsGroupLocal_BgmPlayerBase___);
}


BgmPlayArgsGroup_o *__fastcall BgmManager__ExportPlayArgsGroupLocal_object_(
        BgmManager_o *this,
        const MethodInfo_172AEF0 *method)
{
  BgmManager_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x20
  long double v6; // q0
  Il2CppClass *_1_BgmManager___c__73_T; // x21
  __int16 v8; // w8
  Il2CppClass *v9; // x21
  Il2CppClass *v10; // x21
  Il2CppClass *v11; // x21
  System_Int32_array **v12; // x21
  Il2CppClass *v13; // x21
  __int16 v14; // w8
  Il2CppClass *v15; // x21
  Il2CppClass *v16; // x21
  const MethodInfo_172AEF0_RGCTXs *rgctx_data; // x8
  Il2CppClass *v18; // x21
  Il2CppClass *_3_System_Func_T__BgmPlayArgs; // x23
  __int64 v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppClass *v27; // x22
  char *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  BgmPlayArgs_array *v30; // x19
  BgmPlayArgsGroup_o *v31; // x20

  v3 = this;
  if ( (byte_418725A & 1) == 0 )
  {
    sub_B2C35C(&BgmPlayArgsGroup_TypeInfo, method);
    this = (BgmManager_o *)sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    byte_418725A = 1;
  }
  if ( !v3 )
    sub_B2C434(this, method);
  v5 = ((__int64 (__fastcall *)(BgmManager_o *, _QWORD))method->rgctx_data->_0_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
         v3,
         0LL);
  _1_BgmManager___c__73_T = method->rgctx_data->_1_BgmManager___c__73_T_;
  v8 = WORD1(_1_BgmManager___c__73_T->vtable[0].methodPtr);
  if ( (v8 & 1) == 0 )
  {
    sub_AC505C(method->rgctx_data->_1_BgmManager___c__73_T_);
    v8 = WORD1(_1_BgmManager___c__73_T->vtable[0].methodPtr);
  }
  if ( (v8 & 0x400) != 0 )
  {
    v9 = method->rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v9->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_1_BgmManager___c__73_T_);
    if ( !v9->_2.cctor_finished )
    {
      v10 = method->rgctx_data->_1_BgmManager___c__73_T_;
      if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_1_BgmManager___c__73_T_);
      *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v10);
    }
  }
  v11 = method->rgctx_data->_1_BgmManager___c__73_T_;
  if ( (BYTE2(v11->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_1_BgmManager___c__73_T_);
  v12 = (System_Int32_array **)*((_QWORD *)v11->static_fields + 1);
  if ( !v12 )
  {
    v13 = method->rgctx_data->_1_BgmManager___c__73_T_;
    v14 = WORD1(v13->vtable[0].methodPtr);
    if ( (v14 & 1) == 0 )
    {
      sub_AC505C(method->rgctx_data->_1_BgmManager___c__73_T_);
      v14 = WORD1(v13->vtable[0].methodPtr);
    }
    if ( (v14 & 0x400) != 0 )
    {
      v15 = method->rgctx_data->_1_BgmManager___c__73_T_;
      if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_1_BgmManager___c__73_T_);
      if ( !v15->_2.cctor_finished )
      {
        v16 = method->rgctx_data->_1_BgmManager___c__73_T_;
        if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C(method->rgctx_data->_1_BgmManager___c__73_T_);
        j_il2cpp_runtime_class_init_0(v16);
      }
    }
    rgctx_data = method->rgctx_data;
    v18 = rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_AC505C(rgctx_data->_1_BgmManager___c__73_T_);
      rgctx_data = method->rgctx_data;
    }
    _3_System_Func_T__BgmPlayArgs = rgctx_data->_3_System_Func_T__BgmPlayArgs_;
    v20 = *(_QWORD *)v18->static_fields;
    if ( (BYTE2(_3_System_Func_T__BgmPlayArgs->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(_3_System_Func_T__BgmPlayArgs);
    v12 = (System_Int32_array **)sub_B2C42C(_3_System_Func_T__BgmPlayArgs);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__BgmPlayArgs___ctor->methodPointer)(
      v12,
      v20,
      method->rgctx_data->_2_BgmManager___c__73_T___ExportPlayArgsGroupLocal_b__73_0);
    v27 = method->rgctx_data->_1_BgmManager___c__73_T_;
    if ( (BYTE2(v27->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_1_BgmManager___c__73_T_);
    static_fields = (char *)v27->static_fields;
    *((_QWORD *)static_fields + 1) = v12;
    sub_B2C2F8((BattleServantConfConponent_o *)(static_fields + 8), v12, v21, v22, v23, v24, v25, v26);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, System_Int32_array **, long double))method->rgctx_data->_5_System_Linq_Enumerable_Select_T__BgmPlayArgs_->methodPointer)(
                                                               v5,
                                                               v12,
                                                               v6);
  v30 = (BgmPlayArgs_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                               v29,
                               (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v31 = (BgmPlayArgsGroup_o *)sub_B2C42C(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_24722828(v31, v30, 0LL);
  return v31;
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

  if ( (byte_41875A5 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, name);
    byte_41875A5 = 1;
  }
  v4 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  v4->m_Items[2] = 47;
  if ( !name || (v4 = (System_Char_array *)System_String__Split(name, v4, 0LL)) == 0LL )
LABEL_9:
    sub_B2C434(v4, v5);
  v6 = *(_QWORD *)&v4->max_length;
  if ( !(_DWORD)v6 )
  {
LABEL_10:
    v8 = sub_B2C460(v4);
    sub_B2C400(v8, 0LL);
  }
  return *(System_String_o **)((char *)&v4->m_Items[2] + (((v6 << 32) - 0x100000000LL) >> 29));
}


void __fastcall BgmManager__FadeoutBgm(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418758E & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    byte_418758E = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopBgm(0LL, fadeoutTime, callback, v3);
}


bool __fastcall BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        float fadeoutTime,
        System_String_o *name,
        const MethodInfo_172B12C *method)
{
  __int64 v8; // x1
  Il2CppClass *_0_BgmManager___c__DisplayClass64_0_T; // x22
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x20
  Il2CppClass *_4_System_Func_T__bool; // x21
  __int64 v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_418725B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_bool___, name);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_bool___, v8);
    byte_418725B = 1;
  }
  _0_BgmManager___c__DisplayClass64_0_T = method->rgctx_data->_0_BgmManager___c__DisplayClass64_0_T_;
  if ( (BYTE2(_0_BgmManager___c__DisplayClass64_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_0_BgmManager___c__DisplayClass64_0_T_);
  v10 = sub_B2C42C(_0_BgmManager___c__DisplayClass64_0_T);
  v11 = ((__int64 (*)(void))method->rgctx_data->_1_BgmManager___c__DisplayClass64_0_T___ctor->methodPointer)();
  if ( !v10 || (*(float *)(v10 + 16) = fadeoutTime, !this) )
    sub_B2C434(v11, v12);
  v13 = ((__int64 (__fastcall *)(BgmManager_o *, System_String_o *))method->rgctx_data->_2_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
          this,
          name);
  _4_System_Func_T__bool = method->rgctx_data->_4_System_Func_T__bool_;
  if ( (BYTE2(_4_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_4_System_Func_T__bool_);
  v15 = sub_B2C42C(_4_System_Func_T__bool);
  ((void (__fastcall *)(__int64, __int64, MethodInfo *))method->rgctx_data->_5_System_Func_T__bool___ctor->methodPointer)(
    v15,
    v10,
    method->rgctx_data->_3_BgmManager___c__DisplayClass64_0_T___FadeoutBgmLocal_b__0);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, __int64))method->rgctx_data->_6_System_Linq_Enumerable_Select_T__bool_->methodPointer)(
                                                               v13,
                                                               v15);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v16,
                                                               (const MethodInfo_1A9AC80 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v17, (const MethodInfo_1738098 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__FadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4187597 & 1) == 0 )
  {
    sub_B2C35C(&Method_BgmManager_FadeoutBgmLocal_JinglePlayer___, v2);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_4187597 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_B2C434(v7, v8);
    BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      fadeoutTime,
      0LL,
      (const MethodInfo_172B12C *)Method_BgmManager_FadeoutBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__ForceDisable_KeepSubBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_418759A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_418759A = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B2C434(v4, v5);
    Instance[2].fields.m_CachedPtr = 0;
  }
}


CriAtomSource_o *__fastcall BgmManager__GenerateCriAtomSource(BgmManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_41875AA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___, method);
    byte_41875AA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  return (CriAtomSource_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                              gameObject,
                              (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
}


int32_t __fastcall BgmManager__GetAssetType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  SoundManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *CueSheet; // x19
  SoundManager_c *v7; // x8

  if ( (byte_4187580 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4187580 = 1;
  }
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  CueSheet = SoundManager__GetCueSheet(Instance, name, 0LL);
  v7 = SoundManager_TypeInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v7 = SoundManager_TypeInfo;
  }
  return System_String__op_Equality(CueSheet, v7->static_fields->RESIDENT_RESOURCE_SOUND_NAME, 0LL);
}


System_String_o *__fastcall BgmManager__GetBgmName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x19
  __int64 v4; // x1
  bool v5; // w8
  System_String_o *result; // x0
  struct UIWidget_o *webViewBase; // x8

  if ( (byte_4187592 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_4187592 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v5 )
  {
    if ( !Instance || (webViewBase = Instance->fields.webViewBase) == 0LL )
      sub_B2C434(0LL, v4);
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
  __int64 v8; // x1
  TerminalOverwriteMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o **p_COSMOS_IN_THE_LOSTBELT_BGM_NAME; // x19
  int32_t UiFlag; // w19
  System_Collections_ICollection_o *ClearWarIdList; // x20
  BalanceConfig_c *v13; // x0
  BalanceConfig_c *v14; // x0
  BgmManager_c *v15; // x0
  System_String_o *bgmName; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41875AD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v1);
    sub_B2C35C(&BgmManager_TypeInfo, v2);
    sub_B2C35C(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v4);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_41875AD = 1;
  }
  bgmName = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
  MasterData_WarQuestSelectionMaster = (TerminalOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
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
    v13 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
            v13->static_fields->OrdealCallWarId,
            (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
LABEL_18:
      v15 = BgmManager_TypeInfo;
      if ( UiFlag == 1 )
      {
        if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          v15 = BgmManager_TypeInfo;
        }
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v15->static_fields->COSMOS_IN_THE_LOSTBELT_BGM_NAME;
      }
      else
      {
        if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          v15 = BgmManager_TypeInfo;
        }
        p_COSMOS_IN_THE_LOSTBELT_BGM_NAME = &v15->static_fields->DEFAULT_MAIN_BGM_NAME;
      }
    }
    else
    {
      v14 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4187584 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, v1);
    byte_4187584 = 1;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *jinglePlayer; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  struct JinglePlayer_o **p_jinglePlayer; // x20
  JinglePlayer_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v19; // x0

  if ( (byte_41875A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_JinglePlayer___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_JinglePlayer___, v3);
    sub_B2C35C(&JinglePlayer_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v5);
    byte_41875A9 = 1;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                              (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                              (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_JinglePlayer___);
  jinglePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(v6, (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_JinglePlayer___);
  if ( !jinglePlayer )
    goto LABEL_11;
  v9 = *(_QWORD *)&jinglePlayer->fields._size;
  if ( !v9 )
  {
    v11 = (JinglePlayer_o *)sub_B2C42C(JinglePlayer_TypeInfo);
    JinglePlayer___ctor(v11, 0LL);
    this->fields.jinglePlayer = v11;
    p_jinglePlayer = &this->fields.jinglePlayer;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.jinglePlayer,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
        return *p_jinglePlayer;
      }
    }
LABEL_11:
    sub_B2C434(jinglePlayer, v8);
  }
  if ( !(_DWORD)v9 )
  {
    v19 = sub_B2C460(jinglePlayer);
    sub_B2C400(v19, 0LL);
  }
  p_jinglePlayer = (struct JinglePlayer_o **)&jinglePlayer->fields._syncRoot;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *bgmPlayers; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v26; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x22
  SubBgmPlayer_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  BgmManager___c_c *v29; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__69_1; // x21
  Il2CppObject *v32; // x22
  struct BgmManager___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_41875A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_SubBgmPlayer___, bgmName);
    sub_B2C35C(&Method_System_Linq_Enumerable_First_SubBgmPlayer___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___, v7);
    sub_B2C35C(&Method_System_Func_SubBgmPlayer__bool___ctor__, v8);
    sub_B2C35C(&System_Func_SubBgmPlayer__bool__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v10);
    sub_B2C35C(&SubBgmPlayer_TypeInfo, v11);
    sub_B2C35C(&Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__69_1__, v12);
    sub_B2C35C(&Method_BgmManager___c__DisplayClass69_0__GetOrCreateSubBgmPlayer_b__0__, v13);
    sub_B2C35C(&BgmManager___c__DisplayClass69_0_TypeInfo, v14);
    sub_B2C35C(&BgmManager___c_TypeInfo, v15);
    byte_41875A8 = 1;
  }
  v16 = sub_B2C42C(BgmManager___c__DisplayClass69_0_TypeInfo);
  BgmManager___c__DisplayClass69_0___ctor((BgmManager___c__DisplayClass69_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_21;
  *(_QWORD *)(v16 + 16) = bgmName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)bgmName, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                               (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
  v26 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                            v25,
                                                                                            (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_SubBgmPlayer___);
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_SubBgmPlayer__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v16,
    Method_BgmManager___c__DisplayClass69_0__GetOrCreateSubBgmPlayer_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                       v26,
                                                                                       (System_Func_T__bool__o *)v27,
                                                                                       (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_SubBgmPlayer___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    v29 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v29 = BgmManager___c_TypeInfo;
    }
    static_fields = v29->static_fields;
    _9__69_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__69_1;
    if ( !_9__69_1 )
    {
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)static_fields->__9;
      _9__69_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_SubBgmPlayer__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__69_1,
        v32,
        Method_BgmManager___c__GetOrCreateSubBgmPlayer_b__69_1__,
        (const MethodInfo_2711C04 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
      v33 = BgmManager___c_TypeInfo->static_fields;
      v33->__9__69_1 = (struct System_Func_SubBgmPlayer__bool__o *)_9__69_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v33->__9__69_1,
        (System_Int32_array **)_9__69_1,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    bgmPlayers = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(v26, (System_Func_T__bool__o *)_9__69_1, (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_SubBgmPlayer___);
    USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)bgmPlayers;
    if ( !bgmPlayers )
    {
      if ( v26 )
      {
        if ( (int)v26->max_length > 1 )
          return (SubBgmPlayer_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                     (const MethodInfo_1A8F68C *)Method_System_Linq_Enumerable_First_SubBgmPlayer___);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = (SubBgmPlayer_o *)sub_B2C42C(SubBgmPlayer_TypeInfo);
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
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
            return USFGOActorBattleActionEventConditional_OverwriteParamCondition;
          }
        }
      }
LABEL_21:
      sub_B2C434(bgmPlayers, v18);
    }
  }
  return USFGOActorBattleActionEventConditional_OverwriteParamCondition;
}


void __fastcall BgmManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_418757F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_418757F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B2C434(v4, v5);
    BgmManager__InitializeLocal((BgmManager_o *)Instance, v5);
  }
}


void __fastcall BgmManager__InitializeLocal(BgmManager_o *this, const MethodInfo *method)
{
  BgmManager_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *bgmPlayers; // x19
  MainBgmPlayer_o *v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  void *addBindList; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v20; // x20
  Il2CppObject *v21; // x21
  struct BgmManager___c_StaticFields *static_fields; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  BgmManager_c *v29; // x0

  v2 = this;
  if ( (byte_418759B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BgmPlayerBase___ctor__, method);
    sub_B2C35C(&System_Action_BgmPlayerBase__TypeInfo, v3);
    sub_B2C35C(&BgmManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v7);
    sub_B2C35C(&MainBgmPlayer_TypeInfo, v8);
    sub_B2C35C(&Method_BgmManager___c__InitializeLocal_b__49_0__, v9);
    this = (BgmManager_o *)sub_B2C35C(&BgmManager___c_TypeInfo, v10);
    byte_418759B = 1;
  }
  bgmPlayers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v2->fields.bgmPlayers;
  if ( !bgmPlayers )
    goto LABEL_20;
  if ( bgmPlayers->fields._size <= 0 )
  {
    v12 = (MainBgmPlayer_o *)sub_B2C42C(MainBgmPlayer_TypeInfo);
    MainBgmPlayer___ctor(v12, 0LL);
    v2->fields.mainBgmPlayer = v12;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.mainBgmPlayer,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    this = (BgmManager_o *)v2->fields.bgmPlayers;
    if ( !this )
      goto LABEL_20;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v2->fields.mainBgmPlayer,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BgmPlayerBase__Add__);
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
  v20 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)addBindList + 1);
  if ( !v20 )
  {
    if ( (this[3].fields.enableCounter_KeepSubBgm & 0x4000000) != 0 && !this[2].fields.enableCounter_KeepSubBgm )
    {
      j_il2cpp_runtime_class_init_0(this);
      addBindList = BgmManager___c_TypeInfo->static_fields;
    }
    v21 = *(Il2CppObject **)addBindList;
    v20 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v20,
      v21,
      Method_BgmManager___c__InitializeLocal_b__49_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BgmPlayerBase___ctor__);
    static_fields = BgmManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Action_BgmPlayerBase__o *)v20;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&static_fields->__9__49_0,
      (System_Int32_array **)v20,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !bgmPlayers )
LABEL_20:
    sub_B2C434(this, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    bgmPlayers,
    (System_Action_T__o *)v20,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
  v29 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__ForceDisable_KeepSubBgm((const MethodInfo *)v29);
}


bool __fastcall BgmManager__IsKeepSubBgm(BgmManager_o *this, const MethodInfo *method)
{
  return this->fields.enableCounter_KeepSubBgm > 0;
}


bool __fastcall BgmManager__IsLoadingLocal(BgmManager_o *this, System_String_o *name, const MethodInfo *method)
{
  BgmManager_o *v4; // x19
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadingBgmCueNameList; // x8
  struct System_Collections_Generic_List_string__o *v8; // x8

  v4 = this;
  if ( (byte_41875A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, name);
    this = (BgmManager_o *)sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    byte_41875A4 = 1;
  }
  if ( name )
  {
    this = (BgmManager_o *)BgmManager__ExtractCueName(this, name, method);
    loadingBgmCueNameList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->fields.loadingBgmCueNameList;
    if ( loadingBgmCueNameList )
      return System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
               loadingBgmCueNameList,
               (WarBoardManager_TaskList_o *)this,
               (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
LABEL_8:
    sub_B2C434(this, name);
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
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4187587 & 1) == 0 )
  {
    sub_B2C35C(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_4187587 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_B2C434(v6, v7);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_172AEB0 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___);
}


bool __fastcall BgmManager__IsPlayJingle(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4187593 & 1) == 0 )
  {
    sub_B2C35C(&Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_4187593 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_B2C434(v6, v7);
  return BgmManager__ExistsPlayerHavingBgmName_object_(
           (BgmManager_o *)Instance,
           name,
           (const MethodInfo_172AEB0 *)Method_BgmManager_ExistsPlayerHavingBgmName_JinglePlayer___);
}


bool __fastcall BgmManager__IsPreloadSucceeded(BgmManager_o *this, System_String_o *bgmName, const MethodInfo *method)
{
  BgmManager_o *Instance; // x20
  const MethodInfo *v5; // x2
  System_String_o *CueName; // x0
  __int64 v7; // x1

  if ( (byte_41875A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, bgmName);
    byte_41875A3 = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CueName = BgmManager__ExtractCueName(Instance, bgmName, v5);
  if ( !Instance )
    sub_B2C434(CueName, v7);
  return SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0LL) != 0LL;
}


void __fastcall BgmManager__LateUpdate(BgmManager_o *this, const MethodInfo *method)
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x8
  BgmPlayerBase_o *jinglePlayer; // x0
  bool IsPlaying; // w0
  int v29; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  BgmManager___c_c *v31; // x8
  struct BgmManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__75_0; // x21
  Il2CppObject *v34; // x22
  struct BgmManager___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  _BOOL4 v42; // w0
  System_Collections_Generic_IEnumerable_TResult__o *v43; // x0
  BgmManager___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_T__o *v45; // x20
  struct BgmManager___c_StaticFields *v46; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__75_1; // x21
  Il2CppObject *v48; // x22
  struct BgmManager___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  BgmManager_o *v56; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Collections_Generic_IEnumerable_T__o *v58; // x21
  BgmManager___c_c *v59; // x0
  struct BgmManager___c_StaticFields *v60; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__75_3; // x22
  Il2CppObject *v62; // x23
  struct BgmManager___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x2
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v71; // x19
  void *addBindList; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v73; // x20
  Il2CppObject *v74; // x21
  struct BgmManager___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7

  v2 = this;
  if ( (byte_41875AC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GeneralBgmPlayer___ctor__, method);
    sub_B2C35C(&Method_System_Action_BgmPlayerBase___ctor__, v3);
    sub_B2C35C(&Method_System_Action_BgmPlayArgs___ctor__, v4);
    sub_B2C35C(&System_Action_BgmPlayArgs__TypeInfo, v5);
    sub_B2C35C(&System_Action_BgmPlayerBase__TypeInfo, v6);
    sub_B2C35C(&System_Action_GeneralBgmPlayer__TypeInfo, v7);
    sub_B2C35C(&Method_BasicHelper_ForEach_BgmPlayArgs___, v8);
    sub_B2C35C(&Method_BasicHelper_ForEach_GeneralBgmPlayer___, v9);
    sub_B2C35C(&Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___, v10);
    sub_B2C35C(&Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___, v11);
    sub_B2C35C(&Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___, v12);
    sub_B2C35C(&BgmManager_TypeInfo, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___, v14);
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___, v15);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v16);
    sub_B2C35C(&Method_System_Func_GeneralBgmPlayer__bool___ctor__, v17);
    sub_B2C35C(&System_Func_GeneralBgmPlayer__bool__TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__get_Count__, v20);
    sub_B2C35C(&Method_BgmManager___c__LateUpdate_b__75_0__, v21);
    sub_B2C35C(&Method_BgmManager___c__LateUpdate_b__75_1__, v22);
    sub_B2C35C(&Method_BgmManager___c__LateUpdate_b__75_2__, v23);
    sub_B2C35C(&Method_BgmManager___c__LateUpdate_b__75_3__, v24);
    this = (BgmManager_o *)sub_B2C35C(&BgmManager___c_TypeInfo, v25);
    byte_41875AC = 1;
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
      v29 = IsPlaying;
    }
    else
    {
      v29 = 0;
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                 (System_Collections_IEnumerable_o *)bgmPlayers,
                                                                 (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
    v31 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v31 = BgmManager___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__75_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__75_0;
    if ( !_9__75_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__75_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_GeneralBgmPlayer__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__75_0,
        v34,
        Method_BgmManager___c__LateUpdate_b__75_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_GeneralBgmPlayer__bool___ctor__);
      v35 = BgmManager___c_TypeInfo->static_fields;
      v35->__9__75_0 = (struct System_Func_GeneralBgmPlayer__bool__o *)_9__75_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v35->__9__75_0,
        (System_Int32_array **)_9__75_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    v42 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
            v30,
            (System_Func_TSource__bool__o *)_9__75_0,
            (const MethodInfo_173A2F8 *)Method_System_Linq_Enumerable_Any_GeneralBgmPlayer___);
    if ( (v29 & v42) != 0 )
    {
      v43 = System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
              (System_Collections_IEnumerable_o *)v2->fields.bgmPlayers,
              (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_GeneralBgmPlayer___);
      v44 = BgmManager___c_TypeInfo;
      v45 = (System_Collections_Generic_IEnumerable_T__o *)v43;
      if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BgmManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
        v44 = BgmManager___c_TypeInfo;
      }
      v46 = v44->static_fields;
      _9__75_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v46->__9__75_1;
      if ( !_9__75_1 )
      {
        if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v46 = BgmManager___c_TypeInfo->static_fields;
        }
        v48 = (Il2CppObject *)v46->__9;
        _9__75_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_GeneralBgmPlayer__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__75_1,
          v48,
          Method_BgmManager___c__LateUpdate_b__75_1__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_GeneralBgmPlayer___ctor__);
        v49 = BgmManager___c_TypeInfo->static_fields;
        v49->__9__75_1 = (struct System_Action_GeneralBgmPlayer__o *)_9__75_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v49->__9__75_1,
          (System_Int32_array **)_9__75_1,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v45,
        (System_Action_T__o *)_9__75_1,
        (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_GeneralBgmPlayer___);
      v2->fields.isBgmStopJingle = 1;
      if ( v29 )
      {
LABEL_47:
        this = (BgmManager_o *)BgmManager___c_TypeInfo;
        v71 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v2->fields.bgmPlayers;
        if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BgmManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
          this = (BgmManager_o *)BgmManager___c_TypeInfo;
        }
        addBindList = this[2].fields.addBindList;
        v73 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)addBindList + 10);
        if ( !v73 )
        {
          if ( (this[3].fields.enableCounter_KeepSubBgm & 0x4000000) != 0 && !this[2].fields.enableCounter_KeepSubBgm )
          {
            j_il2cpp_runtime_class_init_0(this);
            addBindList = BgmManager___c_TypeInfo->static_fields;
          }
          v74 = *(Il2CppObject **)addBindList;
          v73 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BgmPlayerBase__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v73,
            v74,
            Method_BgmManager___c__LateUpdate_b__75_2__,
            (const MethodInfo_24BBAD8 *)Method_System_Action_BgmPlayerBase___ctor__);
          v75 = BgmManager___c_TypeInfo->static_fields;
          v75->__9__75_2 = (struct System_Action_BgmPlayerBase__o *)v73;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v75->__9__75_2,
            (System_Int32_array **)v73,
            v76,
            v77,
            v78,
            v79,
            v80,
            v81);
        }
        if ( v71 )
        {
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            v71,
            (System_Action_T__o *)v73,
            (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
          return;
        }
LABEL_57:
        sub_B2C434(this, method);
      }
    }
    else
    {
      if ( !v42
        && v29 == 0
        && v2->fields.isBgmStopJingle
        && BgmManager__ExistsPlayerHavingBgmName_object_(
             v2,
             0LL,
             (const MethodInfo_172AEB0 *)Method_BgmManager_ExistsPlayerHavingBgmName_GeneralBgmPlayer___) )
      {
        this = (BgmManager_o *)BgmManager__ExportPlayArgsGroupLocal_object_(
                                 v2,
                                 (const MethodInfo_172AEF0 *)Method_BgmManager_ExportPlayArgsGroupLocal_GeneralBgmPlayer___);
        if ( !this )
          goto LABEL_57;
        v56 = this;
        v57 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                                     (BgmPlayArgsGroup_o *)this,
                                                                     method);
        v58 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                               v57,
                                                               (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
        this = (BgmManager_o *)BgmManager__StopBgmLocal_SubBgmPlayer_(
                                 v2,
                                 0LL,
                                 (const MethodInfo_172B338 *)Method_BgmManager_StopBgmLocal_GeneralBgmPlayer___);
        if ( !v58 )
          goto LABEL_57;
        if ( v58[1].monitor )
        {
          v59 = BgmManager___c_TypeInfo;
          if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
            v59 = BgmManager___c_TypeInfo;
          }
          v60 = v59->static_fields;
          _9__75_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v60->__9__75_3;
          if ( !_9__75_3 )
          {
            if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v59);
              v60 = BgmManager___c_TypeInfo->static_fields;
            }
            v62 = (Il2CppObject *)v60->__9;
            _9__75_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BgmPlayArgs__TypeInfo);
            System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
              _9__75_3,
              v62,
              Method_BgmManager___c__LateUpdate_b__75_3__,
              (const MethodInfo_24BBAD8 *)Method_System_Action_BgmPlayArgs___ctor__);
            v63 = BgmManager___c_TypeInfo->static_fields;
            v63->__9__75_3 = (struct System_Action_BgmPlayArgs__o *)_9__75_3;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v63->__9__75_3,
              (System_Int32_array **)_9__75_3,
              v64,
              v65,
              v66,
              v67,
              v68,
              v69);
          }
          BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v58,
            (System_Action_T__o *)_9__75_3,
            (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BgmPlayArgs___);
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          BgmManager__PlayBgm_24707780((BgmPlayArgsGroup_o *)v56, 0LL, v70);
        }
      }
      if ( v29 )
        goto LABEL_47;
    }
    v2->fields.isBgmStopJingle = 0;
    goto LABEL_47;
  }
}


void __fastcall BgmManager__PauseBgm(bool isPause, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  bool v9; // w19

  if ( (byte_4187598 & 1) == 0 )
  {
    sub_B2C35C(&Method_BgmManager_PauseBgmLocal_MainBgmPlayer___, method);
    sub_B2C35C(&Method_BgmManager_PauseBgmLocal_SubBgmPlayer___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_4187598 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_B2C434(v7, v8);
    v9 = isPause;
    BgmManager__PauseBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      v9,
      0LL,
      (const MethodInfo_172B260 *)Method_BgmManager_PauseBgmLocal_MainBgmPlayer___);
    BgmManager__PauseBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      v9,
      0LL,
      (const MethodInfo_172B260 *)Method_BgmManager_PauseBgmLocal_SubBgmPlayer___);
  }
}


void __fastcall BgmManager__PauseBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        bool isPause,
        System_String_o *name,
        const MethodInfo_172B260 *method)
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
    sub_AC505C(method->rgctx_data->_0_BgmManager___c__DisplayClass67_0_T_);
  v8 = sub_B2C42C(_0_BgmManager___c__DisplayClass67_0_T);
  v9 = ((__int64 (*)(void))method->rgctx_data->_1_BgmManager___c__DisplayClass67_0_T___ctor->methodPointer)();
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_BYTE *)(v8 + 16) = isPause;
  v11 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_BgmPlayerBase__o *))method->rgctx_data->_2_System_Linq_Enumerable_OfType_T_->methodPointer)(this->fields.bgmPlayers);
  _4_System_Action_T = method->rgctx_data->_4_System_Action_T_;
  if ( (BYTE2(_4_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_4_System_Action_T_);
  v13 = sub_B2C42C(_4_System_Action_T);
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
  __int64 v11; // x1
  __int64 v12; // x1
  BgmPlayArgsGroup_o *v13; // x0
  BgmPlayArgsGroup_o *v14; // x22
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x2
  System_Nullable_float__o volumeNullable; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_volumeNullable; // 0:x0.8
  System_Nullable_float__o v19; // 0:x2.8

  if ( (byte_4187589 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, startTime);
    sub_B2C35C(&BgmPlayArgsGroup_TypeInfo, v11);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v12);
    byte_4187589 = 1;
  }
  p_volumeNullable = (System_Nullable_float__o)&volumeNullable;
  volumeNullable = 0LL;
  System_Nullable_float____ctor(
    p_volumeNullable,
    volume,
    (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
  v13 = (BgmPlayArgsGroup_o *)sub_B2C42C(BgmPlayArgsGroup_TypeInfo);
  v19 = volumeNullable;
  v14 = v13;
  BgmPlayArgsGroup___ctor_24707668(v13, name, v19, fadeTime, startTime, v15);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_24707780(v14, finishCallback, v16);
}


void __fastcall BgmManager__PlayBgm_24707780(
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_418758B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, finishCallback);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_418758B = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v7 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !Instance )
      sub_B2C434(v7, v8);
    BgmManager__PreloadAndPlayBgms((BgmManager_o *)Instance, argsGroup, finishCallback, v9);
  }
}


void __fastcall BgmManager__PlayBgm_24707984(
        MainBgmPlayArgs_o *main,
        SubBgmPlayArgs_array *subArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BgmPlayArgsGroup_o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_418758A & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, subArray);
    sub_B2C35C(&BgmPlayArgsGroup_TypeInfo, v7);
    byte_418758A = 1;
  }
  v8 = (BgmPlayArgsGroup_o *)sub_B2C42C(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor(v8, main, (BgmPlayArgs_array *)subArray, v9);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_24707780(v8, finishCallback, v10);
}


void __fastcall BgmManager__PlayJingle(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4187594 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    byte_4187594 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B2C434(v9, v10);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *v32; // x20
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x3

  if ( (byte_41875A7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, name);
    sub_B2C35C(&Method_BgmManager___c__DisplayClass68_0__PlayJingleLocal_b__0__, v9);
    sub_B2C35C(&BgmManager___c__DisplayClass68_0_TypeInfo, v10);
    byte_41875A7 = 1;
  }
  v11 = sub_B2C42C(BgmManager___c__DisplayClass68_0_TypeInfo);
  BgmManager___c__DisplayClass68_0___ctor((BgmManager___c__DisplayClass68_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = name;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)name, v20, v21, v22, v23, v24, v25);
  *(float *)(v11 + 32) = volume;
  *(_QWORD *)(v11 + 40) = callbackFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v11 + 40),
    (System_Int32_array **)callbackFunc,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = *(System_String_o **)(v11 + 24);
  v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v11, Method_BgmManager___c__DisplayClass68_0__PlayJingleLocal_b__0__, 0LL);
  BgmManager__PreloadBgm(this, v32, v33, v34);
}


void __fastcall BgmManager__PlayJingle_24712392(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4187595 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    byte_4187595 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, 0LL, v3);
}


void __fastcall BgmManager__PlayMainBgm(MainBgmPlayArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418758C & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    byte_418758C = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm_24707984(args, 0LL, 0LL, v2);
}


void __fastcall BgmManager__PlayPreloadedBgm(BgmManager_o *this, BgmPlayArgs_o *args, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *BgmName_k__BackingField; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  BgmPlayArgs_c *klass; // x8
  unsigned int v10; // w9
  __int64 v11; // x11
  __int64 v12; // x11
  void *mainBgmPlayer; // x0

  if ( (byte_41875A0 & 1) == 0 )
  {
    sub_B2C35C(&MainBgmPlayArgs_TypeInfo, args);
    sub_B2C35C(&SubBgmPlayArgs_TypeInfo, v5);
    byte_41875A0 = 1;
  }
  if ( args )
  {
    BgmName_k__BackingField = args->fields._BgmName_k__BackingField;
    if ( BgmName_k__BackingField )
    {
      if ( BgmManager__IsPreloadSucceeded(this, args->fields._BgmName_k__BackingField, method) )
      {
        klass = args->klass;
        v10 = *(&args->klass->_2.bitflags2 + 1);
        v11 = *(&MainBgmPlayArgs_TypeInfo->_2.bitflags2 + 1);
        if ( v10 >= (unsigned int)v11
          && (MainBgmPlayArgs_c *)klass->_2.typeHierarchy[v11 - 1] == MainBgmPlayArgs_TypeInfo )
        {
          mainBgmPlayer = this->fields.mainBgmPlayer;
          if ( mainBgmPlayer )
            goto LABEL_14;
        }
        else
        {
          v12 = *(&SubBgmPlayArgs_TypeInfo->_2.bitflags2 + 1);
          if ( v10 < (unsigned int)v12
            || (SubBgmPlayArgs_c *)klass->_2.typeHierarchy[v12 - 1] != SubBgmPlayArgs_TypeInfo )
          {
            return;
          }
          mainBgmPlayer = BgmManager__GetOrCreateSubBgmPlayer(this, BgmName_k__BackingField, v8);
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
        sub_B2C434(mainBgmPlayer, v7);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x22
  System_Int32_array **Instance; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Object_o *v24; // x21
  System_String_o *v25; // x21
  BgmManager_o *v26; // x20
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x3

  if ( (byte_418758D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    sub_B2C35C(&Method_BgmManager___c__DisplayClass35_0__PlaySubBgm_b__0__, v5);
    sub_B2C35C(&BgmManager___c__DisplayClass35_0_TypeInfo, v6);
    byte_418758D = 1;
  }
  v7 = sub_B2C42C(BgmManager___c__DisplayClass35_0_TypeInfo);
  BgmManager___c__DisplayClass35_0___ctor((BgmManager___c__DisplayClass35_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 24) = args;
  v16 = v7 + 24;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)args, v10, v11, v12, v13, v14, v15);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  *(_QWORD *)(v7 + 16) = Instance;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), Instance, v18, v19, v20, v21, v22, v23);
  v24 = *(UnityEngine_Object_o **)(v7 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
  if ( !v8 )
  {
    if ( *(_QWORD *)v16 )
    {
      v25 = *(System_String_o **)(*(_QWORD *)v16 + 16LL);
      v26 = *(BgmManager_o **)(v7 + 16);
      v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)v7, Method_BgmManager___c__DisplayClass35_0__PlaySubBgm_b__0__, 0LL);
      if ( v26 )
      {
        BgmManager__PreloadBgm(v26, v25, v27, v28);
        return;
      }
    }
LABEL_11:
    sub_B2C434(v8, v9);
  }
}


void __fastcall BgmManager__PreloadAndPlayBgms(
        BgmManager_o *this,
        BgmPlayArgsGroup_o *argsGroup,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
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
  __int64 v20; // x19
  ChainableActionBase_o *v21; // x0
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  ChainableActionBase_o **v29; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct BgmPlayArgsGroup_o *v48; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x20
  __int64 v58; // x23
  unsigned __int64 v59; // x24
  __int64 v60; // x21
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v74; // x22
  System_Action_Action__array *v75; // x21
  ChainableActionParallel_o *v76; // x20
  System_Action_array *v77; // x21
  System_Action_o *v78; // x22
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v85; // x0
  __int64 v86; // x0

  if ( (byte_418759F & 1) == 0 )
  {
    sub_B2C35C(&System_Action___TypeInfo, argsGroup);
    sub_B2C35C(&Method_System_Action_Action___ctor__, v7);
    sub_B2C35C(&System_Action_Action__TypeInfo, v8);
    sub_B2C35C(&System_Action_TypeInfo, v9);
    sub_B2C35C(&ChainableActionParallel_TypeInfo, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Action_Action___Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Action_Action___ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Action_Action____ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_Action_Action___TypeInfo, v15);
    sub_B2C35C(&Method_BgmManager___c__DisplayClass56_0__PreloadAndPlayBgms_b__0__, v16);
    sub_B2C35C(&BgmManager___c__DisplayClass56_0_TypeInfo, v17);
    sub_B2C35C(&Method_BgmManager___c__DisplayClass56_1__PreloadAndPlayBgms_b__1__, v18);
    sub_B2C35C(&BgmManager___c__DisplayClass56_1_TypeInfo, v19);
    byte_418759F = 1;
  }
  v20 = sub_B2C42C(BgmManager___c__DisplayClass56_0_TypeInfo);
  BgmManager___c__DisplayClass56_0___ctor((BgmManager___c__DisplayClass56_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_22;
  *(_QWORD *)(v20 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = argsGroup;
  v29 = (ChainableActionBase_o **)(v20 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)argsGroup, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v20 + 40) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v20 + 40),
    (System_Int32_array **)finishCallback,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v48 = *(struct BgmPlayArgsGroup_o **)(v20 + 24);
  if ( v48 )
  {
    this->fields.cacheArgsGroup = v48;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.cacheArgsGroup,
      (System_Int32_array **)v48,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    v21 = *v29;
    if ( !*v29 )
      goto LABEL_22;
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                                 (BgmPlayArgsGroup_o *)v21,
                                                                 v22);
    v50 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v49,
                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    *(_QWORD *)(v20 + 32) = v50;
    sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 32), v50, v51, v52, v53, v54, v55, v56);
    v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Action_Action___TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v57,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Action_Action____ctor__);
    v58 = *(_QWORD *)(v20 + 32);
    if ( !v58 )
      goto LABEL_22;
    if ( *(int *)(v58 + 24) >= 1 )
    {
      v59 = 0LL;
      while ( 1 )
      {
        v60 = sub_B2C42C(BgmManager___c__DisplayClass56_1_TypeInfo);
        BgmManager___c__DisplayClass56_1___ctor((BgmManager___c__DisplayClass56_1_o *)v60, 0LL);
        if ( !v60 )
          break;
        *(_QWORD *)(v60 + 24) = v20;
        sub_B2C2F8((BattleServantConfConponent_o *)(v60 + 24), (System_Int32_array **)v20, v61, v62, v63, v64, v65, v66);
        if ( v59 >= *(unsigned int *)(v58 + 24) )
          goto LABEL_23;
        v73 = *(System_Int32_array ***)(v58 + 32 + 8 * v59);
        *(_QWORD *)(v60 + 16) = v73;
        sub_B2C2F8((BattleServantConfConponent_o *)(v60 + 16), v73, v67, v68, v69, v70, v71, v72);
        v74 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v74,
          (Il2CppObject *)v60,
          Method_BgmManager___c__DisplayClass56_1__PreloadAndPlayBgms_b__1__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
        if ( !v57 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v57,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Action_Action___Add__);
        if ( (__int64)++v59 >= *(int *)(v58 + 24) )
          goto LABEL_13;
      }
LABEL_22:
      sub_B2C434(v21, v22);
    }
LABEL_13:
    if ( !v57 )
      goto LABEL_22;
    v75 = (System_Action_Action__array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v57,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
    v76 = (ChainableActionParallel_o *)sub_B2C42C(ChainableActionParallel_TypeInfo);
    ChainableActionParallel___ctor_29458636(v76, v75, 0LL);
    v77 = (System_Action_array *)sub_B2C374(System_Action___TypeInfo, 1LL);
    v78 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v78,
      (Il2CppObject *)v20,
      Method_BgmManager___c__DisplayClass56_0__PreloadAndPlayBgms_b__0__,
      0LL);
    if ( !v77 )
      goto LABEL_22;
    if ( v78 )
    {
      v21 = (ChainableActionBase_o *)sub_B2C41C(v78, v77->obj.klass->_1.element_class);
      if ( !v21 )
      {
        v86 = sub_B2C454(0LL);
        sub_B2C400(v86, 0LL);
      }
    }
    if ( !v77->max_length )
    {
LABEL_23:
      v85 = sub_B2C460(v21);
      sub_B2C400(v85, 0LL);
    }
    v77->m_Items[0] = v78;
    sub_B2C2F8((BattleServantConfConponent_o *)v77->m_Items, (System_Int32_array **)v78, v79, v80, v81, v82, v83, v84);
    if ( !v76 )
      goto LABEL_22;
    v21 = ChainableActionBase__Final((ChainableActionBase_o *)v76, v77, 0LL);
    if ( !v21 )
      goto LABEL_22;
    ChainableActionBase__Execute(v21, 0LL);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v20 + 40), 0LL);
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
  __int64 v13; // x22
  SoundManager_o *Instance; // x0
  __int64 v15; // x1
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
  BgmManager_o *v28; // x0
  const MethodInfo *v29; // x2
  System_Int32_array **CueName; // x0
  WarBoardManager_TaskList_o **v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **CueSheet; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Action_o *v45; // x21
  const MethodInfo *v46; // x3
  System_Collections_IEnumerator_o *v47; // x0

  if ( (byte_41875A1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, name);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Insert__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v10);
    sub_B2C35C(&Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__0__, v11);
    sub_B2C35C(&BgmManager___c__DisplayClass58_0_TypeInfo, v12);
    byte_41875A1 = 1;
  }
  v13 = sub_B2C42C(BgmManager___c__DisplayClass58_0_TypeInfo);
  BgmManager___c__DisplayClass58_0___ctor((BgmManager___c__DisplayClass58_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  *(_QWORD *)(v13 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v13 + 40),
    (System_Int32_array **)finishCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  CueName = (System_Int32_array **)BgmManager__ExtractCueName(v28, name, v29);
  v31 = (WarBoardManager_TaskList_o **)(v13 + 24);
  *(_QWORD *)(v13 + 24) = CueName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), CueName, v32, v33, v34, v35, v36, v37);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CueSheet = (System_Int32_array **)SoundManager__GetCueSheet(Instance, *(System_String_o **)(v13 + 24), 0LL);
  *(_QWORD *)(v13 + 16) = CueSheet;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), CueSheet, v39, v40, v41, v42, v43, v44);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v13 + 16), 0LL) )
  {
    v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)v13, Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__0__, 0LL);
    v47 = BgmManager__CoWaitSameAudioLoading(this, name, v45, v46);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v47, 0LL);
    return 0;
  }
  Instance = (SoundManager_o *)this->fields.addBindList;
  if ( !Instance )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Instance,
         *v31,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    Instance = (SoundManager_o *)this->fields.addBindList;
    if ( Instance )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Instance,
        *v31,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
      Instance = (SoundManager_o *)this->fields.addBindList;
      if ( Instance )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___Insert(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
          0,
          (XWeaponTrail_Element_o *)*v31,
          (const MethodInfo_2EF5674 *)Method_System_Collections_Generic_List_string__Insert__);
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_B2C434(Instance, v15);
  }
LABEL_12:
  ActionExtensions__Call(*(System_Action_o **)(v13 + 40), 0LL);
  return 1;
}


void __fastcall BgmManager__ReflectMasterVolumeLocal(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  BgmManager___c_c *v8; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__52_0; // x20
  Il2CppObject *v11; // x21
  struct BgmManager___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_418759E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BgmPlayerBase___ctor__, method);
    sub_B2C35C(&System_Action_BgmPlayerBase__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v4);
    sub_B2C35C(&Method_BgmManager___c__ReflectMasterVolumeLocal_b__52_0__, v5);
    sub_B2C35C(&BgmManager___c_TypeInfo, v6);
    byte_418759E = 1;
  }
  bgmPlayers = this->fields.bgmPlayers;
  v8 = BgmManager___c_TypeInfo;
  if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v8 = BgmManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__52_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__52_0,
      v11,
      Method_BgmManager___c__ReflectMasterVolumeLocal_b__52_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BgmPlayerBase___ctor__);
    v12 = BgmManager___c_TypeInfo->static_fields;
    v12->__9__52_0 = (struct System_Action_BgmPlayerBase__o *)_9__52_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !bgmPlayers )
    sub_B2C434(v8, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)_9__52_0,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
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
  int32_t addBindList; // w20
  BgmManager_c *v22; // x0
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v23; // x20
  const MethodInfo *v24; // x1
  System_Collections_Generic_IEnumerable_T__o *UsingCueNames; // x0
  __int64 v26; // x3
  BgmManager_c *klass; // x8
  BgmManager_o *v28; // x21
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x3
  __int64 v34; // x21
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x3
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  System_String_o *CueName; // x0
  int v48; // w24
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  BgmManager_o *v53; // x21
  int v54; // w8
  int v55; // w22
  __int64 v56; // x26
  BgmManager_o *v57; // x21
  System_String_o *v58; // x21
  BgmManager_o *v59; // x8
  int32_t v60; // w21
  bool v61; // vf
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+8h] [xbp-98h] BYREF
  int v63[2]; // [xsp+20h] [xbp-80h]
  int v64; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+30h] [xbp-70h] BYREF

  v2 = (BgmManager_o **)this;
  if ( (byte_41875AB & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_string__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_string__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_string__UnionWith__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_string___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_HashSet_string__TypeInfo, v10);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__RemoveAt__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v18);
    this = (BgmManager_o *)sub_B2C35C(&SoundManager_TypeInfo, v19);
    byte_41875AB = 1;
  }
  memset(&v65, 0, sizeof(v65));
  v64 = 0;
  v20 = v2[3];
  if ( !v20 )
    goto LABEL_71;
  addBindList = (int32_t)v20->fields.addBindList;
  v22 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v22 = BgmManager_TypeInfo;
  }
  if ( addBindList > v22->static_fields->ADD_BIND_MAX )
  {
    v23 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_string__TypeInfo);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
      v23,
      (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_string___ctor__);
    this = v2[7];
    if ( !this )
      goto LABEL_71;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v62,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BgmPlayerBase__GetEnumerator__);
    v65 = v62;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v65,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__MoveNext__) )
    {
      if ( !v65.fields.current )
        sub_B2C434(0LL, v24);
      UsingCueNames = (System_Collections_Generic_IEnumerable_T__o *)BgmPlayerBase__GetUsingCueNames(
                                                                       (BgmPlayerBase_o *)v65.fields.current,
                                                                       v24);
      if ( !v23 )
        sub_B2C434(UsingCueNames, UsingCueNames);
      System_Collections_Generic_HashSet_string___UnionWith(
        (System_Collections_Generic_HashSet_string__o *)v23,
        UsingCueNames,
        (const MethodInfo_2D8CC3C *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    }
    v63[0] = 84;
    v64 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v65,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayerBase__Dispose__);
    v64 = 0;
    this = v2[9];
    if ( this )
    {
      this = (BgmManager_o *)BgmPlayArgsGroup__AllArgsListNullExcluded((BgmPlayArgsGroup_o *)this, method);
      if ( !this )
        goto LABEL_71;
      klass = this->klass;
      v28 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          ++v29;
          p_offset += 4;
          if ( v29 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_20:
        v31 = sub_AC5258(this, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL, v26);
      }
      v34 = (*(__int64 (__fastcall **)(BgmManager_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
      if ( !v34 )
        sub_B2C434(0LL, v32);
      while ( 1 )
      {
        v35 = *(_QWORD *)v34;
        if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
        {
          v36 = 0LL;
          v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v36;
            v37 += 4;
            if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
              goto LABEL_27;
          }
          v38 = v35 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_27:
          v38 = sub_AC5258(v34, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
          break;
        v40 = *(_QWORD *)v34;
        if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
        {
          v41 = 0LL;
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v42 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            ++v41;
            v42 += 4;
            if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
              goto LABEL_34;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_34:
          v43 = sub_AC5258(v34, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL, v39);
        }
        v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v34, *(_QWORD *)(v43 + 8));
        if ( !v44 )
          sub_B2C434(0LL, v45);
        CueName = BgmManager__ExtractCueName((BgmManager_o *)v44, *(System_String_o **)(v44 + 16), v46);
        if ( !v23 )
          sub_B2C434(CueName, CueName);
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          v23,
          (WarBoardAIRoute_RouteData_o *)CueName,
          (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
      v63[0] = 159;
      v48 = ++v64;
      v49 = *(_QWORD *)v34;
      if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
      {
        v50 = 0LL;
        v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
        {
          ++v50;
          v51 += 4;
          if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
            goto LABEL_44;
        }
        v52 = v49 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_44:
        v52 = sub_AC5258(v34, System_IDisposable_TypeInfo, 0LL, v39);
      }
      this = (BgmManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v34, *(_QWORD *)(v52 + 8));
      if ( v48 && v63[v48 - 1] == 159 )
        v64 = v48 - 1;
    }
    v53 = v2[3];
    if ( !v53 )
LABEL_71:
      sub_B2C434(this, method);
    v54 = (int)v53->fields.addBindList;
    if ( v54 - 1 >= 1 )
    {
      v55 = v54 - 2;
      v56 = v54 - 1 + 4LL;
      do
      {
        if ( v56 - 4 >= (unsigned __int64)LODWORD(v53->fields.addBindList) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v23 )
          break;
        this = (BgmManager_o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                                 (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v23,
                                 *(BattleBuffData_BuffData_o **)(*(_QWORD *)&v53->fields.m_CachedPtr + 8 * v56),
                                 (const MethodInfo_2D8C0E0 *)Method_System_Collections_Generic_HashSet_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v57 = v2[3];
          if ( !v57 )
            goto LABEL_71;
          if ( v56 - 4 >= (unsigned __int64)LODWORD(v57->fields.addBindList) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v58 = *(System_String_o **)(*(_QWORD *)&v57->fields.m_CachedPtr + 8 * v56);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__releaseAudioAssetStorage(v58, 0LL);
          this = v2[3];
          if ( !this )
            goto LABEL_71;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
            v55 + 1,
            (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_string__RemoveAt__);
          v59 = v2[3];
          if ( !v59 )
            goto LABEL_71;
          this = (BgmManager_o *)BgmManager_TypeInfo;
          v60 = (int32_t)v59->fields.addBindList;
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            this = (BgmManager_o *)BgmManager_TypeInfo;
          }
          if ( v60 <= this[2].fields.addBindList->fields._size )
            return;
        }
        v61 = __OFSUB__(v55--, 1);
        if ( v55 < 0 != v61 )
          return;
        v53 = v2[3];
        --v56;
      }
      while ( v53 );
      goto LABEL_71;
    }
  }
}


void __fastcall BgmManager__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4187581 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_4187581 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B2C434(v4, v5);
    BgmManager__ResetLocal((BgmManager_o *)Instance, v5);
  }
}


void __fastcall BgmManager__ResetLocal(BgmManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  BgmManager___c_c *v8; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__50_0; // x20
  Il2CppObject *v11; // x21
  struct BgmManager___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_418759C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BgmPlayerBase___ctor__, method);
    sub_B2C35C(&System_Action_BgmPlayerBase__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v4);
    sub_B2C35C(&Method_BgmManager___c__ResetLocal_b__50_0__, v5);
    sub_B2C35C(&BgmManager___c_TypeInfo, v6);
    byte_418759C = 1;
  }
  bgmPlayers = this->fields.bgmPlayers;
  v8 = BgmManager___c_TypeInfo;
  if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
    v8 = BgmManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__50_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BgmManager___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BgmPlayerBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__50_0,
      v11,
      Method_BgmManager___c__ResetLocal_b__50_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BgmPlayerBase___ctor__);
    v12 = BgmManager___c_TypeInfo->static_fields;
    v12->__9__50_0 = (struct System_Action_BgmPlayerBase__o *)_9__50_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !bgmPlayers )
    sub_B2C434(v8, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)_9__50_0,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
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
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4187585 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, v2);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5);
    byte_4187585 = 1;
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
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
    if ( !v11 )
    {
      if ( !Instance )
        sub_B2C434(v11, v12);
      BgmManager__ReflectMasterVolumeLocal((BgmManager_o *)Instance, v12);
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
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  v2 = isMute;
  if ( (byte_4187583 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4);
    byte_4187583 = 1;
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
    Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
    if ( !v10 )
    {
      if ( !Instance )
        sub_B2C434(v10, v11);
      BgmManager__SetMuteLocal((BgmManager_o *)Instance, v2, v12);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmManager__SetMuteLocal(BgmManager_o *this, bool isMute, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BgmManager___c__DisplayClass51_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_BgmPlayerBase__o *bgmPlayers; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x20

  if ( (byte_418759D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BgmPlayerBase___ctor__, isMute);
    sub_B2C35C(&System_Action_BgmPlayerBase__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__, v6);
    sub_B2C35C(&Method_BgmManager___c__DisplayClass51_0__SetMuteLocal_b__0__, v7);
    sub_B2C35C(&BgmManager___c__DisplayClass51_0_TypeInfo, v8);
    byte_418759D = 1;
  }
  v9 = (BgmManager___c__DisplayClass51_0_o *)sub_B2C42C(BgmManager___c__DisplayClass51_0_TypeInfo);
  BgmManager___c__DisplayClass51_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.isMute = isMute,
        bgmPlayers = this->fields.bgmPlayers,
        v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BgmPlayerBase__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_BgmManager___c__DisplayClass51_0__SetMuteLocal_b__0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_BgmPlayerBase___ctor__),
        !bgmPlayers) )
  {
    sub_B2C434(v10, v11);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmPlayers,
    (System_Action_T__o *)v13,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BgmPlayerBase__ForEach__);
}


void __fastcall BgmManager__StopAll(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_4187590 & 1) == 0 )
  {
    sub_B2C35C(&Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___, v2);
    sub_B2C35C(&Method_BgmManager_StopBgmLocal_BgmPlayerBase___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v6);
    byte_4187590 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B2C434(v8, v9);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        0LL,
        (const MethodInfo_172B338 *)Method_BgmManager_StopBgmLocal_BgmPlayerBase___);
    else
      BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        0LL,
        (const MethodInfo_172B12C *)Method_BgmManager_FadeoutBgmLocal_BgmPlayerBase___);
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
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1

  if ( (byte_418758F & 1) == 0 )
  {
    sub_B2C35C(&Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___, successCallback);
    sub_B2C35C(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, v7);
    sub_B2C35C(&Method_BgmManager_StopBgmLocal_MainBgmPlayer___, v8);
    sub_B2C35C(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v11);
    byte_418758F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v13 )
  {
    if ( !Instance )
      sub_B2C434(v13, v14);
    if ( fadeoutTime <= 0.0 )
    {
      if ( !BgmManager__StopBgmLocal_SubBgmPlayer_(
              (BgmManager_o *)Instance,
              name,
              (const MethodInfo_172B338 *)Method_BgmManager_StopBgmLocal_MainBgmPlayer___) )
        return;
      if ( Instance[2].fields.m_CachedPtr <= 0 )
        BgmManager__StopBgmLocal_SubBgmPlayer_(
          (BgmManager_o *)Instance,
          0LL,
          (const MethodInfo_172B338 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    }
    else
    {
      if ( !BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
              (BgmManager_o *)Instance,
              fadeoutTime,
              name,
              (const MethodInfo_172B12C *)Method_BgmManager_FadeoutBgmLocal_MainBgmPlayer___) )
        return;
      if ( Instance[2].fields.m_CachedPtr <= 0 )
        BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
          (BgmManager_o *)Instance,
          fadeoutTime,
          0LL,
          (const MethodInfo_172B12C *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
    }
    ActionExtensions__Call(successCallback, 0LL);
  }
}


bool __fastcall BgmManager__StopBgmLocal_SubBgmPlayer_(
        BgmManager_o *this,
        System_String_o *name,
        const MethodInfo_172B338 *method)
{
  BgmManager_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x20
  long double v8; // q0
  Il2CppClass *_1_BgmManager___c__65_T; // x21
  __int16 v10; // w8
  Il2CppClass *v11; // x21
  Il2CppClass *v12; // x21
  Il2CppClass *v13; // x21
  System_Int32_array **v14; // x21
  Il2CppClass *v15; // x21
  __int16 v16; // w8
  Il2CppClass *v17; // x21
  Il2CppClass *v18; // x21
  const MethodInfo_172B338_RGCTXs *rgctx_data; // x8
  Il2CppClass *v20; // x21
  Il2CppClass *_3_System_Func_T__bool; // x23
  __int64 v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  Il2CppClass *v29; // x22
  char *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  v5 = this;
  if ( (byte_418725C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_bool___, name);
    this = (BgmManager_o *)sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_bool___, v6);
    byte_418725C = 1;
  }
  if ( !v5 )
    sub_B2C434(this, name);
  v7 = ((__int64 (__fastcall *)(BgmManager_o *, System_String_o *))method->rgctx_data->_0_BgmManager_EnumeratePlayersHavingBgmName_T_->methodPointer)(
         v5,
         name);
  _1_BgmManager___c__65_T = method->rgctx_data->_1_BgmManager___c__65_T_;
  v10 = WORD1(_1_BgmManager___c__65_T->vtable[0].methodPtr);
  if ( (v10 & 1) == 0 )
  {
    sub_AC505C(method->rgctx_data->_1_BgmManager___c__65_T_);
    v10 = WORD1(_1_BgmManager___c__65_T->vtable[0].methodPtr);
  }
  if ( (v10 & 0x400) != 0 )
  {
    v11 = method->rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v11->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_1_BgmManager___c__65_T_);
    if ( !v11->_2.cctor_finished )
    {
      v12 = method->rgctx_data->_1_BgmManager___c__65_T_;
      if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_1_BgmManager___c__65_T_);
      *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v12);
    }
  }
  v13 = method->rgctx_data->_1_BgmManager___c__65_T_;
  if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_1_BgmManager___c__65_T_);
  v14 = (System_Int32_array **)*((_QWORD *)v13->static_fields + 1);
  if ( !v14 )
  {
    v15 = method->rgctx_data->_1_BgmManager___c__65_T_;
    v16 = WORD1(v15->vtable[0].methodPtr);
    if ( (v16 & 1) == 0 )
    {
      sub_AC505C(method->rgctx_data->_1_BgmManager___c__65_T_);
      v16 = WORD1(v15->vtable[0].methodPtr);
    }
    if ( (v16 & 0x400) != 0 )
    {
      v17 = method->rgctx_data->_1_BgmManager___c__65_T_;
      if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_1_BgmManager___c__65_T_);
      if ( !v17->_2.cctor_finished )
      {
        v18 = method->rgctx_data->_1_BgmManager___c__65_T_;
        if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C(method->rgctx_data->_1_BgmManager___c__65_T_);
        j_il2cpp_runtime_class_init_0(v18);
      }
    }
    rgctx_data = method->rgctx_data;
    v20 = rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
    {
      sub_AC505C(rgctx_data->_1_BgmManager___c__65_T_);
      rgctx_data = method->rgctx_data;
    }
    _3_System_Func_T__bool = rgctx_data->_3_System_Func_T__bool_;
    v22 = *(_QWORD *)v20->static_fields;
    if ( (BYTE2(_3_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(_3_System_Func_T__bool);
    v14 = (System_Int32_array **)sub_B2C42C(_3_System_Func_T__bool);
    ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__bool___ctor->methodPointer)(
      v14,
      v22,
      method->rgctx_data->_2_BgmManager___c__65_T___StopBgmLocal_b__65_0);
    v29 = method->rgctx_data->_1_BgmManager___c__65_T_;
    if ( (BYTE2(v29->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_1_BgmManager___c__65_T_);
    static_fields = (char *)v29->static_fields;
    *((_QWORD *)static_fields + 1) = v14;
    sub_B2C2F8((BattleServantConfConponent_o *)(static_fields + 8), v14, v23, v24, v25, v26, v27, v28);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(__int64, System_Int32_array **, long double))method->rgctx_data->_5_System_Linq_Enumerable_Select_T__bool_->methodPointer)(
                                                               v7,
                                                               v14,
                                                               v8);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_bool_(
                                                               v31,
                                                               (const MethodInfo_1A9AC80 *)Method_System_Linq_Enumerable_ToArray_bool___);
  return System_Linq_Enumerable__Any_bool_(v32, (const MethodInfo_1738098 *)Method_System_Linq_Enumerable_Any_bool___);
}


void __fastcall BgmManager__StopJingle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4187596 & 1) == 0 )
  {
    sub_B2C35C(&Method_BgmManager_StopBgmLocal_JinglePlayer___, v1);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_4187596 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_B2C434(v5, v6);
    BgmManager__StopBgmLocal_SubBgmPlayer_(
      (BgmManager_o *)Instance,
      0LL,
      (const MethodInfo_172B338 *)Method_BgmManager_StopBgmLocal_JinglePlayer___);
  }
}


void __fastcall BgmManager__StopSubBgm(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4187591 & 1) == 0 )
  {
    sub_B2C35C(&Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___, method);
    sub_B2C35C(&Method_BgmManager_StopBgmLocal_SubBgmPlayer___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v7);
    byte_4187591 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B2C434(v9, v10);
    if ( fadeoutTime <= 0.0 )
      BgmManager__StopBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        name,
        (const MethodInfo_172B338 *)Method_BgmManager_StopBgmLocal_SubBgmPlayer___);
    else
      BgmManager__FadeoutBgmLocal_SubBgmPlayer_(
        (BgmManager_o *)Instance,
        fadeoutTime,
        name,
        (const MethodInfo_172B12C *)Method_BgmManager_FadeoutBgmLocal_SubBgmPlayer___);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x20
  System_Int32_array **v21; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *SubArgsList_k__BackingField; // x21
  BgmManager___c_c *v24; // x0
  struct BgmManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__66_0; // x22
  Il2CppObject *v27; // x23
  struct BgmManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v43; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  BgmManager___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_T__o *v46; // x19
  struct BgmManager___c_StaticFields *v47; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__66_2; // x20
  Il2CppObject *v49; // x21
  struct BgmManager___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_41875A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_SubBgmPlayer___ctor__, requestedBgmArgs);
    sub_B2C35C(&System_Action_SubBgmPlayer__TypeInfo, v5);
    sub_B2C35C(&Method_BasicHelper_ForEach_SubBgmPlayer___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_SubBgmPlayer___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_string___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_SubBgmPlayer___, v10);
    sub_B2C35C(&Method_System_Func_SubBgmPlayer__bool___ctor__, v11);
    sub_B2C35C(&Method_System_Func_SubBgmPlayArgs__string___ctor__, v12);
    sub_B2C35C(&System_Func_SubBgmPlayArgs__string__TypeInfo, v13);
    sub_B2C35C(&System_Func_SubBgmPlayer__bool__TypeInfo, v14);
    sub_B2C35C(&Method_BgmManager___c__StopUnrequestedSubBgm_b__66_0__, v15);
    sub_B2C35C(&Method_BgmManager___c__StopUnrequestedSubBgm_b__66_2__, v16);
    sub_B2C35C(&Method_BgmManager___c__DisplayClass66_0__StopUnrequestedSubBgm_b__1__, v17);
    sub_B2C35C(&BgmManager___c__DisplayClass66_0_TypeInfo, v18);
    sub_B2C35C(&BgmManager___c_TypeInfo, v19);
    byte_41875A6 = 1;
  }
  v20 = sub_B2C42C(BgmManager___c__DisplayClass66_0_TypeInfo);
  BgmManager___c__DisplayClass66_0___ctor((BgmManager___c__DisplayClass66_0_o *)v20, 0LL);
  if ( this->fields.enableCounter_KeepSubBgm <= 0 )
  {
    if ( !requestedBgmArgs )
      goto LABEL_23;
    SubArgsList_k__BackingField = requestedBgmArgs->fields._SubArgsList_k__BackingField;
    v24 = BgmManager___c_TypeInfo;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v24 = BgmManager___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__66_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__66_0;
    if ( !_9__66_0 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = BgmManager___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__66_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_SubBgmPlayArgs__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__66_0,
        v27,
        Method_BgmManager___c__StopUnrequestedSubBgm_b__66_0__,
        (const MethodInfo_2713350 *)Method_System_Func_SubBgmPlayArgs__string___ctor__);
      v28 = BgmManager___c_TypeInfo->static_fields;
      v28->__9__66_0 = (struct System_Func_SubBgmPlayArgs__string__o *)_9__66_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v28->__9__66_0,
        (System_Int32_array **)_9__66_0,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)SubArgsList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__66_0,
                                                                 (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_SubBgmPlayArgs__string___);
    v21 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v35,
                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v20 )
LABEL_23:
      sub_B2C434(v21, v22);
    *(_QWORD *)(v20 + 16) = v21;
    sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), v21, v36, v37, v38, v39, v40, v41);
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.bgmPlayers,
                                                                 (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayer___);
    v43 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_SubBgmPlayer__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v43,
      (Il2CppObject *)v20,
      Method_BgmManager___c__DisplayClass66_0__StopUnrequestedSubBgm_b__1__,
      (const MethodInfo_2711C04 *)Method_System_Func_SubBgmPlayer__bool___ctor__);
    v44 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v42,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_SubBgmPlayer___);
    v45 = BgmManager___c_TypeInfo;
    v46 = (System_Collections_Generic_IEnumerable_T__o *)v44;
    if ( (BYTE3(BgmManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BgmManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager___c_TypeInfo);
      v45 = BgmManager___c_TypeInfo;
    }
    v47 = v45->static_fields;
    _9__66_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v47->__9__66_2;
    if ( !_9__66_2 )
    {
      if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v47 = BgmManager___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)v47->__9;
      _9__66_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_SubBgmPlayer__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__66_2,
        v49,
        Method_BgmManager___c__StopUnrequestedSubBgm_b__66_2__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_SubBgmPlayer___ctor__);
      v50 = BgmManager___c_TypeInfo->static_fields;
      v50->__9__66_2 = (struct System_Action_SubBgmPlayer__o *)_9__66_2;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v50->__9__66_2,
        (System_Int32_array **)_9__66_2,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v46,
      (System_Action_T__o *)_9__66_2,
      (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_SubBgmPlayer___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_String_o *__fastcall BgmManager__get_BgmName(BgmManager_o *this, const MethodInfo *method)
{
  struct MainBgmPlayer_o *mainBgmPlayer; // x8

  mainBgmPlayer = this->fields.mainBgmPlayer;
  if ( !mainBgmPlayer )
    sub_B2C434(this, method);
  return mainBgmPlayer->fields.bgmName;
}


bool __fastcall BgmManager__get_IsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  BgmManager_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_418757D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v2);
    byte_418757D = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL) )
    return 0;
  v4 = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  return BgmManager__IsLoadingLocal(v4, 0LL, v6);
}


bool __fastcall BgmManager__get_IsMute(const MethodInfo *method)
{
  __int64 v1; // x1
  BgmManager_c *v2; // x0

  if ( (byte_4187582 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, v1);
    byte_4187582 = 1;
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
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4187588 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_4187588 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_B2C434(v5, v6);
  return BgmManager__IsLoadingLocal((BgmManager_o *)Instance, name, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  BgmManager_o *_4__this; // x21
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct BgmManager_o *v12; // x1
  struct System_String_o *bgmName; // x1
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitWhile_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *finishCallback; // x0

  if ( (byte_41850E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&Method_BgmManager___c__DisplayClass60_0__CoWaitSameAudioLoading_b__0__, v4);
    sub_B2C35C(&BgmManager___c__DisplayClass60_0_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v6);
    byte_41850E5 = 1;
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
    v9 = sub_B2C42C(BgmManager___c__DisplayClass60_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    if ( !v9
      || (v12 = this->fields.__4__this,
          *(_QWORD *)(v9 + 16) = v12,
          sub_B2C2F8(v9 + 16, v12),
          bgmName = this->fields.bgmName,
          *(_QWORD *)(v9 + 24) = bgmName,
          sub_B2C2F8(v9 + 24, bgmName),
          !_4__this) )
    {
      sub_B2C434(v10, v11);
    }
    if ( BgmManager__IsLoadingLocal(_4__this, *(System_String_o **)(v9 + 24), 0LL) )
    {
      v14 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v14,
        (Il2CppObject *)v9,
        Method_BgmManager___c__DisplayClass60_0__CoWaitSameAudioLoading_b__0__,
        (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
      v15 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v15, v14, 0LL);
      this->fields.__2__current = (Il2CppObject *)v15;
      p__2__current = &this->fields.__2__current;
      sub_B2C2F8(p__2__current, v15);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BgmManager__CoWaitSameAudioLoading_d__60_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct BgmManager___c_StaticFields *static_fields; // x0

  if ( (byte_41850E0 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager___c_TypeInfo, v1);
    byte_41850E0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BgmManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BgmManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BgmManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.bgmName == 0LL;
}


void __fastcall BgmManager___c___InitializeLocal_b__49_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)x, 0LL);
}


void __fastcall BgmManager___c___LateUpdate_b__75_1(
        BgmManager___c_o *this,
        GeneralBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, void *))x->klass->vtable._13_LateUpdate.method)(x, x->klass[1]._1.image);
}


void __fastcall BgmManager___c___LateUpdate_b__75_3(BgmManager___c_o *this, BgmPlayArgs_o *x, const MethodInfo *method)
{
  __int64 v4; // x1
  const MethodInfo_21524A8 *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_Nullable_long__o startTime; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v9; // [xsp+18h] [xbp-18h] BYREF
  System_Nullable_float__o v10; // 0:x0.8
  System_Nullable_float__o v11; // 0:x1.8
  System_Nullable_float__o v12; // 0:x2.8
  System_Nullable_long__o v13; // 0:x0.16

  if ( (byte_41850E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_float___ctor__, x);
    sub_B2C35C(&Method_System_Nullable_long___ctor__, v4);
    byte_41850E1 = 1;
  }
  v10 = (System_Nullable_float__o)&v9;
  v9 = 0LL;
  System_Nullable_float____ctor(v10, 0.0, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
  v13.fields.value = (int64_t)&startTime;
  *(_QWORD *)&v13.fields.has_value = 0LL;
  startTime.fields.value = 0LL;
  *(_QWORD *)&startTime.fields.has_value = 0LL;
  System_Nullable_long____ctor(v13, Method_System_Nullable_long___ctor__, v5);
  if ( !x )
    sub_B2C434(v6, v7);
  v12 = v9;
  v11 = 0LL;
  BgmPlayArgs__Update(x, v11, v12, startTime, 0LL);
}


void __fastcall BgmManager___c___ReflectMasterVolumeLocal_b__52_0(
        BgmManager___c_o *this,
        BgmPlayerBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields._BgmName_k__BackingField;
}


void __fastcall BgmManager___c___StopUnrequestedSubBgm_b__66_2(
        BgmManager___c_o *this,
        SubBgmPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  ((void (__fastcall *)(SubBgmPlayer_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._11_StopBgm.method)(
    x,
    0LL,
    x->klass->vtable._12_ExportPlayArgs.methodPtr);
}


void __fastcall BgmManager___c__53_object____cctor(const MethodInfo_1F85168 *method)
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
    sub_AC505C(method->klass);
  _0_BgmManager___c__53_T = klass->rgctx_data->_0_BgmManager___c__53_T_;
  if ( (BYTE2(_0_BgmManager___c__53_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_0_BgmManager___c__53_T);
  v4 = sub_B2C42C(_0_BgmManager___c__53_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AC505C(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BgmManager___c__53_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AC505C(v8);
  methodPointer(v6, v8->rgctx_data->_1_BgmManager___c__53_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(v16);
  _2_BgmManager___c__53_T = v16->rgctx_data->_2_BgmManager___c__53_T_;
  if ( (BYTE2(_2_BgmManager___c__53_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_2_BgmManager___c__53_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__53_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BgmManager___c__53_object____ctor(BgmManager___c__53_T__o *this, const MethodInfo_1F85244 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__53_object____EnumeratePlayersHavingBgmName_b__53_0(
        BgmManager___c__53_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F8525C *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x[1].klass != 0LL;
}


void __fastcall BgmManager___c__65_object____cctor(const MethodInfo_1F85524 *method)
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
    sub_AC505C(method->klass);
  _0_BgmManager___c__65_T = klass->rgctx_data->_0_BgmManager___c__65_T_;
  if ( (BYTE2(_0_BgmManager___c__65_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_0_BgmManager___c__65_T);
  v4 = sub_B2C42C(_0_BgmManager___c__65_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AC505C(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BgmManager___c__65_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AC505C(v8);
  methodPointer(v6, v8->rgctx_data->_1_BgmManager___c__65_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(v16);
  _2_BgmManager___c__65_T = v16->rgctx_data->_2_BgmManager___c__65_T_;
  if ( (BYTE2(_2_BgmManager___c__65_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_2_BgmManager___c__65_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__65_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BgmManager___c__65_object____ctor(BgmManager___c__65_T__o *this, const MethodInfo_1F85600 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__65_object____StopBgmLocal_b__65_0(
        BgmManager___c__65_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F85618 *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return ((__int64 (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))x->klass->vtable[11].method)(
           x,
           0LL,
           x->klass->vtable[12].methodPtr);
}


void __fastcall BgmManager___c__73_object____cctor(const MethodInfo_1F8563C *method)
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
    sub_AC505C(method->klass);
  _0_BgmManager___c__73_T = klass->rgctx_data->_0_BgmManager___c__73_T_;
  if ( (BYTE2(_0_BgmManager___c__73_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_0_BgmManager___c__73_T);
  v4 = sub_B2C42C(_0_BgmManager___c__73_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AC505C(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BgmManager___c__73_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AC505C(v8);
  methodPointer(v6, v8->rgctx_data->_1_BgmManager___c__73_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(v16);
  _2_BgmManager___c__73_T = v16->rgctx_data->_2_BgmManager___c__73_T_;
  if ( (BYTE2(_2_BgmManager___c__73_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_2_BgmManager___c__73_T);
  static_fields = (BattleServantConfConponent_o *)_2_BgmManager___c__73_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BgmManager___c__73_object____ctor(BgmManager___c__73_T__o *this, const MethodInfo_1F85718 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall BgmManager___c__73_object____ExportPlayArgsGroupLocal_b__73_0(
        BgmManager___c__73_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F85730 *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, 0LL);
  ((void (__fastcall *)(BgmPlayerBase_o *, bool, Il2CppMethodPointer))x->klass->vtable._7_SetMute.method)(
    x,
    this->fields.isMute,
    x->klass->vtable._8_ReflectMasterVolume.methodPtr);
}


void __fastcall BgmManager___c__DisplayClass53_0_object____ctor(
        BgmManager___c__DisplayClass53_0_T__o *this,
        const MethodInfo_1F87EF8 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass53_0_object____EnumeratePlayersHavingBgmName_b__1(
        BgmManager___c__DisplayClass53_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F87F10 *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
          v8 = sub_B2C460(_4__this);
          sub_B2C400(v8, 0LL);
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
      sub_B2C434(_4__this, method);
    }
LABEL_9:
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_12;
    _4__this->fields.cacheArgsGroup = 0LL;
    sub_B2C2F8(&_4__this->fields.cacheArgsGroup, 0LL);
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
    sub_B2C434(this, callback);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_String_o *cueName; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *loadingBgmCueNameList; // x0
  __int64 v8; // x1
  struct BgmManager_o *_4__this; // x8
  System_Action_o *_9__1; // x21
  System_String_o *tempCueSheetName; // x20

  if ( (byte_41850E2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__1__, v5);
    byte_41850E2 = 1;
  }
  cueName = this->fields.cueName;
  this->fields.tempCueSheetName = cueName;
  sub_B2C2F8(&this->fields, cueName);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (loadingBgmCueNameList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.loadingBgmCueNameList) == 0LL )
  {
    sub_B2C434(loadingBgmCueNameList, v8);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    loadingBgmCueNameList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.cueName,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  _9__1 = this->fields.__9__1;
  tempCueSheetName = this->fields.tempCueSheetName;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_BgmManager___c__DisplayClass58_0__PreloadBgm_b__1__, 0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BgmManager_o *_4__this; // x8
  struct BgmManager_o *v7; // x8
  struct BgmManager_o *v8; // x8

  v2 = this;
  if ( (byte_41850E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Insert__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v4);
    this = (BgmManager___c__DisplayClass58_0_o *)sub_B2C35C(
                                                   &Method_SingletonMonoBehaviour_SoundManager__get_Instance__,
                                                   v5);
    byte_41850E3 = 1;
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
    (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
  this = (BgmManager___c__DisplayClass58_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BgmManager___c__DisplayClass58_0_o *)SoundManager__GetCueSheet(
                                                 (SoundManager_o *)this,
                                                 v2->fields.cueName,
                                                 0LL);
  if ( this )
  {
    v7 = v2->fields.__4__this;
    if ( !v7 )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass58_0_o *)v7->fields.addBindList;
    if ( !this )
      goto LABEL_14;
    this = (BgmManager___c__DisplayClass58_0_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                   (WarBoardManager_TaskList_o *)v2->fields.cueName,
                                                   (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v8 = v2->fields.__4__this;
      if ( v8 )
      {
        this = (BgmManager___c__DisplayClass58_0_o *)v8->fields.addBindList;
        if ( this )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Insert(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
            0,
            (XWeaponTrail_Element_o *)v2->fields.cueName,
            (const MethodInfo_2EF5674 *)Method_System_Collections_Generic_List_string__Insert__);
          goto LABEL_13;
        }
      }
LABEL_14:
      sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
  return BgmManager__IsLoadingLocal(_4__this, this->fields.bgmName, 0LL);
}


void __fastcall BgmManager___c__DisplayClass64_0_object____ctor(
        BgmManager___c__DisplayClass64_0_T__o *this,
        const MethodInfo_1F888C4 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmManager___c__DisplayClass64_0_object____FadeoutBgmLocal_b__0(
        BgmManager___c__DisplayClass64_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F888DC *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
  if ( (byte_41850E4 & 1) == 0 )
  {
    this = (BgmManager___c__DisplayClass66_0_o *)sub_B2C35C(&Method_System_Array_IndexOf_string___, x);
    byte_41850E4 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  return (unsigned int)System_Array__IndexOf_UICommonButton_(
                         (UICommonButton_array *)v4->fields.subBgmNamesToPlay,
                         (UICommonButton_o *)x->fields.bgmName,
                         (const MethodInfo_1FFD67C *)Method_System_Array_IndexOf_string___) >> 31;
}


void __fastcall BgmManager___c__DisplayClass67_0_object____ctor(
        BgmManager___c__DisplayClass67_0_T__o *this,
        const MethodInfo_1F88904 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmManager___c__DisplayClass67_0_object____PauseBgmLocal_b__0(
        BgmManager___c__DisplayClass67_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F8891C *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(_4__this, method);
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
    sub_B2C434(this, 0LL);
  return System_String__op_Equality(x->fields.bgmName, this->fields.bgmName, 0LL);
}