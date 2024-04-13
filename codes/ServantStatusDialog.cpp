void __fastcall ServantStatusDialog___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E6ECD & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_358/*"#4C4C4C"*/, v8, v9, v10);
    byte_42E6ECD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantStatusDialog_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_358/*"#4C4C4C"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_358/*"#4C4C4C"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantStatusDialog___ctor(ServantStatusDialog_o *this, const MethodInfo *method)
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
  struct System_Int32_array *v14; // x0
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42E6ECC & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v11, v12, v13);
    byte_42E6ECC = 1;
  }
  LODWORD(this->fields.titleInfo) = 1083283866;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.y = 0xBFC666663F59999ALL;
  v14 = (struct System_Int32_array *)sub_B5D5DC(bool___TypeInfo, 4LL);
  this->fields.profileNewIdList = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.profileNewIdList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voiceDataList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voicePlayer = (struct SePlayer_o *)v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voicePlayer,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Int32_array **)StringLiteral_23499/*"wait"*/;
  *(_QWORD *)&this->fields.confirmDispLv = StringLiteral_23499/*"wait"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.confirmDispLv, v35, v36, v37, v38, v39, v40, v41);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusDialog__BattleAssetLoadError(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_42E6E7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E6E7D = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.isBattlePlay = StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v12, v2, v3, v4, v5, v6, v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v14);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  ServantStatusDialog__InitBattleActor(this, v15);
}


void __fastcall ServantStatusDialog__CancelInput(ServantStatusDialog_o *this, const MethodInfo *method)
{
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  UICamera_c *v25; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x22
  UnityEngine_Object_o *last; // x19
  UnityEngine_GameObject_o *v28; // x19
  UnityEngine_Object_o *dragged; // x19
  UnityEngine_GameObject_o *v30; // x19
  Il2CppObject *v31; // x20
  UnityEngine_Object_o *current; // x19
  UnityEngine_GameObject_o *v33; // x19
  Il2CppObject *v34; // x20
  UnityEngine_GameObject_o *selectedObject; // x19
  Il2CppObject *v36; // x20
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x0
  struct UICamera_StaticFields *static_fields; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UICamera_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct UICamera_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  char v60[4]; // [xsp+4h] [xbp-3Ch] BYREF
  char v61[4]; // [xsp+8h] [xbp-38h] BYREF
  char v62[4]; // [xsp+Ch] [xbp-34h] BYREF
  char v63[4]; // [xsp+18h] [xbp-28h] BYREF
  char v64[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E6E78 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&TouchEffectManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UICamera_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_10096/*"OnDragEnd"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_10116/*"OnHover"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10146/*"OnPress"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_10155/*"OnScrollStop"*/, v22, v23, v24);
    byte_42E6E78 = 1;
  }
  v25 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v25 = UICamera_TypeInfo;
  }
  currentTouch = v25->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TouchEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    }
    TouchEffectManager__UnPress(0LL);
    currentTouch->fields.pressStarted = 0;
    last = (UnityEngine_Object_o *)currentTouch->fields.last;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(last, 0LL, 0LL) )
    {
      v28 = currentTouch->fields.last;
      if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v28, (System_String_o *)StringLiteral_10096/*"OnDragEnd"*/, 0LL, 0LL);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(dragged, 0LL, 0LL) )
    {
      v30 = currentTouch->fields.dragged;
      v64[0] = 0;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v64);
      if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v30, (System_String_o *)StringLiteral_10146/*"OnPress"*/, v31, 0LL);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(current, 0LL, 0LL) )
    {
      v33 = currentTouch->fields.current;
      v63[0] = 1;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v63);
      if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v33, (System_String_o *)StringLiteral_10116/*"OnHover"*/, v34, 0LL);
    }
  }
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  selectedObject = UICamera__get_selectedObject(0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)selectedObject, 0LL, 0LL) )
  {
    v62[0] = 0;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v62);
    if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10146/*"OnPress"*/, v36, 0LL);
    v61[0] = 1;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v61);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10116/*"OnHover"*/, v37, 0LL);
    v60[0] = 0;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v60);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10155/*"OnScrollStop"*/, v38, 0LL);
  }
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0LL, 0LL);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->current, 0LL, v40, v41, v42, v43, v44, v45);
  v46 = UICamera_TypeInfo->static_fields;
  v46->currentCamera = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v46->currentCamera, 0LL, v47, v48, v49, v50, v51, v52);
  v53 = UICamera_TypeInfo->static_fields;
  v53->currentTouch = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v53->currentTouch, 0LL, v54, v55, v56, v57, v58, v59);
  UICamera_TypeInfo->static_fields->currentTouchID = -100;
}


void __fastcall ServantStatusDialog__ChangeBattleActorSelectIndex(
        ServantStatusDialog_o *this,
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
  ServantStatusBattleListViewManager_o *voiceTabListViewManager; // x0
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x1
  Il2CppObject *current; // x20
  ServantStatusBattleListViewItem_o *Item; // x0
  const MethodInfo *v19; // x1
  __int64 DispLimitCount; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x8
  ServantStatusBattleListViewItem_o *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  __int64 index; // x1
  ServantStatusBattleListViewManager_o *v27; // x0
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E6E95 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42E6E95 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
  if ( !voiceTabListViewManager
    || (voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                            voiceTabListViewManager,
                                                                            method)) == 0LL )
  {
    sub_B5D69C(voiceTabListViewManager, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceTabListViewManager,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v15 )
      break;
    current = v29.fields.current;
    if ( !v29.fields.current )
      sub_B5D69C(v15, v16);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v29.fields.current, v16);
    if ( !Item )
      sub_B5D69C(0LL, v19);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, v19);
    v22 = *(_QWORD *)&this->fields.isModify;
    if ( !v22 )
      sub_B5D69C(DispLimitCount, v21);
    if ( (_DWORD)DispLimitCount == *(_DWORD *)(v22 + 240) )
    {
      v23 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, v21);
      if ( !v23 )
        sub_B5D69C(0LL, v24);
      index = (unsigned int)v23->fields.index;
      v27 = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
      this->fields.currentMaskType = index;
      if ( !v27 )
        sub_B5D69C(0LL, index);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v27, index, v25);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  ServantStatusListViewItem_o *svtId; // x0
  struct System_Int32_array *dispSelectList; // x21
  __int64 currentMaskType; // x8
  int32_t v18; // w20
  int32_t v19; // w21
  const MethodInfo *v20; // x2
  bool v21; // w22
  __int64 i; // x23
  SkillInfo_o *v23; // x0
  unsigned __int64 v24; // x25
  bool v25; // w22
  int32_t nowLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w0
  struct UnityEngine_Camera_o *battleChrCamera; // x24
  TreasureDvcInfo_o *v29; // x25
  TreasureDvcInfo_o *v30; // x26
  SkillInfo_array *v31; // x21
  SkillInfo_array *v32; // x23
  int32_t nextLimitCount; // w28
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v34; // x27
  __int64 v35; // x0
  const MethodInfo *v36; // [xsp+18h] [xbp-88h]
  char isSkillModify; // [xsp+2Ch] [xbp-74h]
  SkillInfo_array *v38; // [xsp+30h] [xbp-70h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-68h] BYREF
  TreasureDvcInfo_o *info; // [xsp+40h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-58h] BYREF

  v4 = dispLv;
  if ( (byte_42E6E85 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, dispLv, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ServantStatusDialog_EndBattleConfirm__, v12, v13, v14);
    byte_42E6E85 = 1;
  }
  info = 0LL;
  tdInfo = 0LL;
  v38 = 0LL;
  skillInfoList = 0LL;
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  this->fields.currentMaskType = v4;
  if ( !svtId )
    goto LABEL_38;
  if ( !svtId->fields.userSvtEntity )
  {
    ServantStatusDialog__EndBattleConfirm(this, 1, method);
    return;
  }
  dispSelectList = svtId->fields.dispSelectList;
  svtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(svtId, 0LL);
  if ( !dispSelectList )
    goto LABEL_38;
  currentMaskType = this->fields.currentMaskType;
  if ( (unsigned int)currentMaskType >= dispSelectList->max_length )
  {
LABEL_39:
    v35 = sub_B5D6C8(svtId);
    sub_B5D668(v35, 0LL);
  }
  v18 = (int)svtId;
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  v19 = dispSelectList->m_Items[currentMaskType + 1];
  ServantStatusListViewItem__GetNpInfo_34351972(svtId, &tdInfo, v18, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetNpInfo_34351972(svtId, &info, v19, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetSkillInfo_34351112(svtId, &skillInfoList, v18, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetSkillInfo_34351112(svtId, &v38, v19, 0LL);
  svtId = (ServantStatusListViewItem_o *)tdInfo;
  if ( !tdInfo )
    goto LABEL_38;
  v21 = TreasureDvcInfo__Equals(tdInfo, info, 0LL);
  for ( i = 4LL; ; ++i )
  {
    svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v24 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v24 >= svtId->fields.commandCodeCommentEntity->fields.illustratorId )
      break;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( v24 >= skillInfoList->max_length )
      goto LABEL_39;
    if ( !v38 )
      goto LABEL_38;
    if ( v24 >= v38->max_length )
      goto LABEL_39;
    v23 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
    *(_QWORD *)&dispLv = *((_QWORD *)&v38->obj.klass + i);
    if ( !v23 )
    {
      if ( !*(_QWORD *)&dispLv )
        continue;
      v23 = (SkillInfo_o *)*((_QWORD *)&v38->obj.klass + i);
      *(_QWORD *)&dispLv = 0LL;
    }
    if ( !SkillInfo__Equals(v23, *(SkillInfo_o **)&dispLv, 0LL) )
    {
      isSkillModify = 1;
LABEL_31:
      v25 = !v21;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      nowLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v18, 0LL);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v19, 0LL);
      battleChrCamera = this->fields.battleChrCamera;
      v30 = info;
      v29 = tdInfo;
      v32 = v38;
      v31 = skillInfoList;
      nextLimitCount = LimitCountByImageLimitCostumeIn;
      v34 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_B5D694(ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
      ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
        v34,
        (Il2CppObject *)this,
        Method_ServantStatusDialog_EndBattleConfirm__,
        0LL);
      svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
      if ( svtId )
      {
        svtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(svtId, 0LL);
        if ( battleChrCamera )
        {
          ServantStatusBattleConfirmDialog__Open(
            (ServantStatusBattleConfirmDialog_o *)battleChrCamera,
            v29,
            v30,
            v25,
            v31,
            v32,
            isSkillModify,
            v34,
            (int32_t)svtId,
            nowLimitCount,
            nextLimitCount,
            v36);
          return;
        }
      }
LABEL_38:
      sub_B5D69C(svtId, *(_QWORD *)&dispLv);
    }
  }
  if ( !v21 )
  {
    isSkillModify = 0;
    goto LABEL_31;
  }
  ServantStatusDialog__SetChangeBattleResource(this, 0, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleVoice(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21

  v5 = this;
  if ( (byte_42E6EAF & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, type, (_DWORD)method, v3);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    byte_42E6EAF = 1;
  }
  v9 = *(_QWORD *)&v5->fields.isModify;
  if ( !v9
    || (*(_DWORD *)(v9 + 320) = type, (this = (ServantStatusDialog_o *)v5->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)this, 4, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager,
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)v5,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B5D69C(this, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeCommandResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
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
  __int64 v24; // x8
  __int64 v25; // x8
  int32_t v26; // w20
  int32_t v27; // w21
  System_String_o **p_loadVoiceData; // x20
  System_Int32_array **v29; // x21
  System_String_o *v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *loadVoiceData; // x21
  AssetLoader_LoadEndDataHandler_o *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v46; // x21

  v5 = this;
  if ( (byte_42E6EAD & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, dispLv, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ServantStatusDialog_EndCardLoad__, v15, v16, v17);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v18, v19, v20);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    byte_42E6EAD = 1;
  }
  v24 = *(_QWORD *)&v5->fields.isModify;
  if ( !v24 )
    goto LABEL_25;
  *(_DWORD *)(v24 + 256) = dispLv;
  this = *(ServantStatusDialog_o **)&v5->fields.isModify;
  if ( !this )
    goto LABEL_25;
  this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)this, 0LL);
  v25 = *(_QWORD *)&v5->fields.isModify;
  if ( !v25 )
    goto LABEL_25;
  v26 = (int)this;
  v27 = *(_DWORD *)(v25 + 256);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  this = (ServantStatusDialog_o *)ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(v26, v27, 0LL);
  if ( !this )
    goto LABEL_25;
  p_loadVoiceData = &v5->fields.loadVoiceData;
  v29 = (System_Int32_array **)this;
  if ( System_String__Equals_44565128((System_String_o *)this, v5->fields.loadVoiceData, 0LL) )
  {
LABEL_22:
    this = (ServantStatusDialog_o *)v5->fields.profileTabListViewManager;
    if ( this )
    {
      ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)this, 4, 0LL);
      profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager;
      v46 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v46,
        (Il2CppObject *)v5,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v46, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B5D69C(this, *(_QWORD *)&dispLv);
  }
  if ( !System_String__IsNullOrEmpty(*p_loadVoiceData, 0LL) )
  {
    v30 = *p_loadVoiceData;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v30, 0LL);
  }
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_25;
  CommonUI__SetLoadMode((CommonUI_o *)this, 1, 0LL);
  v5->fields.loadVoiceData = (struct System_String_o *)v29;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.loadVoiceData, v29, v31, v32, v33, v34, v35, v36);
  loadVoiceData = v5->fields.loadVoiceData;
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v38, (Il2CppObject *)v5, Method_ServantStatusDialog_EndCardLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(loadVoiceData, v38, 1, 0LL) )
  {
    v5->fields.loadVoiceData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v5->fields.loadVoiceData, 0LL, v39, v40, v41, v42, v43, v44);
    goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeFaceResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21

  v5 = this;
  if ( (byte_42E6EB3 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, dispLv, (_DWORD)method, v3);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    byte_42E6EB3 = 1;
  }
  v9 = *(_QWORD *)&v5->fields.isModify;
  if ( !v9
    || (*(_DWORD *)(v9 + 280) = dispLv, (this = (ServantStatusDialog_o *)v5->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)this, 5, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager,
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)v5,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B5D69C(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangePortraitResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21

  v5 = this;
  if ( (byte_42E6EB6 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, dispLv, (_DWORD)method, v3);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    byte_42E6EB6 = 1;
  }
  v9 = *(_QWORD *)&v5->fields.isModify;
  if ( !v9
    || (*(_DWORD *)(v9 + 296) = dispLv, (this = (ServantStatusDialog_o *)v5->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)this, 7, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager,
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)v5,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B5D69C(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeTreasureDeviceSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v10; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_42E6EAE & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    byte_42E6EAE = 1;
  }
  profileTabListViewManager = *(struct ServantStatusFlavorTextListViewManager_o **)&this->fields.isModify;
  if ( !profileTabListViewManager
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(
          (ServantStatusListViewItem_o *)profileTabListViewManager,
          type,
          0LL),
        (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33243376(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          4,
          0LL),
        v10 = this->fields.profileTabListViewManager,
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v10) )
  {
    sub_B5D69C(profileTabListViewManager, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v10, 1, v11, 0LL);
}


void __fastcall ServantStatusDialog__Close(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
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
  ServantStatusListViewManager_o *profileTabListViewManager; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *cardLoadAsset; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_o *loadVoiceData; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x1
  System_String_o *v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_o *changeSvtVoiceIdList; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E6E93 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&SoundManager_TypeInfo, v27, v28, v29);
    byte_42E6E93 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.profileTabListViewManager;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  ServantStatusListViewManager__DestroyList(profileTabListViewManager, 0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.battleTabListViewManager;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  ServantStatusFlavorTextListViewManager__DestroyList(
    (ServantStatusFlavorTextListViewManager_o *)profileTabListViewManager,
    0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.servantStatusBattleConfirmDialog;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  ServantStatusCharaGraphListViewManager__DestroyList(
    (ServantStatusCharaGraphListViewManager_o *)profileTabListViewManager,
    (const MethodInfo *)callback);
  *(_QWORD *)&this->fields.isModify = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.isModify, 0LL, v31, v32, v33, v34, v35, v36);
  if ( !System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
  {
    cardLoadAsset = this->fields.cardLoadAsset;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(cardLoadAsset, 0LL);
    this->fields.cardLoadAsset = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.cardLoadAsset, 0LL, v38, v39, v40, v41, v42, v43);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.loadVoiceData, 0LL) )
  {
    loadVoiceData = this->fields.loadVoiceData;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(loadVoiceData, 0LL);
    this->fields.loadVoiceData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.loadVoiceData, 0LL, v45, v46, v47, v48, v49, v50);
  }
  if ( !System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.isBattlePlay, 0LL) )
  {
    v52 = *(System_String_o **)&this->fields.isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v52, 0LL);
    *(_QWORD *)&this->fields.isBattlePlay = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.isBattlePlay, 0LL, v53, v54, v55, v56, v57, v58);
  }
  ServantStatusDialog__StopVoice(this, v51);
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)profileTabListViewManager,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
  changeSvtVoiceIdList = (System_String_o *)this->fields.changeSvtVoiceIdList;
  if ( changeSvtVoiceIdList )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(changeSvtVoiceIdList, 0LL);
    this->fields.changeSvtVoiceIdList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList, 0LL, v60, v61, v62, v63, v64, v65);
  }
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voicePlayer;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  if ( SLODWORD(profileTabListViewManager->fields.scrollView) >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v67,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)profileTabListViewManager,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v67,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v67.fields.current;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v67,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voicePlayer;
    if ( profileTabListViewManager )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)profileTabListViewManager,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
      goto LABEL_37;
    }
LABEL_42:
    sub_B5D69C(profileTabListViewManager, callback);
  }
LABEL_37:
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.statusTabBase;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabListViewManager, 0, 0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !profileTabListViewManager )
    goto LABEL_42;
  AtlasManager__ReleaseUISkin((AtlasManager_o *)profileTabListViewManager, 2, 0, 0LL);
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__EndBattleConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusBattleConfirmDialog_o *battleChrCamera; // x0
  struct System_Int32_array *profileNewIdList; // x8
  const MethodInfo *v7; // x2
  __int64 v8; // x0

  battleChrCamera = (ServantStatusBattleConfirmDialog_o *)this->fields.battleChrCamera;
  if ( !battleChrCamera )
    goto LABEL_8;
  ServantStatusBattleConfirmDialog__Close_22125244(battleChrCamera, 0LL, method);
  if ( isDecide )
  {
    profileNewIdList = this->fields.profileNewIdList;
    if ( profileNewIdList )
    {
      if ( !profileNewIdList->max_length )
      {
        v8 = sub_B5D6C8(battleChrCamera);
        sub_B5D668(v8, 0LL);
      }
      LOBYTE(profileNewIdList->m_Items[1]) = 0;
      battleChrCamera = (ServantStatusBattleConfirmDialog_o *)this->fields.profileTabListViewManager;
      if ( battleChrCamera )
      {
        ServantStatusListViewManager__DestroyList((ServantStatusListViewManager_o *)battleChrCamera, 0LL);
        ServantStatusDialog__SetChangeBattleResource(this, 1, v7);
        return;
      }
    }
LABEL_8:
    sub_B5D69C(battleChrCamera, isDecide);
  }
}


void __fastcall ServantStatusDialog__EndCardLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21

  if ( (byte_42E6EB0 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E6EB0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( System_String__IsNullOrEmpty(this->fields.loadVoiceData, 0LL) )
    return;
  Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        profileTabListViewManager = this->fields.profileTabListViewManager,
        v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
LABEL_8:
    sub_B5D69C(Instance, v12);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v14, 0LL);
}


void __fastcall ServantStatusDialog__EndChangeBattleResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  ServantStatusListViewItem_o *Instance; // x0
  int32_t ConvertOverwriteDispImageLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w20
  ServantLimitImageMaster_o *v15; // x21
  ServantStatusListViewItem_o *v16; // x8
  BattleFBXComponent_o *v17; // x19
  int32_t v18; // w20

  if ( (byte_42E6E88 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6E88 = 1;
  }
  LOBYTE(this->fields.battleActor) = 0;
  ServantStatusDialog__PlayBattleEffect(this, 1, v2);
  Instance = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !Instance )
    goto LABEL_13;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          Instance,
                                          0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0LL);
  Instance = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !*(_QWORD *)&this->fields.isModify
    || (v15 = (ServantLimitImageMaster_o *)Instance,
        Instance = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(
                                                    *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                    0LL),
        !v15)
    || (Instance = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v15,
                                                    (int32_t)Instance,
                                                    LimitCountByImageLimitCostumeIn,
                                                    0LL),
        (v16 = *(ServantStatusListViewItem_o **)&this->fields.isModify) == 0LL)
    || (v17 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading,
        v18 = (int)Instance,
        Instance = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(v16, 0LL),
        !v17) )
  {
LABEL_13:
    sub_B5D69C(Instance, v11);
  }
  BattleFBXComponent__SetEvolutionLevel(v17, (int32_t)Instance, v18, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseConfirmSelectFavorite(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog__EndCloseConfirmSelectPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog__EndCloseConfirmServantQuest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog__EndCloseSelectCommandCodeStatus(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E6E9E & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v5, v6, v7);
    byte_42E6E9E = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    sub_B5D69C(v10, v11);
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v9, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E6E9C & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v5, v6, v7);
    byte_42E6E9C = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    sub_B5D69C(v10, v11);
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v9, 0LL);
}


void __fastcall ServantStatusDialog__EndInitLoad(ServantStatusDialog_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *statusTabBase; // x0
  __int64 v69; // x8
  int32_t v70; // w20
  int v71; // w8
  __int64 v72; // x8
  int32_t v73; // w20
  __int64 v74; // x8
  int v75; // w8
  bool v76; // w8
  bool v77; // w8
  int v78; // w8
  int v79; // w8
  bool v80; // zf
  unsigned __int64 v81; // x8
  struct System_Int32_array *profileNewIdList; // x9
  char *v83; // x9
  bool v84; // cf
  __int64 v85; // x8
  ServantCommentMaster_o *v86; // x21
  struct ServantStatusListViewItem_o *NewProfileEntities; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct ServantStatusListViewItem_o *mainInfo; // x8
  const MethodInfo *v95; // x1
  __int64 v96; // x8
  CommandCodeEntity_o *v97; // x0
  UIRangeLabel_o *v98; // x21
  UnityEngine_Object_o *v99; // x21
  const MethodInfo *v100; // x2
  UILabel_o *v101; // x21
  __int64 *v102; // x8
  System_String_o *v103; // x1
  UILabel_o *v104; // x0
  ServantLimitAddMaster_o *v105; // x21
  int v106; // w8
  char v107; // w21
  System_String_o *Name; // x22
  __int64 v109; // x8
  __int64 v110; // x8
  __int64 v111; // x8
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v114; // x22
  __int64 v115; // x8
  int32_t v116; // w2
  int32_t v117; // w1
  _QWORD *v118; // x9
  __int64 v119; // x0
  int32_t v120; // w21
  int32_t v121; // w21
  ServantLimitImageMaster_o *v122; // x22
  __int64 v123; // x8
  int32_t v124; // w2
  __int64 v125; // x8
  struct UILabel_o *servantClassNameLabel; // x22
  int32_t v127; // w1
  int32_t v128; // w2
  __int64 v129; // x9
  System_String_o *v130; // x1
  ServantLimitImageMaster_o *v131; // x21
  __int64 v132; // x8
  __int64 v133; // x8
  struct UILabel_o *v134; // x21
  UnityEngine_GameObject_o *v135; // x22
  __int64 v136; // x23
  __int64 v137; // x24
  int32_t v138; // w1
  UnityEngine_Object_o *battleExplanationLabel; // x21
  __int64 v140; // x8
  UILabel_o *v141; // x21
  __int64 v142; // x8
  UnityEngine_Object_o *markBase; // x21
  __int64 v144; // x8
  ServantLimitImageMaster_o *v145; // x21
  struct UnityEngine_GameObject_o *v146; // x22
  __int64 v147; // x8
  __int64 v148; // x8
  __int64 v149; // x22
  __int64 v150; // x23
  int32_t v151; // w22
  struct UnityEngine_GameObject_o *v152; // x23
  System_String_o *klass; // x25
  System_String_o *v154; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v156; // x0
  const MethodInfo *v157; // x1
  const MethodInfo *v158; // x2
  int v159; // w8
  unsigned int v160; // w8
  const MethodInfo *v161; // x1
  unsigned int v162; // w8
  __int64 v163; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16

  if ( (byte_42E6E76 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&OptionManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_12104/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_12103/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_12105/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_12106/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_12111/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_12110/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_3627/*"CancelInput"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_1/*""*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_6041/*"EndLoadInit"*/, v65, v66, v67);
    byte_42E6E76 = 1;
  }
  statusTabBase = this->fields.statusTabBase;
  if ( !statusTabBase )
    goto LABEL_219;
  UnityEngine_GameObject__SetActive(statusTabBase, 1, 0LL);
  v69 = *(_QWORD *)&this->fields.isModify;
  if ( !v69 )
    goto LABEL_219;
  if ( *(_QWORD *)(v69 + 176) )
  {
    switch ( *(_DWORD *)&this->fields.isInitTab )
    {
      case 3:
      case 0x15:
        v70 = 0;
        v71 = 21;
        break;
      case 4:
      case 0x16:
        v70 = 0;
        v71 = 22;
        break;
      case 5:
      case 0x17:
        v70 = 0;
        v71 = 23;
        break;
      case 6:
      case 0x18:
        v70 = 0;
        v71 = 24;
        break;
      case 7:
      case 0x19:
        v70 = 0;
        v71 = 25;
        break;
      case 8:
      case 0x1A:
        v70 = 0;
        v71 = 26;
        break;
      case 9:
      case 0x1B:
        v70 = 0;
        v71 = 27;
        break;
      case 0x1D:
      case 0x20:
        v70 = 0;
        v71 = 32;
        break;
      default:
        v70 = 0;
        v71 = 20;
        break;
    }
    goto LABEL_52;
  }
  v72 = *(_QWORD *)(v69 + 128);
  if ( !v72 )
    goto LABEL_219;
  v73 = *(_DWORD *)(v72 + 84);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  statusTabBase = (UnityEngine_GameObject_o *)TutorialFlag__Get_29295864(106, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) == 0 )
    goto LABEL_17;
  v74 = *(_QWORD *)&this->fields.isModify;
  if ( !v74 )
    goto LABEL_219;
  if ( *(__int64 *)(v74 + 160) >= 1
    && SvtType__IsOrganization(v73, 0LL)
    && (v75 = *(_DWORD *)&this->fields.isInitTab, v75 != 3) )
  {
    v76 = v75 != 12;
  }
  else
  {
LABEL_17:
    v76 = 0;
  }
  LOBYTE(this->fields.newProfileList) = v76;
  v77 = SvtType__IsOrganization(v73, 0LL) && *(_DWORD *)&this->fields.isInitTab != 12;
  BYTE1(this->fields.newProfileList) = v77;
  statusTabBase = (UnityEngine_GameObject_o *)SvtType__IsEnemyCollectionDetail(v73, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) != 0 )
  {
    v70 = 0;
    v71 = 28;
LABEL_52:
    *(_DWORD *)&this->fields.isInitTab = v71;
    goto LABEL_53;
  }
  statusTabBase = (UnityEngine_GameObject_o *)SvtType__IsServantEquip(v73, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) != 0 )
  {
    v78 = *(_DWORD *)&this->fields.isInitTab;
    switch ( v78 )
    {
      case 3:
      case 12:
        v70 = 0;
        v71 = 12;
        break;
      case 4:
      case 13:
        v70 = 0;
        v71 = 13;
        break;
      case 5:
      case 14:
        v70 = 0;
        v71 = 14;
        break;
      case 6:
      case 15:
        v70 = 0;
        v71 = 15;
        break;
      case 7:
      case 16:
        v70 = 0;
        v71 = 16;
        break;
      case 8:
      case 17:
        v70 = 0;
        v71 = 17;
        break;
      case 9:
      case 18:
        v70 = 0;
        v71 = 18;
        break;
      case 19:
        v70 = 0;
        v71 = 19;
        break;
      case 29:
      case 31:
        v70 = 0;
        v71 = 31;
        break;
      default:
        v80 = v78 == 33;
        v71 = 11;
        v70 = v80;
        break;
    }
    goto LABEL_52;
  }
  statusTabBase = (UnityEngine_GameObject_o *)SvtType__IsServant(v73, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) == 0 )
  {
    v79 = *(_DWORD *)&this->fields.isInitTab;
    if ( v79 != 36 )
    {
      v70 = 0;
      if ( v79 == 29 )
        v71 = 30;
      else
        v71 = 10;
      goto LABEL_52;
    }
  }
  v70 = 0;
LABEL_53:
  v81 = 0LL;
  do
  {
    profileNewIdList = this->fields.profileNewIdList;
    if ( !profileNewIdList )
      goto LABEL_219;
    if ( v81 >= profileNewIdList->max_length )
    {
      v163 = sub_B5D6C8(statusTabBase);
      sub_B5D668(v163, 0LL);
    }
    v83 = (char *)profileNewIdList + v81;
    v84 = v81++ >= 3;
    v83[32] = 0;
  }
  while ( !v84 );
  v85 = *(_QWORD *)&this->fields.isModify;
  if ( !v85 )
    goto LABEL_219;
  if ( *(_QWORD *)(v85 + 80) )
  {
    statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !statusTabBase )
      goto LABEL_219;
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)statusTabBase,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !*(_QWORD *)&this->fields.isModify )
      goto LABEL_219;
    v86 = (ServantCommentMaster_o *)statusTabBase;
    statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                  *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                  0LL);
    if ( !v86 )
      goto LABEL_219;
    NewProfileEntities = (struct ServantStatusListViewItem_o *)ServantCommentMaster__GetNewProfileEntities(
                                                                 v86,
                                                                 (int32_t)statusTabBase,
                                                                 0LL);
    this->fields.mainInfo = NewProfileEntities;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mainInfo,
      (System_Int32_array **)NewProfileEntities,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_219;
    statusTabBase = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !statusTabBase )
      goto LABEL_219;
    ShiningIconComponent__Set_33897340(
      (ShiningIconComponent_o *)statusTabBase,
      SLODWORD(mainInfo->fields.partyItem) > 0,
      0LL);
  }
  else
  {
    statusTabBase = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !statusTabBase )
      goto LABEL_219;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)statusTabBase, 0LL);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v95);
  statusTabBase = this->fields.baseObject;
  if ( !statusTabBase )
    goto LABEL_219;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)statusTabBase, 0LL, 1, 0LL, 0, 0LL);
  statusTabBase = this->fields.baseObject;
  if ( !statusTabBase )
    goto LABEL_219;
  TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)statusTabBase, 1, 0, 0, 0LL);
  v96 = *(_QWORD *)&this->fields.isModify;
  if ( !v96 )
    goto LABEL_219;
  v97 = *(CommandCodeEntity_o **)(v96 + 176);
  if ( !v97 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !*(_QWORD *)&this->fields.isModify )
      goto LABEL_219;
    v105 = (ServantLimitAddMaster_o *)statusTabBase;
    statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                  *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                  0LL);
    if ( !v105 )
      goto LABEL_219;
    statusTabBase = (UnityEngine_GameObject_o *)ServantLimitAddMaster__IsOverwriteSvtDetailName(
                                                  v105,
                                                  (int32_t)statusTabBase,
                                                  0LL);
    v106 = *(_DWORD *)&this->fields.isInitTab;
    v107 = (char)statusTabBase;
    if ( (v106 & 0xFFFFFFFE) == 4 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      statusTabBase = (UnityEngine_GameObject_o *)OptionManager__GetSpoilerSetting(0LL);
      if ( ((unsigned __int8)statusTabBase & 1) == 0 )
      {
        v109 = *(_QWORD *)&this->fields.isModify;
        if ( !v109 )
          goto LABEL_219;
        v110 = *(_QWORD *)(v109 + 88);
        if ( !v110 )
          goto LABEL_219;
        Name = *(System_String_o **)(v110 + 248);
      }
      statusTabBase = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(Name, 0LL);
      if ( ((unsigned __int8)statusTabBase & 1) != 0 )
      {
        v111 = *(_QWORD *)&this->fields.isModify;
        if ( !v111 )
          goto LABEL_219;
        if ( (v107 & 1) != 0 )
        {
          statusTabBase = *(UnityEngine_GameObject_o **)(v111 + 88);
          if ( !statusTabBase )
            goto LABEL_219;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)statusTabBase, 0LL);
          if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ImageLimitCount_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          }
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              CardImageLimitCount,
                                              0LL);
          statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !statusTabBase )
            goto LABEL_219;
          statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)statusTabBase,
                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !*(_QWORD *)&this->fields.isModify )
            goto LABEL_219;
          v114 = (ServantLimitImageMaster_o *)statusTabBase;
          statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                        *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                        0LL);
          if ( !v114 )
            goto LABEL_219;
          statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                        v114,
                                                        (int32_t)statusTabBase,
                                                        LimitCountByImageLimitCostumeIn,
                                                        0LL);
          v115 = *(_QWORD *)&this->fields.isModify;
          if ( !v115 )
            goto LABEL_219;
          v116 = (int)statusTabBase;
          statusTabBase = *(UnityEngine_GameObject_o **)(v115 + 128);
          if ( !statusTabBase )
            goto LABEL_219;
          v117 = -1;
        }
        else
        {
          v129 = *(_QWORD *)(v111 + 88);
          if ( !v129 )
            goto LABEL_219;
          statusTabBase = *(UnityEngine_GameObject_o **)(v111 + 128);
          if ( !statusTabBase )
            goto LABEL_219;
          v117 = *(_DWORD *)(v129 + 64);
          v116 = -1;
        }
        Name = ServantEntity__getName((ServantEntity_o *)statusTabBase, v117, v116, 0LL);
      }
      statusTabBase = (UnityEngine_GameObject_o *)this->fields.servantClassNameLabel;
      if ( !statusTabBase )
        goto LABEL_219;
      v130 = Name;
      goto LABEL_157;
    }
    if ( (unsigned int)(v106 - 6) <= 2 )
    {
      v125 = *(_QWORD *)&this->fields.isModify;
      if ( !v125 )
        goto LABEL_219;
      statusTabBase = *(UnityEngine_GameObject_o **)(v125 + 128);
      if ( !statusTabBase )
        goto LABEL_219;
      servantClassNameLabel = this->fields.servantClassNameLabel;
      if ( (v107 & 1) != 0 )
      {
        v127 = -1;
        v128 = 0;
      }
      else
      {
        v128 = -1;
        v127 = 0;
      }
      statusTabBase = (UnityEngine_GameObject_o *)ServantEntity__getName(
                                                    (ServantEntity_o *)statusTabBase,
                                                    v127,
                                                    v128,
                                                    0LL);
      if ( !servantClassNameLabel )
        goto LABEL_219;
      v130 = (System_String_o *)statusTabBase;
      statusTabBase = (UnityEngine_GameObject_o *)servantClassNameLabel;
      goto LABEL_157;
    }
    v118 = *(_QWORD **)&this->fields.isModify;
    if ( !v118 )
      goto LABEL_219;
    v119 = v118[7];
    if ( v119 )
    {
      if ( (v107 & 1) == 0 )
      {
        v134 = this->fields.servantClassNameLabel;
        v135 = (UnityEngine_GameObject_o *)v118[16];
        v137 = *(_QWORD *)(v119 + 96);
        v136 = *(_QWORD *)(v119 + 104);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v164.fields.currentCryptoKey = v137;
        *(_QWORD *)&v164.fields.fakeValue = v136;
        statusTabBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                      v164,
                                                      0LL);
        if ( !v135 )
          goto LABEL_219;
        v138 = (int)statusTabBase;
        v124 = -1;
        statusTabBase = v135;
        goto LABEL_155;
      }
      v120 = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)v119, 0, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      v121 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v120, 0LL);
      statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !statusTabBase )
        goto LABEL_219;
      statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)statusTabBase,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !*(_QWORD *)&this->fields.isModify )
        goto LABEL_219;
      v122 = (ServantLimitImageMaster_o *)statusTabBase;
      statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                    *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                    0LL);
      if ( !v122 )
        goto LABEL_219;
      statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v122,
                                                    (int32_t)statusTabBase,
                                                    v121,
                                                    0LL);
      v123 = *(_QWORD *)&this->fields.isModify;
      if ( !v123 )
        goto LABEL_219;
      v124 = (int)statusTabBase;
      statusTabBase = *(UnityEngine_GameObject_o **)(v123 + 128);
      if ( !statusTabBase )
        goto LABEL_219;
    }
    else
    {
      if ( (v107 & 1) == 0 )
      {
        statusTabBase = (UnityEngine_GameObject_o *)v118[16];
        if ( !statusTabBase )
          goto LABEL_219;
        v134 = this->fields.servantClassNameLabel;
        v138 = -1;
        v124 = -1;
        goto LABEL_155;
      }
      if ( v118[10] )
      {
        statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !statusTabBase )
          goto LABEL_219;
        statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)statusTabBase,
                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !*(_QWORD *)&this->fields.isModify )
          goto LABEL_219;
        v131 = (ServantLimitImageMaster_o *)statusTabBase;
        statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                      *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                      0LL);
        v132 = *(_QWORD *)&this->fields.isModify;
        if ( !v132 )
          goto LABEL_219;
        v133 = *(_QWORD *)(v132 + 80);
        if ( !v133 )
          goto LABEL_219;
        if ( !v131 )
          goto LABEL_219;
        statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                      v131,
                                                      (int32_t)statusTabBase,
                                                      *(_DWORD *)(v133 + 56),
                                                      0LL);
        v118 = *(_QWORD **)&this->fields.isModify;
        if ( !v118 )
          goto LABEL_219;
        v124 = (int)statusTabBase;
      }
      else
      {
        v124 = 0;
      }
      statusTabBase = (UnityEngine_GameObject_o *)v118[16];
      if ( !statusTabBase )
        goto LABEL_219;
    }
    v134 = this->fields.servantClassNameLabel;
    v138 = -1;
LABEL_155:
    statusTabBase = (UnityEngine_GameObject_o *)ServantEntity__getName(
                                                  (ServantEntity_o *)statusTabBase,
                                                  v138,
                                                  v124,
                                                  0LL);
    if ( !v134 )
      goto LABEL_219;
    v130 = (System_String_o *)statusTabBase;
    statusTabBase = (UnityEngine_GameObject_o *)v134;
LABEL_157:
    UIRangeLabel__Set((UIRangeLabel_o *)statusTabBase, v130, 0LL, 1, 0, 0LL);
    battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    statusTabBase = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(battleExplanationLabel, 0LL, 0LL);
    if ( ((unsigned __int8)statusTabBase & 1) != 0 )
    {
      v140 = *(_QWORD *)&this->fields.isModify;
      if ( !v140 )
        goto LABEL_219;
      statusTabBase = *(UnityEngine_GameObject_o **)(v140 + 128);
      if ( !statusTabBase )
        goto LABEL_219;
      v141 = this->fields.battleExplanationLabel;
      statusTabBase = (UnityEngine_GameObject_o *)ServantEntity__get_IsServantEquip(
                                                    (ServantEntity_o *)statusTabBase,
                                                    0LL);
      if ( ((unsigned __int8)statusTabBase & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        statusTabBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_12111/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/,
                                                      0LL);
      }
      else
      {
        v142 = *(_QWORD *)&this->fields.isModify;
        if ( !v142 )
          goto LABEL_219;
        statusTabBase = *(UnityEngine_GameObject_o **)(v142 + 128);
        if ( !statusTabBase )
          goto LABEL_219;
        statusTabBase = (UnityEngine_GameObject_o *)ServantEntity__getClassName((ServantEntity_o *)statusTabBase, 0LL);
      }
      method = (const MethodInfo *)statusTabBase;
      if ( !v141 )
        goto LABEL_219;
      UILabel__set_text(v141, (System_String_o *)statusTabBase, 0LL);
    }
    markBase = (UnityEngine_Object_o *)this->fields.markBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(markBase, 0LL, 0LL) )
      goto LABEL_195;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v144 = *(_QWORD *)&this->fields.isModify;
    if ( v144 )
    {
      if ( !*(_QWORD *)(v144 + 56) )
      {
        v101 = (UILabel_o *)this->fields.markBase;
        if ( *(_QWORD *)(v144 + 80) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v102 = &StringLiteral_12104/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v102 = &StringLiteral_12105/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
        }
        goto LABEL_81;
      }
      v145 = (ServantLimitImageMaster_o *)statusTabBase;
      v146 = this->fields.markBase;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      statusTabBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12103/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0LL);
      if ( v146 )
      {
        UILabel__set_text((UILabel_o *)v146, (System_String_o *)statusTabBase, 0LL);
        v147 = *(_QWORD *)&this->fields.isModify;
        if ( v147 )
        {
          v148 = *(_QWORD *)(v147 + 56);
          if ( v148 )
          {
            v150 = *(_QWORD *)(v148 + 80);
            v149 = *(_QWORD *)(v148 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v165.fields.currentCryptoKey = v150;
            *(_QWORD *)&v165.fields.fakeValue = v149;
            statusTabBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                          v165,
                                                          0LL);
            if ( v145 )
            {
              v151 = (int)statusTabBase;
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v145, (int32_t)statusTabBase, 3, 0LL) )
              {
                statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                              v145,
                                                              (System_String_o *)StringLiteral_12106/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                                                              v151,
                                                              0LL);
                v152 = this->fields.markBase;
                if ( !v152 )
                  goto LABEL_219;
                klass = (System_String_o *)v152[17].klass;
                v154 = (System_String_o *)statusTabBase;
                LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                v145,
                                                                v151,
                                                                3,
                                                                0LL);
                v156 = System_String__Format(v154, LimitCountSealedServantName, 0LL);
                v103 = System_String__Concat_44577788(klass, v156, 0LL);
                v104 = (UILabel_o *)v152;
                goto LABEL_83;
              }
              goto LABEL_195;
            }
          }
        }
      }
    }
LABEL_219:
    sub_B5D69C(statusTabBase, method);
  }
  v98 = (UIRangeLabel_o *)this->fields.servantClassNameLabel;
  statusTabBase = (UnityEngine_GameObject_o *)CommandCodeEntity__GetName(v97, 0LL);
  if ( !v98 )
    goto LABEL_219;
  UIRangeLabel__Set(v98, (System_String_o *)statusTabBase, 0LL, 1, 0, 0LL);
  v99 = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v99, 0LL, 0LL) )
  {
    v101 = this->fields.battleExplanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v102 = &StringLiteral_12110/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/;
LABEL_81:
    statusTabBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v102, 0LL);
    if ( !v101 )
      goto LABEL_219;
    v103 = (System_String_o *)statusTabBase;
    v104 = v101;
LABEL_83:
    UILabel__set_text(v104, v103, 0LL);
  }
LABEL_195:
  statusTabBase = (UnityEngine_GameObject_o *)this->fields.servantStatusBattleConfirmDialog;
  if ( !statusTabBase )
    goto LABEL_219;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)statusTabBase,
    *(ServantStatusListViewItem_o **)&this->fields.isModify,
    v100);
  ServantStatusDialog__SetMark(this, v157);
  v159 = *(_DWORD *)&this->fields.isInitTab;
  if ( v159 > 28 )
  {
    v160 = v159 - 30;
    if ( v160 < 7 )
    {
      v70 = dword_32A1390[v160];
      goto LABEL_204;
    }
LABEL_202:
    v70 = 0;
    goto LABEL_204;
  }
  if ( v159 == 10 )
  {
    v70 = 1;
    goto LABEL_204;
  }
  if ( v159 != 11 )
  {
    v70 = 1;
    if ( v159 != 28 )
      goto LABEL_202;
  }
LABEL_204:
  ServantStatusDialog__SetTabKind(this, v70, v158);
  v162 = *(_DWORD *)&this->fields.isInitTab;
  LOBYTE(this->fields.battleActor) = 0;
  if ( v162 - 10 < 0x13 || v162 <= 0x24 && ((1LL << v162) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6041/*"EndLoadInit"*/,
      0.1,
      0LL);
  else
    ServantStatusDialog__StartStatusLoad(this, v161);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_3627/*"CancelInput"*/,
    0.0,
    0LL);
}


void __fastcall ServantStatusDialog__EndLoadBattle(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42E6E80 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6E80 = 1;
  }
  LOBYTE(this->fields.defaultAnimationName) = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( *(_QWORD *)&this->fields.isBattlePlay )
    ServantStatusDialog__EndLoadBattle_22191848(this, v7);
}


void __fastcall ServantStatusDialog__EndLoadBattle_22191848(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  RandomLimitCountManager_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_42E6E81 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E6E81 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E6BE7 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount )
  {
    v6 = *(_QWORD *)&this->fields.isModify;
    if ( !v6 )
      sub_B5D69C(v5, method);
    if ( !*(_BYTE *)(v6 + 192) )
      LOBYTE(this->fields.battleActor) = 0;
  }
  ServantStatusDialog__PlayBattleEffect(this, 0, v2);
}


void __fastcall ServantStatusDialog__EndLoadChangeBattleResource(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42E6E87 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6E87 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  ServantStatusDialog__EndChangeBattleResource(this, v7);
}


void __fastcall ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
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
  CommonUI_o *Instance; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1

  if ( (byte_42E6E79 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_13664/*"TUTORIAL_MESSAGE_FAVORITE1"*/, v11, v12, v13);
    byte_42E6E79 = 1;
  }
  if ( LOBYTE(this->fields.newProfileList) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29295864(106, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13664/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0LL);
      if ( !Instance )
        sub_B5D69C(v15, v16);
      CommonUI__OpenTutorialNotificationDialog(Instance, v15, 106, 0LL, 0LL);
    }
  }
  ServantStatusDialog__InitList(this, method);
}


void __fastcall ServantStatusDialog__EndLoadVoice(ServantStatusDialog_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *changeSvtVoiceIdList; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *voicePlayer; // x0
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
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  struct System_Int32_array *v41; // x1
  System_String_o *v42; // x20
  System_Action_o *v43; // x21

  if ( (byte_42E6E8B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__RemoveAt__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_ServantStatusDialog_EndLoadVoice__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SoundManager_TypeInfo, v23, v24, v25);
    byte_42E6E8B = 1;
  }
  changeSvtVoiceIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.changeSvtVoiceIdList;
  if ( changeSvtVoiceIdList )
  {
    voicePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.voicePlayer;
    if ( voicePlayer )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        voicePlayer,
        changeSvtVoiceIdList,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      this->fields.changeSvtVoiceIdList = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList, 0LL, v28, v29, v30, v31, v32, v33);
      voiceDataList = this->fields.voiceDataList;
      if ( voiceDataList )
      {
        if ( voiceDataList->fields._size < 1 )
        {
          voicePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( voicePlayer )
          {
            CommonUI__SetLoadMode((CommonUI_o *)voicePlayer, 0, 0LL);
            return;
          }
        }
        else
        {
          v41 = (struct System_Int32_array *)voiceDataList->fields._items->m_Items[0];
          this->fields.changeSvtVoiceIdList = v41;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList,
            (System_Int32_array **)v41,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          voicePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.voiceDataList;
          if ( voicePlayer )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)voicePlayer,
              0,
              (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            v42 = (System_String_o *)this->fields.changeSvtVoiceIdList;
            v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v43, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__loadAudioAssetStorage(v42, v43, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(voicePlayer, changeSvtVoiceIdList);
  }
}


void __fastcall ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndPlayVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x8
  int v18; // w9
  int v19; // w10
  __int64 v20; // x8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x0

  if ( (byte_42E6E8F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6067/*"EndWaitVoice"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E6E8F = 1;
  }
  this->fields.voicePlayList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.voicePlayList, 0LL, v2, v3, v4, v5, v6, v7);
  v17 = *(_QWORD *)&this->fields.voicePlayNum;
  if ( v17 )
  {
    v18 = LODWORD(this->fields.voicePlayAssetName) + 1;
    LODWORD(this->fields.voicePlayAssetName) = v18;
    v19 = *(_DWORD *)(v17 + 24);
    if ( v18 < v19 )
    {
      if ( v18 >= (unsigned int)v19 )
      {
        v27 = sub_B5D6C8(servantNameRangeLabel);
        sub_B5D668(v27, 0LL);
      }
      v20 = *(_QWORD *)(v17 + 8LL * v18 + 32);
      if ( v20 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6067/*"EndWaitVoice"*/,
          *(float *)(v20 + 24),
          0LL);
        return;
      }
LABEL_18:
      sub_B5D69C(servantNameRangeLabel, v10);
    }
    if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
    {
      servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
      if ( !servantNameRangeLabel )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_31453464(servantNameRangeLabel, 2, -1, 0LL);
      LODWORD(this->fields.battleLoadAsset) = -1;
    }
    *(_QWORD *)&this->fields.voicePlayNum = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.voicePlayNum, 0LL, v11, v12, v13, v14, v15, v16);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&this->fields.voiceListIndex = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.voiceListIndex, 0LL, v21, v22, v23, v24, v25, v26);
  }
  else if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    if ( !servantNameRangeLabel )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_31453464(servantNameRangeLabel, 2, -1, 0LL);
    LODWORD(this->fields.battleLoadAsset) = -1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__EndRandomLimitCountConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x21
  CommonUI_o *profileTabListViewManager; // x0
  const MethodInfo *v15; // x2
  float ScrillBarValue; // s0
  struct ServantStatusFlavorTextListViewManager_o *v17; // x8
  struct ServantStatusFlavorTextListViewManager_o *v18; // x20
  ServantStatusListViewManager_CallbackFunc_o *v19; // x21

  if ( (byte_42E6EA7 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v9, v10, v11);
    byte_42E6EA7 = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AF52C4(v13);
  profileTabListViewManager = **(CommonUI_o ***)(v13 + 184);
  if ( !profileTabListViewManager )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog(profileTabListViewManager, 0LL);
  if ( !isDecide )
    goto LABEL_13;
  ServantStatusDialog__SetTabKind(this, 0, v15);
  profileTabListViewManager = (CommonUI_o *)this->fields.profileTabListViewManager;
  if ( !profileTabListViewManager
    || (ScrillBarValue = ServantStatusListViewManager__GetScrillBarValue(
                           (ServantStatusListViewManager_o *)profileTabListViewManager,
                           19,
                           0LL),
        (v17 = this->fields.profileTabListViewManager) == 0LL)
    || (profileTabListViewManager = (CommonUI_o *)v17->fields.scrollBar) == 0LL )
  {
LABEL_15:
    sub_B5D69C(profileTabListViewManager, isDecide);
  }
  UIProgressBar__set_value((UIProgressBar_o *)profileTabListViewManager, ScrillBarValue, 0LL);
LABEL_13:
  v18 = this->fields.profileTabListViewManager;
  v19 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v18 )
    goto LABEL_15;
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v18, 1, v19, 0LL);
}


void __fastcall ServantStatusDialog__EndStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *loadVoiceData; // x20
  AssetLoader_LoadEndDataHandler_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  AssetData_o *v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_42E6E7B & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantStatusDialog_EndStatusLoad2__, v8, v9, v10);
    byte_42E6E7B = 1;
  }
  loadVoiceData = this->fields.loadVoiceData;
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v12, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad2__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(loadVoiceData, v12, 1, 0LL) )
  {
    this->fields.loadVoiceData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.loadVoiceData, 0LL, v13, v14, v15, v16, v17, v18);
    ServantStatusDialog__EndStatusLoad2(this, v19, v20);
  }
}


void __fastcall ServantStatusDialog__EndStatusLoad2(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
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
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_42E6E7C & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6041/*"EndLoadInit"*/, v11, v12, v13);
    byte_42E6E7C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( *(_DWORD *)&this->fields.isInitTab != 33 )
  {
    Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)Instance, 6, 0LL);
      Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)Instance, 4, 0LL);
        profileTabListViewManager = this->fields.profileTabListViewManager;
        v17 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(
            (ServantStatusListViewManager_o *)profileTabListViewManager,
            1,
            v17,
            0LL);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6041/*"EndLoadInit"*/,
    0.1,
    0LL);
}


void __fastcall ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantStatusDialog_o *v8; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x8
  __int64 voicePlayAssetName_low; // x9
  int v17; // w10
  __int64 v18; // x8
  System_String_o *v19; // x20
  System_String_o *v20; // x21
  SoundManager_c *v21; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v23; // x22
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BattleServantConfConponent_o *p_voicePlayList; // x0
  __int64 v32; // x0

  v8 = this;
  if ( (byte_42E6E8E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_EndPlayVoice__, v9, v10, v11);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    byte_42E6E8E = 1;
  }
  v15 = *(_QWORD *)&v8->fields.voicePlayNum;
  if ( v15 )
  {
    voicePlayAssetName_low = SLODWORD(v8->fields.voicePlayAssetName);
    v17 = *(_DWORD *)(v15 + 24);
    if ( (int)voicePlayAssetName_low < v17 )
    {
      if ( (unsigned int)voicePlayAssetName_low >= v17 )
      {
        v32 = sub_B5D6C8(this);
        sub_B5D668(v32, 0LL);
      }
      v18 = *(_QWORD *)(v15 + 8 * voicePlayAssetName_low + 32);
      if ( v18 )
      {
        v19 = *(System_String_o **)&v8->fields.voiceListIndex;
        v20 = *(System_String_o **)(v18 + 16);
        v21 = SoundManager_TypeInfo;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v21 = SoundManager_TypeInfo;
        }
        DEFAULT_VOLUME = v21->static_fields->DEFAULT_VOLUME;
        v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v23, (Il2CppObject *)v8, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
        v24 = (System_Int32_array **)SoundManager__playVoice_23391328(v19, v20, DEFAULT_VOLUME, v23, 0LL);
        p_voicePlayList = (BattleServantConfConponent_o *)&v8->fields.voicePlayList;
        v8->fields.voicePlayList = (struct ServantVoiceData_array *)v24;
        goto LABEL_17;
      }
LABEL_18:
      sub_B5D69C(this, method);
    }
    if ( LODWORD(v8->fields.tabInitList) == 3 && ((__int64)v8->fields.battleLoadAsset & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v8->fields.servantNameRangeLabel;
      if ( !this )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_31453464((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0LL);
      LODWORD(v8->fields.battleLoadAsset) = -1;
    }
    *(_QWORD *)&v8->fields.voicePlayNum = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields.voicePlayNum, 0LL, v2, v3, v4, v5, v6, v7);
    p_voicePlayList = (BattleServantConfConponent_o *)&v8->fields.voiceListIndex;
    v24 = 0LL;
    LODWORD(v8->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&v8->fields.voiceListIndex = 0LL;
LABEL_17:
    sub_B5D560(p_voicePlayList, v24, v25, v26, v27, v28, v29, v30);
  }
}


void __fastcall ServantStatusDialog__EndeCardFavoriteRequest(
        ServantStatusDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v4; // x19
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
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x8
  __int128 v35; // q1
  ServantStatusDialog_o *v36; // x20
  __int64 v37; // x8
  __int64 v38; // x8
  __int128 v39; // q0
  ServantStatusDialog_o *v40; // x20
  __int64 v41; // x8
  __int64 v42; // x8
  ServantStatusDialog_o *v43; // x20
  __int64 v44; // x21
  __int64 v45; // x22
  __int64 v46; // x8
  ServantStatusDialog_o *v47; // x22
  int32_t v48; // w21
  int32_t DispLimitCount; // w0
  int32_t v50; // w20
  ServantStatusDialog_o *v51; // x23
  int32_t LimitCount; // w0
  __int64 v53; // x8
  __int64 v54; // x9
  __int64 v55; // x8
  ServantStatusDialog_o *v56; // x22
  __int64 v57; // x8
  ServantStatusDialog_o *v58; // x23
  __int64 v59; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+40h] [xbp-60h]
  TreasureDvcInfo_o *v63; // [xsp+60h] [xbp-40h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-38h] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v4 = this;
  if ( (byte_42E6EA4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27, v28);
    this = (ServantStatusDialog_o *)sub_B5D5C4(
                                      &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                      v29,
                                      v30,
                                      v31);
    byte_42E6EA4 = 1;
  }
  entity = 0LL;
  v63 = 0LL;
  tdInfo = 0LL;
  v32 = *(_QWORD *)&v4->fields.isModify;
  if ( !v32 )
    goto LABEL_62;
  if ( !*(_QWORD *)(v32 + 56) )
    goto LABEL_61;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  v33 = *(_QWORD *)&v4->fields.isModify;
  if ( !v33 )
    goto LABEL_62;
  v34 = *(_QWORD *)(v33 + 56);
  if ( !v34 )
    goto LABEL_62;
  v35 = *(_OWORD *)(v34 + 32);
  v36 = this;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(v34 + 16);
  *(_OWORD *)&v62.fields.fakeValue = v35;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v61 = v62;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v61, 0LL);
  if ( !v36 )
    goto LABEL_62;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v36,
          &entity,
          (int64_t)this,
          (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    v37 = *(_QWORD *)&v4->fields.isModify;
    if ( !v37 )
      goto LABEL_62;
    v38 = *(_QWORD *)(v37 + 56);
    if ( !v38 )
      goto LABEL_62;
    v39 = *(_OWORD *)(v38 + 32);
    v40 = this;
    *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(v38 + 16);
    *(_OWORD *)&v62.fields.fakeValue = v39;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v60 = v62;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v60, 0LL);
    if ( !v40 )
      goto LABEL_62;
    DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v40,
      &entity,
      (int64_t)this,
      (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_61;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v41 = *(_QWORD *)&v4->fields.isModify;
  if ( !v41 )
    goto LABEL_62;
  v42 = *(_QWORD *)(v41 + 56);
  if ( !v42 )
    goto LABEL_62;
  v43 = this;
  v45 = *(_QWORD *)(v42 + 80);
  v44 = *(_QWORD *)(v42 + 88);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v66.fields.currentCryptoKey = v45;
  *(_QWORD *)&v66.fields.fakeValue = v44;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v66, 0LL);
  if ( !v43 )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)v43,
                                    (int32_t)this,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v46 = *(_QWORD *)&v4->fields.isModify;
  if ( !v46 )
    goto LABEL_62;
  v47 = this;
  this = *(ServantStatusDialog_o **)(v46 + 56);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
  if ( !entity )
    goto LABEL_62;
  v48 = (int)this;
  DispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
  if ( v48 == DispLimitCount )
    goto LABEL_61;
  v50 = DispLimitCount;
  this = *(ServantStatusDialog_o **)&v4->fields.isModify;
  if ( !this
    || (this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_LimitCount(
                                          (ServantStatusListViewItem_o *)this,
                                          0LL),
        !v47)
    || (this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v47, (int32_t)this, v48, 0LL),
        !*(_QWORD *)&v4->fields.isModify)
    || (v51 = this,
        LimitCount = ServantStatusListViewItem__get_LimitCount(
                       *(ServantStatusListViewItem_o **)&v4->fields.isModify,
                       0LL),
        this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v47, LimitCount, v50, 0LL),
        !v51)
    || !this )
  {
LABEL_62:
    sub_B5D69C(this, result);
  }
  v53 = *(_QWORD *)&v51->fields.CHARA_BASE_POSITION.fields.y;
  if ( (_DWORD)v53 != LODWORD(this->fields.CHARA_BASE_POSITION.fields.y) )
    goto LABEL_47;
  if ( v53 && v51 != this && (int)v53 >= 1 )
  {
    v54 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v54 >= (unsigned int)v53 )
      {
        v59 = sub_B5D6C8(this);
        sub_B5D668(v59, 0LL);
      }
      if ( *((_DWORD *)&v51->fields.titleInfo + v54) != *((_DWORD *)&this->fields.titleInfo + v54) )
        break;
      if ( (int)++v54 >= (int)v53 )
        goto LABEL_48;
    }
LABEL_47:
    BYTE5(v4->fields.statusLoadAsset) = 1;
  }
LABEL_48:
  if ( BYTE5(v4->fields.statusLoadAsset) )
    goto LABEL_61;
  v55 = *(_QWORD *)&v4->fields.isModify;
  if ( !v55 )
    goto LABEL_62;
  this = *(ServantStatusDialog_o **)(v55 + 56);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)this, v48, -1, 1, 0LL);
  if ( !entity )
    goto LABEL_62;
  v56 = this;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList(entity, v50, -1, 1, 0LL);
  v57 = *(_QWORD *)&v4->fields.isModify;
  if ( !v57 )
    goto LABEL_62;
  v58 = this;
  this = *(ServantStatusDialog_o **)(v57 + 56);
  if ( !this )
    goto LABEL_62;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)this, &tdInfo, -1, v48, 0, 0LL);
  this = (ServantStatusDialog_o *)entity;
  if ( !entity )
    goto LABEL_62;
  UserServantEntity__getTreasureDeviceInfo(entity, &v63, -1, v50, 0, 0LL);
  this = (ServantStatusDialog_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v56,
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v58,
                                    (const MethodInfo_1CB4CD8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( ((unsigned __int8)this & 1) == 0 )
    BYTE5(v4->fields.statusLoadAsset) = 1;
  if ( !tdInfo || !v63 )
    goto LABEL_62;
  if ( tdInfo->fields.id != v63->fields.id )
    BYTE5(v4->fields.statusLoadAsset) = 1;
LABEL_61:
  ServantStatusDialog__EndeRequest(v4, (const MethodInfo *)result);
}


void __fastcall ServantStatusDialog__EndeRequest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleFBXComponent_o *v13; // x0
  struct System_Action_o *openCallbackFunc; // x20
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
  ServantStatusDialog_ResultDelegate_o *individualityCallbackFunc; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ServantStatusDialog_FormationEndDelegate_o *resultCallbackFunc; // x20
  ServantStatusDialog_EndDelegate_o *formationCallbackFunc; // x20

  if ( (byte_42E6EA5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6EA5 = 1;
  }
  v5 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v13 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
    if ( !v13 )
      sub_B5D69C(0LL, v6);
    BattleFBXComponent__RevertShaderFloatProperty(v13, 0LL);
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.openCallbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
    this->fields.individualityCallbackFunc = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
      0LL,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    this->fields.formationCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v21, v22, v23, v24, v25, v26);
    ServantStatusDialog_EndIndividualityDelegate__Invoke(
      (ServantStatusDialog_EndIndividualityDelegate_o *)openCallbackFunc,
      (bool)this->fields.statusLoadAsset,
      BYTE5(this->fields.statusLoadAsset),
      0LL);
  }
  else
  {
    individualityCallbackFunc = (ServantStatusDialog_ResultDelegate_o *)this->fields.individualityCallbackFunc;
    if ( individualityCallbackFunc )
    {
      this->fields.individualityCallbackFunc = 0LL;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
        0LL,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      this->fields.formationCallbackFunc = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v28, v29, v30, v31, v32, v33);
      ServantStatusDialog_ResultDelegate__Invoke(
        individualityCallbackFunc,
        (bool)this->fields.statusLoadAsset,
        BYTE5(this->fields.statusLoadAsset),
        this->fields.tabKind,
        0LL);
    }
    else
    {
      resultCallbackFunc = (ServantStatusDialog_FormationEndDelegate_o *)this->fields.resultCallbackFunc;
      if ( resultCallbackFunc )
      {
        this->fields.resultCallbackFunc = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.resultCallbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
        ServantStatusDialog_FormationEndDelegate__Invoke(
          resultCallbackFunc,
          (bool)this->fields.statusLoadAsset,
          this->fields.tabKind,
          0LL);
      }
      else
      {
        formationCallbackFunc = (ServantStatusDialog_EndDelegate_o *)this->fields.formationCallbackFunc;
        if ( formationCallbackFunc )
        {
          this->fields.formationCallbackFunc = 0LL;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
            0LL,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          ServantStatusDialog_EndDelegate__Invoke(formationCallbackFunc, (bool)this->fields.statusLoadAsset, 0LL);
        }
      }
    }
  }
}


void __fastcall ServantStatusDialog__Exit(ServantStatusDialog_o *this, const MethodInfo *method)
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
  int64_t IsModifyLock; // x0
  ServantStatusListViewItem_o *v45; // x1
  _QWORD *v46; // x8
  UserServantEntity_o *v47; // x0
  bool *p_isModify; // x27
  int v49; // w9
  UserServantCollectionEntity_o *v50; // x0
  UserCommandCodeEntity_o *v51; // x0
  UserCommandCodeCollectionEntity_o *v52; // x0
  __int64 v53; // x8
  int64_t v54; // x20
  int statusLoadAsset_low; // w20
  int v56; // w20
  int v57; // w20
  int v58; // w20
  int v59; // w20
  int v60; // w20
  const MethodInfo *v61; // x2
  int32_t ManualSetCardLimitCount; // w20
  NetworkManager_ResultCallbackFunc_o *v63; // x20
  __int64 v64; // x8
  __int128 v65; // q1
  CommandCodeSetStatusRequest_o *v66; // x19
  __int64 v67; // x8
  __int64 v68; // x20
  __int64 v69; // x21
  int32_t v70; // w25
  int v71; // w24
  BalanceConfig_c *v72; // x0
  char v73; // w23
  int32_t ManualSetDispLimitCount; // w0
  int32_t v75; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  char v77; // w28
  int32_t ManualSetCommandCardLimit; // w0
  int32_t v79; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v80; // x8
  char v81; // w20
  int32_t ManualSetIconLimitCount; // w0
  int32_t v83; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  ServantStatusListViewItem_o *v85; // x8
  int32_t ManualSetPortraitLimitCount; // w0
  int32_t v87; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userSvtEntity; // x8
  ServantStatusListViewItem_o *v89; // x8
  ServantStatusListViewItem_o *v90; // x8
  ServantStatusListViewItem_o *v91; // x8
  char v92; // w28
  __int64 v93; // x8
  __int128 v94; // q1
  __int64 v95; // x21
  char v96; // w20
  int v97; // w23
  bool v98; // w21
  char v99; // w24
  int32_t v100; // w21
  _BOOL4 IsModifyFavoriteUserSvtId; // w25
  NetworkManager_ResultCallbackFunc_o *v102; // x20
  __int64 v103; // x8
  __int128 v104; // q0
  CardFavoriteRequest_o *v105; // x19
  bool isPush; // [xsp+54h] [xbp-11Ch]
  int32_t limitCountSupport; // [xsp+58h] [xbp-118h]
  int32_t randomSettingSupport; // [xsp+5Ch] [xbp-114h]
  int32_t randomSettingOwn; // [xsp+60h] [xbp-110h]
  int32_t battleVoice; // [xsp+64h] [xbp-10Ch]
  int32_t commonFlag; // [xsp+68h] [xbp-108h]
  int32_t v112; // [xsp+6Ch] [xbp-104h]
  int32_t v113; // [xsp+70h] [xbp-100h]
  int32_t imageLimitCount; // [xsp+74h] [xbp-FCh]
  char v115; // [xsp+78h] [xbp-F8h]
  char v116; // [xsp+7Ch] [xbp-F4h]
  char v117; // [xsp+80h] [xbp-F0h]
  char v118; // [xsp+84h] [xbp-ECh]
  char v119; // [xsp+88h] [xbp-E8h]
  char v120; // [xsp+8Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16

  if ( (byte_42E6EA3 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5, v6, v7);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&OtherUserNewManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_ServantStatusDialog_EndeCardFavoriteRequest__, v29, v30, v31);
    sub_B5D5C4(&UserCommandCodeCollectionManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&UserCommandCodeNewManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&UserServantCollectionManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v41, v42, v43);
    byte_42E6EA3 = 1;
  }
  ServantStatusDialog__QuitList(this, method);
  v46 = *(_QWORD **)&this->fields.isModify;
  if ( !v46 )
    goto LABEL_144;
  v47 = (UserServantEntity_o *)v46[7];
  p_isModify = &this->fields.isModify;
  if ( v47 )
  {
    v49 = *(_DWORD *)&this->fields.isInitTab;
    if ( v49 != 6 && v49 != 15 )
    {
      UserServantEntity__SetOld(v47, 0LL);
      v46 = *(_QWORD **)p_isModify;
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
    }
  }
  v50 = (UserServantCollectionEntity_o *)v46[10];
  if ( v50 )
  {
    UserServantCollectionEntity__SetOld(v50, 0LL);
    v46 = *(_QWORD **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
  }
  v51 = (UserCommandCodeEntity_o *)v46[13];
  if ( v51 )
  {
    if ( *(_DWORD *)&this->fields.isInitTab != 24 )
    {
      UserCommandCodeEntity__SetOld(v51, 0LL);
      v46 = *(_QWORD **)p_isModify;
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
    }
  }
  v52 = (UserCommandCodeCollectionEntity_o *)v46[14];
  if ( v52 )
  {
    UserCommandCodeCollectionEntity__SetOld(v52, 0LL);
    v46 = *(_QWORD **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
  }
  v53 = v46[11];
  if ( v53 && *(_DWORD *)&this->fields.isInitTab == 4 )
  {
    v54 = *(_QWORD *)(v53 + 24);
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    }
    OtherUserNewManager__SetOld(v54, 0LL);
  }
  statusLoadAsset_low = LOBYTE(this->fields.statusLoadAsset);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  v56 = (statusLoadAsset_low != 0) | UserServantNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v56 & 1;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  v57 = v56 | UserServantCollectionManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v57 & 1;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  v58 = v57 | ServantCommentManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v58 & 1;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  v59 = v58 | OtherUserNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v59 & 1;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  v60 = v59 | UserCommandCodeNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v60 & 1;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  IsModifyLock = UserCommandCodeCollectionManager__WriteData(0LL);
  v45 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  LOBYTE(this->fields.statusLoadAsset) = (v60 | IsModifyLock) & 1;
  if ( !v45 )
    goto LABEL_144;
  if ( !v45->fields.userSvtEntity )
  {
    if ( v45->fields.userCommandCodeEntity )
    {
      IsModifyLock = ServantStatusListViewItem__get_IsModifyLock(v45, 0LL);
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
      if ( (((unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(
                                            *(ServantStatusListViewItem_o **)p_isModify,
                                            0LL)) & 1) != 0 )
      {
        LOBYTE(this->fields.statusLoadAsset) = 1;
        v63 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v63,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsModifyLock = (int64_t)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                  v63,
                                  (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
        if ( *(_QWORD *)p_isModify )
        {
          v64 = *(_QWORD *)(*(_QWORD *)p_isModify + 104LL);
          if ( v64 )
          {
            v65 = *(_OWORD *)(v64 + 32);
            v66 = (CommandCodeSetStatusRequest_o *)IsModifyLock;
            *(_OWORD *)&v124.fields.currentCryptoKey = *(_OWORD *)(v64 + 16);
            *(_OWORD *)&v124.fields.fakeValue = v65;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v121 = v124;
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v121, 0LL);
            if ( *(_QWORD *)p_isModify )
            {
              if ( v66 )
              {
                CommandCodeSetStatusRequest__beginRequest(
                  v66,
                  IsModifyLock,
                  *(_BYTE *)(*(_QWORD *)p_isModify + 325LL),
                  *(_BYTE *)(*(_QWORD *)p_isModify + 326LL),
                  0LL);
                return;
              }
            }
          }
        }
        goto LABEL_144;
      }
    }
    goto LABEL_142;
  }
  if ( v45->fields.isConvertOverwriteImage )
    goto LABEL_42;
  IsModifyLock = (int64_t)this->fields.servantStatusBattleConfirmDialog;
  if ( !IsModifyLock )
    goto LABEL_144;
  IsModifyLock = (int64_t)ServantStatusCharaGraphListViewManager__GetManualSelectItem(
                            (ServantStatusCharaGraphListViewManager_o *)IsModifyLock,
                            v45,
                            v61);
  if ( !IsModifyLock )
  {
    v45 = *(ServantStatusListViewItem_o **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
LABEL_42:
    ManualSetCardLimitCount = ServantStatusListViewItem__get_ManualSetCardLimitCount(v45, 0LL);
    goto LABEL_60;
  }
  ManualSetCardLimitCount = *(_DWORD *)(IsModifyLock + 120);
LABEL_60:
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsChangeImageLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( (IsModifyLock & 1) == 0 )
    goto LABEL_147;
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_ManualSetCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( ManualSetCardLimitCount != (_DWORD)IsModifyLock )
  {
    v72 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v72 = BalanceConfig_TypeInfo;
    }
    v71 = 1;
    v70 = ManualSetCardLimitCount
        + (ManualSetCardLimitCount < 11 && ManualSetCardLimitCount != v72->static_fields->OtherImageLimitCount);
  }
  else
  {
LABEL_147:
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
    v67 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
    if ( !v67 )
      goto LABEL_144;
    v69 = *(_QWORD *)(v67 + 112);
    v68 = *(_QWORD *)(v67 + 120);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v125.fields.currentCryptoKey = v69;
    *(_QWORD *)&v125.fields.fakeValue = v68;
    v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v125, 0LL);
    v71 = 0;
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyDispLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v73 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(
                                *(ServantStatusListViewItem_o **)p_isModify,
                                0LL);
    v75 = ManualSetDispLimitCount >= 11 ? ManualSetDispLimitCount : ManualSetDispLimitCount + 1;
  }
  else
  {
    v76 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v76 )
      goto LABEL_144;
    v75 = BasicHelper__DecryptValue_21084824(v76[8], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v77 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(
                                  *(ServantStatusListViewItem_o **)p_isModify,
                                  0LL);
    v79 = ManualSetCommandCardLimit >= 11 ? ManualSetCommandCardLimit : ManualSetCommandCardLimit + 1;
  }
  else
  {
    v80 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v80 )
      goto LABEL_144;
    v79 = BasicHelper__DecryptValue_21084824(v80[9], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyIconLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v81 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(
                                *(ServantStatusListViewItem_o **)p_isModify,
                                0LL);
    v83 = ManualSetIconLimitCount >= 11 ? ManualSetIconLimitCount : ManualSetIconLimitCount + 1;
  }
  else
  {
    v84 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v84 )
      goto LABEL_144;
    v83 = BasicHelper__DecryptValue_21084824(v84[10], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  v85 = *(ServantStatusListViewItem_o **)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v118 = IsModifyLock;
  v119 = v81;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(v85, 0LL);
    v87 = ManualSetPortraitLimitCount >= 11 ? ManualSetPortraitLimitCount : ManualSetPortraitLimitCount + 1;
  }
  else
  {
    userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v85->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_144;
    v87 = BasicHelper__DecryptValue_21084824(userSvtEntity[11], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySvtCommonFlag((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  v89 = *(ServantStatusListViewItem_o **)p_isModify;
  v117 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  commonFlag = v89->fields.svtCommonFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyBattleVoice(v89, 0LL);
  v90 = *(ServantStatusListViewItem_o **)p_isModify;
  v116 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  battleVoice = v90->fields.changeVoiceFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(v90, 0LL);
  v91 = *(ServantStatusListViewItem_o **)p_isModify;
  v115 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v120 = v77;
  randomSettingOwn = v91->fields.ownRandomSettingButtonIndex;
  IsModifyLock = ServantStatusListViewItem__get_SupportRandomSettingParam(v91, 0LL);
  randomSettingSupport = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(
                   *(ServantStatusListViewItem_o **)p_isModify,
                   0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v92 = IsModifyLock;
  limitCountSupport = *(_DWORD *)(*(_QWORD *)p_isModify + 332LL);
  IsModifyLock = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !IsModifyLock )
    goto LABEL_144;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v112 = v87;
  v113 = v83;
  v93 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
  if ( !v93 )
    goto LABEL_144;
  v94 = *(_OWORD *)(v93 + 32);
  v95 = *(_QWORD *)(IsModifyLock + 120);
  *(_OWORD *)&v124.fields.currentCryptoKey = *(_OWORD *)(v93 + 16);
  *(_OWORD *)&v124.fields.fakeValue = v94;
  v96 = v73;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v97 = v71;
  v123 = v124;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v123, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v98 = v95 == IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__IsModifyPushUserSvtId(*(ServantStatusListViewItem_o **)p_isModify, 0LL);
  v99 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    if ( BYTE1(this->fields.newProfileList) )
    {
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
      v98 = *(_QWORD *)(*(_QWORD *)p_isModify + 168LL) != 0LL;
    }
    else
    {
      v98 = 0;
    }
  }
  imageLimitCount = v70;
  isPush = v98;
  if ( LOBYTE(this->fields.newProfileList) )
  {
    IsModifyLock = *(_QWORD *)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
    v100 = v79;
    IsModifyFavoriteUserSvtId = ServantStatusListViewItem__IsModifyFavoriteUserSvtId(
                                  (ServantStatusListViewItem_o *)IsModifyLock,
                                  0LL);
  }
  else
  {
    v100 = v79;
    IsModifyFavoriteUserSvtId = 0;
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify
    || (IsModifyLock = ServantStatusListViewItem__get_IsModifyLock((ServantStatusListViewItem_o *)IsModifyLock, 0LL),
        !*(_QWORD *)p_isModify) )
  {
LABEL_144:
    sub_B5D69C(IsModifyLock, v45);
  }
  if ( v97 | v96 & 1 | v120 & 1 | v119 & 1 | v118 & 1 | v117 & 1 | v116 & 1 | v115 & 1 | v92 & 1 | v99 & 1 | (IsModifyFavoriteUserSvtId | (unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*(ServantStatusListViewItem_o **)p_isModify, 0LL)) & 1 )
  {
    LOBYTE(this->fields.statusLoadAsset) = 1;
    v102 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v102,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    IsModifyLock = (int64_t)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                              v102,
                              (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
    if ( *(_QWORD *)p_isModify )
    {
      v103 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
      if ( v103 )
      {
        v104 = *(_OWORD *)(v103 + 32);
        v105 = (CardFavoriteRequest_o *)IsModifyLock;
        *(_OWORD *)&v124.fields.currentCryptoKey = *(_OWORD *)(v103 + 16);
        *(_OWORD *)&v124.fields.fakeValue = v104;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v122 = v124;
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v122, 0LL);
        if ( *(_QWORD *)p_isModify )
        {
          if ( v105 )
          {
            CardFavoriteRequest__beginRequest(
              v105,
              IsModifyLock,
              imageLimitCount,
              v75,
              v100,
              v113,
              v112,
              IsModifyFavoriteUserSvtId,
              *(_BYTE *)(*(_QWORD *)p_isModify + 325LL),
              *(_BYTE *)(*(_QWORD *)p_isModify + 326LL),
              commonFlag,
              battleVoice,
              randomSettingOwn,
              randomSettingSupport,
              limitCountSupport,
              isPush,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_144;
  }
LABEL_142:
  ServantStatusDialog__EndeRequest(this, (const MethodInfo *)v45);
}


bool __fastcall ServantStatusDialog__GetEnableBattleVoiceFromKind(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w8

  v2 = *(_DWORD *)&this->fields.isInitTab;
  return v2 != 29 && v2 != 34 && v2 != 2 && v2 != 33;
}


bool __fastcall ServantStatusDialog__GetEnableTdSpeedFromKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = *(_DWORD *)&this->fields.isInitTab;
  return v2 != 29 && v2 != 34 && v2 != 2 && v2 != 33;
}


int32_t __fastcall ServantStatusDialog__GetTabKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  return (int32_t)this->fields.tabInitList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantStatusDialog__GetVoiceAssetName(
        ServantStatusDialog_o *this,
        int32_t assetType,
        int32_t svtId,
        int32_t limitCount,
        int32_t seqId,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  int32_t VoiceId; // w8
  System_String_o *result; // x0
  System_String_o **v25; // x19
  System_String_o *v26; // x0
  int32_t v27; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E6E89 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, assetType, svtId, *(_QWORD *)&limitCount);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_9696/*"NoblePhantasm_"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_4030/*"ChrVoice_"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12895/*"Servants_"*/, v18, v19, v20);
    byte_42E6E89 = 1;
  }
  v27 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v22);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0LL);
  result = 0LL;
  v27 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v25 = (System_String_o **)off_3F3FB40[assetType];
    v26 = System_Int32__ToString((int32_t)&v27, 0LL);
    return System_String__Concat_44577788(*v25, v26, 0LL);
  }
  return result;
}


void __fastcall ServantStatusDialog__Init(ServantStatusDialog_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *pushSprite; // x20
  __int64 v18; // x1
  ServantStatusDialog_c *v19; // x0
  UnityEngine_GameObject_o *statusTabBase; // x0
  struct UISprite_o *v21; // x8
  const MethodInfo *v22; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v24; // x20
  unsigned __int128 v25; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42E6E75 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ServantStatusDialog__Init_b__125_0__, v11, v12, v13);
    sub_B5D5C4(&ServantStatusDialog_TypeInfo, v14, v15, v16);
    byte_42E6E75 = 1;
  }
  v25 = 0uLL;
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    v19 = ServantStatusDialog_TypeInfo;
    if ( (BYTE3(ServantStatusDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
      v19 = ServantStatusDialog_TypeInfo;
    }
    statusTabBase = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                  v19->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                                  (UnityEngine_Color_o *)&v25,
                                                  0LL);
    v21 = this->fields.pushSprite;
    if ( !v21 )
LABEL_21:
      sub_B5D69C(statusTabBase, v18);
    *(_OWORD *)&v21->fields.bottomAnchor = v25;
  }
  BYTE4(this->fields.tabInitList) = 0;
  LOWORD(this->fields.statusLoadAsset) = 256;
  *(_DWORD *)((char *)&this->fields.statusLoadAsset + 2) = 0;
  statusTabBase = this->fields.statusTabBase;
  if ( !statusTabBase )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(statusTabBase, 0, 0LL);
  if ( *(_DWORD *)&this->fields.isInitTab == 33 )
  {
    *((_BYTE *)&this->fields.currentMaskType + 4) = 1;
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v22);
  }
  statusTabBase = (UnityEngine_GameObject_o *)this->fields.noticeNumber;
  if ( !statusTabBase )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
  statusTabBase = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)statusTabBase & 1, 0LL);
  v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantStatusDialog__Init_b__125_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v24, 2, 1, 0LL);
}


void __fastcall ServantStatusDialog__InitBattleActor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x1
  BattleFBXComponent_o *v7; // x0
  UnityEngine_Object_o *callbackFunc; // x20
  BattleServantConfConponent_o *p_callbackFunc; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E6E7E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6E7E = 1;
  }
  v5 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    BattleFBXComponent__RevertShaderFloatProperty(v7, 0LL);
  }
  callbackFunc = (UnityEngine_Object_o *)this->fields.callbackFunc;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(callbackFunc, 0LL, 0LL) )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    klass = (UnityEngine_Object_o *)p_callbackFunc->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(klass, 0LL);
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Action_o *v18; // x20
  struct ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  System_Action_o *v31; // x21

  if ( (byte_42E6E97 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectCharaGraph__, v12, v13, v14);
    sub_B5D5C4(&Method_ServantStatusDialog__InitList_b__162_0__, v15, v16, v17);
    byte_42E6E97 = 1;
  }
  v18 = *(System_Action_o **)&this->fields.questId;
  if ( v18 )
  {
    *(_QWORD *)&this->fields.questId = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.questId, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v18, 0LL);
  }
  BYTE1(this->fields.statusLoadAsset) = 0;
  BYTE4(this->fields.statusLoadAsset) = 0;
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  v20 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    0LL);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_10;
  servantStatusBattleConfirmDialog[1].fields.buttonDecideLabel = (struct UILabel_o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&servantStatusBattleConfirmDialog[1].fields.buttonDecideLabel,
    (System_Int32_array **)v20,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ServantStatusCharaGraphListViewManager__SetMode_22146376(
    (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
    2,
    v29);
  if ( *((_BYTE *)&this->fields.currentMaskType + 4) )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__162_0__, 0LL);
    if ( battleTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(
        (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
        v31,
        0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(v21, v22);
  }
}


bool __fastcall ServantStatusDialog__IsContainRandomIndex(ServantStatusDialog_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ServantLimitAddMaster_o *Master_WarQuestSelectionMaster; // x20
  ServantCostumeMaster_o *RandomGroupIndex; // x0
  __int64 v25; // x1
  __int64 v26; // x8
  __int64 v27; // x8
  ServantCostumeMaster_o *v28; // x21
  signed int v29; // w25
  unsigned int v30; // w9
  int32_t v31; // w22
  BalanceConfig_c *v32; // x0
  ServantCostumeEntity_o *v33; // x23
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x23
  __int64 v37; // x24
  ServantLimitAddEntity_o *v38; // x23
  __int64 v39; // x8
  __int64 v40; // x8
  __int64 v41; // x23
  __int64 v42; // x24
  __int64 v43; // x8
  __int64 v45; // x0
  ServantCostumeEntity_o *v46; // [xsp+0h] [xbp-60h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_42E6EC0 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCostumeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ServantCostumeEntity_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&ServantLimitAddEntity_TypeInfo, v20, v21, v22);
    byte_42E6EC0 = 1;
  }
  v46 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  v26 = *(_QWORD *)&this->fields.isModify;
  if ( !v26 )
LABEL_39:
    sub_B5D69C(RandomGroupIndex, v25);
  v27 = *(_QWORD *)(v26 + 336);
  if ( v27 )
  {
    v28 = RandomGroupIndex;
    v29 = 0;
    while ( 1 )
    {
      v30 = *(_DWORD *)(v27 + 24);
      if ( v29 > (int)v30 )
        break;
      if ( v29 )
      {
        if ( v29 - 1 >= v30 )
        {
          v45 = sub_B5D6C8(RandomGroupIndex);
          sub_B5D668(v45, 0LL);
        }
        v31 = *(_DWORD *)(v27 + 4LL * (v29 - 1) + 32);
      }
      else
      {
        v31 = 0;
      }
      v32 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v32 = BalanceConfig_TypeInfo;
      }
      if ( v31 <= v32->static_fields->ServantLimitMax )
      {
        v38 = (ServantLimitAddEntity_o *)sub_B5D694(ServantLimitAddEntity_TypeInfo);
        ServantLimitAddEntity___ctor(v38, 0LL);
        entity = v38;
        v39 = *(_QWORD *)&this->fields.isModify;
        if ( !v39 )
          goto LABEL_39;
        v40 = *(_QWORD *)(v39 + 56);
        if ( !v40 )
          goto LABEL_39;
        v42 = *(_QWORD *)(v40 + 80);
        v41 = *(_QWORD *)(v40 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v49.fields.currentCryptoKey = v42;
        *(_QWORD *)&v49.fields.fakeValue = v41;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                       v49,
                                                       0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_39;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddMaster__TryGetEntity(
                                                       Master_WarQuestSelectionMaster,
                                                       &entity,
                                                       (int32_t)RandomGroupIndex,
                                                       v31,
                                                       0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          RandomGroupIndex = (ServantCostumeMaster_o *)entity;
          if ( !entity )
            goto LABEL_39;
          RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddEntity__GetRandomGroupIndex(entity, 0LL);
          if ( (_DWORD)RandomGroupIndex )
            return 1;
        }
      }
      else
      {
        v33 = (ServantCostumeEntity_o *)sub_B5D694(ServantCostumeEntity_TypeInfo);
        ServantCostumeEntity___ctor(v33, 0LL);
        v46 = v33;
        v34 = *(_QWORD *)&this->fields.isModify;
        if ( !v34 )
          goto LABEL_39;
        v35 = *(_QWORD *)(v34 + 56);
        if ( !v35 )
          goto LABEL_39;
        v37 = *(_QWORD *)(v35 + 80);
        v36 = *(_QWORD *)(v35 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v48.fields.currentCryptoKey = v37;
        *(_QWORD *)&v48.fields.fakeValue = v36;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                       v48,
                                                       0LL);
        if ( !v28 )
          goto LABEL_39;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                                       v28,
                                                       &v46,
                                                       (int32_t)RandomGroupIndex,
                                                       v31,
                                                       0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          if ( !v46 )
            goto LABEL_39;
          if ( v46->fields.groupIndex )
            return 1;
        }
      }
      v43 = *(_QWORD *)&this->fields.isModify;
      if ( v43 )
      {
        v27 = *(_QWORD *)(v43 + 336);
        ++v29;
        if ( v27 )
          continue;
      }
      goto LABEL_39;
    }
  }
  return 0;
}


void __fastcall ServantStatusDialog__OnClickCancel(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42E6EA1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6EA1 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    ServantStatusDialog__Exit(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickChangeVoice(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x2

  v5 = this;
  if ( (byte_42E6EC1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42E6EC1 = 1;
  }
  if ( !BYTE2(v5->fields.statusLoadAsset) && !BYTE1(v5->fields.statusLoadAsset) )
  {
    v12 = *(_QWORD *)&v5->fields.isModify;
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 320) != type )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeBattleVoice(v5, type, v15);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager;
      v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v5,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v14, 0LL);
        return;
      }
    }
    sub_B5D69C(this, *(_QWORD *)&type);
  }
}


void __fastcall ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantStatusListViewItem_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42E6EC4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6EC4 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v5 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v5 )
      sub_B5D69C(0LL, method);
    if ( v5->fields.userGameEntity && (v5->fields.userSvtEntity || v5->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(v5, 0LL);
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      ServantStatusDialog__SetMark(this, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  __int64 v13; // x9
  int32_t v14; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x2
  __int64 v18; // x0

  v5 = this;
  if ( (byte_42E6EB2 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, costumeIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42E6EB2 = 1;
  }
  if ( !BYTE2(v5->fields.statusLoadAsset) && !BYTE1(v5->fields.statusLoadAsset) )
  {
    v12 = *(_QWORD *)&v5->fields.isModify;
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 208);
      if ( v13 )
      {
        if ( *(_DWORD *)(v13 + 24) <= (unsigned int)costumeIndex )
        {
          v18 = sub_B5D6C8(this);
          sub_B5D668(v18, 0LL);
        }
        v14 = *(_DWORD *)(v13 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v12 + 256) != v14 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangeCommandResource(v5, v14, v17);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager;
        v16 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)v5,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v16, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x2

  v5 = this;
  if ( (byte_42E6EB1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, dispLv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42E6EB1 = 1;
  }
  if ( !BYTE2(v5->fields.statusLoadAsset) && !BYTE1(v5->fields.statusLoadAsset) )
  {
    v12 = *(_QWORD *)&v5->fields.isModify;
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 256) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeCommandResource(v5, dispLv, v15);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager;
      v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v5,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v14, 0LL);
        return;
      }
    }
    sub_B5D69C(this, *(_QWORD *)&dispLv);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCodeShow(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
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
  __int64 v33; // x8
  UserServantCollectionEntity_o *v34; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity; // x0
  UserCommandCodeEntity_o *v36; // x20
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v38; // x22
  System_Action_o *v39; // x23
  ServantLeaderInfo_o *v40; // x0
  CommandCodeEntity_o *CommandCodeEntity; // x0
  CommandCodeEntity_o *v42; // x20
  int v43; // w24
  WebViewManager_o *v44; // x21
  ServantStatusDialog_EndDelegate_o *v45; // x22
  System_Action_o *v46; // x23
  int32_t v47; // w1
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v49; // x21
  bool v50; // w3
  CommonUI_o *v51; // x0
  CommandCodeEntity_o *v52; // x2

  v5 = this;
  if ( (byte_42E6EB9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__, v12, v13, v14);
    sub_B5D5C4(&Method_ServantStatusDialog_EndOpenEquipStatus__, v15, v16, v17);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__, v18, v19, v20);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectEquipStatus__, v21, v22, v23);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v30, v31, v32);
    byte_42E6EB9 = 1;
  }
  v33 = *(_QWORD *)&v5->fields.isModify;
  if ( !v33 )
    goto LABEL_30;
  v34 = *(UserServantCollectionEntity_o **)(v33 + 80);
  if ( v34 )
  {
    UserCommandCodeEntity = UserServantCollectionEntity__getUserCommandCodeEntity(v34, index, 0LL);
    if ( UserCommandCodeEntity )
    {
      v36 = UserCommandCodeEntity;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v38,
        (Il2CppObject *)v5,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0LL);
      v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v39, (Il2CppObject *)v5, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_18217572(Instance, 20, v36, v38, v39, 0LL);
        return;
      }
LABEL_30:
      sub_B5D69C(this, *(_QWORD *)&index);
    }
    goto LABEL_19;
  }
  v40 = *(ServantLeaderInfo_o **)(v33 + 88);
  if ( v40 )
  {
    CommandCodeEntity = ServantLeaderInfo__getCommandCodeEntity(v40, index, 0LL);
    if ( CommandCodeEntity )
    {
      v42 = CommandCodeEntity;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v43 = *(_DWORD *)&v5->fields.isInitTab;
      v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v43 == 4 )
      {
        v45 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v45,
          (Il2CppObject *)v5,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v46, (Il2CppObject *)v5, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v44 )
          goto LABEL_30;
        v47 = 22;
      }
      else
      {
        v45 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v45,
          (Il2CppObject *)v5,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v46, (Il2CppObject *)v5, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v44 )
          goto LABEL_30;
        if ( v43 != 5 )
        {
          v47 = 25;
          v51 = (CommonUI_o *)v44;
          v52 = v42;
          v50 = 0;
          goto LABEL_29;
        }
        v47 = 23;
      }
      v50 = 1;
      v51 = (CommonUI_o *)v44;
      v52 = v42;
LABEL_29:
      CommonUI__OpenServantEquipStatusDialog_18218384(v51, v47, v52, v50, v45, v46, 0LL);
      return;
    }
  }
LABEL_19:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager;
  v49 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v49,
    (Il2CppObject *)v5,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    goto LABEL_30;
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v49, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  __int64 v13; // x9
  int32_t v14; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x2
  __int64 v18; // x0

  v5 = this;
  if ( (byte_42E6EB5 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, costumeIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42E6EB5 = 1;
  }
  if ( !BYTE2(v5->fields.statusLoadAsset) && !BYTE1(v5->fields.statusLoadAsset) )
  {
    v12 = *(_QWORD *)&v5->fields.isModify;
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 208);
      if ( v13 )
      {
        if ( *(_DWORD *)(v13 + 24) <= (unsigned int)costumeIndex )
        {
          v18 = sub_B5D6C8(this);
          sub_B5D668(v18, 0LL);
        }
        v14 = *(_DWORD *)(v13 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v12 + 280) != v14 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangeFaceResource(v5, v14, v17);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager;
        v16 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)v5,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v16, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x2

  v5 = this;
  if ( (byte_42E6EB4 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, dispLv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42E6EB4 = 1;
  }
  if ( !BYTE2(v5->fields.statusLoadAsset) && !BYTE1(v5->fields.statusLoadAsset) )
  {
    v12 = *(_QWORD *)&v5->fields.isModify;
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 280) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeFaceResource(v5, dispLv, v15);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager;
      v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v5,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v14, 0LL);
        return;
      }
    }
    sub_B5D69C(this, *(_QWORD *)&dispLv);
  }
}


void __fastcall ServantStatusDialog__OnClickFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantStatusDialog_o *v4; // x19
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
  _QWORD *v68; // x8
  __int64 v69; // x9
  __int128 v70; // q1
  int64_t v71; // x20
  UserServantEntity_o *Entity; // x24
  ServantStatusDialog_o *v73; // x20
  __int64 v74; // x21
  __int64 v75; // x22
  ServantEntity_o *v76; // x23
  ServantStatusDialog_o *v77; // x20
  int32_t v78; // w21
  int32_t v79; // w25
  __int64 v80; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v81; // x8
  int32_t v82; // w21
  int32_t v83; // w0
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *v85; // x20
  __int64 v86; // x21
  int32_t Rarity; // w24
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x24
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x24
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x23
  __int64 v109; // x8
  int32_t v110; // w0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x23
  __int64 v118; // x8
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x23
  __int64 v126; // x8
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x22
  System_String_o *v134; // x20
  System_String_o *v135; // x0
  CommonUI_o *Instance; // x21
  System_String_o *v137; // x22
  System_String_o *v138; // x23
  System_String_o *v139; // x24
  CommonConfirmDialog_ClickDelegate_o *v140; // x25
  __int64 v141; // x20
  __int64 v142; // x8
  __int128 v143; // q0
  const MethodInfo *v144; // x1
  __int64 v145; // x0
  __int64 v146; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16

  v4 = this;
  if ( (byte_42E6EC5 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&object___TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Rarity_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_ServantStatusDialog_OnConfirmSelectFavorite__, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&SoundManager_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_12135/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_12133/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_12132/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_12136/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v62, v63, v64);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&StringLiteral_12134/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v65, v66, v67);
    byte_42E6EC5 = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v68 = *(_QWORD **)&v4->fields.isModify;
    if ( !v68 )
      goto LABEL_93;
    if ( !v68[2] )
      return;
    v69 = v68[7];
    if ( !v69 )
      return;
    v70 = *(_OWORD *)(v69 + 32);
    v71 = v68[20];
    *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)(v69 + 16);
    *(_OWORD *)&v149.fields.fakeValue = v70;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v148 = v149;
    if ( v71 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v148, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      return;
    }
    if ( v71 <= 0 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v141 = *(_QWORD *)&v4->fields.isModify;
      if ( v141 )
      {
        v142 = *(_QWORD *)(v141 + 56);
        if ( v142 )
        {
          v143 = *(_OWORD *)(v142 + 32);
          *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)(v142 + 16);
          *(_OWORD *)&v149.fields.fakeValue = v143;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v147 = v149;
          *(_QWORD *)(v141 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v147, 0LL);
          ServantStatusDialog__SetMark(v4, v144);
          return;
        }
      }
      goto LABEL_93;
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_93;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_93;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
               v71,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_93;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_93;
    v73 = this;
    v75 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v74 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v150.fields.currentCryptoKey = v75;
    *(_QWORD *)&v150.fields.fakeValue = v74;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v150, 0LL);
    if ( !v73 )
      goto LABEL_93;
    v76 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)v73,
                               (int32_t)this,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v76 )
      goto LABEL_93;
    v77 = this;
    v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v76->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                      Entity->fields.limitCount,
                                      0LL);
    if ( !v77 )
      goto LABEL_93;
    this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      (ServantLimitImageMaster_o *)v77,
                                      v78,
                                      (int32_t)this,
                                      0LL);
    if ( !*(_QWORD *)&v4->fields.isModify )
      goto LABEL_93;
    v79 = (int)this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                      *(ServantStatusListViewItem_o **)&v4->fields.isModify,
                                      0LL);
    v80 = *(_QWORD *)&v4->fields.isModify;
    if ( !v80 )
      goto LABEL_93;
    v81 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v80 + 56);
    if ( !v81 )
      goto LABEL_93;
    v82 = (int)this;
    v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v81[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v77,
                                   v82,
                                   v83,
                                   0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12135/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v86 = sub_B5D5DC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v86 )
      goto LABEL_93;
    v94 = (System_Int32_array **)this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v86 + 24) )
        goto LABEL_94;
      *(_QWORD *)(v86 + 32) = v94;
      sub_B5D560((BattleServantConfConponent_o *)(v86 + 32), v94, v88, v89, v90, v91, v92, v93);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v76, 0LL);
      v101 = (System_Int32_array **)this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v86 + 24) <= 1u )
          goto LABEL_94;
        *(_QWORD *)(v86 + 40) = v101;
        sub_B5D560((BattleServantConfConponent_o *)(v86 + 40), v101, v95, v96, v97, v98, v99, v100);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v76, v79, -1, 0LL);
        v108 = (System_Int32_array **)this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v86 + 24) <= 2u )
            goto LABEL_94;
          *(_QWORD *)(v86 + 48) = v108;
          sub_B5D560((BattleServantConfConponent_o *)(v86 + 48), v108, v102, v103, v104, v105, v106, v107);
          v109 = *(_QWORD *)&v4->fields.isModify;
          if ( !v109 )
            goto LABEL_93;
          this = *(ServantStatusDialog_o **)(v109 + 56);
          if ( !this )
            goto LABEL_93;
          v110 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v110, 0LL);
          v117 = (System_Int32_array **)this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v86 + 24) <= 3u )
              goto LABEL_94;
            *(_QWORD *)(v86 + 56) = v117;
            sub_B5D560((BattleServantConfConponent_o *)(v86 + 56), v117, v111, v112, v113, v114, v115, v116);
            v118 = *(_QWORD *)&v4->fields.isModify;
            if ( !v118 )
              goto LABEL_93;
            this = *(ServantStatusDialog_o **)(v118 + 128);
            if ( !this )
              goto LABEL_93;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v125 = (System_Int32_array **)this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v86 + 24) <= 4u )
                goto LABEL_94;
              *(_QWORD *)(v86 + 64) = v125;
              sub_B5D560((BattleServantConfConponent_o *)(v86 + 64), v125, v119, v120, v121, v122, v123, v124);
              v126 = *(_QWORD *)&v4->fields.isModify;
              if ( !v126 )
                goto LABEL_93;
              this = *(ServantStatusDialog_o **)(v126 + 128);
              if ( !this )
                goto LABEL_93;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v133 = (System_Int32_array **)this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v86 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v86 + 24) > 5u )
                {
                  *(_QWORD *)(v86 + 72) = v133;
                  sub_B5D560((BattleServantConfConponent_o *)(v86 + 72), v133, v127, v128, v129, v130, v131, v132);
                  this = (ServantStatusDialog_o *)System_String__Format_44656512(v85, (System_Object_array *)v86, 0LL);
                  if ( !*(_QWORD *)&v4->fields.isModify )
                    goto LABEL_93;
                  v134 = (System_String_o *)this;
                  if ( ServantStatusListViewItem__get_IsEventJoin(
                         *(ServantStatusListViewItem_o **)&v4->fields.isModify,
                         0LL) )
                  {
                    this = *(ServantStatusDialog_o **)&v4->fields.isModify;
                    if ( !this )
                      goto LABEL_93;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod((ServantStatusListViewItem_o *)this, 0LL) )
                    {
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v135 = LocalizationManager__Get((System_String_o *)StringLiteral_12134/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                      v134 = System_String__Concat_44577788(v134, v135, 0LL);
                    }
                  }
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v137 = LocalizationManager__Get((System_String_o *)StringLiteral_12136/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
                  v138 = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v139 = LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  v140 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v140,
                    (Il2CppObject *)v4,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_18201384(
                      Instance,
                      v137,
                      v134,
                      v138,
                      v139,
                      v140,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
LABEL_93:
                  sub_B5D69C(this, method);
                }
LABEL_94:
                v145 = sub_B5D6C8(this);
                sub_B5D668(v145, 0LL);
              }
            }
          }
        }
      }
    }
    v146 = sub_B5D6BC();
    sub_B5D668(v146, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantStatusListViewItem_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42E6EC3 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6EC3 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v5 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v5 )
      sub_B5D69C(0LL, method);
    if ( v5->fields.userGameEntity && (v5->fields.userSvtEntity || v5->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(v5, 0LL);
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      ServantStatusDialog__SetMark(this, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickPortraitCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  __int64 v13; // x9
  int32_t v14; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x2
  __int64 v18; // x0

  v5 = this;
  if ( (byte_42E6EB8 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, costumeIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42E6EB8 = 1;
  }
  if ( !BYTE2(v5->fields.statusLoadAsset) && !BYTE1(v5->fields.statusLoadAsset) )
  {
    v12 = *(_QWORD *)&v5->fields.isModify;
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 208);
      if ( v13 )
      {
        if ( *(_DWORD *)(v13 + 24) <= (unsigned int)costumeIndex )
        {
          v18 = sub_B5D6C8(this);
          sub_B5D668(v18, 0LL);
        }
        v14 = *(_DWORD *)(v13 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v12 + 296) != v14 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangePortraitResource(v5, v14, v17);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager;
        v16 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)v5,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v16, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickPortraitCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x2

  v5 = this;
  if ( (byte_42E6EB7 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, dispLv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42E6EB7 = 1;
  }
  if ( !BYTE2(v5->fields.statusLoadAsset) && !BYTE1(v5->fields.statusLoadAsset) )
  {
    v12 = *(_QWORD *)&v5->fields.isModify;
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 296) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangePortraitResource(v5, dispLv, v15);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v5->fields.profileTabListViewManager;
      v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v5,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v14, 0LL);
        return;
      }
    }
    sub_B5D69C(this, *(_QWORD *)&dispLv);
  }
}


void __fastcall ServantStatusDialog__OnClickPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantStatusDialog_o *v4; // x19
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
  __int64 v65; // x8
  __int64 v66; // x8
  __int64 v67; // x9
  __int128 v68; // q1
  int64_t v69; // x20
  __int64 v70; // x8
  __int64 v71; // x20
  __int64 v72; // x8
  __int128 v73; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+50h] [xbp-60h]

  v4 = this;
  if ( (byte_42E6EC7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&object___TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Rarity_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_ServantStatusDialog_OnConfirmSelectPush__, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&SoundManager_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v59, v60, v61);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v62, v63, v64);
    byte_42E6EC7 = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v65 = *(_QWORD *)&v4->fields.isModify;
    if ( v65 )
    {
      if ( !*(_QWORD *)(v65 + 16) || !*(_QWORD *)(v65 + 56) )
        return;
      EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
      v66 = *(_QWORD *)&v4->fields.isModify;
      if ( v66 )
      {
        v67 = *(_QWORD *)(v66 + 56);
        if ( v67 )
        {
          v68 = *(_OWORD *)(v67 + 32);
          v69 = *(_QWORD *)(v66 + 168);
          *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)(v67 + 16);
          *(_OWORD *)&v76.fields.fakeValue = v68;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v75 = v76;
          if ( v69 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v75, 0LL) )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            v70 = *(_QWORD *)&v4->fields.isModify;
            if ( v70 )
            {
              *(_QWORD *)(v70 + 168) = 0LL;
LABEL_37:
              ServantStatusDialog__SetMark(v4, method);
              return;
            }
          }
          else if ( v69 <= 0 )
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            v71 = *(_QWORD *)&v4->fields.isModify;
            if ( v71 )
            {
              v72 = *(_QWORD *)(v71 + 56);
              if ( v72 )
              {
                v73 = *(_OWORD *)(v72 + 32);
                *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)(v72 + 16);
                *(_OWORD *)&v76.fields.fakeValue = v73;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v74 = v76;
                *(_QWORD *)(v71 + 168) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
                goto LABEL_37;
              }
            }
          }
          else
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( this )
            {
              this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
              if ( this )
              {
                DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                  v69,
                  (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
                this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                  JUMPOUT(0x1533D40LL);
              }
            }
          }
        }
      }
    }
    sub_B5D69C(this, method);
  }
}


void __fastcall ServantStatusDialog__OnClickRandomLimitCountSetting(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x4
  bool RandomLimitCountOwn; // w0

  if ( (byte_42E6EBE & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__, v6, v7, v8);
    byte_42E6EBE = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v9 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 75) & 2) != 0 )
      v9 = (_QWORD *)sub_B5D5CC(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v10 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v9, v9[3]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    RandomLimitCountOwn = 1;
    switch ( index )
    {
      case 0:
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0LL);
        break;
      case 1:
      case 4:
        break;
      case 3:
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0LL);
        break;
      default:
        RandomLimitCountOwn = 0;
        break;
    }
    ServantStatusDialog__RandomLimitCountSettingResource(this, (unsigned int)index < 3, RandomLimitCountOwn, index, v11);
  }
}


void __fastcall ServantStatusDialog__OnClickRandomLimitCountSupport(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x2

  if ( (byte_42E6EBC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, index, (_DWORD)method, v3);
    byte_42E6EBC = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantStatusDialog__RandomLimitCountSupportResource(this, index, v6);
  }
}


void __fastcall ServantStatusDialog__OnClickServantQuest(
        ServantStatusDialog_o *this,
        int32_t questId,
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
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  void *Mine; // x0
  __int64 v67; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v69; // x21
  int32_t QuestType; // w22
  QuestEntity_o *v71; // x23
  System_String_o *v72; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  Il2CppObject *BattleName; // x0
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  bool v77; // w22
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v79; // x21
  CommonUI_o *Instance; // x21
  System_String_o *v81; // x0
  __int64 *v82; // x8
  System_String_o *v83; // x22
  System_String_o *v84; // x0
  System_String_o *v85; // x20
  System_String_o *v86; // x23
  System_String_o *v87; // x24
  CommonConfirmDialog_ClickDelegate_o *v88; // x25

  if ( (byte_42E6EBA & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, questId, (_DWORD)method, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_ServantStatusDialog_OnConfirmServantQuest__, v18, v19, v20);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&SoundManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_12178/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_12180/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_12181/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_12174/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_12177/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_12179/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_12175/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12176/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v63, v64, v65);
    byte_42E6EBA = 1;
  }
  if ( !this->fields.individualityCallbackFunc && !this->fields.resultCallbackFunc )
    goto LABEL_51;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  Mine = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Mine )
    goto LABEL_48;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Mine, questId, 0LL);
  if ( !QuestInfo )
  {
LABEL_51:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v79 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v79,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v79, 0LL);
      return;
    }
    goto LABEL_48;
  }
  v69 = QuestInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(v69, 0LL);
  Mine = MapControl_QuestInfo__GetMine(v69, 0LL);
  if ( !Mine )
    goto LABEL_48;
  v71 = (QuestEntity_o *)Mine;
  this->fields.tabKind = *((_DWORD *)Mine + 4);
  Mine = QuestEntity__getQuestName((QuestEntity_o *)Mine, 0LL);
  if ( !Mine )
    goto LABEL_48;
  v72 = (System_String_o *)Mine;
  if ( System_String__Contains((System_String_o *)Mine, (System_String_o *)StringLiteral_23850/*"{0}"*/, 0LL) )
  {
    Mine = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Mine )
      goto LABEL_48;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Mine,
                                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    Mine = (void *)QuestEntity__getServantId(v71, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_48;
    Mine = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             (int32_t)Mine,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Mine )
      goto LABEL_48;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Mine, 0, -1, 0LL);
    v72 = System_String__Format(v72, BattleName, 0LL);
  }
  if ( QuestType == 3 )
  {
    warId = v69->fields.warId;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    Mine = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( Mine )
    {
      WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Mine, warId, 0LL);
      if ( WarEntityByWarID )
        v77 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
      else
        v77 = 0;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v77 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12177/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL);
        v82 = &StringLiteral_12176/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12179/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
        v82 = &StringLiteral_12178/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
      }
      goto LABEL_46;
    }
LABEL_48:
    sub_B5D69C(Mine, v67);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12181/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0LL);
  v82 = &StringLiteral_12180/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
LABEL_46:
  v83 = v81;
  v84 = LocalizationManager__Get((System_String_o *)*v82, 0LL);
  v85 = System_String__Format(v84, (Il2CppObject *)v72, 0LL);
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_12175/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12174/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  v88 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v88,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0LL);
  if ( !Instance )
    goto LABEL_48;
  CommonUI__OpenConfirmDialog_18201384(Instance, v83, v85, v86, v87, v88, 26, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E6EAA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6EAA = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantStatusDialog__SetTabKind(this, 2, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E6EA9 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6EA9 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantStatusDialog__SetTabKind(this, 1, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E6EA8 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6EA8 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantStatusDialog__SetTabKind(this, 0, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E6EAB & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6EAB = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantStatusDialog__SetTabKind(this, 3, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTdSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
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
  __int64 v42; // x19
  ServantStatusListViewItem_o *v43; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v52; // x21
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v55; // x21
  System_String_o *v56; // x0
  System_String_o *v57; // x20
  __int64 v58; // x21
  __int64 v59; // x21
  CommonUI_o *v60; // x22
  System_String_o *Empty; // x21
  System_String_o *v62; // x23
  System_String_o *v63; // x24
  CommonConfirmDialog_ClickDelegate_o *v64; // x25

  if ( (byte_42E6EBB & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v12, v13, v14);
    sub_B5D5C4(&ServantStatusListViewItemDrawButton_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v18, v19, v20);
    sub_B5D5C4(&SoundManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&string_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__0__, v27, v28, v29);
    sub_B5D5C4(&ServantStatusDialog___c__DisplayClass202_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12183/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12184/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12185/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, v39, v40, v41);
    byte_42E6EBB = 1;
  }
  v42 = sub_B5D694(ServantStatusDialog___c__DisplayClass202_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass202_0___ctor((ServantStatusDialog___c__DisplayClass202_0_o *)v42, 0LL);
  if ( !v42 )
    goto LABEL_27;
  *(_QWORD *)(v42 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 16), (System_Int32_array **)this, v45, v46, v47, v48, v49, v50);
  *(_DWORD *)(v42 + 24) = type;
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v43 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v43 )
      goto LABEL_27;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(v43, 0LL) == *(_DWORD *)(v42 + 24) )
    {
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v52 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v52,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v52, 0LL);
        return;
      }
LABEL_27:
      sub_B5D69C(v43, v44);
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v43 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v43 )
      goto LABEL_27;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(v43, 0LL);
    if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    }
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0LL);
    v55 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v42 + 24), 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0LL);
    v57 = System_String__Format_44573324(v56, TDSpeedLocalization, v55, 0LL);
    v58 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
    if ( (*(_BYTE *)(v58 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
    v59 = **(_QWORD **)(v58 + 192);
    if ( (*(_BYTE *)(v59 + 306) & 1) == 0 )
      sub_AF52C4(v59);
    v60 = **(CommonUI_o ***)(v59 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0LL);
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12183/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0LL);
    v64 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v64,
      (Il2CppObject *)v42,
      Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__0__,
      0LL);
    if ( !v60 )
      goto LABEL_27;
    CommonUI__OpenConfirmDecideDlg(v60, Empty, v57, v62, v63, v64, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 1, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectFavorite(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x20
  __int64 v16; // x8
  __int128 v17; // q1
  const MethodInfo *v18; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_42E6EC6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, v9, v10, v11);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    byte_42E6EC6 = 1;
  }
  if ( isDecide )
  {
    v15 = *(_QWORD *)&v5->fields.isModify;
    if ( !v15 || (v16 = *(_QWORD *)(v15 + 56)) == 0 )
LABEL_12:
      sub_B5D69C(this, isDecide);
    v17 = *(_OWORD *)(v16 + 32);
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
    *(_OWORD *)&v22.fields.fakeValue = v17;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v21 = v22;
    *(_QWORD *)(v15 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v21, 0LL);
    ServantStatusDialog__SetMark(v5, v18);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_18202348(Instance, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectPush(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x20
  __int64 v16; // x8
  __int128 v17; // q1
  const MethodInfo *v18; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_42E6EC8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__, v9, v10, v11);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    byte_42E6EC8 = 1;
  }
  if ( isDecide )
  {
    v15 = *(_QWORD *)&v5->fields.isModify;
    if ( !v15 || (v16 = *(_QWORD *)(v15 + 56)) == 0 )
LABEL_12:
      sub_B5D69C(this, isDecide);
    v17 = *(_OWORD *)(v16 + 32);
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
    *(_OWORD *)&v22.fields.fakeValue = v17;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v21 = v22;
    *(_QWORD *)(v15 + 168) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v21, 0LL);
    ServantStatusDialog__SetMark(v5, v18);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_18202348(Instance, v20, 0LL);
}


void __fastcall ServantStatusDialog__OnConfirmServantQuest(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
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
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  QuestTree_o *v33; // x0
  __int64 v34; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v36; // x20
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v39; // x21
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v41; // x21
  char v42; // w1
  int v43; // w2
  __int64 v44; // x3
  TerminalPramsManager_c *v45; // x0
  CommonUI_o *v46; // x20
  AvalonSceneManager_c *v47; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v49; // x21

  if ( (byte_42E6EC2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v12, v13, v14);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v15, v16, v17);
    sub_B5D5C4(&Method_ServantStatusDialog__OnConfirmServantQuest_b__209_0__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v30, v31, v32);
    byte_42E6EC2 = 1;
  }
  if ( !isDecide )
  {
    this->fields.tabKind = 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_18202348(Instance, v39, 0LL);
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v41 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v41,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v41, 0LL);
        return;
      }
    }
    goto LABEL_31;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v33 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v33 )
    goto LABEL_31;
  QuestInfo = QuestTree__GetQuestInfo(v33, this->fields.tabKind, 0LL);
  v36 = QuestInfo;
  if ( QuestInfo )
  {
    WarInfo_k__BackingField = QuestInfo->fields._WarInfo_k__BackingField;
    if ( WarInfo_k__BackingField && MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL) )
    {
      v33 = (QuestTree_o *)v36->fields._WarInfo_k__BackingField;
      if ( !v33 )
        goto LABEL_31;
      LODWORD(v36) = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)v33, 0LL);
    }
    else
    {
      LODWORD(v36) = 0;
    }
  }
  v33 = (QuestTree_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v33 )
    goto LABEL_31;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v33, (int32_t)v36, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B27 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    byte_42E4B27 = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v46 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v47 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v47 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v47->static_fields->DEFAULT_FADE_TIME;
  v49 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__209_0__, 0LL);
  if ( !v46 )
LABEL_31:
    sub_B5D69C(v33, v34);
  CommonUI__maskFadeout(v46, 1, DEFAULT_FADE_TIME, v49, 0LL);
}


void __fastcall ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x1
  BattleFBXComponent_o *v7; // x0

  if ( (byte_42E6EA2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6EA2 = 1;
  }
  v5 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    BattleFBXComponent__RevertShaderFloatProperty(v7, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x19
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_42E6ECB & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2781/*"Base/TitlePrefab/BackObj/BtnBg"*/, v8, v9, v10);
    byte_42E6ECB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  v13 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_2781/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v13 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      }
      AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
      return;
    }
LABEL_13:
    sub_B5D69C(transform, v12);
  }
}


void __fastcall ServantStatusDialog__OnSelectBattle(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x21
  ServantStatusBattleListViewManager_CallbackFunc_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  const MethodInfo *v25; // x2

  if ( (byte_42E6EAC & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectBattle__, v6, v7, v8);
    sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42E6EAC = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v13 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectBattle__,
      0LL);
    if ( !voiceTabListViewManager
      || (voiceTabListViewManager->fields.callbackFunc = (struct ServantStatusVoiceListViewManager_CallbackFunc_o *)v13,
          sub_B5D560(
            (BattleServantConfConponent_o *)&voiceTabListViewManager->fields.callbackFunc,
            (System_Int32_array **)v13,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21),
          ServantStatusBattleListViewManager__SetMode_22132592(
            (ServantStatusBattleListViewManager_o *)voiceTabListViewManager,
            1,
            v22,
            v23),
          (v24 = *(_QWORD *)&this->fields.isModify) == 0) )
    {
      sub_B5D69C(v14, v15);
    }
    if ( *(_DWORD *)(v24 + 240) != result )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      ServantStatusDialog__ChangeBattleResource(this, result, v25);
    }
  }
}


void __fastcall ServantStatusDialog__OnSelectCharaGraph(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog__OnSelectCommandCodeStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x21

  if ( (byte_42E6E9D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E6E9D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( isDecide )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.profileTabListViewManager;
    if ( !gameObject )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    LOBYTE(this->fields.statusLoadAsset) = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B5D69C(gameObject, v13);
  CommonUI__CloseServantEquipStatusDialog(Instance, v15, 0LL);
}


void __fastcall ServantStatusDialog__OnSelectEquipStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x21

  if ( (byte_42E6E9B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E6E9B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( isDecide )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.profileTabListViewManager;
    if ( !gameObject )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    LOBYTE(this->fields.statusLoadAsset) = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B5D69C(gameObject, v13);
  CommonUI__CloseServantEquipStatusDialog(Instance, v15, 0LL);
}


void __fastcall ServantStatusDialog__OnSelectFlavor(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E6E9F & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectFlavor__, v5, v6, v7);
    byte_42E6E9F = 1;
  }
  battleTabListViewManager = this->fields.battleTabListViewManager;
  v9 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0LL);
  if ( !battleTabListViewManager )
    sub_B5D69C(v10, v11);
  ServantStatusFlavorTextListViewManager__SetMode(
    (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
    1,
    v9,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectStatus(
        ServantStatusDialog_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v5; // w21
  ServantStatusDialog_o *v6; // x19
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
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v74; // x21
  __int64 v75; // x8
  _QWORD *v76; // x8
  __int64 v77; // x8
  int64_t v78; // x21
  CommonUI_o *v79; // x20
  ServantStatusDialog_EndDelegate_o *v80; // x22
  System_Action_o *v81; // x23
  __int64 v82; // x8
  __int64 v83; // x8
  __int128 v84; // q1
  int v85; // w24
  __int64 v86; // x8
  __int64 v87; // x8
  EquipTargetInfo_o *v88; // x21
  CommonUI_o *v89; // x20
  ServantStatusDialog_EndDelegate_o *v90; // x22
  System_Action_o *v91; // x23
  int32_t v92; // w1
  ServantStatusListViewManager_o *v93; // x20
  ServantStatusListViewManager_CallbackFunc_o *v94; // x21
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  __int64 *v101; // x8
  struct UISprite_o *v102; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v104; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v106; // x21
  __int64 v107; // x8
  __int64 v108; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+20h] [xbp-60h]

  v5 = result;
  v6 = this;
  if ( (byte_42E6E9A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, id, method);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_ServantStatusDialog_EndOpenEquipStatus__, v19, v20, v21);
    sub_B5D5C4(&Method_ServantStatusDialog_Exit__, v22, v23, v24);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectEquipStatus__, v25, v26, v27);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&SoundManager_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_12873/*"ServantLvExceed"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_12877/*"ServantSkillCombine"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_12874/*"ServantNpCombine"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_4233/*"CommandCardEquip"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_12861/*"ServantEQCombine"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_12858/*"ServantCombine"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_6890/*"FriendshipExceed"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_12871/*"ServantLimitCountUp"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_2020/*"AppendSkillCombine"*/, v67, v68, v69);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&StringLiteral_4234/*"CommandCardExceed"*/, v70, v71, v72);
    byte_42E6E9A = 1;
  }
  if ( !BYTE2(v6->fields.statusLoadAsset) )
  {
    if ( BYTE1(v6->fields.statusLoadAsset) )
    {
      profileTabListViewManager = (ServantStatusListViewManager_o *)v6->fields.profileTabListViewManager;
      v74 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v74,
        (Il2CppObject *)v6,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v74, 0LL);
        return;
      }
LABEL_116:
      sub_B5D69C(this, *(_QWORD *)&result);
    }
    if ( v5 == 1 )
    {
      v75 = *(_QWORD *)&v6->fields.isModify;
      if ( !v75 )
        goto LABEL_116;
      if ( *(_BYTE *)(v75 + 121) )
        v5 = 1;
      else
        v5 = 2;
    }
    switch ( v5 )
    {
      case 1:
      case 2:
        v76 = *(_QWORD **)&v6->fields.isModify;
        if ( !v76 )
          goto LABEL_116;
        if ( v76[7] && (__int64)v76[45] >= 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v77 = *(_QWORD *)&v6->fields.isModify;
          if ( !v77 )
            goto LABEL_116;
          v78 = *(_QWORD *)(v77 + 360);
          v79 = (CommonUI_o *)this;
          v80 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v80,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v81 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v81, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v79 )
            goto LABEL_116;
          CommonUI__OpenServantEquipStatusDialog(v79, 11, v78, 1, v80, v81, 0LL);
        }
        else
        {
          v82 = v76[11];
          if ( !v82 )
            goto LABEL_36;
          v83 = *(_QWORD *)(v82 + 144);
          if ( !v83 )
            goto LABEL_36;
          v84 = *(_OWORD *)(v83 + 40);
          *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)(v83 + 24);
          *(_OWORD *)&v110.fields.fakeValue = v84;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v109 = v110;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v109, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            v85 = *(_DWORD *)&v6->fields.isInitTab;
            if ( v85 == 4 )
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v86 = *(_QWORD *)&v6->fields.isModify;
              if ( !v86 )
                goto LABEL_116;
              v87 = *(_QWORD *)(v86 + 88);
              if ( !v87 )
                goto LABEL_116;
              v88 = *(EquipTargetInfo_o **)(v87 + 144);
              v89 = (CommonUI_o *)this;
              v90 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v90,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v91 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(v91, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v89 )
                goto LABEL_116;
              v92 = 13;
            }
            else
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v107 = *(_QWORD *)&v6->fields.isModify;
              if ( !v107 )
                goto LABEL_116;
              v108 = *(_QWORD *)(v107 + 88);
              if ( !v108 )
                goto LABEL_116;
              v88 = *(EquipTargetInfo_o **)(v108 + 144);
              v89 = (CommonUI_o *)this;
              v90 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v90,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v91 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(v91, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v89 )
                goto LABEL_116;
              if ( v85 == 5 )
                v92 = 14;
              else
                v92 = 16;
            }
            CommonUI__OpenServantEquipStatusDialog_18217320(v89, v92, v88, v90, v91, 0LL);
          }
          else
          {
LABEL_36:
            v93 = (ServantStatusListViewManager_o *)v6->fields.profileTabListViewManager;
            v94 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
            ServantStatusListViewManager_CallbackFunc___ctor(
              v94,
              (Il2CppObject *)v6,
              (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
              0LL);
            if ( !v93 )
              goto LABEL_116;
            ServantStatusListViewManager__SetMode(v93, 1, v94, 0LL);
          }
        }
        break;
      case 3:
        if ( id > 2 )
          ServantStatusDialog__OnClickCommandCharaCostume(v6, id - 3, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickCommandCharaLevel(v6, id, *(const MethodInfo **)&id);
        return;
      case 4:
        if ( id > 3 )
          ServantStatusDialog__OnClickFaceCharaCostume(v6, id - 4, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickFaceCharaLevel(v6, id, *(const MethodInfo **)&id);
        return;
      case 5:
        if ( id > 2 )
          ServantStatusDialog__OnClickPortraitCharaCostume(v6, id - 3, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickPortraitCharaLevel(v6, id, *(const MethodInfo **)&id);
        return;
      case 6:
        ServantStatusDialog__OnClickCommandCodeShow(v6, id, *(const MethodInfo **)&id);
        return;
      case 7:
        ServantStatusDialog__OnClickServantQuest(v6, id, *(const MethodInfo **)&id);
        return;
      case 8:
        ServantStatusDialog__OnClickTdSpeed(v6, id, *(const MethodInfo **)&id);
        return;
      case 9:
        ServantStatusDialog__OnClickChangeVoice(v6, id, *(const MethodInfo **)&id);
        return;
      case 10:
        ServantStatusDialog__OnClickRandomLimitCountSupport(v6, id, *(const MethodInfo **)&id);
        return;
      case 11:
        ServantStatusDialog__OnClickRandomLimitCountSetting(v6, id, *(const MethodInfo **)&id);
        return;
      case 12:
        ServantStatusDialog__OnclickRandomLimitCountMask(v6, id, *(const MethodInfo **)&id);
        return;
      case 13:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v101 = &StringLiteral_12858/*"ServantCombine"*/;
        goto LABEL_101;
      case 14:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v101 = &StringLiteral_12861/*"ServantEQCombine"*/;
        goto LABEL_101;
      case 15:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v101 = &StringLiteral_12877/*"ServantSkillCombine"*/;
        goto LABEL_101;
      case 16:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v101 = &StringLiteral_12871/*"ServantLimitCountUp"*/;
        goto LABEL_101;
      case 17:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v101 = &StringLiteral_6890/*"FriendshipExceed"*/;
        goto LABEL_101;
      case 18:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v101 = &StringLiteral_4233/*"CommandCardEquip"*/;
        goto LABEL_101;
      case 19:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v101 = &StringLiteral_4234/*"CommandCardExceed"*/;
        goto LABEL_101;
      case 20:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v101 = &StringLiteral_2020/*"AppendSkillCombine"*/;
        goto LABEL_101;
      case 21:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v101 = &StringLiteral_12874/*"ServantNpCombine"*/;
        goto LABEL_101;
      case 22:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v101 = &StringLiteral_12873/*"ServantLvExceed"*/;
LABEL_101:
        v102 = (struct UISprite_o *)*v101;
        this->fields.statusSprite = (struct UISprite_o *)*v101;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.statusSprite,
          (System_Int32_array **)v102,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v104 = AvalonSceneManager_TypeInfo;
        if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v104 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v104->static_fields->DEFAULT_FADE_TIME;
        v106 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v106, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0LL);
        if ( !Instance )
          goto LABEL_116;
        CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v106, 0LL);
        return;
      default:
        goto LABEL_36;
    }
  }
}


void __fastcall ServantStatusDialog__OnSelectVoice(
        ServantStatusDialog_o *this,
        int32_t kind,
        int32_t result,
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
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x22
  ServantStatusVoiceListViewManager_CallbackFunc_o *v26; // x23
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x1
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  ServantVoiceMaster_o *v31; // x23
  ServantStatusVoiceListViewItem_o *v32; // x25
  int32_t v33; // w22
  int32_t v34; // w21
  System_String_o *v35; // x24
  System_String_o *LabelName; // x0
  System_String_o *v37; // x24
  System_Collections_Generic_List_ServantVoiceData____o *HomeVoiceList; // x0
  const MethodInfo *v39; // x5
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v41; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v43; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E6EA0 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, kind, result, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectVoice__, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v22, v23, v24);
    byte_42E6EA0 = 1;
  }
  VoicePrefix = 0;
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    v26 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    ServantStatusVoiceListViewManager_CallbackFunc___ctor(
      v26,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectVoice__,
      0LL);
    if ( !servantNameRangeLabel )
      goto LABEL_58;
    ServantStatusVoiceListViewManager__SetMode(servantNameRangeLabel, 1, v26, 0LL);
    if ( !BYTE1(this->fields.statusLoadAsset) )
    {
      if ( kind == 2 )
      {
        ServantStatusDialog__StopVoice(this, v29);
        return;
      }
      if ( kind == 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        v31 = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.servantNameRangeLabel;
        if ( !Instance )
          goto LABEL_58;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0LL);
        if ( !Instance )
          goto LABEL_58;
        v32 = (ServantStatusVoiceListViewItem_o *)Instance;
        v33 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v32, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_58;
        v34 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        MasterData_WarQuestSelectionMaster,
                        v33,
                        (int32_t)Instance,
                        0LL);
        v35 = System_Int32__ToString((int32_t)&VoicePrefix, 0LL);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v32, 0LL);
        v37 = System_String__Concat_44580072(v35, (System_String_o *)StringLiteral_16096/*"_"*/, LabelName, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v32, 0LL);
        switch ( (int)Instance )
        {
          case 1:
            if ( !v31 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList(v31, v33, v34, v37, 0LL);
            goto LABEL_52;
          case 2:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v32, 0LL);
            if ( (int)Instance <= 7 )
            {
              if ( (_DWORD)Instance != 7 )
                goto LABEL_50;
              if ( !v32->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v32, 0LL) == 1
                  || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v32, 0LL),
                      (_DWORD)Instance == 3) )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v32, 0LL);
                  if ( v31 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_31494428(
                                      v31,
                                      v33,
                                      v34,
                                      (int32_t)Instance,
                                      0LL);
                    goto LABEL_52;
                  }
LABEL_58:
                  sub_B5D69C(Instance, v28);
                }
                if ( !v31 )
                  goto LABEL_58;
                if ( !v32->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList(v31, v33, v34, 0LL);
                  goto LABEL_52;
                }
LABEL_49:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(v31, v33, v34, v37, 0LL);
                goto LABEL_52;
              }
            }
            else
            {
              if ( (_DWORD)Instance != 18 )
              {
                if ( (_DWORD)Instance == 54 )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v32, 0LL);
                  if ( v31 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(v31, v33, (int32_t)Instance, 0LL);
LABEL_52:
                    ServantStatusDialog__PlayChrVoice_22201600(this, v33, v34, HomeVoiceList, result, v39);
                    return;
                  }
                  goto LABEL_58;
                }
LABEL_50:
                if ( v31 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList(v31, v33, v34, v37, 0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
              if ( !v32->fields.genderFlag && !v32->fields.voiceLabelSpecification )
              {
                if ( v31 )
                {
                  HomeVoiceList = ServantVoiceMaster__getCntStopVoiceList(v31, v33, v34, 2, 1, 0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
            }
            if ( !v31 )
              goto LABEL_58;
            goto LABEL_49;
          case 3:
            if ( !v31 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList(v31, v33, v34, v37, 0LL);
            goto LABEL_52;
          case 4:
            if ( !v31 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList(v31, v33, v34, 0LL);
            goto LABEL_52;
          case 5:
            if ( !v31 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList(v31, v33, v34, v37, 0LL);
            goto LABEL_52;
          case 6:
            if ( !v31 )
              goto LABEL_58;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList(v31, v33, v34, v37, 0LL);
            ServantStatusDialog__PlayBattleVoice(this, v33, v34, BattleVoiceList, result, v41);
            return;
          case 7:
            if ( !v31 )
              goto LABEL_58;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList(v31, v33, v34, v37, 0LL);
            ServantStatusDialog__PlayNpVoice(this, v33, v34, NpVoiceList, result, v43);
            return;
          case 8:
            if ( !v31 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList(v31, v33, v34, v37, 0LL);
            goto LABEL_52;
          case 9:
            if ( !v31 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList(v31, v33, v34, v37, 0LL);
            goto LABEL_52;
          default:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v32, 0LL);
            if ( !v31 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEntity_31491968(v31, (int32_t)Instance, v33, v34, v37, 0LL);
            goto LABEL_52;
        }
      }
    }
  }
}


void __fastcall ServantStatusDialog__OnclickRandomLimitCountBattleMask(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__OnclickRandomLimitCountMask(this, 3, v2);
}


void __fastcall ServantStatusDialog__OnclickRandomLimitCountMask(
        ServantStatusDialog_o *this,
        int32_t maskType,
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
  System_String_o *v45; // x20
  System_String_o *v46; // x21
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v50; // x21
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x8
  __int64 v54; // x9
  __int64 v55; // x22
  __int64 v56; // x23
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x0
  __int64 v59; // x22
  __int64 v60; // x22
  CommonUI_o *v61; // x22
  System_String_o *v62; // x23
  CommonConfirmDialog_ClickDelegate_o *v63; // x0
  __int64 *v64; // x8
  __int64 v65; // x8
  __int64 v66; // x9
  __int64 v67; // x22
  __int64 v68; // x23
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  __int64 v71; // x22
  __int64 v72; // x22
  CommonConfirmDialog_ClickDelegate_o *v73; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_42E6EA6 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, maskType, (_DWORD)method, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v15, v16, v17);
    sub_B5D5C4(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__, v18, v19, v20);
    sub_B5D5C4(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__181_0__, v21, v22, v23);
    sub_B5D5C4(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__181_1__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_12152/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12153/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12150/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_1/*""*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_12149/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v42, v43, v44);
    byte_42E6EA6 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12150/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12149/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  LODWORD(this[1].klass) = maskType;
  switch ( maskType )
  {
    case 3:
      v65 = *(_QWORD *)&this->fields.isModify;
      if ( !v65 )
        return;
      v66 = *(_QWORD *)(v65 + 56);
      if ( v66 )
      {
        v68 = *(_QWORD *)(v66 + 96);
        v67 = *(_QWORD *)(v66 + 104);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v75.fields.currentCryptoKey = v68;
        *(_QWORD *)&v75.fields.fakeValue = v67;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v75, 0LL) )
          goto LABEL_9;
        v65 = *(_QWORD *)&this->fields.isModify;
        if ( !v65 )
          return;
      }
      if ( !*(_BYTE *)(v65 + 329) )
        return;
      v69 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 75) & 2) != 0 )
        v69 = (_QWORD *)sub_B5D5CC(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v70 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v69, v69[3]);
      OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0LL);
      v71 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v71 + 306) & 1) == 0 )
        sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v72 = **(_QWORD **)(v71 + 192);
      if ( (*(_BYTE *)(v72 + 306) & 1) == 0 )
        sub_AF52C4(v72);
      v61 = **(CommonUI_o ***)(v72 + 184);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12152/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0LL);
      v63 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v64 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__181_0__;
      goto LABEL_49;
    case 2:
      v53 = *(_QWORD *)&this->fields.isModify;
      if ( !v53 )
        return;
      v54 = *(_QWORD *)(v53 + 56);
      if ( !v54 )
      {
LABEL_20:
        if ( !*(_BYTE *)(v53 + 330) )
          return;
        v57 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 75) & 2) != 0 )
          v57 = (_QWORD *)sub_B5D5CC(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v58 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v57, v57[3]);
        OverwriteAssetSoundName__PlaySystemSe(v58, 0, 0LL);
        v59 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
        if ( (*(_BYTE *)(v59 + 306) & 1) == 0 )
          sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
        v60 = **(_QWORD **)(v59 + 192);
        if ( (*(_BYTE *)(v60 + 306) & 1) == 0 )
          sub_AF52C4(v60);
        v61 = **(CommonUI_o ***)(v60 + 184);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12153/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0LL);
        v63 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v64 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__181_1__;
LABEL_49:
        v73 = v63;
        CommonConfirmDialog_ClickDelegate___ctor(v63, (Il2CppObject *)this, *v64, 0LL);
        if ( !v61 )
          goto LABEL_52;
        CommonUI__OpenConfirmDialog_18202048(
          v61,
          (System_String_o *)StringLiteral_1/*""*/,
          v62,
          v45,
          v46,
          v73,
          22,
          22,
          15.0,
          750,
          2,
          470,
          -162.5,
          0,
          0,
          240,
          1,
          0LL);
        return;
      }
      v56 = *(_QWORD *)(v54 + 96);
      v55 = *(_QWORD *)(v54 + 104);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v74.fields.currentCryptoKey = v56;
      *(_QWORD *)&v74.fields.fakeValue = v55;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v74, 0LL) )
      {
        v53 = *(_QWORD *)&this->fields.isModify;
        if ( !v53 )
          return;
        goto LABEL_20;
      }
LABEL_9:
      v47 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 75) & 2) != 0 )
        v47 = (_QWORD *)sub_B5D5CC(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v48 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v47, v47[3]);
      OverwriteAssetSoundName__PlaySystemSe(v48, 2, 0LL);
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v50 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v50,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v50, 0LL);
        return;
      }
LABEL_52:
      sub_B5D69C(v51, v52);
    case 1:
      goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open(
        ServantStatusDialog_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  ServantStatusListViewItem_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_42E6E5B & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)partyItem, *(_QWORD *)&member);
    byte_42E6E5B = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)canMoveCombine,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, 0, canMoveCombine, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantStatusDialog__Init(this, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22171016(
        ServantStatusDialog_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  ServantStatusListViewItem_o *v21; // x24
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_42E6E5C & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)partyItem, *(_QWORD *)&member);
    byte_42E6E5C = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.resultCallbackFunc = (struct ServantStatusDialog_ResultDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)canMoveCombine,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, callback != 0LL, canMoveCombine, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantStatusDialog__Init(this, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22171228(
        ServantStatusDialog_o *this,
        int32_t kind,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ServantStatusListViewItem_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_42E6E5D & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)partyItem, *(_QWORD *)&member);
    byte_42E6E5D = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34331100(v20, partyItem, member, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ServantStatusDialog__Init(this, v27);
}


void __fastcall ServantStatusDialog__Open_22171428(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  __int64 *v25; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v27; // x5

  if ( (byte_42E6E5E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, kind, userSvtId, callback);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E6E5E = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v25 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B5D69C(Instance, v24);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v25 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23FB038 *)*v25);
  ServantStatusDialog__Open_22171720(this, kind, Entity, callback, openCallback, v27);
}


void __fastcall ServantStatusDialog__Open_22171720(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int v19; // w8
  bool v20; // w21
  bool v21; // w22
  ServantStatusListViewItem_o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_42E6E62 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userSvtEntity, callback);
    byte_42E6E62 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = *(_DWORD *)&this->fields.isInitTab;
  v20 = 0;
  if ( v19 != 29 && v19 != 34 )
    v20 = v19 != 2 && v19 != 33;
  v21 = 0;
  if ( v19 != 29 && v19 != 34 )
    v21 = v19 != 2 && v19 != 33;
  v22 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34332776(v22, userSvtEntity, 0LL, 0LL, 0, v20, v21, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ServantStatusDialog__Init(this, v29);
}


void __fastcall ServantStatusDialog__Open_22172016(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  __int64 *v25; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v27; // x5

  if ( (byte_42E6E5F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, kind, userSvtId, callback);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E6E5F = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v25 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B5D69C(Instance, v24);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v25 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23FB038 *)*v25);
  ServantStatusDialog__Open_22172308(this, kind, Entity, callback, openCallback, v27);
}


void __fastcall ServantStatusDialog__Open_22172308(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int v19; // w8
  bool v20; // w22
  bool v21; // w23
  ServantStatusListViewItem_o *v22; // x24
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_42E6E63 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userSvtEntity, callback);
    byte_42E6E63 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.resultCallbackFunc = (struct ServantStatusDialog_ResultDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = *(_DWORD *)&this->fields.isInitTab;
  v20 = 0;
  if ( v19 != 29 && v19 != 34 )
    v20 = v19 != 2 && v19 != 33;
  v21 = 0;
  if ( v19 != 29 && v19 != 34 )
    v21 = v19 != 2 && v19 != 33;
  v22 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34332776(v22, userSvtEntity, 0LL, 0LL, callback != 0LL, v20, v21, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ServantStatusDialog__Init(this, v29);
}


void __fastcall ServantStatusDialog__Open_22172608(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  __int64 *v25; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v27; // x6

  if ( (byte_42E6E60 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, kind, userSvtId, callback);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E6E60 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v25 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B5D69C(Instance, v24);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v25 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23FB038 *)*v25);
  ServantStatusDialog__Open_22172904(this, kind, Entity, callback, openCallback, 0, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22172904(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int v20; // w8
  bool v21; // w22
  bool v22; // w23
  ServantStatusListViewItem_o *v23; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_42E6E64 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userSvtEntity, callback);
    byte_42E6E64 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)canMoveCombine,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = *(_DWORD *)&this->fields.isInitTab;
  v21 = 0;
  if ( v20 != 29 && v20 != 34 )
    v21 = v20 != 2 && v20 != 33;
  v22 = 0;
  if ( v20 != 29 && v20 != 34 )
    v22 = v20 != 2 && v20 != 33;
  v23 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34332776(v23, userSvtEntity, 0LL, 0LL, 0, v21, v22, canMoveCombine, 0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ServantStatusDialog__Init(this, v30);
}


void __fastcall ServantStatusDialog__Open_22173212(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  __int64 *v25; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v27; // x6

  if ( (byte_42E6E61 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, kind, userSvtId, callback);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E6E61 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v25 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B5D69C(Instance, v24);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v25 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23FB038 *)*v25);
  ServantStatusDialog__Open_22173508(this, kind, Entity, callback, openCallback, 0, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22173508(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int v20; // w8
  bool v21; // w23
  bool v22; // w24
  ServantStatusListViewItem_o *v23; // x25
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_42E6E65 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userSvtEntity, callback);
    byte_42E6E65 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)canMoveCombine,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = *(_DWORD *)&this->fields.isInitTab;
  v21 = 0;
  if ( v20 != 29 && v20 != 34 )
    v21 = v20 != 2 && v20 != 33;
  v22 = 0;
  if ( v20 != 29 && v20 != 34 )
    v22 = v20 != 2 && v20 != 33;
  v23 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34332776(
    v23,
    userSvtEntity,
    0LL,
    0LL,
    callback != 0LL,
    v21,
    v22,
    canMoveCombine,
    0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ServantStatusDialog__Init(this, v30);
}


void __fastcall ServantStatusDialog__Open_22173924(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        System_Int64_array *equipIdList,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v21; // x7

  if ( (byte_42E6E66 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, kind, userSvtId, equipIdList);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E6E66 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v19);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_22174132(this, kind, Entity, equipIdList, 0LL, callback, 0LL, v21);
}


void __fastcall ServantStatusDialog__Open_22174132(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int v21; // w8
  bool v22; // w23
  bool v23; // w24
  ServantStatusListViewItem_o *v24; // x25
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_42E6E67 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userSvtEntity, equipIdList);
    byte_42E6E67 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = *(_DWORD *)&this->fields.isInitTab;
  v22 = 0;
  if ( v21 != 29 && v21 != 34 )
    v22 = v21 != 2 && v21 != 33;
  v23 = 0;
  if ( v21 != 29 && v21 != 34 )
    v23 = v21 != 2 && v21 != 33;
  v24 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34332776(v24, userSvtEntity, equipIdList, questRestrictionInfo, 0, v22, v23, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ServantStatusDialog__Init(this, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22174444(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int v23; // w8
  bool v24; // w24
  bool v25; // w25
  ServantStatusListViewItem_o *v26; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_42E6E68 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userSvtEntity, equipIdList);
    byte_42E6E68 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)canMoveCombine);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = *(_DWORD *)&this->fields.isInitTab;
  v24 = 0;
  if ( v23 != 29 && v23 != 34 )
    v24 = v23 != 2 && v23 != 33;
  v25 = 0;
  if ( v23 != 29 && v23 != 34 )
    v25 = v23 != 2 && v23 != 33;
  v26 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34332776(
    v26,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v24,
    v25,
    canMoveCombine,
    0LL);
  *(_QWORD *)&this->fields.isModify = v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ServantStatusDialog__Init(this, v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22174768(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int v23; // w8
  bool v24; // w25
  bool v25; // w26
  ServantStatusListViewItem_o *v26; // x27
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_42E6E69 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userSvtEntity, equipIdList);
    byte_42E6E69 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)canMoveCombine);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = *(_DWORD *)&this->fields.isInitTab;
  v24 = 0;
  if ( v23 != 29 && v23 != 34 )
    v24 = v23 != 2 && v23 != 33;
  v25 = 0;
  if ( v23 != 29 && v23 != 34 )
    v25 = v23 != 2 && v23 != 33;
  v26 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34332776(
    v26,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0LL,
    v24,
    v25,
    canMoveCombine,
    0LL);
  *(_QWORD *)&this->fields.isModify = v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ServantStatusDialog__Init(this, v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22175096(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v22; // x6

  if ( (byte_42E6E6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, kind, userSvtId, isUse);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E6E6A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v20);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_22175312(this, kind, Entity, isUse, callback, openCallback, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22175312(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ServantStatusListViewItem_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_42E6E6B & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userSvtEntity, isUse);
    byte_42E6E6B = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)isUse,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34335308(v20, userSvtEntity, isUse, 0LL);
  *(_QWORD *)&this->fields.isModify = v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ServantStatusDialog__Init(this, v27);
}


void __fastcall ServantStatusDialog__Open_22175508(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int v19; // w8
  bool v20; // w21
  ServantStatusListViewItem_o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_42E6E6C & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userSvtCollectionEntity, callback);
    byte_42E6E6C = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = *(_DWORD *)&this->fields.isInitTab;
  v20 = 0;
  if ( v19 != 29 && v19 != 34 )
    v20 = v19 != 2 && v19 != 33;
  v21 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34337184(v21, userSvtCollectionEntity, 0, v20, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantStatusDialog__Init(this, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22175740(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int v20; // w8
  bool v21; // w22
  ServantStatusListViewItem_o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_42E6E6D & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userSvtCollectionEntity, *(_QWORD *)&imageLimitCount);
    byte_42E6E6D = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    *(System_String_array ***)&imageLimitCount,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = *(_DWORD *)&this->fields.isInitTab;
  v21 = 0;
  if ( v20 != 29 && v20 != 34 )
    v21 = v20 != 2 && v20 != 33;
  v22 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34338868(v22, userSvtCollectionEntity, imageLimitCount, 0, v21, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ServantStatusDialog__Init(this, v29);
}


void __fastcall ServantStatusDialog__Open_22175988(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int v19; // w8
  bool v20; // w22
  ServantStatusListViewItem_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_42E6E6E & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userSvtCollectionEntity, callback);
    byte_42E6E6E = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = *(_DWORD *)&this->fields.isInitTab;
  v20 = 0;
  if ( v19 != 29 && v19 != 34 )
    v20 = v19 != 2 && v19 != 33;
  v21 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34337184(v21, userSvtCollectionEntity, callback != 0LL, v20, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantStatusDialog__Init(this, v28);
}


void __fastcall ServantStatusDialog__Open_22176224(
        ServantStatusDialog_o *this,
        int32_t kind,
        ServantLeaderInfo_o *servantLeaderInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantStatusListViewItem_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_42E6E6F & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)servantLeaderInfo, callback);
    byte_42E6E6F = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)servantLeaderInfo,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34340308(v19, servantLeaderInfo, kind != 7, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantStatusDialog__Init(this, v26);
}


void __fastcall ServantStatusDialog__Open_22176412(
        ServantStatusDialog_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipTargetInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantStatusListViewItem_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_42E6E70 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)equipTargetInfo, callback);
    byte_42E6E70 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)equipTargetInfo,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34342020(v19, equipTargetInfo, kind == 19, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22176600(
        ServantStatusDialog_o *this,
        int32_t kind,
        CommandCodeEntity_o *commandCodeEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ServantStatusListViewItem_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_42E6E71 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)commandCodeEntity, isUse);
    byte_42E6E71 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)commandCodeEntity,
    (System_String_array **)isUse,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34342848(v20, commandCodeEntity, isUse, 0LL);
  *(_QWORD *)&this->fields.isModify = v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ServantStatusDialog__Init(this, v27);
}


void __fastcall ServantStatusDialog__Open_22176796(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_42E6E72 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userCommandCodeEntity, callback);
    byte_42E6E72 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34343244(v19, userCommandCodeEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantStatusDialog__Init(this, v26);
}


void __fastcall ServantStatusDialog__Open_22176976(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_42E6E73 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userCommandCodeEntity, callback);
    byte_42E6E73 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34343244(v19, userCommandCodeEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantStatusDialog__Init(this, v26);
}


void __fastcall ServantStatusDialog__Open_22177156(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_42E6E74 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, kind, (_DWORD)userCommandCodeCollectionEntity, callback);
    byte_42E6E74 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34344380(v19, userCommandCodeCollectionEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__PlayBattleEffect(
        ServantStatusDialog_o *this,
        bool noupdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  bool v4; // w28
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
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  char v36; // w1
  int v37; // w2
  __int64 v38; // x3
  char v39; // w1
  int v40; // w2
  __int64 v41; // x3
  char v42; // w1
  int v43; // w2
  __int64 v44; // x3
  char v45; // w1
  int v46; // w2
  __int64 v47; // x3
  char v48; // w1
  int v49; // w2
  __int64 v50; // x3
  char v51; // w1
  int v52; // w2
  __int64 v53; // x3
  char v54; // w1
  int v55; // w2
  __int64 v56; // x3
  char v57; // w1
  int v58; // w2
  __int64 v59; // x3
  char v60; // w1
  int v61; // w2
  __int64 v62; // x3
  UnityEngine_Object_o *bgTxtSprite; // x21
  __int64 v64; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Component_o *v66; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  unsigned int localScale; // s0
  float v69; // s8
  int32_t v70; // w22
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  UnityEngine_Object_o *v73; // x24
  int32_t v74; // w23
  BattleServantConfConponent_o *p_isBattleResourceLoading; // x21
  UnityEngine_Object_o *callbackFunc; // x25
  struct ServantStatusDialog_EndDelegate_o **p_callbackFunc; // x24
  UnityEngine_Object_o *v78; // x25
  int32_t v79; // w25
  UnityEngine_GameObject_o *gameObject; // x23
  System_Int32_array **v81; // x23
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v88; // x24
  float32x2_t v89; // d8
  float v90; // s9
  unsigned __int64 v91; // d0 OVERLAPPED
  float v92; // s2
  int v93; // s1
  UnityEngine_Transform_o *v94; // x26
  int v95; // s0
  __int64 v98; // x8
  __int64 v99; // x8
  int32_t v100; // w26
  System_Collections_Generic_Dictionary_int__float__o *v101; // x27
  UnityEngine_Transform_o *v102; // x28
  float Item; // s8
  float v104; // s9
  float v105; // s0
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x25
  UnityEngine_Object_o *v108; // x22
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  int32_t v115; // w21
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v117; // x21
  bool v118; // [xsp+Ch] [xbp-74h]
  System_String_o *assetPath; // [xsp+10h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4

  v4 = noupdate;
  if ( (byte_42E6E84 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, noupdate, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIRoot___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__float__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___, v30, v31, v32);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v33, v34, v35);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v36, v37, v38);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&NGUITools_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_2824/*"Battle2D"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_16406/*"_y0"*/, v60, v61, v62);
    byte_42E6E84 = 1;
  }
  assetPath = 0LL;
  entity = 0LL;
  if ( !LOBYTE(this->fields.battleActor) )
  {
    bgTxtSprite = (UnityEngine_Object_o *)this->fields.bgTxtSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(bgTxtSprite, 0LL, 0LL) )
    {
      transform = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
      LOBYTE(this->fields.battleActor) = 1;
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_93;
      v66 = transform;
      while ( 1 )
      {
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            v66,
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
          break;
        transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v66, 0LL);
        v66 = transform;
        if ( !transform )
          goto LABEL_93;
      }
      if ( !Component_WebViewObject )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Component_WebViewObject,
                                               0LL);
      if ( !transform )
        goto LABEL_93;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
      if ( !transform )
        goto LABEL_93;
      v69 = *(float *)&localScale;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_93;
      v121.fields.x = 1.0 / v69;
      v121.fields.y = 1.0 / v69;
      v121.fields.z = 1.0 / v69;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v121, 0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.isModify;
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)ServantStatusListViewItem__get_SvtId(
                                               (ServantStatusListViewItem_o *)transform,
                                               0LL);
      if ( !*(_QWORD *)&this->fields.isModify )
        goto LABEL_93;
      v70 = (int)transform;
      ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                              *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                              0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                          ConvertOverwriteDispImageLimitCount,
                                          0LL);
      v73 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
      v74 = LimitCountByImageLimitCostumeIn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      p_isBattleResourceLoading = (BattleServantConfConponent_o *)&this->fields.isBattleResourceLoading;
      if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
      {
        transform = (UnityEngine_Component_o *)p_isBattleResourceLoading->klass;
        if ( !p_isBattleResourceLoading->klass )
          goto LABEL_93;
        BattleFBXComponent__RevertShaderFloatProperty((BattleFBXComponent_o *)transform, 0LL);
      }
      callbackFunc = (UnityEngine_Object_o *)this->fields.callbackFunc;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      p_callbackFunc = &this->fields.callbackFunc;
      if ( UnityEngine_Object__op_Inequality(callbackFunc, 0LL, 0LL) )
      {
        v78 = (UnityEngine_Object_o *)*p_callbackFunc;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v78, 0LL);
      }
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                               (ServantLimitImageMaster_o *)transform,
                                               v70,
                                               v74,
                                               0LL);
      if ( !this->fields.bgTxtSprite )
        goto LABEL_93;
      v79 = (int)transform;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.bgTxtSprite, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      v81 = (System_Int32_array **)ServantAssetLoadManager__loadBattleActor(&assetPath, gameObject, v70, v79, 0, 0LL);
      *p_callbackFunc = (struct ServantStatusDialog_EndDelegate_o *)v81;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, v81, v82, v83, v84, v85, v86, v87);
      if ( !v81 )
        goto LABEL_93;
      v88 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
              (UnityEngine_GameObject_o *)v81,
              (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v81, 0LL);
      if ( !v88 )
        goto LABEL_93;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v88, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)ServantLimitAddMaster__TryGetEntity(
                                               (ServantLimitAddMaster_o *)transform,
                                               &entity,
                                               v70,
                                               v79,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_93;
        v89.n64_u64[0] = vmul_f32(
                           vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX),
                           vdup_n_s32(0x3C23D70Au)).n64_u64[0];
        v90 = (float)entity->fields.battleCharaOffsetZ * 0.01;
      }
      else
      {
        v89.n64_u64[0] = 0LL;
        v90 = 0.0;
      }
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v81, 0LL);
      if ( !transform )
        goto LABEL_93;
      v91 = vadd_f32(v89, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.y).n64_u64[0];
      v92 = v90 + *(float *)&this->fields.titleInfo;
      v93 = HIDWORD(v91);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v91,
        0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v81, 0LL);
      if ( !transform )
        goto LABEL_93;
      v122.fields.y = 270.0;
      v122.fields.x = 0.0;
      v122.fields.z = 0.0;
      UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v122, 0LL);
      v94 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v81, 0LL);
      *(UnityEngine_Vector3_o *)&v95 = UnityEngine_Vector3__get_one(0LL);
      if ( !v94 )
        goto LABEL_93;
      UnityEngine_Transform__set_localScale(v94, *(UnityEngine_Vector3_o *)&v95, 0LL);
      v98 = *(_QWORD *)&this->fields.isModify;
      if ( v98 )
      {
        v99 = *(_QWORD *)(v98 + 128);
        if ( v99 )
        {
          v118 = v4;
          v100 = *(_DWORD *)(v99 + 156);
          v101 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__float__TypeInfo);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v101,
            (const MethodInfo_2F3515C *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v101 )
            goto LABEL_93;
          System_Collections_Generic_Dictionary_int__float___Add(
            v101,
            5,
            0.75,
            (const MethodInfo_2F35D08 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v101,
            8,
            0.75,
            (const MethodInfo_2F35D08 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v101,
            9,
            0.75,
            (const MethodInfo_2F35D08 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v101,
                 v100,
                 (const MethodInfo_2F35F78 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v102 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v81, 0LL);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v101,
                     v100,
                     (const MethodInfo_2F35C48 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v104 = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v101,
                     v100,
                     (const MethodInfo_2F35C48 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v105 = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v101,
                     v100,
                     (const MethodInfo_2F35C48 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v102 )
              goto LABEL_93;
            v123.fields.z = v105;
            v123.fields.x = Item;
            v123.fields.y = v104;
            UnityEngine_Transform__set_localScale(v102, v123, 0LL);
            v4 = v118;
            p_isBattleResourceLoading = (BattleServantConfConponent_o *)&this->fields.isBattleResourceLoading;
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v88, v70, v79, 0LL);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v88, 0LL) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v88,
          5000.0,
          (System_String_o *)StringLiteral_16406/*"_y0"*/,
          0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v70, v79, 0, 0LL);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v88, Manager__loadAnimEvents, v70, v79, 0LL);
      BattleFBXComponent__SetWrapMode(
        (BattleFBXComponent_o *)v88,
        *(System_String_o **)&this->fields.confirmDispLv,
        2,
        0LL);
      BattleFBXComponent__playAnimation(
        (BattleFBXComponent_o *)v88,
        *(System_String_o **)&this->fields.confirmDispLv,
        0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v88, 0LL);
      if ( !transform
        || (Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)transform,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v88,
                                                      0LL)) == 0LL) )
      {
LABEL_93:
        sub_B5D69C(transform, v64);
      }
      v108 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)transform,
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_93;
        SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
      }
      else
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v108 )
            goto LABEL_93;
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v108, 0LL);
        }
      }
      p_isBattleResourceLoading->klass = (BattleServantConfConponent_c *)v88;
      sub_B5D560(p_isBattleResourceLoading, (System_Int32_array **)v88, v109, v110, v111, v112, v113, v114);
      v115 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2824/*"Battle2D"*/, 0LL);
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v81, v115, 0LL);
      if ( !v4 )
      {
        transform = (UnityEngine_Component_o *)this->fields.profileTabListViewManager;
        if ( !transform )
          goto LABEL_93;
        ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)transform, 3, 0LL);
        profileTabListViewManager = this->fields.profileTabListViewManager;
        if ( BYTE2(this->fields.statusLoadAsset) )
        {
          if ( profileTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_33243376(
              (ServantStatusListViewManager_o *)this->fields.profileTabListViewManager,
              2,
              0LL);
            return;
          }
          goto LABEL_93;
        }
        v117 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v117,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( !profileTabListViewManager )
          goto LABEL_93;
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v117, 0LL);
      }
    }
  }
}


bool __fastcall ServantStatusDialog__PlayBattleVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x21
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x4
  System_String_o *VoiceAssetName; // x22

  v10 = this;
  if ( (byte_42E6E90 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantVoiceData____get_Count__,
      svtId,
      limitCount,
      voicePlayListList);
    this = (ServantStatusDialog_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11,
                                      v12,
                                      v13);
    byte_42E6E90 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return ServantStatusDialog__PlayVoice(
           v10,
           VoiceAssetName,
           voicePlayListList->fields._items->m_Items[0],
           listIndex,
           v14);
}


bool __fastcall ServantStatusDialog__PlayChrVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        ServantVoiceData_array *voicePlayList,
        int32_t listIndex,
        const MethodInfo *method)
{
  System_String_o *VoiceAssetName; // x0
  const MethodInfo *v10; // x4

  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  return ServantStatusDialog__PlayVoice(this, VoiceAssetName, voicePlayList, listIndex, v10);
}


bool __fastcall ServantStatusDialog__PlayChrVoice_22201600(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x21
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x4
  System_String_o *VoiceAssetName; // x22

  v10 = this;
  if ( (byte_42E6E92 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantVoiceData____get_Count__,
      svtId,
      limitCount,
      voicePlayListList);
    this = (ServantStatusDialog_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11,
                                      v12,
                                      v13);
    byte_42E6E92 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return ServantStatusDialog__PlayVoice(
           v10,
           VoiceAssetName,
           voicePlayListList->fields._items->m_Items[0],
           listIndex,
           v14);
}


bool __fastcall ServantStatusDialog__PlayNpVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x21
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x4
  System_String_o *VoiceAssetName; // x22

  v10 = this;
  if ( (byte_42E6E91 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantVoiceData____get_Count__,
      svtId,
      limitCount,
      voicePlayListList);
    this = (ServantStatusDialog_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11,
                                      v12,
                                      v13);
    byte_42E6E91 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return ServantStatusDialog__PlayVoice(
           v10,
           VoiceAssetName,
           voicePlayListList->fields._items->m_Items[0],
           listIndex,
           v14);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusDialog__PlayVoice(
        ServantStatusDialog_o *this,
        System_String_o *assetName,
        ServantVoiceData_array *voicePlayList,
        int32_t listIndex,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct SePlayer_o *voicePlayer; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  int v37; // w19
  int v38; // w20
  _BOOL4 v39; // w0
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E6E8D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_string__Dispose__,
      (_DWORD)assetName,
      (_DWORD)voicePlayList,
      *(_QWORD *)&listIndex);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v15, v16, v17);
    byte_42E6E8D = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( voicePlayList && *(_QWORD *)&voicePlayList->max_length )
  {
    voicePlayer = this->fields.voicePlayer;
    if ( !voicePlayer )
      sub_B5D69C(0LL, assetName);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v41,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voicePlayer,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v42 = v41;
    do
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v42,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v19 )
      {
        v37 = 0;
        v38 = 1;
        goto LABEL_15;
      }
      if ( !assetName )
        sub_B5D69C(v19, v20);
    }
    while ( !System_String__Equals_44565128(assetName, (System_String_o *)v42.fields.current, 0LL) );
    ServantStatusDialog__StopVoice(this, v21);
    if ( LODWORD(this->fields.tabInitList) == 3 )
    {
      servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
      if ( !servantNameRangeLabel )
        sub_B5D69C(0LL, v22);
      ServantStatusVoiceListViewManager__SetMode_31453464(servantNameRangeLabel, 2, listIndex, 0LL);
      LODWORD(this->fields.battleLoadAsset) = listIndex;
    }
    *(_QWORD *)&this->fields.voicePlayNum = voicePlayList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.voicePlayNum,
      (System_Int32_array **)voicePlayList,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    *(_QWORD *)&this->fields.voiceListIndex = assetName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.voiceListIndex,
      (System_Int32_array **)assetName,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    ServantStatusDialog__EndWaitVoice(this, v36);
    v37 = 1;
    v38 = 3;
LABEL_15:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v42,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    return v37 & ((unsigned int)(v38 + 1) >> 2);
  }
  else
  {
    LOBYTE(v39) = 0;
  }
  return v39;
}


void __fastcall ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w8
  ServantStatusCharaGraphListViewManager_o *servantStatusBattleConfirmDialog; // x0

  if ( (byte_42E6E98 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    byte_42E6E98 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    v8 = BYTE3(this->fields.statusLoadAsset);
    BYTE2(this->fields.statusLoadAsset) = 1;
    if ( v8 )
    {
      BYTE3(this->fields.statusLoadAsset) = 0;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      OptionManager__Recover(0LL);
    }
    servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)this->fields.servantStatusBattleConfirmDialog;
    if ( servantStatusBattleConfirmDialog )
    {
      ServantStatusCharaGraphListViewManager__SetMode_22146376(servantStatusBattleConfirmDialog, 1, v2);
      servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
      if ( servantStatusBattleConfirmDialog )
      {
        ServantStatusListViewManager__SetMode_33243376(
          (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
          2,
          0LL);
        servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)this->fields.battleTabListViewManager;
        if ( servantStatusBattleConfirmDialog )
        {
          ServantStatusFlavorTextListViewManager__SetMode_34319232(
            (ServantStatusFlavorTextListViewManager_o *)servantStatusBattleConfirmDialog,
            2,
            0LL);
          if ( !BYTE4(this->fields.statusLoadAsset) )
            return;
          servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( servantStatusBattleConfirmDialog )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)servantStatusBattleConfirmDialog, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(servantStatusBattleConfirmDialog, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__RandomLimitCountSettingResource(
        ServantStatusDialog_o *this,
        bool isOwnSetting,
        bool isRandomOn,
        int32_t index,
        const MethodInfo *method)
{
  _BOOL4 v6; // w22
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  char v36; // w1
  int v37; // w2
  __int64 v38; // x3
  char v39; // w1
  int v40; // w2
  __int64 v41; // x3
  char v42; // w1
  int v43; // w2
  __int64 v44; // x3
  char v45; // w1
  int v46; // w2
  __int64 v47; // x3
  char v48; // w1
  int v49; // w2
  __int64 v50; // x3
  char v51; // w1
  int v52; // w2
  __int64 v53; // x3
  char v54; // w1
  int v55; // w2
  __int64 v56; // x3
  char v57; // w1
  int v58; // w2
  __int64 v59; // x3
  char v60; // w1
  int v61; // w2
  __int64 v62; // x3
  char v63; // w1
  int v64; // w2
  __int64 v65; // x3
  char v66; // w1
  int v67; // w2
  __int64 v68; // x3
  __int64 v69; // x20
  ServantStatusListViewItem_o *IsContainRandomIndex; // x0
  const MethodInfo *v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  const MethodInfo *v78; // x2
  int v79; // w8
  char v80; // w21
  __int64 v81; // x8
  __int64 v82; // x8
  __int64 v83; // x22
  __int64 v84; // x23
  int v85; // w22
  BalanceConfig_c *v86; // x8
  __int64 v87; // x8
  System_Int32_array *v88; // x22
  System_Func_int__bool__o *v89; // x23
  __int64 v90; // x19
  __int64 v91; // x19
  CommonUI_o *v92; // x19
  System_String_o *v93; // x21
  System_String_o *v94; // x22
  System_String_o *v95; // x23
  CommonConfirmDialog_ClickDelegate_o *v96; // x0
  __int64 *v97; // x8
  __int64 v98; // x19
  __int64 v99; // x19
  CommonConfirmDialog_ClickDelegate_o *v100; // x24
  int v101; // w8
  const MethodInfo *v102; // x2
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v104; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  v6 = isRandomOn;
  if ( (byte_42E6EBF & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, isOwnSetting, isRandomOn, *(_QWORD *)&index);
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, v9, v10, v11);
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v33, v34, v35);
    sub_B5D5C4(
      &Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__0__,
      v36,
      v37,
      v38);
    sub_B5D5C4(
      &Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__1__,
      v39,
      v40,
      v41);
    sub_B5D5C4(
      &Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__2__,
      v42,
      v43,
      v44);
    sub_B5D5C4(&ServantStatusDialog___c__DisplayClass206_0_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_12163/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_12161/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_12150/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_1/*""*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_12151/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12162/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_12149/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v66, v67, v68);
    byte_42E6EBF = 1;
  }
  v69 = sub_B5D694(ServantStatusDialog___c__DisplayClass206_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass206_0___ctor((ServantStatusDialog___c__DisplayClass206_0_o *)v69, 0LL);
  if ( !v69 )
    goto LABEL_57;
  *(_QWORD *)(v69 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v69 + 24), (System_Int32_array **)this, v72, v73, v74, v75, v76, v77);
  *(_DWORD *)(v69 + 32) = index;
  *(_BYTE *)(v69 + 36) = isOwnSetting;
  *(_BYTE *)(v69 + 37) = v6;
  IsContainRandomIndex = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !isOwnSetting )
  {
    if ( !IsContainRandomIndex )
      goto LABEL_57;
    if ( ((IsContainRandomIndex->fields.isEnableSupportRandomSetting ^ v6) & 1) == 0 )
    {
      if ( IsContainRandomIndex->fields.supportRandomSettingButtonIndex != index )
      {
        ServantStatusListViewItem__SetRandomSettingByIndex(IsContainRandomIndex, index, 0LL);
        IsContainRandomIndex = *(ServantStatusListViewItem_o **)&this->fields.isModify;
        if ( !IsContainRandomIndex )
          goto LABEL_57;
      }
      LOBYTE(v101) = *(_BYTE *)(v69 + 37);
      goto LABEL_53;
    }
LABEL_11:
    IsContainRandomIndex = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v71);
    v79 = *(unsigned __int8 *)(v69 + 37);
    v80 = (char)IsContainRandomIndex;
    *(_DWORD *)(v69 + 16) = 12;
    if ( v79 )
    {
      v81 = *(_QWORD *)&this->fields.isModify;
      if ( !v81 )
        goto LABEL_57;
      v82 = *(_QWORD *)(v81 + 56);
      if ( !v82 )
        goto LABEL_57;
      v84 = *(_QWORD *)(v82 + 80);
      v83 = *(_QWORD *)(v82 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v105.fields.currentCryptoKey = v84;
      *(_QWORD *)&v105.fields.fakeValue = v83;
      IsContainRandomIndex = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                              v105,
                                                              0LL);
      v85 = (int)IsContainRandomIndex;
      v86 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v86 = BalanceConfig_TypeInfo;
      }
      if ( v85 == v86->static_fields->ServantIdMashu1 )
      {
        v87 = *(_QWORD *)&this->fields.isModify;
        if ( !v87 )
          goto LABEL_57;
        v88 = *(System_Int32_array **)(v87 + 336);
        if ( v88 )
        {
          v89 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v89,
            (Il2CppObject *)v69,
            Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__0__,
            (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
          if ( BasicHelper__Any_int__28142236(
                 v88,
                 (System_Func_T__bool__o *)v89,
                 (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
          {
            v90 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
            if ( (*(_BYTE *)(v90 + 306) & 1) == 0 )
              sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
            v91 = **(_QWORD **)(v90 + 192);
            if ( (*(_BYTE *)(v91 + 306) & 1) == 0 )
              sub_AF52C4(v91);
            v92 = **(CommonUI_o ***)(v91 + 184);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12163/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12162/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL);
            v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12161/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL);
            v96 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
            v97 = &Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__1__;
            goto LABEL_41;
          }
        }
      }
    }
    if ( *(_BYTE *)(v69 + 37) != 0 && (v80 & 1) != 0 )
    {
      v98 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v98 + 306) & 1) == 0 )
        sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v99 = **(_QWORD **)(v98 + 192);
      if ( (*(_BYTE *)(v99 + 306) & 1) == 0 )
        sub_AF52C4(v99);
      v92 = **(CommonUI_o ***)(v99 + 184);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12151/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12150/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
      v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12149/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
      v96 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v97 = &Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__2__;
LABEL_41:
      v100 = v96;
      CommonConfirmDialog_ClickDelegate___ctor(v96, (Il2CppObject *)v69, *v97, 0LL);
      if ( v92 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v92,
          (System_String_o *)StringLiteral_1/*""*/,
          v93,
          v94,
          v95,
          v100,
          28,
          0.0,
          15.0,
          0,
          1,
          0,
          240,
          0,
          1,
          0,
          0LL);
        return;
      }
LABEL_57:
      sub_B5D69C(IsContainRandomIndex, v71);
    }
    IsContainRandomIndex = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !IsContainRandomIndex )
      goto LABEL_57;
    ServantStatusListViewItem__SetRandomSettingByIndex(IsContainRandomIndex, *(_DWORD *)(v69 + 32), 0LL);
    IsContainRandomIndex = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !IsContainRandomIndex )
      goto LABEL_57;
    v101 = *(unsigned __int8 *)(v69 + 37);
    if ( *(_BYTE *)(v69 + 36) )
    {
      ServantStatusListViewItem__set_IsEnableOwnRandomSetting(IsContainRandomIndex, v101 != 0, 0LL);
      IsContainRandomIndex = (ServantStatusListViewItem_o *)this->fields.servantStatusBattleConfirmDialog;
      if ( !IsContainRandomIndex )
        goto LABEL_57;
      ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        (ServantStatusCharaGraphListViewManager_o *)IsContainRandomIndex,
        *(ServantStatusListViewItem_o **)&this->fields.isModify,
        v102);
      goto LABEL_51;
    }
LABEL_53:
    IsContainRandomIndex->fields.isEnableSupportRandomSetting = v101;
    goto LABEL_54;
  }
  if ( !IsContainRandomIndex )
    goto LABEL_57;
  if ( ((IsContainRandomIndex->fields.isEnableOwnRandomSetting ^ v6) & 1) != 0 )
    goto LABEL_11;
  if ( IsContainRandomIndex->fields.ownRandomSettingButtonIndex != index )
    ServantStatusListViewItem__SetRandomSettingByIndex(IsContainRandomIndex, index, 0LL);
LABEL_51:
  IsContainRandomIndex = (ServantStatusListViewItem_o *)this->fields.servantStatusBattleConfirmDialog;
  if ( !IsContainRandomIndex )
    goto LABEL_57;
  ServantStatusCharaGraphListViewManager__SetEnableScroll(
    (ServantStatusCharaGraphListViewManager_o *)IsContainRandomIndex,
    *(ServantStatusListViewItem_o **)&this->fields.isModify,
    v78);
LABEL_54:
  IsContainRandomIndex = (ServantStatusListViewItem_o *)this->fields.profileTabListViewManager;
  if ( !IsContainRandomIndex )
    goto LABEL_57;
  ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)IsContainRandomIndex, 10, 0LL);
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v104 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v104,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    goto LABEL_57;
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v104, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__RandomLimitCountSupportResource(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v10; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_42E6EBD & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    byte_42E6EBD = 1;
  }
  profileTabListViewManager = *(struct ServantStatusFlavorTextListViewManager_o **)&this->fields.isModify;
  if ( !profileTabListViewManager
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(
          (ServantStatusListViewItem_o *)profileTabListViewManager,
          index,
          0LL),
        (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33243376(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          9,
          0LL),
        v10 = this->fields.profileTabListViewManager,
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v10) )
  {
    sub_B5D69C(profileTabListViewManager, *(_QWORD *)&index);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v10, 1, v11, 0LL);
}


void __fastcall ServantStatusDialog__SetActiveInputLockPanel(
        ServantStatusDialog_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *battleMaskBase; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42E6E83 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, flag, (_DWORD)method, v3);
    byte_42E6E83 = 1;
  }
  battleMaskBase = (UnityEngine_Object_o *)this->fields.battleMaskBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(battleMaskBase, 0LL, 0LL) )
  {
    v8 = this->fields.battleMaskBase;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetChangeBattleResource(
        ServantStatusDialog_o *this,
        bool isModifyInfo,
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
  ServantStatusBattleListViewManager_o *voiceTabListViewManager; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 currentMaskType; // x10
  int32_t ConvertOverwriteDispImageLimitCount; // w20
  ServantLimitImageMaster_o *v29; // x21
  int32_t v30; // w20
  int32_t SvtId; // w21
  System_String_o **p_isBattlePlay; // x21
  System_Int32_array **v33; // x20
  const MethodInfo *v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_o *v41; // x22
  System_String_o *v42; // x20
  AssetLoader_LoadEndDataHandler_o *v43; // x21
  const MethodInfo *v44; // x1
  __int64 v45; // x0

  if ( (byte_42E6E86 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, isModifyInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6, v7, v8);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ServantStatusDialog_EndLoadChangeBattleResource__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    byte_42E6E86 = 1;
  }
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
  if ( !voiceTabListViewManager )
    goto LABEL_32;
  ServantStatusBattleListViewManager__ChangeSelectIndex(voiceTabListViewManager, this->fields.currentMaskType, method);
  v25 = *(_QWORD *)&this->fields.isModify;
  if ( !v25 )
    goto LABEL_32;
  v26 = *(_QWORD *)(v25 + 248);
  if ( !v26 )
    goto LABEL_32;
  currentMaskType = this->fields.currentMaskType;
  if ( (unsigned int)currentMaskType >= *(_DWORD *)(v26 + 24) )
  {
    v45 = sub_B5D6C8(voiceTabListViewManager);
    sub_B5D668(v45, 0LL);
  }
  *(_DWORD *)(v25 + 240) = *(_DWORD *)(v26 + 4 * currentMaskType + 32);
  if ( isModifyInfo )
  {
    voiceTabListViewManager = *(ServantStatusBattleListViewManager_o **)&this->fields.isModify;
    if ( !voiceTabListViewManager )
      goto LABEL_32;
    ServantStatusListViewItem__ModifyInfo((ServantStatusListViewItem_o *)voiceTabListViewManager, 0LL);
  }
  voiceTabListViewManager = *(ServantStatusBattleListViewManager_o **)&this->fields.isModify;
  if ( !voiceTabListViewManager )
    goto LABEL_32;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          (ServantStatusListViewItem_o *)voiceTabListViewManager,
                                          0LL);
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !voiceTabListViewManager )
    goto LABEL_32;
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)voiceTabListViewManager,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_32;
  v29 = (ServantLimitImageMaster_o *)voiceTabListViewManager;
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusListViewItem__get_SvtId(
                                                                      *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                                      0LL);
  if ( !v29 )
    goto LABEL_32;
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                                      v29,
                                                                      (int32_t)voiceTabListViewManager,
                                                                      ConvertOverwriteDispImageLimitCount,
                                                                      0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_32;
  v30 = (int)voiceTabListViewManager;
  SvtId = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                                                      SvtId,
                                                                      v30,
                                                                      0LL);
  if ( !voiceTabListViewManager )
    goto LABEL_32;
  p_isBattlePlay = (System_String_o **)&this->fields.isBattlePlay;
  v33 = (System_Int32_array **)voiceTabListViewManager;
  if ( System_String__Equals_44565128(
         (System_String_o *)voiceTabListViewManager,
         *(System_String_o **)&this->fields.isBattlePlay,
         0LL) )
  {
    ServantStatusDialog__EndChangeBattleResource(this, v34);
    return;
  }
  if ( !System_String__IsNullOrEmpty(*p_isBattlePlay, 0LL) )
  {
    v41 = *p_isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v41, 0LL);
  }
  *p_isBattlePlay = (System_String_o *)v33;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v33, v35, v36, v37, v38, v39, v40);
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !voiceTabListViewManager )
LABEL_32:
    sub_B5D69C(voiceTabListViewManager, isModifyInfo);
  CommonUI__SetLoadMode((CommonUI_o *)voiceTabListViewManager, 1, 0LL);
  v42 = *(System_String_o **)&this->fields.isBattlePlay;
  v43 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v43,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndLoadChangeBattleResource__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v42, v43, 1, 0LL) )
    ServantStatusDialog__BattleAssetLoadError(this, v44);
}


void __fastcall ServantStatusDialog__SetMark(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantStatusDialog_o *v4; // x19
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
  _QWORD *v38; // x8
  unsigned int v39; // w9
  UserServantEntity_o *v40; // x0
  __int64 v41; // x8
  System_String_o **v42; // x8
  __int64 v43; // x8
  System_String_o **v44; // x8
  UnityEngine_Object_o *v45; // x20
  __int64 v46; // x8
  __int64 v47; // x8
  System_String_o **v48; // x8
  __int64 v49; // x8
  System_String_o **v50; // x8
  __int64 v51; // x8
  __int64 v52; // x9
  UISprite_o *equipSprite; // x20
  __int128 v54; // q1
  ServantStatusDialog_o *v55; // x22
  System_String_o **v56; // x8
  UnityEngine_Object_o *pushSprite; // x20
  __int64 v58; // x8
  __int64 *v59; // x8
  __int64 v60; // x8
  __int64 v61; // x9
  __int128 v62; // q1
  ServantStatusDialog_o *charaGraphListViewManager; // x20
  ServantStatusDialog_o *v64; // x21
  bool v65; // zf
  __int64 v66; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+40h] [xbp-40h]

  v4 = this;
  if ( (byte_42E6E96 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17343/*"button_lock_reg"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17344/*"button_lock_unreg"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17338/*"button_choice_unreg"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_19574/*"icon_equip"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_17337/*"button_choice_reg"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_19575/*"icon_equip_cc"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_17339/*"button_favorite_reg"*/, v32, v33, v34);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&StringLiteral_17340/*"button_favorite_unreg"*/, v35, v36, v37);
    byte_42E6E96 = 1;
  }
  v38 = *(_QWORD **)&v4->fields.isModify;
  if ( !v38 )
    goto LABEL_87;
  if ( !v38[2] || (v39 = *(_DWORD *)&v4->fields.isInitTab, v39 <= 0x24) && ((1LL << v39) & 0x19E0000000LL) != 0 )
  {
    this = (ServantStatusDialog_o *)v4->fields.lockSprite;
    if ( this )
    {
LABEL_8:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_87;
  }
  v40 = (UserServantEntity_o *)v38[7];
  if ( v40 )
  {
    this = (ServantStatusDialog_o *)UserServantEntity__IsLeave(v40, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (ServantStatusDialog_o *)v4->fields.lockSprite;
      if ( !this )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v47 = *(_QWORD *)&v4->fields.isModify;
      if ( !v47 )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)v4->fields.choiceSprite;
      if ( !this )
        goto LABEL_87;
      v48 = (System_String_o **)(*(_BYTE *)(v47 + 325) ? &StringLiteral_17343/*"button_lock_reg"*/ : &StringLiteral_17344/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v48, 0LL);
      v49 = *(_QWORD *)&v4->fields.isModify;
      if ( !v49 )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)v4->fields.favoriteButton;
      if ( !this )
        goto LABEL_87;
      v50 = (System_String_o **)(*(_BYTE *)(v49 + 326) ? &StringLiteral_17337/*"button_choice_reg"*/ : &StringLiteral_17338/*"button_choice_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v50, 0LL);
      this = (ServantStatusDialog_o *)v4->fields.favoriteSprite;
      if ( !this )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)v4->fields.newProfileList, 0LL);
      v51 = *(_QWORD *)&v4->fields.isModify;
      if ( !v51 )
        goto LABEL_87;
      v52 = *(_QWORD *)(v51 + 56);
      if ( !v52 )
        goto LABEL_87;
      equipSprite = v4->fields.equipSprite;
      v54 = *(_OWORD *)(v52 + 32);
      v55 = *(ServantStatusDialog_o **)(v51 + 160);
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v52 + 16);
      *(_OWORD *)&v69.fields.fakeValue = v54;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v68 = v69;
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
      if ( !equipSprite )
        goto LABEL_87;
      v56 = (System_String_o **)&StringLiteral_17339/*"button_favorite_reg"*/;
      if ( v55 != this )
        v56 = (System_String_o **)&StringLiteral_17340/*"button_favorite_unreg"*/;
      UISprite__set_spriteName(equipSprite, *v56, 0LL);
      pushSprite = (UnityEngine_Object_o *)v4->fields.pushSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
      {
        this = (ServantStatusDialog_o *)v4->fields.pushSprite;
        if ( !this )
          goto LABEL_87;
        this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, BYTE1(v4->fields.newProfileList), 0LL);
        v58 = *(_QWORD *)&v4->fields.isModify;
        if ( !v58 )
          goto LABEL_87;
        this = *(ServantStatusDialog_o **)(v58 + 56);
        if ( !this )
          goto LABEL_87;
        if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL) || *(_DWORD *)&v4->fields.isInitTab == 3 )
        {
          this = (ServantStatusDialog_o *)v4->fields.pushSprite;
          if ( !this )
            goto LABEL_87;
          ((void (__fastcall *)(ServantStatusDialog_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            3LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          this = (ServantStatusDialog_o *)v4->fields.charaGraphListViewManager;
          if ( !this )
            goto LABEL_87;
          v59 = &StringLiteral_17348/*"button_push_unreg"*/;
        }
        else
        {
          this = (ServantStatusDialog_o *)v4->fields.pushSprite;
          if ( !this )
            goto LABEL_87;
          this = (ServantStatusDialog_o *)((__int64 (__fastcall *)(ServantStatusDialog_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                            this,
                                            0LL,
                                            1LL,
                                            this->klass[1]._1.interfaceOffsets);
          v60 = *(_QWORD *)&v4->fields.isModify;
          if ( !v60 )
            goto LABEL_87;
          v61 = *(_QWORD *)(v60 + 56);
          if ( !v61 )
            goto LABEL_87;
          v62 = *(_OWORD *)(v61 + 32);
          charaGraphListViewManager = (ServantStatusDialog_o *)v4->fields.charaGraphListViewManager;
          v64 = *(ServantStatusDialog_o **)(v60 + 168);
          *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v61 + 16);
          *(_OWORD *)&v69.fields.fakeValue = v62;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v67 = v69;
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                            &v67,
                                            0LL);
          if ( !charaGraphListViewManager )
            goto LABEL_87;
          v59 = &StringLiteral_17347/*"button_push_reg"*/;
          v65 = v64 == this;
          this = charaGraphListViewManager;
          if ( !v65 )
            v59 = &StringLiteral_17348/*"button_push_unreg"*/;
        }
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v59, 0LL);
      }
      this = (ServantStatusDialog_o *)v4->fields.pushButton;
      if ( !this )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v66 = *(_QWORD *)&v4->fields.isModify;
      if ( !v66 )
        goto LABEL_87;
      if ( !this )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, *(_BYTE *)(v66 + 327), 0LL);
      this = (ServantStatusDialog_o *)v4->fields.pushButton;
      if ( !this )
        goto LABEL_87;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19574/*"icon_equip"*/, 0LL);
      return;
    }
    v38 = *(_QWORD **)&v4->fields.isModify;
    if ( !v38 )
      goto LABEL_87;
  }
  this = (ServantStatusDialog_o *)v4->fields.lockSprite;
  if ( !this )
    goto LABEL_87;
  if ( !v38[13] )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v41 = *(_QWORD *)&v4->fields.isModify;
  if ( !v41 )
    goto LABEL_87;
  this = (ServantStatusDialog_o *)v4->fields.choiceSprite;
  if ( !this )
    goto LABEL_87;
  v42 = (System_String_o **)(*(_BYTE *)(v41 + 325) ? &StringLiteral_17343/*"button_lock_reg"*/ : &StringLiteral_17344/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v42, 0LL), (v43 = *(_QWORD *)&v4->fields.isModify) == 0)
    || (this = (ServantStatusDialog_o *)v4->fields.favoriteButton) == 0LL
    || (*(_BYTE *)(v43 + 326)
      ? (v44 = (System_String_o **)&StringLiteral_17337/*"button_choice_reg"*/)
      : (v44 = (System_String_o **)&StringLiteral_17338/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v44, 0LL),
         (this = (ServantStatusDialog_o *)v4->fields.favoriteSprite) == 0LL)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_87:
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v45 = (UnityEngine_Object_o *)v4->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
  {
    this = (ServantStatusDialog_o *)v4->fields.pushSprite;
    if ( !this )
      goto LABEL_87;
    this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  this = (ServantStatusDialog_o *)v4->fields.pushButton;
  if ( !this )
    goto LABEL_87;
  this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v46 = *(_QWORD *)&v4->fields.isModify;
  if ( !v46 )
    goto LABEL_87;
  if ( !this )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, *(_BYTE *)(v46 + 327), 0LL);
  this = (ServantStatusDialog_o *)v4->fields.pushButton;
  if ( !this )
    goto LABEL_87;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19575/*"icon_equip_cc"*/, 0LL);
}


void __fastcall ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t partyItem; // w20
  UnityEngine_Object_o *inputLockPanel; // x21
  __int64 v11; // x1
  struct UnityEngine_GameObject_o *v12; // x0

  if ( (byte_42E6E82 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E6E82 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( mainInfo )
    partyItem = (int32_t)mainInfo->fields.partyItem;
  else
    partyItem = 0;
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0LL, 0LL) )
  {
    v12 = this->fields.inputLockPanel;
    if ( !v12
      || (NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)v12, partyItem > 0, 0LL),
          (v12 = this->fields.inputLockPanel) == 0LL) )
    {
      sub_B5D69C(v12, v11);
    }
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)v12, partyItem, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetTabKind(ServantStatusDialog_o *this, int32_t kind, const MethodInfo *method)
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
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  UnityEngine_GameObject_o *profileTabBase; // x0
  int v76; // w22
  bool v77; // w1
  System_String_o **v78; // x8
  System_String_o **v79; // x8
  UICommonButton_o *v80; // x21
  bool v81; // w0
  __int64 *v82; // x8
  System_String_o **v83; // x8
  UICommonButton_o *battleButton; // x21
  bool v85; // w0
  char v86; // w2
  bool v87; // w1
  System_String_o **v88; // x8
  __int64 *v89; // x8
  UICommonButton_o *v90; // x21
  bool v91; // w0
  UnityEngine_Object_o *v92; // x21
  __int64 *v93; // x8
  System_String_o **v94; // x8
  System_String_o **v95; // x8
  UICommonButton_o *profileButton; // x21
  bool enabled; // w0
  System_String_o **v98; // x8
  System_String_o **v99; // x8
  UICommonButton_o *voiceButton; // x21
  bool v101; // w0
  const MethodInfo *v102; // x1
  const MethodInfo *v103; // x2
  System_String_o **v104; // x8
  System_String_o **v105; // x8
  UICommonButton_o *v106; // x21
  bool v107; // w0
  System_String_o **v108; // x8
  System_String_o **v109; // x8
  UICommonButton_o *v110; // x21
  bool v111; // w0
  System_String_o **v112; // x8
  __int64 *v113; // x8
  UICommonButton_o *v114; // x21
  bool v115; // w0
  _BOOL4 v116; // w21
  System_String_o **v117; // x8
  System_String_o **v118; // x8
  UICommonButton_o *profileNewIcon; // x21
  bool v120; // w0
  struct System_Int32_array *profileNewIdList; // x8
  char *v122; // x8
  _BYTE *v123; // x8
  int v124; // t1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v126; // x21
  struct ServantStatusFlavorTextListViewManager_o *v127; // x20
  ServantStatusListViewManager_CallbackFunc_o *v128; // x21
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v130; // x21
  struct ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v132; // x21
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  const MethodInfo *v141; // x2
  __int64 v142; // x3
  __int64 v143; // x8
  float BgmVolume; // s8
  BgmManager_c *v145; // x0
  BgmManager_c *v146; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v149; // x21
  __int64 v150; // x0
  bool isPlayVoice; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *voice; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E6E94 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, kind, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&OptionManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectBattle__, v27, v28, v29);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectFlavor__, v30, v31, v32);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v33, v34, v35);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectVoice__, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_17258/*"btn_txt_detail_off"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_17242/*"btn_txt_battlecharacter_on"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_17306/*"btn_txt_status_on"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_17171/*"btn_bg_12"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_17305/*"btn_txt_status_off"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_17316/*"btn_txt_voice_on"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_17286/*"btn_txt_profile_on"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_17315/*"btn_txt_voice_off"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_17173/*"btn_bg_19"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_17259/*"btn_txt_detail_on"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_17285/*"btn_txt_profile_off"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_17241/*"btn_txt_battlecharacter_off"*/, v72, v73, v74);
    byte_42E6E94 = 1;
  }
  illust = 0LL;
  voice = 0LL;
  isPlayVoice = 0;
  if ( kind == 2 )
  {
    if ( ServantStatusDialog__StartBattleLoad(this, *(const MethodInfo **)&kind) )
      return;
LABEL_13:
    if ( LODWORD(this->fields.tabInitList) == 3 )
      ServantStatusDialog__StopVoice(this, *(const MethodInfo **)&kind);
    LODWORD(this->fields.tabInitList) = kind;
    if ( kind == 2 )
    {
      profileTabBase = this->fields.profileTabBase;
      if ( profileTabBase )
      {
        UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
        profileTabBase = this->fields.battleTabBase;
        if ( profileTabBase )
        {
          UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
          profileTabBase = this->fields.voiceTabBase;
          if ( profileTabBase )
          {
            UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
            profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusTitleSprite;
            if ( profileTabBase )
            {
              UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
              v92 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
                goto LABEL_27;
              profileTabBase = *(UnityEngine_GameObject_o **)&this->fields.isBattleResourceLoading;
              if ( profileTabBase )
              {
                BattleFBXComponent__playAnimation(
                  (BattleFBXComponent_o *)profileTabBase,
                  *(System_String_o **)&this->fields.confirmDispLv,
                  0LL);
                goto LABEL_27;
              }
            }
          }
        }
      }
      goto LABEL_288;
    }
    if ( kind == 1 )
    {
      profileTabBase = this->fields.profileTabBase;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      profileTabBase = this->fields.battleTabBase;
      if ( !profileTabBase )
        goto LABEL_288;
      v77 = 1;
    }
    else
    {
      if ( kind )
      {
LABEL_27:
        v76 = 0;
        goto LABEL_28;
      }
      profileTabBase = this->fields.profileTabBase;
      if ( !profileTabBase
        || (UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL),
            (profileTabBase = this->fields.battleTabBase) == 0LL) )
      {
LABEL_288:
        sub_B5D69C(profileTabBase, *(_QWORD *)&kind);
      }
      v77 = 0;
    }
    UnityEngine_GameObject__SetActive(profileTabBase, v77, 0LL);
    profileTabBase = this->fields.voiceTabBase;
    if ( profileTabBase )
    {
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusTitleSprite;
      if ( profileTabBase )
      {
        UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
        goto LABEL_27;
      }
    }
    goto LABEL_288;
  }
  if ( kind != 3 )
    goto LABEL_13;
  if ( ServantStatusDialog__StartVoiceLoad(this, *(const MethodInfo **)&kind) )
    return;
  profileTabBase = this->fields.profileTabBase;
  LODWORD(this->fields.tabInitList) = 3;
  if ( !profileTabBase )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
  profileTabBase = this->fields.battleTabBase;
  if ( !profileTabBase )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
  profileTabBase = this->fields.voiceTabBase;
  if ( !profileTabBase )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
  profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusTitleSprite;
  if ( !profileTabBase )
    goto LABEL_288;
  v76 = 1;
  UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
LABEL_28:
  switch ( *(_DWORD *)&this->fields.isInitTab )
  {
    case 4:
    case 5:
    case 7:
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( profileTabBase )
      {
        profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
        if ( profileTabBase )
        {
          UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
          if ( profileTabBase )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
              profileTabBase,
              1LL,
              profileTabBase->klass[1]._1.byval_arg.data);
            profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
            if ( profileTabBase )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
              profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
              if ( profileTabBase )
              {
                v94 = (System_String_o **)&StringLiteral_17305/*"btn_txt_status_off"*/;
                if ( !kind )
                  v94 = (System_String_o **)&StringLiteral_17306/*"btn_txt_status_on"*/;
                UISprite__set_spriteName((UISprite_o *)profileTabBase, *v94, 0LL);
                profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
                if ( profileTabBase )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
                    profileTabBase,
                    profileTabBase->klass[2]._1.interopData);
                  profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileSprite;
                  if ( profileTabBase )
                  {
                    v95 = (System_String_o **)(kind ? &StringLiteral_17171/*"btn_bg_12"*/ : &StringLiteral_17173/*"btn_bg_19"*/);
                    UISprite__set_spriteName((UISprite_o *)profileTabBase, *v95, 0LL);
                    profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
                    if ( profileTabBase )
                    {
                      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                                     profileTabBase,
                                                                     0LL,
                                                                     BYTE4(this->fields.tabInitList),
                                                                     profileTabBase->klass[1]._1.interfaceOffsets);
                      profileButton = this->fields.profileButton;
                      if ( profileButton )
                      {
                        enabled = UnityEngine_Behaviour__get_enabled(
                                    (UnityEngine_Behaviour_o *)this->fields.profileButton,
                                    0LL);
                        UICommonButton__SetColliderEnable(profileButton, enabled, BYTE4(this->fields.tabInitList), 0LL);
                        profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
                        if ( profileTabBase )
                        {
                          profileTabBase = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)profileTabBase,
                                             0LL);
                          if ( profileTabBase )
                          {
                            UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
                            profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
                            if ( profileTabBase )
                            {
                              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
                                profileTabBase,
                                1LL,
                                profileTabBase->klass[1]._1.byval_arg.data);
                              profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
                              if ( profileTabBase )
                              {
                                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
                                profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
                                if ( profileTabBase )
                                {
                                  UISprite__set_spriteName(
                                    (UISprite_o *)profileTabBase,
                                    (System_String_o *)StringLiteral_17285/*"btn_txt_profile_off"*/,
                                    0LL);
                                  profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
                                  if ( profileTabBase )
                                  {
                                    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
                                      profileTabBase,
                                      profileTabBase->klass[2]._1.interopData);
                                    profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleSprite;
                                    if ( profileTabBase )
                                    {
                                      UISprite__set_spriteName(
                                        (UISprite_o *)profileTabBase,
                                        (System_String_o *)StringLiteral_17171/*"btn_bg_12"*/,
                                        0LL);
                                      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
                                      if ( profileTabBase )
                                      {
                                        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                          profileTabBase,
                                          3LL,
                                          1LL,
                                          profileTabBase->klass[1]._1.interfaceOffsets);
                                        profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
                                        if ( profileTabBase )
                                        {
                                          profileTabBase = UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)profileTabBase,
                                                             0LL);
                                          if ( profileTabBase )
                                          {
                                            UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
                                            profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
                                            if ( profileTabBase )
                                            {
                                              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
                                                profileTabBase,
                                                1LL,
                                                profileTabBase->klass[1]._1.byval_arg.data);
                                              profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
                                              if ( profileTabBase )
                                              {
                                                UnityEngine_Behaviour__set_enabled(
                                                  (UnityEngine_Behaviour_o *)profileTabBase,
                                                  kind != 2,
                                                  0LL);
                                                profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceTitleSprite;
                                                if ( profileTabBase )
                                                {
                                                  v98 = (System_String_o **)&StringLiteral_17242/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v98 = (System_String_o **)&StringLiteral_17241/*"btn_txt_battlecharacter_off"*/;
                                                  UISprite__set_spriteName((UISprite_o *)profileTabBase, *v98, 0LL);
                                                  profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceTitleSprite;
                                                  if ( profileTabBase )
                                                  {
                                                    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
                                                      profileTabBase,
                                                      profileTabBase->klass[2]._1.interopData);
                                                    profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceSprite;
                                                    if ( profileTabBase )
                                                    {
                                                      v99 = (System_String_o **)(kind == 2
                                                                               ? &StringLiteral_17173/*"btn_bg_19"*/
                                                                               : &StringLiteral_17171/*"btn_bg_12"*/);
                                                      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v99, 0LL);
                                                      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
                                                      if ( profileTabBase )
                                                      {
                                                        profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(profileTabBase, 0LL, BYTE4(this->fields.tabInitList), profileTabBase->klass[1]._1.interfaceOffsets);
                                                        voiceButton = this->fields.voiceButton;
                                                        if ( voiceButton )
                                                        {
                                                          v101 = UnityEngine_Behaviour__get_enabled(
                                                                   (UnityEngine_Behaviour_o *)this->fields.voiceButton,
                                                                   0LL);
                                                          UICommonButton__SetColliderEnable(
                                                            voiceButton,
                                                            v101,
                                                            BYTE4(this->fields.tabInitList),
                                                            0LL);
                                                          profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
                                                          if ( profileTabBase )
                                                          {
                                                            profileTabBase = UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)profileTabBase,
                                                                               0LL);
                                                            if ( profileTabBase )
                                                            {
                                                              UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
                                                              profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
                                                              if ( profileTabBase )
                                                              {
                                                                ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
                                                                  profileTabBase,
                                                                  1LL,
                                                                  profileTabBase->klass[1]._1.byval_arg.data);
                                                                profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
                                                                if ( profileTabBase )
                                                                {
                                                                  UnityEngine_Behaviour__set_enabled(
                                                                    (UnityEngine_Behaviour_o *)profileTabBase,
                                                                    0,
                                                                    0LL);
                                                                  profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
                                                                  if ( profileTabBase )
                                                                  {
                                                                    UISprite__set_spriteName(
                                                                      (UISprite_o *)profileTabBase,
                                                                      (System_String_o *)StringLiteral_17315/*"btn_txt_voice_off"*/,
                                                                      0LL);
                                                                    profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
                                                                    if ( profileTabBase )
                                                                    {
                                                                      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
                                                                        profileTabBase,
                                                                        profileTabBase->klass[2]._1.interopData);
                                                                      profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusButton;
                                                                      if ( profileTabBase )
                                                                      {
                                                                        UISprite__set_spriteName(
                                                                          (UISprite_o *)profileTabBase,
                                                                          (System_String_o *)StringLiteral_17171/*"btn_bg_12"*/,
                                                                          0LL);
                                                                        profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
                                                                        if ( profileTabBase )
                                                                          goto LABEL_142;
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_288;
    case 0xA:
    case 0x1E:
    case 0x24:
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v93 = &StringLiteral_17259/*"btn_txt_detail_on"*/;
      goto LABEL_210;
    case 0xB:
    case 0xC:
    case 0xF:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x18:
    case 0x1A:
    case 0x1B:
    case 0x1F:
    case 0x20:
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v78 = (System_String_o **)&StringLiteral_17305/*"btn_txt_status_off"*/;
      if ( !kind )
        v78 = (System_String_o **)&StringLiteral_17306/*"btn_txt_status_on"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v78, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v79 = (System_String_o **)(kind ? &StringLiteral_17171/*"btn_bg_12"*/ : &StringLiteral_17173/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v79, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      v80 = this->fields.profileButton;
      if ( !v80 )
        goto LABEL_288;
      v81 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v80, v81, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v82 = &StringLiteral_17259/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v82 = &StringLiteral_17258/*"btn_txt_detail_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v82, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v83 = (System_String_o **)(kind == 1 ? &StringLiteral_17173/*"btn_bg_19"*/ : &StringLiteral_17171/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v83, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      battleButton = this->fields.battleButton;
      if ( !battleButton )
        goto LABEL_288;
      v85 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      v86 = BYTE4(this->fields.tabInitList);
      v87 = v85;
      goto LABEL_215;
    case 0xD:
    case 0xE:
    case 0x10:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x19:
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v88 = (System_String_o **)&StringLiteral_17305/*"btn_txt_status_off"*/;
      if ( !kind )
        v88 = (System_String_o **)&StringLiteral_17306/*"btn_txt_status_on"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v88, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v89 = &StringLiteral_17173/*"btn_bg_19"*/;
      if ( kind )
        v89 = &StringLiteral_17171/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v89, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      v90 = this->fields.profileButton;
      if ( !v90 )
        goto LABEL_288;
      v91 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v90, v91, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17258/*"btn_txt_detail_off"*/, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17171/*"btn_bg_12"*/, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
        profileTabBase,
        3LL,
        1LL,
        profileTabBase->klass[1]._1.interfaceOffsets);
      goto LABEL_216;
    case 0x1C:
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v93 = &StringLiteral_17285/*"btn_txt_profile_off"*/;
LABEL_210:
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v93, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17173/*"btn_bg_19"*/, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     1LL,
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      battleButton = this->fields.battleButton;
      if ( !battleButton )
        goto LABEL_288;
      v87 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      v86 = 1;
LABEL_215:
      UICommonButton__SetColliderEnable(battleButton, v87, v86, 0LL);
LABEL_216:
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      goto LABEL_221;
    default:
      profileTabBase = *(UnityEngine_GameObject_o **)&this->fields.isModify;
      if ( !profileTabBase )
        goto LABEL_288;
      ServantStatusListViewItem__GetVoiceInfo(
        (ServantStatusListViewItem_o *)profileTabBase,
        &illust,
        &voice,
        &isPlayVoice,
        0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v104 = (System_String_o **)&StringLiteral_17305/*"btn_txt_status_off"*/;
      if ( !kind )
        v104 = (System_String_o **)&StringLiteral_17306/*"btn_txt_status_on"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v104, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v105 = (System_String_o **)(kind ? &StringLiteral_17171/*"btn_bg_12"*/ : &StringLiteral_17173/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v105, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      v106 = this->fields.profileButton;
      if ( !v106 )
        goto LABEL_288;
      v107 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v106, v107, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v108 = (System_String_o **)&StringLiteral_17286/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v108 = (System_String_o **)&StringLiteral_17285/*"btn_txt_profile_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v108, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v109 = (System_String_o **)(kind == 1 ? &StringLiteral_17173/*"btn_bg_19"*/ : &StringLiteral_17171/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v109, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      v110 = this->fields.battleButton;
      if ( !v110 )
        goto LABEL_288;
      v111 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      UICommonButton__SetColliderEnable(v110, v111, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 2, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v112 = (System_String_o **)&StringLiteral_17242/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v112 = (System_String_o **)&StringLiteral_17241/*"btn_txt_battlecharacter_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v112, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      if ( kind == 2 )
        v113 = &StringLiteral_17173/*"btn_bg_19"*/;
      else
        v113 = &StringLiteral_17171/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v113, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_287;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      v114 = this->fields.voiceButton;
      if ( !v114 )
        goto LABEL_287;
      v115 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.voiceButton, 0LL);
      UICommonButton__SetColliderEnable(v114, v115, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_287;
      v116 = isPlayVoice;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_287;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_287;
      if ( !v116 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
        profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
        if ( profileTabBase )
        {
          UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17315/*"btn_txt_voice_off"*/, 0LL);
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
          if ( profileTabBase )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
              profileTabBase,
              profileTabBase->klass[2]._1.interopData);
            profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusButton;
            if ( profileTabBase )
            {
              UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17171/*"btn_bg_12"*/, 0LL);
              profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
              if ( profileTabBase )
              {
LABEL_142:
                profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                               profileTabBase,
                                                               3LL,
                                                               1LL,
                                                               profileTabBase->klass[1]._1.interfaceOffsets);
                goto LABEL_221;
              }
            }
          }
        }
LABEL_287:
        sub_B5D69C(profileTabBase, v102);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, (unsigned __int8)v76 != 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
      if ( !profileTabBase )
        goto LABEL_287;
      v117 = (System_String_o **)&StringLiteral_17316/*"btn_txt_voice_on"*/;
      if ( !v76 )
        v117 = (System_String_o **)&StringLiteral_17315/*"btn_txt_voice_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v117, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
      if ( !profileTabBase )
        goto LABEL_287;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusButton;
      if ( !profileTabBase )
        goto LABEL_287;
      v118 = (System_String_o **)(v76 ? &StringLiteral_17173/*"btn_bg_19"*/ : &StringLiteral_17171/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v118, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_287;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      profileNewIcon = (UICommonButton_o *)this->fields.profileNewIcon;
      if ( !profileNewIcon )
        goto LABEL_287;
      v120 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileNewIcon, 0LL);
      UICommonButton__SetColliderEnable(profileNewIcon, v120, BYTE4(this->fields.tabInitList), 0LL);
LABEL_221:
      profileNewIdList = this->fields.profileNewIdList;
      if ( !profileNewIdList )
        goto LABEL_287;
      if ( profileNewIdList->max_length <= kind )
      {
        v150 = sub_B5D6C8(profileTabBase);
        sub_B5D668(v150, 0LL);
      }
      v122 = (char *)profileNewIdList + kind;
      v124 = (unsigned __int8)v122[32];
      v123 = v122 + 32;
      if ( v124 )
      {
        switch ( kind )
        {
          case 0:
            goto LABEL_232;
          case 1:
            goto LABEL_235;
          case 2:
            goto LABEL_239;
          case 3:
            goto LABEL_255;
          default:
            goto LABEL_276;
        }
      }
      *v123 = 1;
      switch ( kind )
      {
        case 0:
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__CreateList(
            (ServantStatusListViewManager_o *)profileTabBase,
            *(ServantStatusListViewItem_o **)&this->fields.isModify,
            0LL);
          if ( BYTE1(this->fields.statusLoadAsset) )
            goto LABEL_232;
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)profileTabBase, 6, 0LL);
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_33243376((ServantStatusListViewManager_o *)profileTabBase, 4, 0LL);
          profileTabListViewManager = this->fields.profileTabListViewManager;
          v126 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v126,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !profileTabListViewManager )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(
            (ServantStatusListViewManager_o *)profileTabListViewManager,
            1,
            v126,
            0LL);
LABEL_232:
          v127 = this->fields.profileTabListViewManager;
          v128 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v128,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !v127 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v127, 1, v128, 0LL);
          break;
        case 1:
          ServantStatusDialog__UpdateProfileList(this, 0, v103);
LABEL_235:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v130 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
          ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
            v130,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectFlavor__,
            0LL);
          if ( !battleTabListViewManager )
            goto LABEL_287;
          ServantStatusFlavorTextListViewManager__SetMode(
            (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
            1,
            v130,
            0LL);
          break;
        case 2:
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_287;
          ServantStatusBattleListViewManager__CreateList(
            (ServantStatusBattleListViewManager_o *)profileTabBase,
            *(ServantStatusListViewItem_o **)&this->fields.isModify,
            v103);
LABEL_239:
          voiceTabListViewManager = this->fields.voiceTabListViewManager;
          v132 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v132,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectBattle__,
            0LL);
          if ( !voiceTabListViewManager )
            goto LABEL_287;
          voiceTabListViewManager->fields.callbackFunc = (struct ServantStatusVoiceListViewManager_CallbackFunc_o *)v132;
          sub_B5D560(
            (BattleServantConfConponent_o *)&voiceTabListViewManager->fields.callbackFunc,
            (System_Int32_array **)v132,
            v133,
            v134,
            v135,
            v136,
            v137,
            v138);
          ServantStatusBattleListViewManager__SetMode_22132592(
            (ServantStatusBattleListViewManager_o *)voiceTabListViewManager,
            1,
            v139,
            v140);
          if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          }
          if ( !byte_42E6BE7 )
          {
            sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)v102, (_DWORD)v141, v142);
            byte_42E6BE7 = 1;
          }
          profileTabBase = (UnityEngine_GameObject_o *)RandomLimitCountManager_TypeInfo;
          if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
            profileTabBase = (UnityEngine_GameObject_o *)RandomLimitCountManager_TypeInfo;
          }
          if ( !*(_BYTE *)(*(_QWORD *)&profileTabBase[7].fields.m_CachedPtr + 8LL) )
            goto LABEL_252;
          v143 = *(_QWORD *)&this->fields.isModify;
          if ( !v143 )
            goto LABEL_287;
          if ( !*(_BYTE *)(v143 + 192) )
            ServantStatusDialog__ChangeBattleActorSelectIndex(this, v102);
LABEL_252:
          ServantStatusDialog__SetupBattleMask(this, *(ServantStatusListViewItem_o **)&this->fields.isModify, v141);
          break;
        case 3:
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.servantNameRangeLabel;
          if ( !profileTabBase )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__CreateList(
            (ServantStatusVoiceListViewManager_o *)profileTabBase,
            *(ServantStatusListViewItem_o **)&this->fields.isModify,
            (System_Int32_array *)this->fields.requestVoiceDataList,
            0LL);
LABEL_255:
          if ( !BYTE3(this->fields.statusLoadAsset) )
          {
            if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !OptionManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            }
            BgmVolume = OptionManager__GetBgmVolume(0LL);
            v145 = BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v145 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v145->static_fields->LOW_VOLUME )
            {
              BYTE3(this->fields.statusLoadAsset) = 1;
              if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !OptionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              }
              if ( !OptionManager__GetVolumeMute(0LL) )
              {
                v146 = BgmManager_TypeInfo;
                if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v146 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v146->static_fields->LOW_VOLUME;
                if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !OptionManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                }
                OptionManager__TestBgmVolume(LOW_VOLUME, 0LL);
              }
            }
          }
          servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
          v149 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v149,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0LL);
          if ( !servantNameRangeLabel )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__SetMode(servantNameRangeLabel, 1, v149, 0LL);
          break;
        default:
          break;
      }
LABEL_276:
      if ( !(v76 & 1 | (BYTE3(this->fields.statusLoadAsset) == 0)) )
      {
        BYTE3(this->fields.statusLoadAsset) = 0;
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        OptionManager__Recover(0LL);
      }
      BYTE4(this->fields.tabInitList) = 1;
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetVisibleHighPriorityObject(
        ServantStatusDialog_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_Object_o *v10; // x20

  if ( (byte_42E6E99 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isVisible, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v6, v7, v8);
    byte_42E6E99 = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 2 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
    if ( !bgTxtSprite )
      goto LABEL_14;
    bgTxtSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
    if ( !bgTxtSprite )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, isVisible, 0LL);
    if ( isVisible )
    {
      v10 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
      {
        bgTxtSprite = *(UnityEngine_Component_o **)&this->fields.isBattleResourceLoading;
        if ( bgTxtSprite )
        {
          BattleFBXComponent__playAnimation(
            (BattleFBXComponent_o *)bgTxtSprite,
            (System_String_o *)StringLiteral_23499/*"wait"*/,
            0LL);
          return;
        }
LABEL_14:
        sub_B5D69C(bgTxtSprite, isVisible);
      }
    }
  }
}


void __fastcall ServantStatusDialog__SetupBattleMask(
        ServantStatusDialog_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UILabel_o *battleChr; // x20

  v5 = this;
  if ( (byte_42E6E77 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&StringLiteral_12157/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, v6, v7, v8);
    byte_42E6E77 = 1;
  }
  if ( !item )
    goto LABEL_15;
  this = (ServantStatusDialog_o *)v5->fields.battleMaskInfoLabel;
  if ( item->fields.userSvtEntity )
  {
    if ( !this )
      goto LABEL_15;
    if ( item->fields.isEnableOwnRandomSetting )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      battleChr = (UILabel_o *)v5->fields.battleChr;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12157/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0LL);
      if ( battleChr )
      {
        UILabel__set_text(battleChr, (System_String_o *)this, 0LL);
        this = (ServantStatusDialog_o *)v5->fields.battleChr;
        if ( this )
        {
          UILabel__set_fontSize((UILabel_o *)this, 18, 0LL);
          return;
        }
      }
LABEL_15:
      sub_B5D69C(this, item);
    }
  }
  else if ( !this )
  {
    goto LABEL_15;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


bool __fastcall ServantStatusDialog__StartBattleLoad(ServantStatusDialog_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  ServantStatusListViewItem_o *Instance; // x0
  int32_t ConvertOverwriteDispImageLimitCount; // w20
  ServantLimitImageMaster_o *v28; // x21
  int32_t v29; // w20
  int32_t SvtId; // w21
  System_String_o **p_isBattlePlay; // x21
  System_Int32_array **v32; // x20
  int v33; // w2
  __int64 v34; // x3
  bool v35; // w22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_o *v42; // x22
  const MethodInfo *v43; // x2
  System_String_o *v44; // x20
  AssetLoader_LoadEndDataHandler_o *v45; // x21
  const MethodInfo *v46; // x1
  __int64 v48; // x8

  if ( (byte_42E6E7F & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5, v6, v7);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_ServantStatusDialog_EndLoadBattle__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24, v25);
    byte_42E6E7F = 1;
  }
  Instance = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !Instance )
    goto LABEL_39;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          Instance,
                                          0LL);
  Instance = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_39;
  v28 = (ServantLimitImageMaster_o *)Instance;
  Instance = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(
                                              *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                              0LL);
  if ( !v28 )
    goto LABEL_39;
  Instance = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              v28,
                                              (int32_t)Instance,
                                              ConvertOverwriteDispImageLimitCount,
                                              0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_39;
  v29 = (int)Instance;
  SvtId = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Instance = (ServantStatusListViewItem_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(SvtId, v29, 0LL);
  if ( !Instance )
    goto LABEL_39;
  p_isBattlePlay = (System_String_o **)&this->fields.isBattlePlay;
  v32 = (System_Int32_array **)Instance;
  if ( System_String__Equals_44565128((System_String_o *)Instance, *(System_String_o **)&this->fields.isBattlePlay, 0LL) )
  {
    if ( LOBYTE(this->fields.defaultAnimationName) )
      return 0;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_42E6BE7 )
    {
      sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v33, v34);
      byte_42E6BE7 = 1;
    }
    Instance = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      Instance = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( !LOBYTE(Instance->fields.commandCodeCommentEntity->monitor) )
      return 0;
    v48 = *(_QWORD *)&this->fields.isModify;
    if ( v48 )
    {
      if ( !*(_BYTE *)(v48 + 192) )
        ServantStatusDialog__EndLoadBattle_22191848(this, method);
      return 0;
    }
LABEL_39:
    sub_B5D69C(Instance, method);
  }
  if ( !System_String__IsNullOrEmpty(*p_isBattlePlay, 0LL) )
  {
    v42 = *p_isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v42, 0LL);
  }
  *p_isBattlePlay = (System_String_o *)v32;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v32, v36, v37, v38, v39, v40, v41);
  Instance = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  LOBYTE(this->fields.defaultAnimationName) = 1;
  ServantStatusDialog__SetTabKind(this, 2, v43);
  v44 = *(System_String_o **)&this->fields.isBattlePlay;
  v45 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v45, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v35 = 1;
  if ( !AssetManager__loadAssetStorage(v44, v45, 1, 0LL) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v46);
    return 1;
  }
  return v35;
}


void __fastcall ServantStatusDialog__StartStatusLoad(ServantStatusDialog_o *this, const MethodInfo *method)
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
  WebViewManager_o *SvtId; // x0
  int32_t v18; // w20
  int32_t LimitCount; // w21
  struct System_String_o *StatusImageFolderName; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x8
  struct System_String_o *CommandCardLoadFolderNameDisp; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *cardLoadAsset; // x21
  AssetLoader_LoadEndDataHandler_o *v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  AssetData_o *v43; // x1
  const MethodInfo *v44; // x2

  if ( (byte_42E6E7A & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ServantStatusDialog_EndStatusLoad__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    byte_42E6E7A = 1;
  }
  SvtId = *(WebViewManager_o **)&this->fields.isModify;
  if ( !SvtId )
    goto LABEL_16;
  SvtId = (WebViewManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)SvtId, 0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_16;
  v18 = (int)SvtId;
  LimitCount = ServantStatusListViewItem__get_LimitCount(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v18, LimitCount, 0LL);
  this->fields.cardLoadAsset = StatusImageFolderName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cardLoadAsset,
    (System_Int32_array **)StatusImageFolderName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  SvtId = *(WebViewManager_o **)&this->fields.isModify;
  if ( !SvtId
    || (SvtId = (WebViewManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)SvtId, 0LL),
        (v27 = *(_QWORD *)&this->fields.isModify) == 0)
    || (CommandCardLoadFolderNameDisp = ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
                                          (int32_t)SvtId,
                                          *(_DWORD *)(v27 + 256),
                                          0LL),
        this->fields.loadVoiceData = CommandCardLoadFolderNameDisp,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.loadVoiceData,
          (System_Int32_array **)CommandCardLoadFolderNameDisp,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        (SvtId = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(SvtId, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)SvtId, 1, 0LL);
  cardLoadAsset = this->fields.cardLoadAsset;
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v36, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(cardLoadAsset, v36, 1, 0LL) )
  {
    this->fields.cardLoadAsset = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.cardLoadAsset, 0LL, v37, v38, v39, v40, v41, v42);
    ServantStatusDialog__EndStatusLoad(this, v43, v44);
  }
}


bool __fastcall ServantStatusDialog__StartVoiceLoad(ServantStatusDialog_o *this, const MethodInfo *method)
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
  NetworkManager_c *v50; // x0
  bool v51; // w19
  DataManager_o *Instance; // x0
  __int64 v54; // x1
  ServantChangeMaster_o *v55; // x20
  struct System_Collections_Generic_List_string__o *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x8
  unsigned __int64 v64; // x22
  int32_t v65; // w20
  BalanceConfig_c *v66; // x8
  ServantLimitAddMaster_o *v67; // x21
  __int64 v68; // x9
  int32_t v69; // w4
  const MethodInfo *v70; // x5
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v72; // x21
  unsigned __int64 v73; // x26
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // x25
  struct System_Collections_Generic_List_string__o *v75; // x22
  int32_t v76; // w4
  const MethodInfo *v77; // x5
  struct System_Collections_Generic_List_string__o *v78; // x22
  int32_t v79; // w4
  const MethodInfo *v80; // x5
  struct System_Collections_Generic_List_string__o *v81; // x22
  int32_t v82; // w4
  const MethodInfo *v83; // x5
  BalanceConfig_c *v84; // x8
  int v85; // w22
  struct System_Collections_Generic_List_string__o *v86; // x22
  int32_t v87; // w4
  const MethodInfo *v88; // x5
  struct System_Collections_Generic_List_string__o *v89; // x22
  int32_t v90; // w4
  const MethodInfo *v91; // x5
  struct System_Collections_Generic_List_string__o *v92; // x22
  int32_t ServantIdMashu3; // w2
  BalanceConfig_c *v94; // x8
  int v95; // w22
  struct System_Collections_Generic_List_string__o *v96; // x22
  int32_t v97; // w4
  const MethodInfo *v98; // x5
  struct System_Collections_Generic_List_string__o *v99; // x22
  int32_t v100; // w4
  const MethodInfo *v101; // x5
  struct System_Collections_Generic_List_string__o *v102; // x22
  int64_t UserId; // x24
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t MashuTdGradeUpQuestId; // w22
  int32_t MashuTdGradeUpQuestPhase; // w23
  struct System_Collections_Generic_List_string__o *v107; // x22
  int32_t v108; // w4
  const MethodInfo *v109; // x5
  struct System_Collections_Generic_List_string__o *v110; // x22
  ServantVoiceRelationEntity_array *v111; // x23
  signed int max_length; // w8
  unsigned int v113; // w24
  ServantVoiceRelationEntity_o *v114; // x25
  struct System_Collections_Generic_List_string__o *voiceDataList; // x20
  __int64 v116; // x21
  __int64 v117; // x22
  ServantStatusDialog_o *v118; // x0
  int32_t v119; // w4
  const MethodInfo *v120; // x5
  struct System_Collections_Generic_List_string__o *v121; // x20
  ServantStatusDialog_o *v122; // x0
  int32_t v123; // w4
  const MethodInfo *v124; // x5
  struct System_Collections_Generic_List_string__o *v125; // x20
  ServantStatusDialog_o *v126; // x0
  int32_t v127; // w4
  const MethodInfo *v128; // x5
  struct System_Collections_Generic_List_string__o *v129; // x8
  const MethodInfo *v130; // x2
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  struct System_Collections_Generic_List_string__o *v137; // x20
  struct System_Int32_array *v138; // x1
  System_String_o *changeSvtVoiceIdList; // x20
  System_Action_o *v140; // x21
  __int64 v141; // x0
  unsigned __int64 v142; // [xsp+8h] [xbp-68h]
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // [xsp+10h] [xbp-60h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16

  if ( (byte_42E6E8A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CondType_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__RemoveAt__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v29, v30, v31);
    sub_B5D5C4(&NetworkManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_ServantStatusDialog_EndLoadVoice__, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&SoundManager_TypeInfo, v47, v48, v49);
    byte_42E6E8A = 1;
  }
  relationList = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_42E5FA0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5FA0 = 1;
  }
  v50 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v50 = NetworkManager_TypeInfo;
  }
  if ( v50->static_fields->isRebootBlock )
    return 1;
  if ( this->fields.requestVoiceDataList )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_120;
  v55 = (ServantChangeMaster_o *)Instance;
  Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId(
                                *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                0LL);
  if ( !v55 )
    goto LABEL_120;
  v56 = (struct System_Collections_Generic_List_string__o *)ServantChangeMaster__GetEnableSvtVoiceList(
                                                              v55,
                                                              (int32_t)Instance,
                                                              0LL);
  this->fields.requestVoiceDataList = v56;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.requestVoiceDataList,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( !this->fields.requestVoiceDataList )
    goto LABEL_120;
  requestVoiceDataList = this->fields.requestVoiceDataList;
  v63 = *(_QWORD *)&requestVoiceDataList->fields._size;
  if ( (int)v63 >= 1 )
  {
    v64 = 0LL;
    while ( 1 )
    {
      if ( v64 >= (unsigned int)v63 )
        goto LABEL_121;
      v65 = *((_DWORD *)&requestVoiceDataList->fields._syncRoot + v64);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v66 = BalanceConfig_TypeInfo;
      v67 = (ServantLimitAddMaster_o *)Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v66 = BalanceConfig_TypeInfo;
      }
      v68 = *(_QWORD *)&this->fields.isModify;
      if ( !v68 )
        goto LABEL_120;
      if ( !v67 )
        goto LABEL_120;
      Instance = (DataManager_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                    v67,
                                    v65,
                                    v66->static_fields->ServantLimitMax,
                                    *(System_Int32_array **)(v68 + 208),
                                    0LL);
      if ( !Instance )
        goto LABEL_120;
      datalist = Instance->fields.datalist;
      v72 = Instance;
      v142 = v64;
      if ( (int)datalist >= 1 )
        break;
LABEL_85:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !Instance )
        goto LABEL_120;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)Instance, &relationList, v65, 0LL);
      v111 = relationList;
      if ( !relationList )
        goto LABEL_120;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v113 = 0;
        while ( v113 < max_length )
        {
          v114 = v111->m_Items[v113];
          if ( !v114 )
            goto LABEL_120;
          voiceDataList = this->fields.voiceDataList;
          v117 = *(_QWORD *)&v114->fields.relationSvtId.fields.currentCryptoKey;
          v116 = *(_QWORD *)&v114->fields.relationSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v145.fields.currentCryptoKey = v117;
          *(_QWORD *)&v145.fields.fakeValue = v116;
          v118 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v145, 0LL);
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(v118, 0, (int32_t)v118, 0, v119, v120);
          if ( !voiceDataList )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voiceDataList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          v121 = this->fields.voiceDataList;
          v122 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                            v114->fields.relationSvtId,
                                            0LL);
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(v122, 2, (int32_t)v122, 0, v123, v124);
          if ( !v121 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v121,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          v125 = this->fields.voiceDataList;
          v126 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                            v114->fields.relationSvtId,
                                            0LL);
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(v126, 1, (int32_t)v126, 0, v127, v128);
          if ( !v125 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v125,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          max_length = v111->max_length;
          if ( (int)++v113 >= max_length )
            goto LABEL_99;
        }
LABEL_121:
        v141 = sub_B5D6C8(Instance);
        sub_B5D668(v141, 0LL);
      }
LABEL_99:
      LODWORD(v63) = requestVoiceDataList->fields._size;
      v64 = v142 + 1;
      if ( (__int64)(v142 + 1) >= (int)v63 )
        goto LABEL_100;
    }
    v73 = 0LL;
    p_lookup = &Instance->fields.lookup;
    while ( 1 )
    {
      if ( v73 >= (unsigned int)datalist )
        goto LABEL_121;
      v75 = this->fields.voiceDataList;
      Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                    (ServantStatusDialog_o *)Instance,
                                    0,
                                    v65,
                                    *((_DWORD *)p_lookup + v73),
                                    v69,
                                    v70);
      if ( !v75 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v75,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v73 >= LODWORD(v72->fields.datalist) )
        goto LABEL_121;
      v78 = this->fields.voiceDataList;
      Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                    (ServantStatusDialog_o *)Instance,
                                    2,
                                    v65,
                                    *((_DWORD *)p_lookup + v73),
                                    v76,
                                    v77);
      if ( !v78 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v78,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v73 >= LODWORD(v72->fields.datalist) )
        goto LABEL_121;
      v81 = this->fields.voiceDataList;
      Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                    (ServantStatusDialog_o *)Instance,
                                    1,
                                    v65,
                                    *((_DWORD *)p_lookup + v73),
                                    v79,
                                    v80);
      if ( !v81 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v81,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      Instance = *(DataManager_o **)&this->fields.isModify;
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0LL);
      v84 = BalanceConfig_TypeInfo;
      v85 = (int)Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v84 = BalanceConfig_TypeInfo;
      }
      if ( v85 == v84->static_fields->ServantIdJekyll )
        break;
      Instance = *(DataManager_o **)&this->fields.isModify;
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0LL);
      v94 = BalanceConfig_TypeInfo;
      v95 = (int)Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v94 = BalanceConfig_TypeInfo;
      }
      if ( v95 == v94->static_fields->ServantIdMashu1 )
      {
        v96 = this->fields.voiceDataList;
        if ( (BYTE3(v94->vtable._0_Equals.methodPtr) & 4) != 0 && !v94->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v94);
        if ( v73 >= LODWORD(v72->fields.datalist) )
          goto LABEL_121;
        Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                      (ServantStatusDialog_o *)Instance,
                                      0,
                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                      *((_DWORD *)p_lookup + v73),
                                      v69,
                                      v70);
        if ( !v96 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v96,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v73 >= LODWORD(v72->fields.datalist) )
          goto LABEL_121;
        v99 = this->fields.voiceDataList;
        Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                      (ServantStatusDialog_o *)Instance,
                                      2,
                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                      *((_DWORD *)p_lookup + v73),
                                      v97,
                                      v98);
        if ( !v99 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v99,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v73 >= LODWORD(v72->fields.datalist) )
          goto LABEL_121;
        v102 = this->fields.voiceDataList;
        Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                      (ServantStatusDialog_o *)Instance,
                                      1,
                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                      *((_DWORD *)p_lookup + v73),
                                      v100,
                                      v101);
        if ( !v102 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v102,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        static_fields = BalanceConfig_TypeInfo->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestPhaseClear(
                                      UserId,
                                      MashuTdGradeUpQuestId,
                                      MashuTdGradeUpQuestPhase,
                                      -1,
                                      0,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)BalanceConfig_TypeInfo;
          v107 = this->fields.voiceDataList;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          }
          if ( v73 >= LODWORD(v72->fields.datalist) )
            goto LABEL_121;
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                        (ServantStatusDialog_o *)Instance,
                                        0,
                                        BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                        *((_DWORD *)p_lookup + v73),
                                        v69,
                                        v70);
          if ( !v107 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v107,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          if ( v73 >= LODWORD(v72->fields.datalist) )
            goto LABEL_121;
          v110 = this->fields.voiceDataList;
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                        (ServantStatusDialog_o *)Instance,
                                        2,
                                        BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                        *((_DWORD *)p_lookup + v73),
                                        v108,
                                        v109);
          if ( !v110 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v110,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          if ( v73 >= LODWORD(v72->fields.datalist) )
            goto LABEL_121;
          v92 = this->fields.voiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_52;
        }
      }
LABEL_84:
      LODWORD(datalist) = v72->fields.datalist;
      if ( (__int64)++v73 >= (int)datalist )
        goto LABEL_85;
    }
    v86 = this->fields.voiceDataList;
    if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v84);
    if ( v73 >= LODWORD(v72->fields.datalist) )
      goto LABEL_121;
    Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                  (ServantStatusDialog_o *)Instance,
                                  0,
                                  BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                  *((_DWORD *)p_lookup + v73),
                                  v82,
                                  v83);
    if ( !v86 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v86,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    if ( v73 >= LODWORD(v72->fields.datalist) )
      goto LABEL_121;
    v89 = this->fields.voiceDataList;
    Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                  (ServantStatusDialog_o *)Instance,
                                  2,
                                  BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                  *((_DWORD *)p_lookup + v73),
                                  v87,
                                  v88);
    if ( !v89 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v89,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    if ( v73 >= LODWORD(v72->fields.datalist) )
      goto LABEL_121;
    v92 = this->fields.voiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_52:
    Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                  (ServantStatusDialog_o *)Instance,
                                  1,
                                  ServantIdMashu3,
                                  *((_DWORD *)p_lookup + v73),
                                  v90,
                                  v91);
    if ( !v92 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v92,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    goto LABEL_84;
  }
LABEL_100:
  v129 = this->fields.voiceDataList;
  if ( !v129 )
    goto LABEL_120;
  if ( v129->fields._size < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  ServantStatusDialog__SetTabKind(this, 3, v130);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_42E5FA0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, v54, (_DWORD)v131, v132);
    byte_42E5FA0 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( LOBYTE(Instance[1].fields.saveNameList[3].fields._items) )
    return 1;
  v137 = this->fields.voiceDataList;
  if ( !v137 )
    goto LABEL_120;
  if ( !v137->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v138 = (struct System_Int32_array *)v137->fields._items->m_Items[0];
  this->fields.changeSvtVoiceIdList = v138;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList,
    (System_Int32_array **)v138,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  Instance = (DataManager_o *)this->fields.voiceDataList;
  if ( !Instance )
LABEL_120:
    sub_B5D69C(Instance, v54);
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
    0,
    (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  changeSvtVoiceIdList = (System_String_o *)this->fields.changeSvtVoiceIdList;
  v140 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v140, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v51 = 1;
  SoundManager__loadAudioAssetStorage(changeSvtVoiceIdList, v140, 1, 0LL);
  return v51;
}


void __fastcall ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
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
  SePlayer_o *voicePlayList; // x20
  System_Action_o *v25; // x21
  BattleServantConfConponent_o *p_voicePlayList; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E6E8C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_EndPlayVoice__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6067/*"EndWaitVoice"*/, v8, v9, v10);
    byte_42E6E8C = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    if ( !servantNameRangeLabel )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_31453464(servantNameRangeLabel, 2, -1, 0LL);
    LODWORD(this->fields.battleLoadAsset) = -1;
  }
  if ( *(_QWORD *)&this->fields.voicePlayNum )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_35614336(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6067/*"EndWaitVoice"*/,
      0LL);
    *(_QWORD *)&this->fields.voicePlayNum = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.voicePlayNum, 0LL, v12, v13, v14, v15, v16, v17);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&this->fields.voiceListIndex = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.voiceListIndex, 0LL, v18, v19, v20, v21, v22, v23);
  }
  voicePlayList = (SePlayer_o *)this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
    SePlayer__RemoveCallback(voicePlayList, v25, 0LL);
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayList;
    if ( servantNameRangeLabel )
    {
      p_voicePlayList = (BattleServantConfConponent_o *)&this->fields.voicePlayList;
      SePlayer__StopSe((SePlayer_o *)servantNameRangeLabel, 0.0, 0LL);
      p_voicePlayList->klass = 0LL;
      sub_B5D560(p_voicePlayList, 0LL, v27, v28, v29, v30, v31, v32);
      return;
    }
LABEL_13:
    sub_B5D69C(servantNameRangeLabel, method);
  }
}


void __fastcall ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, int32_t cvId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  void *Instance; // x0
  __int64 v13; // x1
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x8

  if ( (byte_42E6ECA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CvMaster___, cvId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E6ECA = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CvMaster___)) == 0LL
      || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       cvId,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0LL
      || (battleTabListViewManager = this->fields.battleTabListViewManager) == 0LL )
    {
      sub_B5D69C(Instance, v13);
    }
    ServantStatusFlavorTextListViewManager__UpdateCvName(
      (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
      *((System_String_o **)Instance + 3),
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateProfileList(
        ServantStatusDialog_o *this,
        bool setMode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
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
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ServantStatusFlavorTextListViewManager_o *v26; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v27; // x21
  struct System_Int32_array *profileNewIdList; // x8
  __int64 v29; // x0

  v5 = this;
  if ( (byte_42E6EC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ServantCommentEntity___ctor__, setMode, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_ServantCommentEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectFlavor__, v12, v13, v14);
    this = (ServantStatusDialog_o *)sub_B5D5C4(&Method_ServantStatusDialog__UpdateProfileList_b__219_0__, v15, v16, v17);
    byte_42E6EC9 = 1;
  }
  if ( LODWORD(v5->fields.tabInitList) == 1 )
  {
    this = (ServantStatusDialog_o *)v5->fields.battleTabListViewManager;
    if ( !this )
      goto LABEL_13;
    ServantStatusFlavorTextListViewManager__CreateList(
      (ServantStatusFlavorTextListViewManager_o *)this,
      *(ServantStatusListViewItem_o **)&v5->fields.isModify,
      0LL);
    battleTabListViewManager = v5->fields.battleTabListViewManager;
    v19 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ServantCommentEntity__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v19,
      (Il2CppObject *)v5,
      Method_ServantStatusDialog__UpdateProfileList_b__219_0__,
      (const MethodInfo_258B320 *)Method_System_Action_ServantCommentEntity___ctor__);
    if ( !battleTabListViewManager )
      goto LABEL_13;
    battleTabListViewManager->fields.sortKindButton = (struct UICommonButton_o *)v19;
    sub_B5D560(
      (BattleServantConfConponent_o *)&battleTabListViewManager->fields.sortKindButton,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    if ( setMode )
    {
      v26 = (ServantStatusFlavorTextListViewManager_o *)v5->fields.battleTabListViewManager;
      v27 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)v5,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0LL);
      if ( v26 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v26, 1, v27, 0LL);
        return;
      }
LABEL_13:
      sub_B5D69C(this, setMode);
    }
  }
  else
  {
    profileNewIdList = v5->fields.profileNewIdList;
    if ( !profileNewIdList )
      goto LABEL_13;
    if ( profileNewIdList->max_length <= 1 )
    {
      v29 = sub_B5D6C8(this);
      sub_B5D668(v29, 0LL);
    }
    BYTE1(profileNewIdList->m_Items[1]) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateServantDetailName(
        ServantStatusDialog_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  _QWORD *v3; // x8
  ServantEntity_o *v4; // x8
  UIRangeLabel_o *servantClassNameLabel; // x19

  v3 = *(_QWORD **)&this->fields.isModify;
  if ( !v3 )
    goto LABEL_8;
  if ( v3[7] || !v3[11] )
  {
    v4 = (ServantEntity_o *)v3[16];
    if ( v4 )
    {
      servantClassNameLabel = (UIRangeLabel_o *)this->fields.servantClassNameLabel;
      this = (ServantStatusDialog_o *)ServantEntity__getName(v4, -1, imageLimitCount, 0LL);
      if ( servantClassNameLabel )
      {
        UIRangeLabel__Set(servantClassNameLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
        return;
      }
    }
LABEL_8:
    sub_B5D69C(this, *(_QWORD *)&imageLimitCount);
  }
}


void __fastcall ServantStatusDialog__UpdateServantParameters(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x8

  v4 = *(_QWORD *)&this->fields.isModify;
  if ( !v4 )
    goto LABEL_7;
  if ( *(_QWORD *)(v4 + 56) || !*(_QWORD *)(v4 + 88) )
  {
    this = (ServantStatusDialog_o *)this->fields.battleTabListViewManager;
    if ( this )
    {
      ServantStatusFlavorTextListViewManager__UpdateParameter(
        (ServantStatusFlavorTextListViewManager_o *)this,
        svtId,
        imageLimitCount,
        0LL);
      return;
    }
LABEL_7:
    sub_B5D69C(this, svtId);
  }
}


void __fastcall ServantStatusDialog___InitList_b__162_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__SetActiveInputLockPanel(this, 0, v2);
  *((_BYTE *)&this->fields.currentMaskType + 4) = 0;
}


void __fastcall ServantStatusDialog___Init_b__125_0(ServantStatusDialog_o *this, const MethodInfo *method)
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
  AtlasManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  System_Action_o *v17; // x20

  if ( (byte_42E6ECE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantStatusDialog_EndInitLoad__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v11, v12, v13);
    byte_42E6ECE = 1;
  }
  Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v15);
  if ( AtlasManager__isLoadedSkinData(Instance, 1, 0LL) )
  {
    ServantStatusDialog__EndInitLoad(this, v16);
  }
  else
  {
    v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v17, 1, 1, 0LL);
  }
}


void __fastcall ServantStatusDialog___OnConfirmServantQuest_b__209_0(
        ServantStatusDialog_o *this,
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t tabKind; // w20
  CommonUI_o *Instance; // x20
  System_Action_o *v22; // x21
  PartyOrganizationUtility_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_42E6ECF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v17, v18, v19);
    byte_42E6ECF = 1;
  }
  tabKind = this->fields.tabKind;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__SetAutoResumeByQuestId(tabKind, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_18202348(Instance, v22, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v23 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v23
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v23, 0LL),
        (v23 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(v23, v24);
  }
  v23->fields._IsNormalFlowQuest_k__BackingField = 0;
  ServantStatusDialog__Exit(this, v24);
}


void __fastcall ServantStatusDialog___OnclickRandomLimitCountMask_b__181_0(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void __fastcall ServantStatusDialog___OnclickRandomLimitCountMask_b__181_1(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void __fastcall ServantStatusDialog___UpdateProfileList_b__219_0(
        ServantStatusDialog_o *this,
        ServantCommentEntity_o *entity,
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
  struct ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x8
  __int64 v25; // x8
  ServantCommentMaster_o *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  int32_t v29; // w22
  System_Int32_array *v30; // x23
  const MethodInfo *v31; // x1
  __int64 v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_42E6ED0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCommentMaster___, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    byte_42E6ED0 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( mainInfo
    && System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)mainInfo,
         (WarBoardManager_TaskList_o *)entity,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.mainInfo;
    if ( Master_WarQuestSelectionMaster )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        Master_WarQuestSelectionMaster,
        (WarBoardManager_TaskList_o *)entity,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCommentMaster___);
      v24 = *(_QWORD *)&this->fields.isModify;
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 128);
        if ( v25 )
        {
          v26 = (ServantCommentMaster_o *)Master_WarQuestSelectionMaster;
          v28 = *(_QWORD *)(v25 + 16);
          v27 = *(_QWORD *)(v25 + 24);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v33.fields.currentCryptoKey = v28;
          *(_QWORD *)&v33.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v33, 0LL);
          Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B5D5DC(int___TypeInfo, 1LL);
          if ( entity )
          {
            v30 = (System_Int32_array *)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              if ( !Master_WarQuestSelectionMaster->fields._size )
                goto LABEL_23;
              LODWORD(Master_WarQuestSelectionMaster->fields._syncRoot) = entity->fields.id;
              Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B5D5DC(int___TypeInfo, 1LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_22;
              if ( !Master_WarQuestSelectionMaster->fields._size )
              {
LABEL_23:
                v32 = sub_B5D6C8(Master_WarQuestSelectionMaster);
                sub_B5D668(v32, 0LL);
              }
              LODWORD(Master_WarQuestSelectionMaster->fields._syncRoot) = entity->fields.priority;
              if ( v26 )
              {
                ServantCommentMaster__SetOpen_27556920(
                  v26,
                  v29,
                  v30,
                  (System_Int32_array *)Master_WarQuestSelectionMaster,
                  0LL);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v31);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_B5D69C(Master_WarQuestSelectionMaster, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndDelegate___ctor(
        ServantStatusDialog_EndDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ServantStatusDialog_EndDelegate__BeginInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isModify;
  if ( (byte_42E5D9B & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isModify, (_DWORD)callback, object);
    byte_42E5D9B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndDelegate__Invoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ServantStatusDialog_EndDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  ServantStatusDialog_EndDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ServantStatusDialog_EndDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ServantStatusDialog_EndDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isModify, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isModify, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isModify, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isModify, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isModify,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isModify, v21);
    goto LABEL_37;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndIndividualityDelegate___ctor(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ServantStatusDialog_EndIndividualityDelegate__BeginInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  char v11[4]; // [xsp+18h] [xbp-28h] BYREF
  char v12[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v12[0] = isModify;
  v11[0] = isNeedSort;
  if ( (byte_42E5D9C & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isModify, isNeedSort, callback);
    byte_42E5D9C = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(bool_TypeInfo, v11);
  return (System_IAsyncResult_o *)sub_B5D568(this, v10, callback, object);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndIndividualityDelegate__Invoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  ServantStatusDialog_EndIndividualityDelegate_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, bool, bool, _QWORD); // x0
  ServantStatusDialog_EndIndividualityDelegate_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(bool, bool, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  ServantStatusDialog_EndIndividualityDelegate_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (ServantStatusDialog_EndIndividualityDelegate_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(bool, bool, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, isModify, isNeedSort);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24(isModify, isNeedSort, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_AF54C0(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, bool, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, isModify, isNeedSort, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v14 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v11, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD))v17)(v22, isModify, isNeedSort, *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            isModify,
            isNeedSort,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, bool, __int64))v24)(v22, isModify, isNeedSort, v23);
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_FormationEndDelegate___ctor(
        ServantStatusDialog_FormationEndDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ServantStatusDialog_FormationEndDelegate__BeginInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  char v15[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v15[0] = isModify;
  v14 = questId;
  if ( (byte_42E5D9D & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isModify, questId, callback);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    byte_42E5D9D = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_FormationEndDelegate__Invoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  ServantStatusDialog_FormationEndDelegate_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, bool, _QWORD, _QWORD); // x0
  ServantStatusDialog_FormationEndDelegate_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(bool, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  ServantStatusDialog_FormationEndDelegate_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (ServantStatusDialog_FormationEndDelegate_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(bool, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, isModify, *(_QWORD *)&questId);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24(isModify, (unsigned int)questId, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_AF54C0(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, isModify, (unsigned int)questId, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v14 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v11, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))v17)(
            v22,
            isModify,
            (unsigned int)questId,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            isModify,
            (unsigned int)questId,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, _QWORD, __int64))v24)(v22, isModify, (unsigned int)questId, v23);
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_ResultDelegate___ctor(
        ServantStatusDialog_ResultDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusDialog_ResultDelegate__BeginInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v10; // w1
  char v11; // w2
  __int64 v12; // x3
  __int64 v14[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v15; // [xsp+24h] [xbp-2Ch] BYREF
  char v16[4]; // [xsp+28h] [xbp-28h] BYREF
  char v17[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v17[0] = isModify;
  v16[0] = isNeedSort;
  v15 = questId;
  if ( (byte_42E5D9E & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isModify, isNeedSort, *(_QWORD *)&questId);
    sub_B5D5C4(&int_TypeInfo, v10, v11, v12);
    byte_42E5D9E = 1;
  }
  v14[3] = 0LL;
  v14[0] = j_il2cpp_value_box_0(bool_TypeInfo, v17);
  v14[1] = j_il2cpp_value_box_0(bool_TypeInfo, v16);
  v14[2] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_B5D568(this, v14, callback, object);
}


void __fastcall ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_ResultDelegate__Invoke(
        ServantStatusDialog_ResultDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v10; // x26
  ServantStatusDialog_ResultDelegate_o **v11; // x27
  __int64 v12; // x28
  unsigned int v13; // w25
  __int64 class_0; // x0
  __int64 v15; // x3
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, bool, bool, _QWORD, _QWORD); // x0
  ServantStatusDialog_ResultDelegate_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(bool, bool, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  __int64 v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  unsigned __int64 v33; // x10
  _DWORD *v34; // x11
  ServantStatusDialog_ResultDelegate_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v35;
    v10 = 1LL;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v5 + 24);
  if ( v10 )
  {
    v11 = (ServantStatusDialog_ResultDelegate_o **)(v5 + 32);
LABEL_5:
    v12 = 0LL;
    while ( 1 )
    {
      v23 = v11[v12];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(bool, bool, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, isModify, isNeedSort);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26(isModify, isNeedSort, (unsigned int)questId, v25);
LABEL_37:
      if ( ++v12 == v10 )
        return;
    }
    if ( v24 && *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
      if ( (v27 & 1) != 0 )
      {
        if ( (v28 & 1) != 0 )
        {
          v30 = *v24;
          v31 = *(_QWORD *)(v25 + 24);
          v32 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v33 = 0LL;
            v34 = (_DWORD *)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *((_QWORD *)v34 - 1) != v31 )
            {
              ++v33;
              v34 += 4;
              if ( v33 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v30 + 16LL * (*v34 + (int)v32) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AF54C0(v24, v31, v32, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, bool, bool, _QWORD, _QWORD))sub_B5D674(v20, v25);
        (*v22)(v24, isModify, isNeedSort, (unsigned int)questId, v22);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v16 = *v24;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v16 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v16 + 16LL * (int)(*v18 + v13) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AF54C0(v24, class_0, v13, v15);
          }
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD, _QWORD))v19)(
            v24,
            isModify,
            isNeedSort,
            (unsigned int)questId,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD, _QWORD))(*v24
                                                                        + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                        + 312))(
            v24,
            isModify,
            isNeedSort,
            (unsigned int)questId,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, bool, _QWORD, __int64))v26)(
      v24,
      isModify,
      isNeedSort,
      (unsigned int)questId,
      v25);
    goto LABEL_37;
  }
}


void __fastcall ServantStatusDialog___c__DisplayClass202_0___ctor(
        ServantStatusDialog___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass202_0___OnClickTdSpeed_b__0(
        ServantStatusDialog___c__DisplayClass202_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog___c__DisplayClass202_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x19
  __int64 v13; // x19
  __int64 v14; // x20
  __int64 v15; // x20
  CommonUI_o *v16; // x20
  System_Action_o *_9__1; // x22

  v5 = this;
  if ( (byte_42E5D97 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6, v7, v8);
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_B5D5C4(
                                                             &Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__1__,
                                                             v9,
                                                             v10,
                                                             v11);
    byte_42E5D97 = 1;
  }
  if ( isDecide )
  {
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)v5->fields.__4__this;
    if ( this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed((ServantStatusDialog_o *)this, v5->fields.type, 0LL);
      v12 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
        sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v13 = **(_QWORD **)(v12 + 192);
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AF52C4(v13);
      this = **(ServantStatusDialog___c__DisplayClass202_0_o ***)(v13 + 184);
      if ( this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_B5D69C(this, isDecide);
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__
                                                                      + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_AF52C4(v15);
  v16 = **(CommonUI_o ***)(v15 + 184);
  _9__1 = v5->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_B5D560(&v5->fields.__9__1);
  }
  if ( !v16 )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_18202348(v16, _9__1, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass202_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantStatusDialog___c__DisplayClass202_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ServantStatusDialog_o *_4__this; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v10; // x21
  __int64 v11; // x9

  v4 = this;
  if ( (byte_42E5D98 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_B5D5C4(
                                                             &Method_ServantStatusDialog_OnSelectStatus__,
                                                             v5,
                                                             v6,
                                                             v7);
    byte_42E5D98 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (profileTabListViewManager = (ServantStatusListViewManager_o *)_4__this->fields.profileTabListViewManager,
        v10 = sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        v11 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__,
        *(_QWORD *)(v10 + 40) = Method_ServantStatusDialog_OnSelectStatus__,
        *(_QWORD *)(v10 + 16) = v11,
        *(_QWORD *)(v10 + 32) = _4__this,
        sub_B5D560(v10 + 32),
        !profileTabListViewManager) )
  {
    sub_B5D69C(this, method);
  }
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v10,
    0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass206_0___ctor(
        ServantStatusDialog___c__DisplayClass206_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantStatusDialog___c__DisplayClass206_0___RandomLimitCountSettingResource_b__0(
        ServantStatusDialog___c__DisplayClass206_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.OrtenausCostumeId == x;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass206_0___RandomLimitCountSettingResource_b__1(
        ServantStatusDialog___c__DisplayClass206_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x21
  CommonUI_o *servantStatusBattleConfirmDialog; // x0
  struct ServantStatusDialog_o *_4__this; // x8
  struct ServantStatusDialog_o *v16; // x8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v18; // x8
  struct ServantStatusDialog_o *v19; // x8
  struct ServantStatusDialog_o *v20; // x8
  struct ServantStatusDialog_o *v21; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v23; // x21
  __int64 v24; // x9

  if ( (byte_42E5D99 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v9, v10, v11);
    byte_42E5D99 = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AF52C4(v13);
  servantStatusBattleConfirmDialog = **(CommonUI_o ***)(v13 + 184);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_25;
  CommonUI__CloseConfirmDialog_18202348(servantStatusBattleConfirmDialog, 0LL, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      servantStatusBattleConfirmDialog = *(CommonUI_o **)&_4__this->fields.isModify;
      if ( servantStatusBattleConfirmDialog )
      {
        ServantStatusListViewItem__SetRandomSettingByIndex(
          (ServantStatusListViewItem_o *)servantStatusBattleConfirmDialog,
          this->fields.index,
          0LL);
        v16 = this->fields.__4__this;
        if ( v16 )
        {
          servantStatusBattleConfirmDialog = *(CommonUI_o **)&v16->fields.isModify;
          if ( servantStatusBattleConfirmDialog )
          {
            isRandomOn = this->fields.isRandomOn;
            if ( !this->fields.isOwnSetting )
            {
              BYTE2(servantStatusBattleConfirmDialog->fields.servantEquipFramePurchaseMenuPrefab) = isRandomOn;
              goto LABEL_20;
            }
            ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
              (ServantStatusListViewItem_o *)servantStatusBattleConfirmDialog,
              isRandomOn,
              0LL);
            v18 = this->fields.__4__this;
            if ( v18 )
            {
              servantStatusBattleConfirmDialog = (CommonUI_o *)v18->fields.servantStatusBattleConfirmDialog;
              if ( servantStatusBattleConfirmDialog )
              {
                ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
                  (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
                  *(ServantStatusListViewItem_o **)&v18->fields.isModify,
                  0LL);
                v19 = this->fields.__4__this;
                if ( v19 )
                {
                  servantStatusBattleConfirmDialog = (CommonUI_o *)v19->fields.servantStatusBattleConfirmDialog;
                  if ( servantStatusBattleConfirmDialog )
                  {
                    ServantStatusCharaGraphListViewManager__SetEnableScroll(
                      (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
                      *(ServantStatusListViewItem_o **)&v19->fields.isModify,
                      0LL);
                    goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_B5D69C(servantStatusBattleConfirmDialog, isDecide);
  }
LABEL_20:
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_25;
  servantStatusBattleConfirmDialog = (CommonUI_o *)v20->fields.profileTabListViewManager;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_25;
  ServantStatusListViewManager__SetMode_33243376(
    (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
    10,
    0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_25;
  profileTabListViewManager = (ServantStatusListViewManager_o *)v21->fields.profileTabListViewManager;
  v23 = sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  v24 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v23 + 40) = Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v23 + 16) = v24;
  *(_QWORD *)(v23 + 32) = v21;
  sub_B5D560(v23 + 32);
  if ( !profileTabListViewManager )
    goto LABEL_25;
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v23,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass206_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass206_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x21
  CommonUI_o *servantStatusBattleConfirmDialog; // x0
  struct ServantStatusDialog_o *_4__this; // x8
  struct ServantStatusDialog_o *v16; // x8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v18; // x8
  struct ServantStatusDialog_o *v19; // x8
  struct ServantStatusDialog_o *v20; // x8
  struct ServantStatusDialog_o *v21; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v23; // x21
  __int64 v24; // x9

  if ( (byte_42E5D9A & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v9, v10, v11);
    byte_42E5D9A = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AF52C4(v13);
  servantStatusBattleConfirmDialog = **(CommonUI_o ***)(v13 + 184);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_25;
  CommonUI__CloseConfirmDialog_18202348(servantStatusBattleConfirmDialog, 0LL, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      servantStatusBattleConfirmDialog = *(CommonUI_o **)&_4__this->fields.isModify;
      if ( servantStatusBattleConfirmDialog )
      {
        ServantStatusListViewItem__SetRandomSettingByIndex(
          (ServantStatusListViewItem_o *)servantStatusBattleConfirmDialog,
          this->fields.index,
          0LL);
        v16 = this->fields.__4__this;
        if ( v16 )
        {
          servantStatusBattleConfirmDialog = *(CommonUI_o **)&v16->fields.isModify;
          if ( servantStatusBattleConfirmDialog )
          {
            isRandomOn = this->fields.isRandomOn;
            if ( !this->fields.isOwnSetting )
            {
              BYTE2(servantStatusBattleConfirmDialog->fields.servantEquipFramePurchaseMenuPrefab) = isRandomOn;
              goto LABEL_20;
            }
            ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
              (ServantStatusListViewItem_o *)servantStatusBattleConfirmDialog,
              isRandomOn,
              0LL);
            v18 = this->fields.__4__this;
            if ( v18 )
            {
              servantStatusBattleConfirmDialog = (CommonUI_o *)v18->fields.servantStatusBattleConfirmDialog;
              if ( servantStatusBattleConfirmDialog )
              {
                ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
                  (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
                  *(ServantStatusListViewItem_o **)&v18->fields.isModify,
                  0LL);
                v19 = this->fields.__4__this;
                if ( v19 )
                {
                  servantStatusBattleConfirmDialog = (CommonUI_o *)v19->fields.servantStatusBattleConfirmDialog;
                  if ( servantStatusBattleConfirmDialog )
                  {
                    ServantStatusCharaGraphListViewManager__SetEnableScroll(
                      (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
                      *(ServantStatusListViewItem_o **)&v19->fields.isModify,
                      0LL);
                    goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_B5D69C(servantStatusBattleConfirmDialog, isDecide);
  }
LABEL_20:
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_25;
  servantStatusBattleConfirmDialog = (CommonUI_o *)v20->fields.profileTabListViewManager;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_25;
  ServantStatusListViewManager__SetMode_33243376(
    (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
    10,
    0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_25;
  profileTabListViewManager = (ServantStatusListViewManager_o *)v21->fields.profileTabListViewManager;
  v23 = sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  v24 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v23 + 40) = Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v23 + 16) = v24;
  *(_QWORD *)(v23 + 32) = v21;
  sub_B5D560(v23 + 32);
  if ( !profileTabListViewManager )
    goto LABEL_25;
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v23,
    0LL);
}